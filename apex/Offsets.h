#pragma once
#include "Includes.h"
#define NUM_ENT_ENTRIES			(1 << 12)
#define ENT_ENTRY_MASK			(NUM_ENT_ENTRIES - 1)

#define m_view_render 0x408b8e8
#define m_view_matrix 0x1b3bd0

#define m_LocalPlayer 0x1c89a38  
#define m_cl_entitylist 0x18da3d8

#define m_entity_origin 0x14c 
#define m_entity_team_num 0x450
#define m_entity_bones 0xF38
#define m_player_shields 0x170
#define m_player_health 0x440
#define m_player_max_health 0x0510
#define m_shieldHealth 0x0170 
#define m_shieldHealthMax 0x174
#define m_player_bleedout_state 0x25e8

#define OFFSET_ITEM_ID	0x1618

#define ITEM_deathbox		0x299	
#define ITEM_WEAPONS		0x300	
#define ITEM_AMMO			0x301
#define ITEM_HEALING		0x302
#define ITEM_HEMMET		    0x303
#define ITEM_BODY_SHILD	    0x304
#define ITEM_EVO_SHILD	    0x305
#define ITEM_BACKPACK	    0x306
#define ITEM_SHIELD			0x307
#define ITEM_GRENADES		0x308
#define ITEM_SCOPES			0x309
#define ITEM_ATTACHMENTS	0x310

enum BoneId {
	head = 8,
	neck = 7,
	Left_shoulder = 11,
	Right_shoulder = 35,
	chest = 5,
	Spine = 3,
	Left_hand = 15,
	Right_hand = 39,
	Left_arm = 41,
	Right_arm = 16,
	Left_knee = 58,
	Right_knee = 63,
	Left_foot = 65,
	Right_foot = 60,
	Left_ElbowRoll = 13,
	Right_ElbowRoll = 37,

};

class AxisAlignedBox
{
public:
	D3DXVECTOR4 Min;
	D3DXVECTOR4 Max;
};
enum class WeaponID : int {
	BARE_HANDS = 14,

	HAVOC = 64,
	LSTAR = 65,

	KRABER = 54,
	MASTIFF = 55,
	DEVOTION = 48,

	SENTINEL = 1,
	CHARGE_RIFLE = 66,
	LONGBOW = 49,
	TRIPLE_TAKE = 62,

	WINGMAN = 63,
	SPITFIRE = 61,
	PROWLER = 57,
	HEMLOK = 53,
	FLATLINE = 51,

	RE45 = 47,
	P2020 = 60,
	R301 = 0,
	R99 = 59,
	ALTERNATOR = 46,
	G7_SCOUT = 52,

	MOZAMBIQUE = 56,
	PEACEKEEPER = 58,
	EVA8_AUTO = 50,
};
enum class HelmetID : int {
	HELMET_LV0,
	HELMET_LV1,
	HELMET_LV2,
	HELMET_LV3,
	HELMET_LV4,
};
enum class ArmorID : int {
	BODY_ARMOR_LV0,
	BODY_ARMOR_LV1,
	BODY_ARMOR_LV2,
	BODY_ARMOR_LV3,
	BODY_ARMOR_LV4,
};
enum class ItemID : int {
	DeathBox = 0,
	KRABER_HEIRLOOM = 1,
	MASTIFF = 2,
	MASTIFF_GOLD = 3,
	LSTAR = 7,
	LSTAR_GOLD = 8,
	HAVOC = 12,
	HAVOC_GOLD = 13,
	DEVOTION = 18,
	DEVOTION_GOLD = 19,
	TRIPLE_TAKE = 24,
	TRIPLE_TAKE_GOLD = 25,
	FLATLINE = 29,
	FLATLINE_GOLD = 30,
	HEMLOK = 34,
	HEMLOK_GOLD = 35,
	G7_SCOUT = 39,
	G7_SCOUT_GOLD = 40,
	ALTERNATOR = 45,
	ALTERNATOR_GOLD = 46,
	R99 = 51,
	R99_GOLD = 52,
	PROWLER_HEIRLOOM = 56,
	VOLT = 61,
	VOLT_GOLD = 62,
	LONGBOW = 66,
	LONGBOW_GOLD = 67,
	CHARGE_RIFLE = 71,
	CHARGE_RIFLE_GOLD = 72,
	SPITFIRE = 76,
	SPITFIRE_GOLD = 77,
	R301 = 81,
	R301_GOLD = 82,
	EVA8_AUTO = 86,
	EVA8_AUTO_GOLD = 87,
	PEACEKEEPER_HEIRLOOM = 91,
	MOZAMBIQUE = 92,
	MOZAMBIQUE_GOLD = 93,
	WINGMAN = 98,
	WINGMAN_GOLD = 99,
	P2020 = 104,
	P2020_GOLD = 105,
	RE45 = 110,
	RE45_GOLD = 111,
	SENTINEL = 116,
	SENTINEL_GOLD = 117,
	Repeater = 121,
	Repeater_GOLD = 122,

