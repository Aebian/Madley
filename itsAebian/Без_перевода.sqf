params ["_sarmor"];

// Objects-Create
_obj1 = ГРУППИРОВАТЬ1 createUnit ["O_static_AT_F", Position _sarmor, [], 0, "NONE"]; 
_obj2 = ГРУППИРОВАТЬ1 createUnit ["O_static_AT_F", Position _sarmor, [], 0, "NONE"]; 
_obj3 = ГРУППИРОВАТЬ1 createUnit ["O_static_AT_F", Position _sarmor, [], 0, "NONE"]; 
_obj4 = ГРУППИРОВАТЬ1 createUnit ["O_static_AA_F", Position _sarmor, [], 0, "NONE"]; 
// Objects-Attach
_obj1 attachTo [_sarmor,[1,1.1,-0.6]]; 
_obj1 hideObject true;
_obj2 attachTo [_sarmor,[-1,1.1,-0.6]]; 
_obj2 hideObject true;
_obj3 attachTo [_sarmor,[0,1.1,-0.6]]; 
_obj3 hideObject true;
_obj4 attachTo [_sarmor,[-1,1.1,-0.6]]; 
_obj4 hideObject true;
// Entity-Create
ГРУППИРОВАТЬ = creategroup east; 
auto1 = ГРУППИРОВАТЬ createUnit ["O_UAV_AI", Position _sarmor, [], 0, "NONE"]; 
auto2 = ГРУППИРОВАТЬ createUnit ["O_UAV_AI", Position _sarmor, [], 0, "NONE"]; 
auto3 = ГРУППИРОВАТЬ createUnit ["O_UAV_AI", Position _sarmor, [], 0, "NONE"]; 
auto3 = ГРУППИРОВАТЬ createUnit ["O_UAV_AI", Position _sarmor, [], 0, "NONE"]; 
auto4 = ГРУППИРОВАТЬ createUnit ["O_UAV_AI", Position _sarmor, [], 0, "NONE"]; 
auto5 = ГРУППИРОВАТЬ createUnit ["O_UAV_AI", Position _sarmor, [], 0, "NONE"]; 
auto6 = ГРУППИРОВАТЬ createUnit ["O_UAV_AI", Position _sarmor, [], 0, "NONE"]; 
auto7 = ГРУППИРОВАТЬ createUnit ["O_UAV_AI", Position _sarmor, [], 0, "NONE"]; 
// Turret-Assign
auto1 moveindriver _sarmor; 
auto2 moveingunner _sarmor; 
auto3 moveincommander _sarmor;

auto4 moveingunner _obj1; 
auto5 moveingunner _obj2; 
auto6 moveingunner _obj2; 
auto7 moveingunner _obj3; 




O_static_AT_F

_obj1 addeventhandler ["fired", {(_this select 0) setvehicleammo 1}]; 