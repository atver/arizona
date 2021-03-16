//Nex-Useful Functions by Nexius v0.1

#if defined _nex_uf_included
	#endinput
#endif
#define _nex_uf_included

#include <a_samp>

#define SKIN_GENDER_NONE	-1
#define SKIN_GENDER_MALE	0
#define SKIN_GENDER_FEMALE	1

#define STARTING_3DTEXT_LABEL_ID	0
#define STARTING_FILE_ID			0
#define STARTING_GANGZONE_ID		0
#define STARTING_OBJECT_ID			1
#define STARTING_PICKUP_ID			0
#define STARTING_PLAYER_ID			0
#define STARTING_PLAYERCLASS_ID		0
#define STARTING_TEXTDRAW_ID		0
#define STARTING_PLAYERTEXTDRAW_ID	0
#define STARTING_VEHICLE_ID			1

#define WEAPON_TYPE_NONE			0
#define WEAPON_TYPE_MELEE			1
#define WEAPON_TYPE_BULLET			2
#define WEAPON_TYPE_THROW			3
#define WEAPON_TYPE_HIGHRATE		4
#define WEAPON_TYPE_LAUNCHER		5
#define WEAPON_TYPE_OTHER			6

#define SKIN_TYPE_NONE				0
#define SKIN_TYPE_GANG				1
#define SKIN_TYPE_PUBLIC			2
#define SKIN_TYPE_GIRLFRIEND		3
#define SKIN_TYPE_BEACH				4
#define SKIN_TYPE_FARM				5
#define SKIN_TYPE_WHORE				6
#define SKIN_TYPE_SPORT				7
#define SKIN_TYPE_PROFESSION		8
#define SKIN_TYPE_OTHER				9
#define SKIN_TYPE_NORMAL_1			10
#define SKIN_TYPE_NORMAL_2			11
#define SKIN_TYPE_NORMAL_3			12
#define SKIN_TYPE_ADDED_IN_022		13
#define SKIN_TYPE_ADDED_IN_03D		14
#define SKIN_TYPE_ADDED_IN_037		15

#define VEHICLE_TYPE_NONE			0
#define VEHICLE_TYPE_AIRPLANE		1
#define VEHICLE_TYPE_HELICOPTER		2
#define VEHICLE_TYPE_BIKE			3
#define VEHICLE_TYPE_CONVERTIBLE	4
#define VEHICLE_TYPE_INDUSTRIAL		5
#define VEHICLE_TYPE_LOWRIDER		6
#define VEHICLE_TYPE_OFFROAD		7
#define VEHICLE_TYPE_PUBLICSERVICE	8
#define VEHICLE_TYPE_SALOON			9
#define VEHICLE_TYPE_SPORT			10
#define VEHICLE_TYPE_STATIONWAGON	11
#define VEHICLE_TYPE_BOAT			12
#define VEHICLE_TYPE_TRAILER		13
#define VEHICLE_TYPE_UNIQUE			14
#define VEHICLE_TYPE_RCVEHICLE		15

#define VEHICLE_MODSHOP_NONE			0
#define VEHICLE_MODSHOP_TRANSFENDER		1
#define VEHICLE_MODSHOP_LOCOLOWCO		2
#define VEHICLE_MODSHOP_WHEELARCHANGELS	3

#define GetVehicleType(%0) GetModelType(GetVehicleModel(%0))
#define GetVehicleModShop(%0) GetModelModShop(GetVehicleModel(%0))
#define GetVehicleMaxSeats(%0) GetModelMaxSeats(GetVehicleModel(%0))
#define GetVehicleMaxSpeed(%0) GetModelMaxSpeed(GetVehicleModel(%0))

#define IsVehicleHaveModShop(%0) IsModelHaveModShop(GetVehicleModel(%0))
#define IsVehicleHaveNumberPlate(%0) IsModelHaveNumberPlate(GetVehicleModel(%0))

#define IsASea(%0) IsABoat(%0) //the following function must have parameter "modelid"

stock const uf_WeaponSkills[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 6, 10, 10},

uf_WeaponSlots[] =
{
	0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 10, 10, 10, 10, 10,
	10, 8, 8, 8, -1, -1, -1, 2, 2, 2, 3, 3, 3, 4, 4, 5,
	5, 4, 6, 6, 7, 7, 7, 7, 8, 12, 9, 9, 9, 11, 11, 11
},

uf_WeaponModels[] =
{
	0, 331, 333, 334, 335, 336, 337, 338, 339, 341, 321, 322, 323, 324, 325,
	326, 342, 343, 344, 0, 0, 0, 346, 347, 348, 349, 350, 351, 352, 353, 355, 356,
	372, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 371
},