	LIGHT_ROUNDS = 126,
	ENERGY_AMMO,
	SHOTGUN_SHELLS,
	HEAVY_ROUNDS,
	SNIPER_AMMO,

	ULTIMATE_ACCELERANT,
	PHOENIX_KIT,
	MED_KIT,
	SYRINGE,
	SHIELD_BATTERY,
	SHIELD_CELL,

	HELMET_LV1,
	HELMET_LV2,
	HELMET_LV3,
	HELMET_LV4,
	BODY_ARMOR_LV1,
	BODY_ARMOR_LV2,
	BODY_ARMOR_LV3,
	BODY_ARMOR_LV4,
	EVO_SHIELD_LV0,
	EVO_SHIELD_LV1,
	EVO_SHIELD_LV2,
	EVO_SHIELD_LV3,
	EVO_SHIELD_LV4,
	KNOCKDOWN_SHIELD_LV1,
	KNOCKDOWN_SHIELD_LV2,
	KNOCKDOWN_SHIELD_LV3,
	KNOCKDOWN_SHIELD_LV4,
	BACKPACK_LV1,
	BACKPACK_LV2,
	BACKPACK_LV3,
	BACKPACK_LV4,

	THERMITE_GRENADE,
	FRAG_GRENADE,
	ARC_STAR,

	HCOG_CLASSIC,
	HCOG_BRUISER,
	HOLO,
	VARIABLE_HOLO,
	DIGITAL_THREAT,
	HCOG_RANGER,
	VARIABLE_AOG,
	SNIPER,
	VARIABLE_SNIPER,
	DIGITAL_SNIPER_THREAT,

	BARREL_STABILIZER_LV1,
	BARREL_STABILIZER_LV2,
	BARREL_STABILIZER_LV3,
	BARREL_STABILIZER_LV4,
	LIGHT_MAGAZINE_LV1,
	LIGHT_MAGAZINE_LV2,
	LIGHT_MAGAZINE_LV3,
	HEAVY_MAGAZINE_LV1,
	HEAVY_MAGAZINE_LV2,
	HEAVY_MAGAZINE_LV3,
	ENERGY_MAGAZINE_LV1,
	ENERGY_MAGAZINE_LV2,
	ENERGY_MAGAZINE_LV3,
	SNIPER_MAGAZINE_LV1,
	SNIPER_MAGAZINE_LV2,
	SNIPER_MAGAZINE_LV3,
	SHOTGUN_BOLT_LV1,
	SHOTGUN_BOLT_LV2,
	SHOTGUN_BOLT_LV3,
	STANDARD_STOCK_LV1,
	STANDARD_STOCK_LV2,
	STANDARD_STOCK_LV3,
	SNIPER_STOCK_LV1,
	SNIPER_STOCK_LV2,
	SNIPER_STOCK_LV3,

	TURBOCHARGER,
	SKULLPIERCER_RIFLING,
	HAMMERPOINT_ROUNDS,
	DOUBLE_TAP_TRIGGER,
	HOPUP_187,
	QUICKDRAW_HOLSTER,
	VAULT_KEY,
	MOBILE_RESPAWN_BEACON,
	ITEM_191,
	TREASURE_PACK,
};