#!/bin/bash
# created by aurora\alexp on srv-management.internal.nw.ki
USERNAME=alexp

iplist=()

usage() { echo "Usage: $0 [-i <ip address>] [-s <on|off>]" 1>&2; exit 1; }

#pull list of IP's from iplist.cfg
getArray() {
        ip=0
        while read line # read a line
        do
                iplist[ip]=$line
                ip=$(($ip +1))
        done < $1
}

getArray "iplist.cfg"



while getopts ":i:s:" o; do
        case "${o}" in
                i)
                        i=${OPTARG}
                        ;;
                s)
                        s=${OPTARG}
                        ;;
                *)
                        usage
                        ;;
        esac
done
shift $((OPTIND-1))

if [ -z "${s}" ]; then
        usage
fi

led_off() {
        ssh $USERNAME@${i} 'sed -i 's/mgmt.led_enabled=true/mgmt.led_enabled=false/g' /var/etc/persistent/cfg/mgmt ; exit';
}

led_on() {
        ssh $USERNAME@${i} 'sed -i 's/mgmt.led_enabled=false/mgmt.led_enabled=true/g' /var/etc/persistent/cfg/mgmt ; exit';
}

if [ -z "$i" ]; then

        for i in "${iplist[@]}"
        do
                if [ "$s" == "off" ]; then
                        led_off $i
                elif [ "$s" == "on" ]; then
                        led_on $i
                else
                        usage
                fi

        done
else

        if [ "$s" == "off" ]; then
                led_off
        elif [ "$s" == "on" ]; then
                led_on
        else
                usage
        fi
fi