uf_WeaponTypes[] =
{
	0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	3, 3, 3, 0, 0, 0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 5, 5, 4, 2, 3, 1, 4, 4, 6, 1, 1, 1
},

uf_VehiclePlates[] =
{
	1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1,
	0, 1, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 0, 0, 1, 0,
	0, 1, 0, 0, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 1,
	1, 0, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 1, 1, 0, 1, 1,
	1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1, 1,
	1, 1, 1, 0, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1,
	1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1,
	1, 1, 0, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1,
	1, 0, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0
},

uf_VehicleModshops[] =
{
	1, 1, 1, 0, 1, 1, 0, 0, 0, 1, 1, 1, 2, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 0, 1,
	0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0,
	0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1,
	1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 1, 0, 0, 0,
	1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0,
	0, 1, 1, 0, 1, 0, 0, 0, 1, 2, 2, 2, 0, 0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0, 1,
	1, 1, 0, 0, 0, 1, 0, 0, 3, 3, 3, 3, 3, 0, 0, 3, 2, 2, 0, 0, 0, 0, 0, 0, 0,
	1, 2, 0, 0, 1, 1, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0
},

uf_VehicleSeats[] =
{
	4, 2, 2, 2, 4, 4, 1, 2, 2, 4, 2, 2, 2, 4, 2, 2, 4, 2, 4, 2, 4, 4, 2, 2, 2,
	1, 4, 4, 4, 2, 1, 9, 1, 2, 2, 0, 2, 9, 4, 2, 4, 1, 2, 2, 2, 4, 1, 2, 1, 0,
	0, 2, 1, 1, 1, 2, 2, 2, 4, 4, 2, 2, 2, 2, 1, 1, 4, 4, 2, 2, 4, 2, 1, 1, 2,
	2, 1, 2, 2, 4, 2, 1, 4, 3, 1, 1, 1, 4, 2, 2, 4, 2, 4, 1, 2, 2, 2, 4, 4, 2,
	2, 1, 2, 2, 2, 2, 2, 4, 2, 1, 1, 2, 1, 1, 2, 2, 4, 2, 2, 1, 1, 2, 2, 2, 2,
	2, 2, 2, 2, 4, 1, 1, 1, 2, 2, 2, 2, 2, 2, 1, 4, 2, 2, 2, 2, 2, 4, 4, 2, 2,
	4, 4, 2, 1, 2, 2, 2, 2, 2, 2, 4, 4, 2, 2, 1, 2, 4, 4, 1, 0, 0, 1, 1, 2, 1,
	2, 2, 1, 2, 4, 4, 2, 4, 1, 0, 4, 2, 2, 2, 2, 0, 0, 2, 2, 2, 1, 4, 4, 4, 2,
	2, 2, 2, 2, 4, 2, 0, 0, 0, 4, 0, 0
},

uf_VehicleSpeeds[] =
{
	160, 160, 200, 120, 150, 165, 110, 170, 110, 180, 160, 240, 160, 160, 140,
	230, 155, 200, 150, 160, 180, 180, 165, 145, 170, 200, 200, 170, 170, 200,
	190, 130, 800, 180, 200, 120, 160, 160, 160, 160, 160, 750, 150, 150, 110,
	165, 190, 200, 190, 150, 120, 240, 190, 190, 190, 140, 160, 160, 165, 160,
	200, 190, 260, 190, 750, 750, 160, 160, 190, 200, 170, 160, 190, 190, 160,
	160, 200, 200, 150, 165, 200, 120, 150, 120, 190, 160, 100, 200, 200, 170,
	170, 160, 160, 190, 220, 170, 200, 200, 140, 140, 160, 750, 260, 260, 160,
	260, 230, 165, 140, 120, 140, 200, 200, 200, 120, 120, 165, 165, 160, 340,
	340, 190, 190, 190, 110, 160, 160, 160, 170, 160, 600, 700, 140, 200, 160,
	160, 160, 110, 110, 150, 160, 230, 160, 165, 260, 160, 160, 160, 200, 160,
	160, 165, 160, 200, 170, 180, 110, 110, 200, 200, 200, 200, 200, 200, 750,
	200, 160, 160, 170, 110, 110, 900, 600, 110, 600, 160, 160, 200, 110, 160,
	165, 190, 160, 170, 120, 165, 260, 200, 140, 200, 260, 120, 200, 200, 600,
	190, 200, 200, 200, 160, 165, 110, 200, 200, 260, 260, 160, 160, 160, 140,
	160, 260
},

