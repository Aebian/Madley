#!/bin/bash

auth_email="alexander.pelz@knight-industries.org" #Account email
zone_identifier="aebian.org" #Log in to Cloudflare, select domain, copy "Zone ID" from Overview
auth_key="66504489eb540f98f5fec9e0931bf18e21667" #Below "Zone ID", click "Get your API key" and copy the global key
record_name="int.aebian.org" #Domain used
######################################################
ip=$(/bin/ip -4 addr show $iface|sed -n 's/.*inet\s\(.*\)\/24.*/\1/p')
ipSix=$(/bin/ip -6 addr show $iface|sed -n 's%.*inet6\s\(.*\)/64.*global.*%\1%p')
log_file="/var/log/update_ip.log"
log() {
    if [ "$1" ]; then
        echo -e "[$(date)] - $1" >> $log_file
    fi
}

recordA_ip=$(curl -s -X GET "https://api.cloudflare.com/client/v4/zones/$zone_identifier/dns_records?name=$record_name&type=A" -H "X-Auth-Email: $auth_email" -H "X-Auth-Key: $auth_key" -H "Content-Type: application/json"  | grep -Po '(?<="content":")[^"]*')
recordAAAA_ip=$(curl -s -X GET "https://api.cloudflare.com/client/v4/zones/$zone_identifier/dns_records?name=$record_name&type=AAAA" -H "X-Auth-Email: $auth_email" -H "X-Auth-Key: $auth_key" -H "Content-Type: application/json"  | grep -Po '(?<="content":")[^"]*')
#Stop when same
if [[ $ip == $recordA_ip ]] && [[ $ipSix == $recordAAAA_ip ]]; then
    exit 0
fi

recordA_identifier=$(curl -s -X GET "https://api.cloudflare.com/client/v4/zones/$zone_identifier/dns_records?name=$record_name&type=A" -H "X-Auth-Email: $auth_email" -H "X-Auth-Key: $auth_key" -H "Content-Type: application/json"  | grep -Po '(?<="id":")[^"]*')
recordAAAA_identifier=$(curl -s -X GET "https://api.cloudflare.com/client/v4/zones/$zone_identifier/dns_records?name=$record_name&type=AAAA" -H "X-Auth-Email: $auth_email" -H "X-Auth-Key: $auth_key" -H "Content-Type: application/json"  | grep -Po '(?<="id":")[^"]*')
#Update when A different
if [[ $ip != $recordA_ip ]]; then
    update=$(curl -s -X PUT "https://api.cloudflare.com/client/v4/zones/$zone_identifier/dns_records/$recordA_identifier" -H "X-Auth-Email: $auth_email" -H "X-Auth-Key: $auth_key" -H "Content-Type: application/json" --data "{\"id\":\"$zone_identifier\",\"type\":\"A\",\"name\":\"$record_name\",\"content\":\"$ip\"}")
    if [[ $update == *"\"success\":false"* ]]; then
        message="API UPDATE FAILED. DUMPING RESULTS:\n$update"
        log "$message"
        echo -e "$message"
        exit 1 
    else
        message="IPv4 changed to: $ip"
        log "$message"
    fi
fi
#Update when AAAA different
if [[ $ipSix != $recordAAAA_ip ]]; then
    updateSix=$(curl -s -X PUT "https://api.cloudflare.com/client/v4/zones/$zone_identifier/dns_records/$recordAAAA_identifier" -H "X-Auth-Email: $auth_email" -H "X-Auth-Key: $auth_key" -H "Content-Type: application/json" --data "{\"id\":\"$zone_identifier\",\"type\":\"AAAA\",\"name\":\"$record_name\",\"content\":\"$ipSix\"}")
    if [[ $updateSix == *"\"success\":false"* ]]; then
        message="API UPDATE FAILED. DUMPING RESULTS:\n$update"
        log "$message"
        echo -e "$message"
        exit 1 
    else
        message="IPv6 changed to: $ipSix"
        log "$message"
    fi
fi