uf_VehicleTypes[] =
{
	7, 9, 10, 5, 11, 9, 14, 8, 5, 14, 9, 10, 6, 5, 5, 10, 8, 2, 11, 9, 8, 9, 5,
	14, 7, 2, 9, 8, 14, 10, 12, 8, 8, 8, 14, 13, 9, 8, 8, 4, 5, 15, 14, 5, 7,
	9, 12, 2, 3, 14, 13, 10, 12, 12, 12, 5, 5, 14, 11, 5, 1, 3, 3, 3, 15, 15,
	9, 9, 3, 2, 7, 3, 12, 12, 9, 10, 1, 10, 5, 11, 4, 3, 5, 14, 12, 14, 14, 2,
	2, 7, 8, 9, 9, 12, 10, 7, 10, 2, 5, 5, 7, 15, 10, 10, 9, 7, 10, 9, 14, 3,
	3, 1, 1, 1, 5, 5, 9, 9, 9, 1, 1, 3, 3, 3, 5, 14, 9, 9, 8, 9, 14, 5, 14, 4,
	6, 6, 6, 14, 14, 14, 9, 10, 9, 5, 8, 14, 9, 9, 2, 9, 9, 9, 5, 1, 5, 4, 7,
	7, 10, 10, 9, 11, 9, 2, 15, 10, 6, 6, 7, 13, 13, 14, 14, 7, 14, 6, 6, 1, 5,
	7, 9, 3, 5, 14, 13, 9, 3, 10, 14, 10, 13, 13, 1, 1, 15, 12, 8, 8, 8, 8, 5,
	8, 10, 10, 9, 5, 13, 13, 13, 5, 13, 13
},

uf_SkinGenders[] =
{
	0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, -1,
	1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 1, 0,
	1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0,
	0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1,
	1, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0,
	0, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0,
	0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0
},

uf_SkinTypes[] =
{
	0, 0, 0, 14, 14, 14, 14, 12, 14, 12, 10, 8, 10, 10, 10, 10, 8, 10, 4, 10,
	10, 11, 11, 7, 11, 11, 7, 8, 11, 9, 9, 5, 5, 5, 5, 12, 12, 12, 12, 12, 11,
	11, 14, 12, 12, 4, 12, 12, 12, 9, 9, 7, 7, 0, 10, 12, 12, 9, 12, 12, 12, 9,
	9, 6, 6, 14, 9, 12, 8, 12, 8, 8, 12, 9, 0, 10, 11, 9, 9, 9, 7, 7, 9, 9, 9,
	6, 14, 6, 11, 11, 7, 10, 4, 12, 12, 12, 7, 4, 12, 7, 1, 10, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 14, 1, 1, 1, 1, 1, 1, 1, 1, 5, 5, 5, 5,
	5, 5, 9, 9, 10, 9, 4, 4, 4, 8, 10, 10, 10, 4, 4, 8, 8, 14, 8, 10, 6, 8, 4,
	8, 10, 5, 5, 5, 5, 5, 5, 2, 2, 2, 2, 8, 10, 10, 10, 8, 8, 1, 1, 1, 8, 8, 6,
	8, 10, 9, 10, 10, 10, 10, 10, 8, 10, 8, 3, 3, 3, 3, 3, 3, 5, 5, 5, 5, 5, 5,
	5, 8, 8, 8, 11, 6, 14, 8, 11, 8, 9, 9, 11, 11, 10, 8, 11, 8, 11, 11, 11, 11,
	9, 11, 11, 11, 11, 12, 9, 11, 12, 12, 11, 11, 11, 6, 6, 9, 11, 9, 9, 6, 6,
	6, 6, 1, 1, 9, 11, 4, 9, 9, 1, 9, 6, 6, 7, 7, 8, 11, 12, 10, 8, 13, 13, 13,
	13, 13, 13, 13, 13, 14, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 14, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15
},

uf_ComponentPrices[] =
{
	400, 550, 200, 250, 100, 150, 80, 500, 500, 200, 1000, 220, 250, 100, 400,
	500, 200, 500, 350, 300, 250, 200, 150, 350, 50, 1000, 480, 0, 770, 680, 0,
	370, 170, 120, 790, 150, 500, 690, 190, 390, 0, 0, 1000, 500, 500, 510, 710,
	670, 530, 810, 620, 0, 0, 130, 210, 230, 520, 430, 620, 720, 530, 180, 0, 0,
	830, 850, 750, 250, 200, 550, 450, 0, 0, 1100, 1030, 980, 1560, 1620, 1200,
	1030, 900, 1230, 820, 1560, 1350, 770, 100, 1500, 150, 650, 450, 100, 750,
	350, 0, 0, 1000, 620, 1140, 0, 940, 0, 0, 3250, 1610, 1540, 780, 0, 780,
	1610, 1540, 0, 0, 3340, 3250, 2130, 2050, 2040, 780, 940, 0, 0, 780, 860,
	0, 1120, 3340, 3250, 3340, 1650, 3380, 3290, 1590, 830, 800, 1500, 1000, 0,
	580, 470, 870, 980, 0, 150, 0, 100, 490, 600, 890, 1000, 1090, 840, 910,
	1200, 1030, 1030, 920, 930, 550, 1050, 1050, 950, 650, 450, 550, 850, 950,
	850, 950, 970, 880, 990, 900, 950, 1000, 900, 1000, 900, 2050, 2150, 2130,
	2050, 2130, 2040, 2150, 2040, 2095, 2175, 2080, 2200, 1200, 1040, 940, 1100
},

uf_VehicleNames[][] =
{
	"Landstalker", "Bravura", "Buffalo", "Linerunner", "Pereniel", "Sentinel",
	"Dumper", "Firetruck", "Trashmaster", "Stretch", "Manana", "Infernus",
	"Voodoo", "Pony", "Mule", "Cheetah", "Ambulance", "Leviathan", "Moonbeam",
	"Esperanto", "Taxi", "Washington", "Bobcat", "Mr Whoopee", "BF Injection",
	"Hunter", "Premier", "Enforcer", "Securicar", "Banshee", "Predator", "Bus",
	"Rhino", "Barracks", "Hotknife", "Trailer", "Previon", "Coach", "Cabbie",
	"Stallion", "Rumpo", "RC Bandit", "Romero", "Packer", "Monster", "Admiral",
	"Squalo", "Seasparrow", "Pizzaboy", "Tram", "Trailer", "Turismo", "Speeder",
	"Reefer", "Tropic", "Flatbed", "Yankee", "Caddy", "Solair", "Berkley's RC Van",
	"Skimmer", "PCJ-600", "Faggio", "Freeway", "RC Baron", "RC Raider", "Glendale",
	"Oceanic", "Sanchez", "Sparrow", "Patriot", "Quad", "Coastguard", "Dinghy",
	"Hermes", "Sabre", "Rustler", "ZR3 50", "Walton", "Regina", "Comet", "BMX",
	"Burrito", "Camper", "Marquis", "Baggage", "Dozer", "Maverick", "News Chopper",
	"Rancher", "FBI Rancher", "Virgo", "Greenwood", "Jetmax", "Hotring", "Sandking",
	"Blista Compact", "Police Maverick", "Boxville", "Benson", "Mesa", "RC Goblin",
	"Hotring Racer", "Hotring Racer", "Bloodring Banger", "Rancher", "Super GT",
	"Elegant", "Journey", "Bike", "Mountain Bike", "Beagle", "Cropdust", "Stunt",
	"Tanker", "RoadTrain", "Nebula", "Majestic", "Buccaneer", "Shamal", "Hydra",
	"FCR-900", "NRG-500", "HPV1000", "Cement Truck", "Tow Truck", "Fortune",
	"Cadrona", "FBI Truck", "Willard", "Forklift", "Tractor", "Combine", "Feltzer",
	"Remington", "Slamvan", "Blade", "Freight", "Streak", "Vortex", "Vincent",
	"Bullet", "Clover", "Sadler", "Firetruck", "Hustler", "Intruder", "Primo",
	"Cargobob", "Tampa", "Sunrise", "Merit", "Utility", "Nevada", "Yosemite",
	"Windsor", "Monster", "Monster", "Uranus", "Jester", "Sultan", "Stratum",
	"Elegy", "Raindance", "RC Tiger", "Flash", "Tahoma", "Savanna", "Bandito",
	"Freight", "Trailer", "Kart", "Mower", "Duneride", "Sweeper", "Broadway",
	"Tornado", "AT-400", "DFT-30", "Huntley", "Stafford", "BF-400", "Newsvan",
	"Tug", "Trailer", "Emperor", "Wayfarer", "Euros", "Hotdog", "Club", "Trailer",
	"Trailer", "Andromada", "Dodo", "RC Cam", "Launch", "Police Car (LSPD)",
	"Police Car (SFPD)", "Police Car (LVPD)", "Police Ranger", "Picador","S.W.A.T. Van",
	"Alpha", "Phoenix", "Glendale", "Sadler", "Luggage Trailer", "Luggage Trailer",
	"Stair Trailer", "Boxville", "Farm Plow", "Utility Trailer"
};

stock IsValidVehicleModel(const modelid)
	return (399 < modelid < 612);



stock GetModelMaxSpeed(const modelid)
{
	if(IsValidVehicleModel(modelid)) return uf_VehicleSpeeds[modelid - 400];
	return 0;
}
