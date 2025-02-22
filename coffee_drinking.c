#region Local Var
	var uLocal_0 = 7;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = -1;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	float fLocal_15 = 0f;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void main() // Position - 0x0
{
	int num;

	fLocal_14 = 1f;
	fLocal_15 = 1f;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (!uScriptParam_0.f_3)
			func_1(false);
	
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	NETWORK::RESERVE_NETWORK_CLIENT_MISSION_OBJECTS(1);
	num.f_1.f_2 = 1086324736;
	num.f_1.f_11.f_1 = 20;
	num.f_1.f_33 = 20;
	num.f_1 = joaat("consumable_coffee");
	num.f_1.f_2 = 4f;
	num.f_179 = uScriptParam_0.f_1;

	if (!uScriptParam_0.f_3)
		func_1(true);

	while (!SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		if (!uScriptParam_0.f_3)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_33, 1.5f);
			func_2(&num);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ENTER"), false);
		}
	
		switch (num)
		{
			case 0:
				if (func_3(num.f_1, 0))
					func_4(&(num.f_1));
			
				func_5(&num, 1);
				break;
		
			case 1:
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 0) && PED::_GET_ACTIVE_DYNAMIC_SCENARIO(Global_33) == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_ARTHUR") || PED::_GET_ACTIVE_DYNAMIC_SCENARIO(Global_33) == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_MP_FEMALE_A") || PED::_GET_ACTIVE_DYNAMIC_SCENARIO(Global_33) == joaat("world_player_dynamic_camp_fire_kneel_arthur"))
				{
					PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "BLOCK_COFFEE_DISCARD_PROMPT", true, 1);
					PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "SHOW_COFFEE_KNEEL_DISCARD_PROMPT", true, 1);
				}
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 442509369))
				{
					num.f_1.f_1 = 1 + num.f_1.f_1;
				
					if (func_6(1))
						func_7(-0.1f / num.f_1.f_2, false);
					else if (func_8())
						func_9(1);
					else if (func_10())
						func_9(0);
				
					func_11(&(num.f_1), (float)num.f_1.f_1 >= num.f_1.f_2);
				}
			
				if ((float)num.f_1.f_1 >= num.f_1.f_2 || MISC::GET_FRAME_COUNT() % 10 == 0 && ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Global_33) > 0.2f)
					func_5(&num, 2);
				break;
		
			case 2:
				PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "BLOCK_COFFEE_DRINK_PROMPT", true, 1);
				PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "BLOCK_COFFEE_DISCARD_PROMPT", true, 1);
			
				if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) == joaat("drink_coffee_hold"))
				{
					if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 0) && PED::_GET_ACTIVE_DYNAMIC_SCENARIO(Global_33) == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_ARTHUR") || PED::_GET_ACTIVE_DYNAMIC_SCENARIO(Global_33) == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_MP_FEMALE_A") || PED::_GET_ACTIVE_DYNAMIC_SCENARIO(Global_33) == joaat("world_player_dynamic_camp_fire_kneel_arthur"))
						TASK::_0xB35370D5353995CB(Global_33, joaat("drink_coffee_put_away_kneeling"), 1048576000);
					else
						TASK::_0xB35370D5353995CB(Global_33, joaat("drink_coffee_put_away"), 1048576000);
				
					func_5(&num, 3);
					ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(num.f_179));
				}
				break;
		
			case 3:
				if (ENTITY::DOES_ENTITY_EXIST(num.f_179) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, joaat("DestroyProp")))
					OBJECT::DELETE_OBJECT(&(num.f_179));
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	if (!uScriptParam_0.f_3)
		func_1(false);

	return;
}

void func_1(BOOL bParam0) // Position - 0x2BD
{
	PLAYER::_MODIFY_PLAYER_UI_PROMPT(PLAYER::PLAYER_ID(), 5, 0, bParam0);
	PLAYER::_MODIFY_PLAYER_UI_PROMPT(PLAYER::PLAYER_ID(), 50, 0, bParam0);
	PLAYER::_MODIFY_PLAYER_UI_PROMPT(PLAYER::PLAYER_ID(), 49, 0, bParam0);
	PLAYER::_MODIFY_PLAYER_UI_PROMPT(PLAYER::PLAYER_ID(), 11, 0, bParam0);
	return;
}

void func_2(var uParam0) // Position - 0x2F8
{
	func_12(uParam0->f_1, &(uParam0->f_179), joaat("p_mugcoffee01x_ph_r_hand"), joaat("p_mugcoffee01x"));
	return;
}

BOOL func_3(Hash hParam0, int iParam1) // Position - 0x316
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

void func_4(var uParam0) // Position - 0x330
{
	int i;

	ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(*uParam0, &(uParam0->f_11));

	for (i = 0; i < uParam0->f_11; i = i + 1)
	{
		ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(uParam0->f_11.f_1[i], &uParam0->f_33[i /*7*/]);
	}

	return;
}

void func_5(var uParam0, int iParam1) // Position - 0x370
{
	*uParam0 = iParam1;
	return;
}

BOOL func_6(int iParam0) // Position - 0x37D
{
	return iParam0 > -1 && iParam0 < 2;
}

void func_7(float fParam0, BOOL bParam1) // Position - 0x392
{
	func_13(Global_1940026.f_9 + fParam0, bParam1);
	return;
}

BOOL func_8() // Position - 0x3A9
{
	return Global_1940026 == 2;
}

void func_9(int iParam0) // Position - 0x3B7
{
	if (iParam0 >= Global_1940026)
		return;

	Global_1940026.f_1 = iParam0;
	return;
}

BOOL func_10() // Position - 0x3D3
{
	return Global_1940026 == 1;
}

void func_11(var uParam0, BOOL bParam1) // Position - 0x3E1
{
	int i;
	float num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;

	if (func_14(*uParam0, 1573112293) || func_14(*uParam0, 672467738) || func_14(*uParam0, -550842268))
		flag3 = true;

	flag4 = func_15(*uParam0);
	ATTRIBUTE::STOP_ITEM_PREVIEW();
	Global_1940085.f_26 = 0;

	for (i = 0; i < uParam0->f_11; i = i + 1)
	{
		switch (uParam0->f_33[i /*7*/].f_1)
		{
			case -1104847406:
				num2 = func_16(2, (float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2);
				func_18((float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2, false);
				flag = true;
				break;
		
			case -943921969:
				num = func_16(0, (float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2);
				func_17((float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2);
				flag2 = true;
				break;
		
			case -816334026:
				func_22(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_2) / uParam0->f_2, 1 == uParam0->f_1);
				break;
		
			case joaat("EFFECT_HEALTH_CORE"):
				num4 = func_20((float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2, uParam0->f_33[i /*7*/].f_5 / uParam0->f_2);
				func_21(0, num4, true, true, flag3);
				flag2 = true;
				break;
		
			case 381158954:
				num3 = func_16(1, (float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2);
				func_19((float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2);
				break;
		
			case joaat("EFFECT_STAMINA_CORE"):
				num6 = func_20((float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2, uParam0->f_33[i /*7*/].f_5 / uParam0->f_2);
				func_21(1, num6, true, true, flag3);
				break;
		
			case joaat("EFFECT_DEADEYE_CORE"):
				num5 = func_20((float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2, uParam0->f_33[i /*7*/].f_5 / uParam0->f_2);
				func_21(2, num5, true, true, flag3);
				flag = true;
				break;
		
			default:
				if (bParam1)
				{
					switch (uParam0->f_33[i /*7*/].f_1)
					{
						case -1240225157:
							num7 = func_23(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_3), uParam0->f_33[i /*7*/].f_4);
							func_24(1, num7, flag4, true);
							break;
					
						case joaat("Effect_Stamina_Core_Gold"):
							num7 = func_23(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_3), uParam0->f_33[i /*7*/].f_4);
							func_24(18, num7, flag4, true);
							break;
					
						case joaat("Effect_Deadeye_Core_Gold"):
							num7 = func_23(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_3), uParam0->f_33[i /*7*/].f_4);
							func_24(20, num7, flag4, true);
							flag = true;
							break;
					
						case 1342237631:
							num7 = func_23(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_3), uParam0->f_33[i /*7*/].f_4);
							func_24(2, num7, flag4, true);
							flag = true;
							break;
					
						case 1869697234:
							num7 = func_23(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_3), uParam0->f_33[i /*7*/].f_4);
							func_24(0, num7, flag4, true);
							flag2 = true;
							break;
					
						case joaat("Effect_Health_Core_Gold"):
							num7 = func_23(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_3), uParam0->f_33[i /*7*/].f_4);
							func_24(19, num7, flag4, true);
							flag2 = true;
							break;
					}
				}
				break;
		}
	}

	if (bParam1)
	{
		func_25(uParam0);
		func_26(*uParam0, flag, flag2, 562618531);
	}

	func_27(uParam0);
	uParam0->f_3 = uParam0->f_3 + num;
	uParam0->f_4 = uParam0->f_4 + num2;
	uParam0->f_5 = uParam0->f_5 + num3;
	uParam0->f_6 = uParam0->f_6 + num4;
	uParam0->f_7 = uParam0->f_7 + num5;
	uParam0->f_8 = uParam0->f_8 + num6;
	return;
}

void func_12(Hash hParam0, var uParam1, Hash hParam2, Hash hParam3) // Position - 0x788
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		*uParam1 = TASK::_GET_ITEM_INTERACTION_ENTITY_FROM_PED(Global_33, hParam2);
	
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			STREAMING::REQUEST_MODEL(hParam3, false);
		
			if (STREAMING::HAS_MODEL_LOADED(hParam3) && NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
			{
				*uParam1 = OBJECT::CREATE_OBJECT(hParam3, Global_34, true, false, false, false, true);
				OBJECT::_0xCAAF2BCCFEF37F77(*uParam1, 80);
				TASK::_TASK_ITEM_INTERACTION_2(Global_33, hParam0, *uParam1, hParam2, TASK::GET_ITEM_INTERACTION_STATE(Global_33), 1, 0, -1082130432);
			}
		}
	}

	return;
}

void func_13(float fParam0, BOOL bParam1) // Position - 0x804
{
	if (PED::IS_PED_ON_MOUNT(Global_33) || PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
	{
		if (fParam0 >= func_28())
		{
			Global_1940026.f_9 = func_28() - 0.01f;
			return;
		}
	}

	if (fParam0 < 0f)
	{
		Global_1940026.f_9 = 0f;
		PED::_SET_PED_MOTIVATION(Global_33, 10, Global_1940026.f_9, 0);
	}
	else if (fParam0 >= 1f && Global_1940026.f_14)
	{
		Global_1940026.f_9 = 0.99f;
	}
	else if (fParam0 > 1f)
	{
		Global_1940026.f_9 = 1f;
	}
	else
	{
		Global_1940026.f_9 = fParam0;
	}

	if (bParam1)
		Global_1940026.f_12 = 1;

	return;
}

BOOL func_14(Hash hParam0, Hash hParam1) // Position - 0x8A7
{
	if (!func_3(hParam0, 0))
		return func_30(func_29(hParam0), hParam1);

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, 1120943070))
		return true;

	return false;
}

BOOL func_15(int iParam0) // Position - 0x8E8
{
	switch (iParam0)
	{
		case joaat("provision_role_moonshiner_moonshine_flavor_tropical_punch"):
		case joaat("provision_role_moonshiner_moonshine_flavor_wild_creek"):
		case joaat("provision_role_moonshiner_mash_medium"):
		case joaat("provision_role_moonshiner_moonshine_flavor_berry_cobbler"):
		case joaat("provision_role_moonshiner_moonshine_flavor_poison_poppys"):
		case joaat("provision_role_moonshiner_moonshine_flavor_berry_mint"):
		case -545779394:
		case joaat("provision_role_moonshiner_moonshine_flavor_apple_berry_crumb"):
		case joaat("provision_role_moonshiner_moonshine_flavor_wild_cider"):
		case joaat("provision_role_moonshiner_mash_low"):
		case joaat("provision_role_moonshiner_mash_high"):
		case 1532695640:
		case joaat("provision_role_moonshiner_moonshine_flavor_spiced_island"):
		case 1847740267:
		case joaat("provision_role_moonshiner_moonshine_flavor_agarita_sunrise"):
		case joaat("provision_role_moonshiner_moonshine_flavor_evergreen"):
			return 0;
	}

	return 1;
}

float func_16(int iParam0, float fParam1) // Position - 0x960
{
	float pedStamina;
	float pedMaxStamina;
	float num;
	float num2;

	switch (iParam0)
	{
		case 0:
			pedStamina = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_33));
			pedMaxStamina = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_33, false));
			break;
	
		case 1:
			pedStamina = PED::_GET_PED_STAMINA(Global_33);
			pedMaxStamina = PED::_GET_PED_MAX_STAMINA(Global_33);
			break;
	
		case 2:
			pedStamina = PLAYER::_GET_PLAYER_DEAD_EYE(PLAYER::GET_PLAYER_INDEX());
			pedMaxStamina = PLAYER::_GET_PLAYER_MAX_DEAD_EYE(PLAYER::GET_PLAYER_INDEX(), 0);
			break;
	}

	num2 = fParam1 + pedStamina;

	if (num2 > pedMaxStamina)
		num = pedMaxStamina - pedStamina;
	else
		num = num2 - pedStamina;

	return num / 2f;
}

void func_17(float fParam0) // Position - 0x9F1
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (fParam0 == 0f)
		return;
	else if (fParam0 == -1f)
		fParam0 = BUILTIN::TO_FLOAT(PED::_GET_NUM_RESERVED_HEALTH(ped));

	num = func_31(2);
	func_32(fParam0 * (float)num, 0);
	return;
}

void func_18(float fParam0, BOOL bParam1) // Position - 0xA31
{
	int num;

	if (fParam0 == 0f)
		return;
	else if (fParam0 == -1f)
		fParam0 = BUILTIN::TO_FLOAT(10);

	num = func_33(2);
	func_34(fParam0 * (float)num, false, bParam1);
	return;
}

void func_19(float fParam0) // Position - 0xA69
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (fParam0 == 0f)
		return;
	else if (fParam0 == -1f)
		fParam0 = BUILTIN::TO_FLOAT(PED::_0xFC3B580C4380B5B7(ped));

	num = func_35(2);
	func_36(fParam0 * (float)num, 0);
	return;
}

float func_20(float fParam0, float fParam1) // Position - 0xAA9
{
	if (fParam1 != 0f)
		return (fParam1 / 100f) * 100f;

	return (fParam0 / 8f) * 100f;
}

void func_21(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xAD7
{
	if (fParam1 == 0f)
		return;

	if (bParam4)
		fParam1 = func_37(iParam0, fParam1, true);

	func_39(iParam0, func_38(iParam0, 2) + fParam1, bParam2, bParam3, true, 2);
	return;
}

void func_22(float fParam0, BOOL bParam1) // Position - 0xB10
{
	if (fParam0 > 10f)
		fParam0 = 10f;

	if (func_40())
		func_41(fParam0, 0);

	if (bParam1)
	{
		Global_17418.f_55.f_2459.f_41 = Global_17418.f_55.f_2459.f_41 + 1;
	
		if (5 == Global_17418.f_55.f_2459.f_41)
			func_42(109, false);
	}

	return;
}

float func_23(float fParam0, int iParam1) // Position - 0xB68
{
	switch (iParam1)
	{
		case 0:
			return fParam0 * 0.033f;
	
		case 1:
			return fParam0 * 2f;
	
		case 2:
			return fParam0 * 120f;
	
		case 3:
			return fParam0 * 2880f;
	
		default:
		
	}

	return fParam0;
}

int func_24(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3) // Position - 0xBBA
{
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		return 0;

	return func_43(iParam0, fParam1, bParam2, bParam3);
}

void func_25(var uParam0) // Position - 0xBDE
{
	switch (*uParam0)
	{
		case -2109344034:
		case -2053642092:
		case -1806099704:
		case -1563450693:
		case -1499480171:
		case -1437186306:
		case -669703557:
		case -30746180:
		case 429428887:
		case 812236345:
		case 1023793009:
		case 1271821570:
		case 1454312131:
		case 1879593571:
		case 1934214136:
			func_44(-1196069774, joaat("CONSUMABLE__DAILY_STEW"), 8100);
			break;
	}

	return;
}

void func_26(Hash hParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0xC5E
{
	if (bParam2 || func_14(hParam0, -537818634))
		func_46(func_45(joaat("medicine_items_used")), 1);

	if (func_14(hParam0, -1457797660))
		func_46(func_45(joaat("provision_items_used")), 1);

	if (func_14(hParam0, 1573112293))
		func_48(func_47(hParam0), 1);

	if (func_14(hParam0, 1939071949))
		func_46(func_49(joaat("USED"), joaat("tonic")), 1);

	if (func_14(hParam0, 1992556171))
		func_46(func_45(joaat("camp_stews_consumed")), 1);

	if (func_14(hParam0, 1239889275))
		func_46(func_45(joaat("antique_bottles_drunk")), 1);

	switch (hParam0)
	{
		case joaat("consumable_oat_cakes"):
		case joaat("consumable_sugarcube"):
		case joaat("consumable_haycube"):
			func_46(func_49(joaat("USED"), joaat("feed_bag")), 1);
			break;
	}

	switch (hParam0)
	{
		case joaat("consumable_horse_medicine"):
		case joaat("consumable_special_horse_medicine"):
		case joaat("consumable_horse_medicine_used"):
		case joaat("consumable_potent_horse_medicine"):
			func_46(func_49(joaat("USED"), joaat("horse_pills")), 1);
			break;
	
		case joaat("consumable_whiskey_used"):
		case joaat("consumable_whiskey"):
			func_46(func_49(joaat("USED"), joaat("Whiskey")), 1);
			break;
	
		case joaat("consumable_predator_bait"):
		case joaat("consumable_potent_predator_bait"):
			func_46(func_49(joaat("USED"), joaat("potent_predator_bait")), 1);
			break;
	
		case joaat("consumable_snake_oil"):
		case joaat("consumable_potent_snake_oil"):
		case joaat("consumable_snake_oil_used"):
			func_46(func_49(joaat("USED"), joaat("Snake_Oil")), 1);
			break;
	
		case -611782825:
			func_46(func_49(joaat("USED"), -1875859641), 1);
			break;
	
		case joaat("consumable_cocaine_chewing_gum_used"):
		case joaat("consumable_cocaine_chewing_gum"):
			func_46(func_49(joaat("USED"), joaat("cocaine_gum")), 1);
			break;
	
		case joaat("consumable_chewing_tobacco"):
		case joaat("consumable_chewing_tobacco_used"):
			func_46(func_49(joaat("USED"), joaat("chewing_tobacco")), 1);
			break;
	
		case joaat("consumable_moonshine"):
			func_46(func_49(joaat("USED"), joaat("moonshine")), 1);
			break;
	
		case joaat("consumable_herbivore_bait"):
		case joaat("consumable_potent_herbivore_bait"):
			func_46(func_49(joaat("USED"), joaat("potent_herbivore_bait")), 1);
			break;
	}

	if (func_50() == -1)
		if (hParam0 == joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"))
			func_46(func_49(joaat("USED"), joaat("special_tonic")), 1);

	if (bParam1)
		func_46(func_45(joaat("DEADEYE_ITEMS_USED")), 1);

	func_51(hParam0, iParam3);
	return;
}

void func_27(var uParam0) // Position - 0xEC8
{
	if (!uParam0->f_176)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_174))
		{
			ENTITY::_SET_ENTITY_CARRYING_FLAG(uParam0->f_174, 2, false);
			uParam0->f_176 = 1;
		}
	}

	return;
}

float func_28() // Position - 0xEF2
{
	return 0.75f;
}

Hash func_29(Hash hParam0) // Position - 0xEFF
{
	return hParam0;
}

BOOL func_30(Hash hParam0, Hash hParam1) // Position - 0xF09
{
	if (!func_52(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, 1120943070))
		return 1;

	return 0;
}

int func_31(int iParam0) // Position - 0xF3F
{
	if (iParam0 == 2)
		iParam0 = func_53(1);

	switch (iParam0)
	{
		case 0:
			return Global_1956875.f_1546;
	
		case 1:
			return Global_1956875.f_1565.f_136;
	
		default:
		
	}

	return -1;
}

void func_32(float fParam0, Ped pedParam1) // Position - 0xF7F
{
	if (fParam0 == 0f)
		return;

	if (pedParam1 == 0)
		pedParam1 = Global_1295666.f_3;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	ENTITY::_CHANGE_ENTITY_HEALTH(pedParam1, fParam0, 0, 0);
	return;
}

int func_33(int iParam0) // Position - 0xFC3
{
	if (iParam0 == 2)
		iParam0 = func_53(1);

	switch (iParam0)
	{
		case 0:
			return Global_1956875.f_1546.f_1;
	
		case 1:
			return Global_1956875.f_1565.f_136.f_1;
	
		default:
		
	}

	return -1;
}

void func_34(float fParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1007
{
	Player player;
	Ped EntityIndex;
	float playerSpecialAbilityMultiplier;

	player = PLAYER::PLAYER_ID();

	if (fParam0 > 0f && func_54(player))
		return;

	EntityIndex = PLAYER::PLAYER_PED_ID();

	if (!ENTITY::DOES_ENTITY_EXIST(EntityIndex))
		return;

	if (PLAYER::_IS_SPECIAL_ABILITY_ACTIVE(player) && fParam0 > 0f && !bParam2)
		return;

	if (fParam0 == 0f)
		return;

	playerSpecialAbilityMultiplier = PLAYER::_GET_PLAYER_SPECIAL_ABILITY_MULTIPLIER(player);

	if (fParam0 < 0f && bParam1 == true)
		bParam1 = false;

	if (!bParam1)
		PLAYER::_SET_SPECIAL_ABILITY_MULTIPLIER(player, 1f);

	if (fParam0 > 0f)
		PLAYER::_SPECIAL_ABILITY_RESTORE_BY_AMOUNT(player, fParam0, 0, 0, 1);
	else
		PLAYER::_SPECIAL_ABILITY_DRAIN_BY_AMOUNT(player, fParam0, 0);

	if (!bParam1)
		PLAYER::_SET_SPECIAL_ABILITY_MULTIPLIER(player, playerSpecialAbilityMultiplier);

	return;
}

int func_35(int iParam0) // Position - 0x10B8
{
	if (iParam0 == 2)
		iParam0 = func_53(1);

	switch (iParam0)
	{
		case 0:
			return Global_1956875.f_1546.f_2;
	
		case 1:
			return Global_1956875.f_1565.f_136.f_2;
	
		default:
		
	}

	return -1;
}

void func_36(float fParam0, Ped pedParam1) // Position - 0x10FC
{
	if (fParam0 == 0f)
		return;

	if (pedParam1 == 0)
		pedParam1 = Global_1295666.f_3;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	PED::_CHANGE_PED_STAMINA(pedParam1, fParam0);
	return;
}

float func_37(int iParam0, float fParam1, BOOL bParam2) // Position - 0x113E
{
	int num;
	int num2;

	num = func_55();
	func_56(&num, 0, 0, 0, 1, 0, 0);
	num2 = func_57(iParam0, 2);

	if (func_59(num, func_58(iParam0, 2), true))
	{
		func_60(iParam0, 0, 2);
		num2 = 0;
	}

	if (num2 >= 2)
	{
		func_42(103, bParam2);
		return 0f;
	}

	func_61(iParam0, func_55(), 2);
	func_60(iParam0, num2 + 1, 2);
	return fParam1;
}

float func_38(int iParam0, int iParam1) // Position - 0x11A7
{
	if (iParam1 == 2)
		iParam1 = func_53(2);

	switch (iParam1)
	{
		case 0:
			return Global_1956875.f_1431.f_6[iParam0 /*3*/];
	
		case 1:
			return Global_1956875.f_1565.f_2.f_6[iParam0 /*3*/];
	
		default:
		
	}

	return -1f;
}

int func_39(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x11F3
{
	Ped ped;

	if (iParam5 == 2)
		iParam5 = func_53(2);

	ped = PLAYER::PLAYER_PED_ID();

	if (func_62(ped, iParam0, fParam1))
	{
		if (bParam2)
			if (fParam1 >= 100f)
				AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
			else
				AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
	
		if (bParam3)
			func_63(iParam0, 7000, iParam5);
	
		func_64(ped, iParam0, fParam1);
		func_65(iParam0, fParam1, bParam4, iParam5);
	}

	return 1;
}

BOOL func_40() // Position - 0x126D
{
	if (Global_1956875.f_1431.f_107 == -15)
		return true;

	return func_66(Global_1956875.f_1431.f_107, false);
}

void func_41(float fParam0, int iParam1) // Position - 0x1296
{
	float num;
	int num2;
	int num3;

	num = func_67(13, 2);
	num2 = func_68(num);
	num = num + fParam0;
	num = func_69(num, 0f, 100f);
	num3 = func_68(num);

	if (num2 != num3)
	{
		Global_1956875.f_1431.f_107 = func_55();
		func_70(&(Global_1956875.f_1431.f_107), 0, 0, 1, 0, 0, 0, false);
	}

	func_71(13, num, 2);
	Global_1956875.f_1431.f_99 = iParam1;
	return;
}

void func_42(int iParam0, BOOL bParam1) // Position - 0x1309
{
	int num;
	int num2;

	func_72(iParam0, &num, &num2);

	if (!func_73(iParam0, num, num2, bParam1))
		return;

	func_74(num, num2);
	return;
}

int func_43(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1336
{
	char* effectName;
	Ped ped;

	ped = PLAYER::PLAYER_PED_ID();

	if (fParam1 == -1f)
		if (func_75(iParam0))
			fParam1 = 30f;
		else
			fParam1 = 30f;
	else if (fParam1 <= 0f)
		return 0;

	switch (iParam0)
	{
		case 0:
			if (bParam2)
			{
				effectName = func_76(iParam0);
			
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
					GRAPHICS::ANIMPOSTFX_PLAY(effectName);
			}
		
			func_77(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[0 /*2*/] = fParam1;
			break;
	
		case 1:
			if (bParam2)
			{
				effectName = func_76(iParam0);
			
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
					GRAPHICS::ANIMPOSTFX_PLAY(effectName);
			}
		
			func_78(joaat("STATUS_EFFECT__TRACKING"));
			func_79(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[1 /*2*/] = fParam1;
			break;
	
		case 2:
			if (bParam2)
			{
				effectName = func_76(iParam0);
			
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
					GRAPHICS::ANIMPOSTFX_PLAY(effectName);
			}
		
			func_80(-1, false);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[2 /*2*/] = fParam1;
			break;
	
		case 18:
			func_81(1, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[1 /*2*/].f_1 = fParam1;
			break;
	
		case 19:
			func_78(joaat("STATUS_EFFECT__POISON"));
			func_81(0, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[0 /*2*/].f_1 = fParam1;
			break;
	
		case 20:
			func_81(2, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[2 /*2*/].f_1 = fParam1;
			break;
	
		default:
			return 0;
	}

	return 1;
}

int func_44(int iParam0, int iParam1, int iParam2) // Position - 0x14EC
{
	int num;

	if (!func_82(iParam1))
		return 0;

	if (!func_83(iParam1))
		return 0;

	if (!func_84(iParam0))
		return 0;

	if (!func_85(iParam0))
		return 0;

	if (!func_86(iParam0))
		func_87(iParam0);

	if (func_88(iParam0, iParam1))
	{
		num = func_89(iParam0);
		Global_1156111.f_47689.f_63[num /*2*/] = iParam0;
		Global_1156111.f_47689.f_63[num /*2*/].f_1 = Global_1295666.f_16 + iParam2;
		return 1;
	}

	return 0;
}

struct<2> func_45(int iParam0) // Position - 0x1580
{
	int num;

	num = iParam0;
	return num;
}

void func_46(var uParam0, var uParam1, int iParam2) // Position - 0x1590
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
		return;

	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

int func_47(Hash hParam0) // Position - 0x15AD
{
	switch (hParam0)
	{
		case joaat("consumable_herb_common_bulrush"):
			return 11;
	
		case joaat("consumable_herb_oleander_sage"):
			return 27;
	
		case joaat("consumable_herb_parasol_mushroom"):
			return 29;
	
		case joaat("consumable_herb_black_berry"):
			return 5;
	
		case joaat("provision_wldflwr_cardinal_flower"):
			return 44;
	
		case joaat("consumable_herb_sage"):
			return 35;
	
		case joaat("provision_wldflwr_creek_plum"):
			return 46;
	
		case joaat("consumable_herb_evergreen_huckleberry"):
			return 16;
	
		case joaat("consumable_herb_english_mace"):
			return 15;
	
		case joaat("consumable_herb_bay_bolete"):
			return 4;
	
		case joaat("provision_wldflwr_blood_flower"):
			return 43;
	
		case joaat("consumable_herb_chanterelles"):
			return 8;
	
		case joaat("consumable_herb_rams_head"):
			return 32;
	
		case joaat("consumable_herb_wintergreen_berry"):
			return 52;
	
		case joaat("consumable_herb_indian_tobacco"):
			return 21;
	
		case joaat("provision_wldflwr_chocolate_daisy"):
			return 45;
	
		case joaat("consumable_herb_yarrow"):
			return 53;
	
		case joaat("consumable_herb_wild_mint"):
			return 51;
	
		case joaat("consumable_herb_burdock_root"):
			return 7;
	
		case joaat("provision_wldflwr_wisteria"):
			return 48;
	
		case joaat("consumable_herb_violet_snowdrop"):
			return 39;
	
		case joaat("provision_wldflwr_texas_blue_bonnet"):
			return 41;
	
		case joaat("consumable_herb_milkweed"):
			return 24;
	
		case joaat("consumable_herb_prairie_poppy"):
			return 30;
	
		case joaat("consumable_herb_oregano"):
			return 28;
	
		case joaat("consumable_herb_red_raspberry"):
			return 34;
	
		case joaat("consumable_herb_wild_feverfew"):
			return 50;
	
		case joaat("consumable_herb_currant"):
			return 6;
	
		case joaat("provision_wldflwr_bitterweed"):
			return 42;
	
		case joaat("consumable_herb_wild_carrots"):
			return 49;
	
		case joaat("provision_wldflwr_agarita"):
			return 40;
	
		case joaat("consumable_herb_ginseng"):
			return 2;
	
		case joaat("provision_wldflwr_wild_rhubarb"):
			return 47;
	
		case joaat("consumable_herb_vanilla_flower"):
			return 38;
	
		case joaat("consumable_herb_creeping_thyme"):
			return 12;
	}

	return 0;
}

void func_48(int iParam0, int iParam1) // Position - 0x1788
{
	var statId;

	statId = { func_49(joaat("eaten"), func_90(iParam0)) };
	STATS::_STAT_ID_INCREMENT_INT(&statId, iParam1);
	func_46(func_91(joaat("herbs_eaten")), iParam1);
	return;
}

struct<2> func_49(int iParam0, int iParam1) // Position - 0x17BA
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

int func_50() // Position - 0x17D0
{
	return Global_1572887.f_14;
}

void func_51(Hash hParam0, int iParam1) // Position - 0x17DE
{
	int num;

	if (func_50() == 0)
	{
		num = func_92(hParam0, -949239683);
	
		if (iParam1 == -1387038764)
			return;
	
		if (func_14(hParam0, -136654233))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_CannedGoodsEaten_00"), 1);
	
		if (func_14(hParam0, 1765172170) || 1443104131 == num || -1919515848 == num)
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_TobaccoSmokedChewed_00"), 1);
	
		if (func_14(hParam0, 1573112293))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_HerbsTasted_00"), 1);
	
		if (func_14(hParam0, -2085281117) && !func_14(hParam0, -1237028043))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_FreshProduceEaten_00"), 1);
	
		if (func_14(hParam0, 200705431))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_DryGoodsEaten_00"), 1);
	
		if (func_14(hParam0, joaat("ci_tag_item_meat_animal")) || func_14(hParam0, -839724752) || func_14(hParam0, 1264218912) || hParam0 == joaat("consumable_offal"))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_MeatEaten_00"), 1);
	
		if (func_14(hParam0, -764700608))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_TonicOilUsed_00"), 1);
	
		if (hParam0 == joaat("consumable_candy_bag") || hParam0 == joaat("consumable_chocolate_bar") || hParam0 == joaat("consumable_peppermint"))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), -1075364325, 1);
	
		if (hParam0 == joaat("consumable_coffee"))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), 2024753712, 1);
	}

	return;
}

BOOL func_52(Hash hParam0, int iParam1) // Position - 0x197F
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

int func_53(int iParam0) // Position - 0x1999
{
	return func_94(func_93(iParam0));
}

BOOL func_54(Player plParam0) // Position - 0x19AB
{
	float num;

	num = func_95(plParam0) - PLAYER::_GET_PLAYER_CACHED_DEAD_EYE_AMOUNT(plParam0);
	return num <= 1f;
}

int func_55() // Position - 0x19C6
{
	return Global_1902569;
}

void func_56(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x19D2
{
	int num;
	int i;
	int j;
	int k;
	int l;
	int m;
	int num2;
	int num3;

	num = func_96(*iParam0);
	i = func_97(*iParam0);
	j = func_98(*iParam0);
	k = func_99(*iParam0);
	l = func_100(*iParam0);
	m = func_101(*iParam0);

	if (iParam6 == 0 && iParam5 == 0 && iParam4 == 0 && iParam3 == 0 && iParam2 == 0 && iParam1 == 0)
		return;

	if (iParam1 < 0)
		return;

	if (iParam2 < 0)
		return;

	if (iParam3 < 0)
		return;

	if (iParam4 < 0)
		return;

	if (iParam5 < 0)
		return;

	if (iParam6 < 0)
		return;

	for (m = m - iParam1; m < 0; m = m + 60)
	{
		iParam2 = iParam2 + 1;
	}

	for (l = l - iParam2; l < 0; l = l + 60)
	{
		iParam3 = iParam3 + 1;
	}

	for (k = k - iParam3; k < 0; k = k + 24)
	{
		iParam4 = iParam4 + 1;
	}

	for (j = j - iParam4; j <= 0; j = j + num3)
	{
		iParam5 = iParam5 + 1;
		num2 = i - 1;
	
		if (num2 < 0)
		{
			iParam6 = iParam6 + 1;
			i = i + 12;
		}
	
		num3 = func_102(num2, num);
	}

	for (i = i - iParam5; i < 0; i = i + 12)
	{
		iParam6 = iParam6 + 1;
	}

	num = num - iParam6;
	func_103(iParam0, m, l, k, j, i, num);
	return;
}

int func_57(int iParam0, int iParam1) // Position - 0x1B45
{
	if (iParam1 == 2)
		iParam1 = func_53(2);

	switch (iParam1)
	{
		case 0:
			return Global_1956875.f_1431.f_6[iParam0 /*3*/].f_2;
	
		case 1:
			return Global_1956875.f_1565.f_2.f_6[iParam0 /*3*/].f_2;
	
		default:
		
	}

	return -1;
}

int func_58(int iParam0, int iParam1) // Position - 0x1B95
{
	if (iParam1 == 2)
		iParam1 = func_53(2);

	switch (iParam1)
	{
		case 0:
			return Global_1956875.f_1431.f_6[iParam0 /*3*/].f_1;
	
		case 1:
			return Global_1956875.f_1565.f_2.f_6[iParam0 /*3*/].f_1;
	
		default:
		
	}

	return -15;
}

BOOL func_59(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1BE7
{
	if (bParam2)
		if (!func_104(iParam1) || !func_104(iParam0))
			return true;

	return iParam0 > iParam1;
}

void func_60(int iParam0, int iParam1, int iParam2) // Position - 0x1C14
{
	if (iParam2 == 2)
		iParam2 = func_53(2);

	switch (iParam2)
	{
		case 0:
			Global_1956875.f_1431.f_6[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		case 1:
			Global_1956875.f_1565.f_2.f_6[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

void func_61(int iParam0, int iParam1, int iParam2) // Position - 0x1C6A
{
	if (iParam2 == 2)
		iParam2 = func_53(2);

	switch (iParam2)
	{
		case 0:
			Global_1956875.f_1431.f_6[iParam0 /*3*/].f_1 = iParam1;
			break;
	
		case 1:
			Global_1956875.f_1565.f_2.f_6[iParam0 /*3*/].f_1 = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_62(Ped pedParam0, int iParam1, float fParam2) // Position - 0x1CC0
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (fParam2 > 100f)
		fParam2 = 100f;
	else if (fParam2 < 0f)
		fParam2 = 0f;

	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(pedParam0, func_105(iParam1), BUILTIN::CEIL(fParam2));
	return true;
}

void func_63(int iParam0, int iParam1, int iParam2) // Position - 0x1D15
{
	if (iParam2 == 2)
		iParam2 = func_53(2);

	if (iParam1 > 0)
		iParam1 = iParam1 + MISC::GET_GAME_TIMER();

	switch (iParam2)
	{
		case 0:
			Global_1956875.f_1431.f_16[iParam0 /*3*/] = iParam1;
			break;
	
		case 1:
			Global_1956875.f_1565.f_2.f_16[iParam0 /*3*/] = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

void func_64(Ped pedParam0, int iParam1, float fParam2) // Position - 0x1D76
{
	char* StringToTest;

	StringToTest = func_106(iParam1);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(StringToTest))
		PED::_SET_PED_BLACKBOARD_FLOAT(pedParam0, func_107(iParam1), fParam2, -1);

	return;
}

void func_65(int iParam0, float fParam1, BOOL bParam2, int iParam3) // Position - 0x1DA2
{
	int num;

	if (iParam3 == 2)
		iParam3 = func_53(2);

	num = Global_1295666.f_16;
	func_108(iParam0, fParam1, iParam3);

	if (bParam2)
		func_109(iParam0, num, iParam3);

	return;
}

BOOL func_66(int iParam0, BOOL bParam1) // Position - 0x1DD8
{
	return func_59(func_55(), iParam0, bParam1);
}

float func_67(int iParam0, int iParam1) // Position - 0x1DEC
{
	if (iParam1 == 2)
		iParam1 = func_53(1);

	switch (iParam1)
	{
		case 0:
			return Global_1956875.f_1431.f_26[iParam0];
	
		case 1:
			return Global_1956875.f_1565.f_2.f_26[iParam0];
	
		default:
		
	}

	return -1f;
}

int func_68(float fParam0) // Position - 0x1E38
{
	float num;

	num = fParam0;
	num = (2f * num) - 100f;
	return BUILTIN::ROUND((num / 100f) * BUILTIN::TO_FLOAT(10));
}

float func_69(float fParam0, float fParam1, float fParam2) // Position - 0x1E63
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

void func_70(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x1E8A
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_96(*iParam0);
	i = func_97(*iParam0);
	num2 = func_98(*iParam0);
	j = func_99(*iParam0);
	k = func_100(*iParam0);
	l = func_101(*iParam0);

	if (iParam6 == 0 && iParam5 == 0 && iParam4 == 0 && iParam3 == 0 && iParam2 == 0 && iParam1 == 0)
		return;

	if (iParam1 < 0)
		return;

	if (iParam2 < 0)
		return;

	if (iParam3 < 0)
		return;

	if (iParam4 < 0)
		return;

	if (iParam5 < 0)
		return;

	if (iParam6 < 0)
		return;

	for (l = l + iParam1; l >= 60; l = l - 60)
	{
		iParam2 = iParam2 + 1;
	}

	for (k = k + iParam2; k >= 60; k = k - 60)
	{
		iParam3 = iParam3 + 1;
	}

	for (j = j + iParam3; j >= 24; j = j - 24)
	{
		iParam4 = iParam4 + 1;
	}

	num2 = num2 + iParam4;

	for (m = func_102(i, num); num2 > m; m = func_102(i, num))
	{
		iParam5 = iParam5 + 1;
		num2 = num2 - m;
	
		if (i > 11)
		{
			iParam6 = iParam6 + 1;
			i = i - 12;
		}
	}

	for (i = i + iParam5; i > 11; i = i - 12)
	{
		iParam6 = iParam6 + 1;
	}

	if (!bParam7)
		num = num + iParam6;

	func_103(iParam0, l, k, j, num2, i, num);
	return;
}

int func_71(int iParam0, float fParam1, int iParam2) // Position - 0x2012
{
	if (!func_110(iParam0))
		return 0;

	if (iParam2 == 2)
		iParam2 = func_53(2);

	func_111(iParam0, fParam1, iParam2);

	if (!ENTITY::IS_ENTITY_DEAD(Global_1295666.f_3))
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_1295666.f_3, iParam0, BUILTIN::FLOOR(fParam1));

	return 1;
}

void func_72(int iParam0, var uParam1, var uParam2) // Position - 0x2063
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_73(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x207F
{
	if (iParam1 < 0 || iParam1 > 32)
		return false;

	if (func_112(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_113(iParam0))
		return false;

	if (func_114(iParam0))
		return false;

	if (Global_1900460.f_67 && !func_115(iParam0, 1) || func_116(32768))
		if (!func_115(iParam0, 262144) || !Global_1904402.f_8875)
			return false;

	if (!func_117())
		return false;

	return true;
}

void func_74(int iParam0, int iParam1) // Position - 0x2121
{
	int Variable;

	Variable = Global_1904402[iParam0];
	MISC::SET_BIT(&Variable, iParam1);
	Global_1904402[iParam0] = Variable;
	return;
}

BOOL func_75(int iParam0) // Position - 0x2145
{
	switch (iParam0)
	{
		case 0:
			return true;
	
		case 1:
			return true;
	
		case 2:
			return true;
	
		default:
		
	}

	return false;
}

char* func_76(int iParam0) // Position - 0x2174
{
	switch (iParam0)
	{
		case 0:
			return "PlayerOverpower";
	
		case 1:
			return "PlayerOverpower";
	
		case 2:
			return "PlayerOverpower";
	
		default:
		
	}

	return "";
}

void func_77(int iParam0) // Position - 0x21AB
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PED::_GET_NUM_RESERVED_HEALTH(ped);

	num = func_31(2);
	func_32(BUILTIN::TO_FLOAT(iParam0 * num), 0);
	return;
}

void func_78(int iParam0) // Position - 0x21E8
{
	int num;
	int num2;
	int i;
	int num3;
	int num4;
	int j;
	var unk;

	num2 = Global_1156111.f_47689.f_1.f_42;
	unk = 20;

	for (i = 0; i < num2; i = i + 1)
	{
		num = Global_1156111.f_47689.f_1[i /*2*/];
		num3 = func_118(num, 1);
	
		if (Global_1156111.f_35859.f_919[num3 /*12*/] == iParam0)
		{
			func_87(num);
			Global_1156111.f_47689.f_1.f_42 = Global_1156111.f_47689.f_1.f_42 - 1;
		}
		else
		{
			unk[num4 /*2*/] = { Global_1156111.f_47689.f_1[i /*2*/] };
			num4 = num4 + 1;
		}
	}

	for (j = 0; j < num4; j = j + 1)
	{
		Global_1156111.f_47689.f_1[j /*2*/] = { unk[j /*2*/] };
	}

	return;
}

void func_79(int iParam0) // Position - 0x22B8
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PED::_0xFC3B580C4380B5B7(ped);

	num = func_35(2);
	func_36(BUILTIN::TO_FLOAT(iParam0 * num), 0);
	return;
}

void func_80(int iParam0, BOOL bParam1) // Position - 0x22F5
{
	int num;

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = 10;

	num = func_33(2);
	func_34(BUILTIN::TO_FLOAT(iParam0 * num), false, bParam1);
	return;
}

void func_81(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x232A
{
	func_39(iParam0, 100f, bParam1, bParam2, true, 2);
	return;
}

BOOL func_82(int iParam0) // Position - 0x2344
{
	int num;

	num = func_119(iParam0, 1);

	if (num >= 150 && num <= 152)
		return true;

	return false;
}

BOOL func_83(int iParam0) // Position - 0x236C
{
	int num;

	num = func_119(iParam0, 1);

	if (num < 1 || num >= 153)
		return false;

	return true;
}

BOOL func_84(int iParam0) // Position - 0x2394
{
	int num;

	num = func_118(iParam0, 1);

	if (num >= 180 && num <= 182)
		return true;

	return false;
}

BOOL func_85(int iParam0) // Position - 0x23BC
{
	int num;

	num = func_118(iParam0, 1);

	if (num < 2 || num >= 183)
		return false;

	return true;
}

BOOL func_86(int iParam0) // Position - 0x23E4
{
	if (!func_85(iParam0))
		return false;

	return Global_1156111.f_35859.f_919[func_118(iParam0, 1) /*12*/] == -1;
}

// Unhandled jump detected. Output should be considered invalid
int func_87(int iParam0) // Position - 0x2411
{
	int num;
	int num2;
	int num3;
	int num4;
	int i;
	int j;
	int k;

	if (!func_85(iParam0))
		return 0;

	num = func_118(iParam0, 1);

	if (!func_83(Global_1156111.f_35859.f_919[num /*12*/]))
		return 1;

	num4 = func_119(Global_1156111.f_35859.f_919[num /*12*/], 1);

	for (i = 0; i < Global_1156111.f_35859[num4 /*6*/].f_5; i = i + 1)
	{
		num2 = Global_1156111.f_35859[num4 /*6*/][i];
	
		switch (func_120(iParam0, num2))
		{
			case 0:
				func_121(num2, iParam0, i);
				break;
		
			case 1:
				for (j = 0; j < Global_1156111.f_35859.f_11700; j = j + 1)
				{
					if (Global_1156111.f_35859.f_9503[j /*3*/] != num2 || Global_1156111.f_35859.f_9503[j /*3*/].f_1 != iParam0)
					{
					}
					else
					{
						func_121(num2, iParam0, i);
						func_122(&Global_1156111.f_35859.f_9503[j /*3*/]);
						Global_1156111.f_35859.f_11700 = Global_1156111.f_35859.f_11700 - 1;
						Global_1156111.f_35859.f_9503[j /*3*/] = { Global_1156111.f_35859.f_9503[Global_1156111.f_35859.f_11700 /*3*/] };
						func_122(&Global_1156111.f_35859.f_9503[Global_1156111.f_35859.f_11700 /*3*/]);
						break;
					}
				}
				break;
		
			case 2:
				goto 0x25E;
		}
	
		num3 = func_123(num2, 1);
		func_124(num3, -1);
	
		if (Global_1156111.f_35859.f_3116[num3 /*31*/].f_29 <= 0)
		{
			func_125(num3, 0);
		
			for (k = 0; k < Global_1156111.f_35859.f_9502; k = k + 1)
			{
				if (Global_1156111.f_35859.f_9302[k] != num2)
				{
				}
				else
				{
					Global_1156111.f_35859.f_9302[k] = -1;
					Global_1156111.f_35859.f_9502 = Global_1156111.f_35859.f_9502 - 1;
					Global_1156111.f_35859.f_9302[k] = Global_1156111.f_35859.f_9302[Global_1156111.f_35859.f_9502];
					Global_1156111.f_35859.f_9302[Global_1156111.f_35859.f_9502] = -1;
					break;
				}
			}
		}
	}

	Global_1156111.f_35859.f_919[num /*12*/] = -1;
	func_126(&Global_1156111.f_35859.f_919[num /*12*/]);
	return 1;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_88(int iParam0, int iParam1) // Position - 0x26A1
{
	int num;
	int num2;
	int num3;
	int num4;
	int i;

	if (!func_85(iParam0))
		return false;

	num = func_118(iParam0, 1);

	if (!func_83(iParam1))
		return false;

	num2 = func_119(iParam1, 1);

	if (Global_1156111.f_35859.f_919[num /*12*/] == iParam1)
		return true;

	if (func_83(Global_1156111.f_35859.f_919[num /*12*/]))
		func_87(iParam0);

	Global_1156111.f_35859.f_919[num /*12*/] = iParam1;

	for (i = 0; i < Global_1156111.f_35859[num2 /*6*/].f_5; i = i + 1)
	{
		num3 = Global_1156111.f_35859[num2 /*6*/][i];
		num4 = func_123(num3, 1);
	
		switch (func_127(iParam0, num3))
		{
			case 0:
				func_128(num3, iParam0, i);
				break;
		
			case 1:
				Global_1156111.f_35859.f_9503[Global_1156111.f_35859.f_11700 /*3*/] = num3;
				Global_1156111.f_35859.f_9503[Global_1156111.f_35859.f_11700 /*3*/].f_1 = iParam0;
				Global_1156111.f_35859.f_9503[Global_1156111.f_35859.f_11700 /*3*/].f_2 = i;
				Global_1156111.f_35859.f_11700 = Global_1156111.f_35859.f_11700 + 1;
				break;
		
			case 2:
				goto 0x1AB;
		}
	
		if (Global_1156111.f_35859.f_3116[num4 /*31*/].f_29 <= 0)
		{
			Global_1156111.f_35859.f_9302[Global_1156111.f_35859.f_9502] = num3;
			Global_1156111.f_35859.f_9502 = Global_1156111.f_35859.f_9502 + 1;
		}
	
		func_124(num4, 1);
	}

	return true;
}

int func_89(int iParam0) // Position - 0x2859
{
	int num;

	num = func_118(iParam0, 1);

	if (func_129(iParam0))
		return num - 2;
	else if (func_130(iParam0))
		return num - 130;
	else if (func_131(iParam0))
		return num - 166;
	else if (func_132(iParam0))
		return num - 167;
	else if (func_133(iParam0))
		return num - 172;
	else if (func_84(iParam0))
		return num - 180;
	else if (func_134(iParam0))
		return num - 150;

	return -1;
}

int func_90(int iParam0) // Position - 0x28F3
{
	switch (iParam0)
	{
		case 1:
			return joaat("herb_acunas_star_orchid");
	
		case 2:
			return joaat("herb_alaskan_ginseng");
	
		case 3:
			return joaat("herb_american_ginseng");
	
		case 4:
			return joaat("herb_bay_bolete");
	
		case 5:
			return joaat("herb_black_berry");
	
		case 6:
			return joaat("herb_black_currant");
	
		case 7:
			return joaat("herb_burdock_root");
	
		case 8:
			return joaat("herb_chanterelles");
	
		case 9:
			return joaat("herb_cigar_orchid");
	
		case 10:
			return joaat("herb_clamshell_orchid");
	
		case 11:
			return joaat("herb_common_bulrush");
	
		case 12:
			return joaat("herb_creeping_thyme");
	
		case 13:
			return joaat("herb_desert_sage");
	
		case 14:
			return joaat("herb_dragons_mouth_orchid");
	
		case 15:
			return joaat("herb_english_mace");
	
		case 16:
			return joaat("herb_evergreen_huckleberry");
	
		case 17:
			return joaat("herb_ghost_orchid");
	
		case 18:
			return joaat("herb_golden_currant");
	
		case 19:
			return 1516353659;
	
		case 20:
			return joaat("herb_hummingbird_sage");
	
		case 21:
			return joaat("herb_indian_tobacco");
	
		case 22:
			return joaat("herb_lady_of_night_orchid");
	
		case 23:
			return joaat("herb_lady_slipper_orchid");
	
		case 24:
			return joaat("herb_milkweed");
	
		case 25:
			return joaat("herb_moccasin_flower_orchid");
	
		case 26:
			return joaat("herb_night_scented_orchid");
	
		case 27:
			return joaat("herb_oleander_sage");
	
		case 28:
			return joaat("herb_oregano");
	
		case 29:
			return joaat("herb_parasol_mushroom");
	
		case 30:
			return joaat("herb_prairie_poppy");
	
		case 31:
			return joaat("herb_queens_orchid");
	
		case 32:
			return joaat("herb_rams_head");
	
		case 33:
			return joaat("herb_rat_tail_orchid");
	
		case 34:
			return joaat("herb_red_raspberry");
	
		case 35:
			return joaat("herb_red_sage");
	
		case 36:
			return joaat("herb_sparrows_egg_orchid");
	
		case 37:
			return joaat("herb_spider_orchid");
	
		case 38:
			return joaat("herb_vanilla_flower");
	
		case 39:
			return joaat("herb_violet_snowdrop");
	
		case 40:
			return joaat("herb_wild_flwr_agarita");
	
		case 41:
			return joaat("herb_wild_flwr_blue_bonnet");
	
		case 42:
			return joaat("herb_wild_flwr_bitterweed");
	
		case 43:
			return joaat("herb_wild_flwr_blood_flower");
	
		case 44:
			return joaat("herb_wild_flwr_cardinal_flower");
	
		case 45:
			return joaat("herb_wild_flwr_chocolate_daisy");
	
		case 46:
			return joaat("herb_wild_flwr_creek_plum");
	
		case 47:
			return joaat("herb_wild_flwr_rhubarb");
	
		case 48:
			return joaat("herb_wild_flwr_wisteria");
	
		case 49:
			return joaat("herb_wild_carrots");
	
		case 50:
			return joaat("herb_wild_feverfew");
	
		case 51:
			return joaat("herb_wild_mint");
	
		case 52:
			return joaat("herb_wintergreen_berry");
	
		case 53:
			return joaat("herb_yarrow");
	}

	return 0;
}

struct<2> func_91(int iParam0) // Position - 0x2C89
{
	var unk;

	unk.f_1 = iParam0;
	return unk;
}

int func_92(Hash hParam0, int iParam1) // Position - 0x2C9B
{
	var unk;
	int num;
	int i;

	unk = 20;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_TAG_DATA(hParam0, &unk, &num, 20))
	{
		for (i = 0; i < num; i = i + 1)
		{
			if (unk[i /*2*/].f_1 == iParam1)
				return unk[i /*2*/];
		}
	}

	return 0;
}

BOOL func_93(int iParam0) // Position - 0x2CE5
{
	return func_135(&(Global_1956875.f_1565), iParam0, 1);
}

int func_94(BOOL bParam0) // Position - 0x2CFB
{
	if (bParam0)
		return 1;

	return 0;
}

float func_95(Player plParam0) // Position - 0x2D0D
{
	return PLAYER::_GET_PLAYER_MAX_DEAD_EYE(plParam0, 0) - (float)func_136(2);
}

int func_96(int iParam0) // Position - 0x2D23
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_97(int iParam0) // Position - 0x2D48
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_98(int iParam0) // Position - 0x2D5B
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_99(int iParam0) // Position - 0x2D6E
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_100(int iParam0) // Position - 0x2D81
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_101(int iParam0) // Position - 0x2D93
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_102(int iParam0, int iParam1) // Position - 0x2DA5
{
	if (iParam1 < 0)
		iParam1 = 0;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
	
		case 1:
			if (iParam1 % 4 == 0)
				if (iParam1 % 100 != 0)
					return 29;
				else if (iParam1 % 400 == 0)
					return 29;
		
			return 28;
	
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
	
		default:
		
	}

	return 30;
}

void func_103(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x2E3F
{
	func_138(iParam0, iParam6);
	func_139(iParam0, iParam5);
	func_140(iParam0, iParam4);
	func_141(iParam0, iParam3);
	func_142(iParam0, iParam2);
	func_143(iParam0, iParam1);
	return;
}

BOOL func_104(int iParam0) // Position - 0x2E77
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_101(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_100(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_99(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_96(iParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_97(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_98(iParam0);

	if (num6 < 1 || num6 > func_102(num5, num4))
		return false;

	return true;
}

int func_105(int iParam0) // Position - 0x2F53
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 1;
	
		case 2:
			return 2;
	
		default:
		
	}

	return 0;
}

char* func_106(int iParam0) // Position - 0x2F82
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
	
		case 1:
			return "StaminaCoreValue";
	
		case 2:
			return "DeadEyeCoreValue";
	
		default:
		
	}

	return "";
}

char* func_107(int iParam0) // Position - 0x2FB9
{
	switch (iParam0)
	{
		case 0:
			return "isLowHealthCoreActive";
	
		case 1:
			return "isLowStaminaCoreActive";
	
		case 2:
			return "isLowDeadEyeCoreActive";
	
		default:
		
	}

	return "";
}

void func_108(int iParam0, float fParam1, int iParam2) // Position - 0x2FF0
{
	if (iParam2 == 2)
		iParam2 = func_53(2);

	switch (iParam2)
	{
		case 0:
			Global_1956875.f_1431.f_6[iParam0 /*3*/] = fParam1;
			break;
	
		case 1:
			Global_1956875.f_1565.f_2.f_6[iParam0 /*3*/] = fParam1;
			break;
	
		default:
			break;
	}

	return;
}

void func_109(int iParam0, int iParam1, int iParam2) // Position - 0x3042
{
	if (iParam2 == 2)
		iParam2 = func_53(2);

	switch (iParam2)
	{
		case 0:
			Global_1956875.f_1431.f_16[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		case 1:
			Global_1956875.f_1565.f_2.f_16[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_110(int iParam0) // Position - 0x3098
{
	if (func_75(iParam0))
		return true;
	else if (func_144(iParam0))
		return true;

	return false;
}

void func_111(int iParam0, float fParam1, int iParam2) // Position - 0x30BE
{
	if (fParam1 < 0f)
		return;

	if (iParam2 == 2)
		iParam2 = func_53(1);

	switch (iParam2)
	{
		case 0:
			Global_1956875.f_1431.f_26[iParam0] = fParam1;
			break;
	
		case 1:
			Global_1956875.f_1565.f_2.f_26[iParam0] = fParam1;
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_112(int iParam0, int iParam1) // Position - 0x311A
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

BOOL func_113(int iParam0) // Position - 0x3132
{
	if (func_115(iParam0, 4))
		return false;

	return true;
}

BOOL func_114(int iParam0) // Position - 0x3149
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	if (Global_1904402.f_33[iParam0 /*9*/].f_2 & 98304 == 0)
		return false;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	for (i = 0; i < Global_38.f_3542; i = i + 1)
	{
		if (Global_38.f_3542[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (Global_1904402.f_33[iParam0 /*9*/].f_2 & 131072 != 0)
				num2 = 2;
		
			if (Global_1904402.f_33[iParam0 /*9*/].f_2 & 524288 != 0)
				num2 = 5;
		
			num = cloudTimeAsInt - Global_38.f_3542[i /*3*/];
		
			if (Global_38.f_3542[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && Global_1904402.f_33[iParam0 /*9*/].f_2 & 32768 != 0)
				return true;
		}
	}

	return false;
}

BOOL func_115(int iParam0, int iParam1) // Position - 0x3215
{
	return Global_1904402.f_33[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_116(int iParam0) // Position - 0x322E
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_117() // Position - 0x3241
{
	if (!func_145())
		return false;

	return Global_1904402.f_8873;
}

int func_118(int iParam0, int iParam1) // Position - 0x325C
{
	switch (iParam0)
	{
		case -2101912686:
			return 13;
	
		case -2059285007:
			return 167;
	
		case -2006026692:
			return 176;
	
		case -1993903481:
			return 124;
	
		case -1970041458:
			return 142;
	
		case -1935700575:
			return 136;
	
		case -1927422497:
			return 127;
	
		case -1920464018:
			return 58;
	
		case -1919393558:
			return 27;
	
		case -1857550353:
			return 173;
	
		case -1855662261:
			return 55;
	
		case -1840995238:
			return 15;
	
		case -1835722213:
			return 88;
	
		case -1790318144:
			return 106;
	
		case -1786033368:
			return 62;
	
		case -1767968552:
			return 86;
	
		case -1767662471:
			return 32;
	
		case -1729980669:
			return 108;
	
		case -1729554078:
			return 49;
	
		case -1727526861:
			return 109;
	
		case -1722264360:
			return 18;
	
		case -1719665775:
			return 37;
	
		case -1716981503:
			return 107;
	
		case -1697567574:
			return 72;
	
		case -1685270562:
			return 181;
	
		case -1631930150:
			return 166;
	
		case -1629969648:
			return 174;
	
		case -1605880447:
			return 120;
	
		case -1575244501:
			return 61;
	
		case -1551628748:
			return 74;
	
		case -1543433893:
			return 70;
	
		case -1539337723:
			return 121;
	
		case -1525401254:
			return 64;
	
		case -1525233154:
			return 47;
	
		case -1491472827:
			return 94;
	
		case -1486927560:
			return 112;
	
		case -1480068681:
			return 50;
	
		case -1478178768:
			return 148;
	
		case -1465202595:
			return 104;
	
		case -1459368569:
			return 116;
	
		case -1431848307:
			return 76;
	
		case -1418298797:
			return 155;
	
		case -1391865428:
			return 171;
	
		case -1378468884:
			return 60;
	
		case -1291022662:
			return 117;
	
		case -1288042557:
			return 19;
	
		case -1248720641:
			return 7;
	
		case -1229834518:
			return 89;
	
		case -1223791123:
			return 79;
	
		case -1209874968:
			return 45;
	
		case -1197630873:
			return 153;
	
		case -1196069774:
			return 180;
	
		case -1181880939:
			return 80;
	
		case -1170784825:
			return 38;
	
		case -1125028284:
			return 137;
	
		case -1123356036:
			return 147;
	
		case -1100659165:
			return 6;
	
		case -1089821002:
			return 85;
	
		case -1084890102:
			return 172;
	
		case -1080696981:
			return 92;
	
		case -1010031245:
			return 39;
	
		case -992423055:
			return 157;
	
		case -979738281:
			return 77;
	
		case -931294997:
			return 111;
	
		case -920221586:
			return 110;
	
		case -900877140:
			return 30;
	
		case -885737328:
			return 114;
	
		case -885646667:
			return 67;
	
		case -837774766:
			return 78;
	
		case -813902658:
			return 182;
	
		case -799500009:
			return 145;
	
		case -751329575:
			return 139;
	
		case -711254121:
			return 132;
	
		case -660114191:
			return 31;
	
		case -649929946:
			return 53;
	
		case -636552746:
			return 123;
	
		case -587737142:
			return 71;
	
		case -546870456:
			return 159;
	
		case -521477124:
			return 82;
	
		case -481051896:
			return 135;
	
		case -425216802:
			return 17;
	
		case -415437740:
			return 103;
	
		case -415250715:
			return 144;
	
		case -392183396:
			return 90;
	
		case -343572565:
			return 21;
	
		case -340578116:
			return 169;
	
		case -286632741:
			return 8;
	
		case -267135864:
			return 138;
	
		case -233204301:
			return 105;
	
		case -203268054:
			return 143;
	
		case -161625840:
			return 177;
	
		case -126580932:
			return 0;
	
		case -117284255:
			return 122;
	
		case -60432888:
			return 44;
	
		case -56802666:
			return 102;
	
		case -47513954:
			return 99;
	
		case -46116991:
			return 163;
	
		case -35033037:
			return 133;
	
		case -33431232:
			return 12;
	
		case -29822088:
			return 40;
	
		case 0:
			return 1;
	
		case 1213703:
			return 154;
	
		case 54499763:
			return 98;
	
		case 111084081:
			return 56;
	
		case 114587291:
			return 29;
	
		case 149216078:
			return 57;
	
		case 168336706:
			return 149;
	
		case 173401469:
			return 100;
	
		case 180714777:
			return 81;
	
		case 268103762:
			return 97;
	
		case 282858309:
			return 183;
	
		case 320758674:
			return 158;
	
		case 352539363:
			return 179;
	
		case 362862598:
			return 170;
	
		case 398279342:
			return 34;
	
		case 408582472:
			return 5;
	
		case 420477860:
			return 25;
	
		case 456199285:
			return 168;
	
		case 509781427:
			return 93;
	
		case 550487527:
			return 35;
	
		case 576694808:
			return 175;
	
		case 638586808:
			return 118;
	
		case 659100749:
			return 59;
	
		case 666050502:
			return 65;
	
		case 698214003:
			return 2;
	
		case 713106899:
			return 36;
	
		case 780689752:
			return 3;
	
		case 791791441:
			return 125;
	
		case 797908556:
			return 42;
	
		case 798283666:
			return 141;
	
		case 807983049:
			return 150;
	
		case 839199173:
			return 91;
	
		case 846387993:
			return 14;
	
		case 852774198:
			return 113;
	
		case 878491929:
			return 33;
	
		case 887717126:
			return 66;
	
		case 926420921:
			return 51;
	
		case 946848176:
			return 68;
	
		case 952755846:
			return 24;
	
		case 955999834:
			return 134;
	
		case 956867472:
			return 9;
	
		case 1036630721:
			return 10;
	
		case 1037792287:
			return 140;
	
		case 1052684812:
			return 87;
	
		case 1075856357:
			return 95;
	
		case 1078589127:
			return 46;
	
		case 1095779900:
			return 22;
	
		case 1110815339:
			return 152;
	
		case 1138017610:
			return 11;
	
		case 1156950836:
			return 83;
	
		case 1195903441:
			return 52;
	
		case 1278022357:
			return 48;
	
		case 1281707602:
			return 164;
	
		case 1323028278:
			return 41;
	
		case 1374979106:
			return 28;
	
		case 1405624312:
			return 146;
	
		case 1444077748:
			return 23;
	
		case 1449867002:
			return 162;
	
		case 1498983922:
			return 84;
	
		case 1547488310:
			return 161;
	
		case 1554410187:
			return 73;
	
		case 1585362808:
			return 16;
	
		case 1636352616:
			return 151;
	
		case 1662680949:
			return 178;
	
		case 1698995037:
			return 4;
	
		case 1769731136:
			return 115;
	
		case 1801131110:
			return 75;
	
		case 1806354060:
			return 96;
	
		case 1811663962:
			return 131;
	
		case 1828803907:
			return 20;
	
		case 1829805500:
			return 54;
	
		case 1830494920:
			return 101;
	
		case 1838787462:
			return 129;
	
		case 1865781806:
			return 165;
	
		case 1899963938:
			return 63;
	
		case 1900141702:
			return 156;
	
		case 1903067887:
			return 126;
	
		case 1907663129:
			return 43;
	
		case 2040423027:
			return 128;
	
		case 2050123975:
			return 130;
	
		case 2096770678:
			return 119;
	
		case 2110112797:
			return 69;
	
		case 2119170919:
			return 160;
	
		case 2132307595:
			return 26;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

int func_119(int iParam0, int iParam1) // Position - 0x3A5D
{
	switch (iParam0)
	{
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_3"):
			return 100;
	
		case joaat("CONTENT__PREDATOR__LEVEL_0"):
			return 136;
	
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_3"):
			return 63;
	
		case -2082434331:
			return 152;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_2"):
			return 65;
	
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_2"):
			return 93;
	
		case -2038430863:
			return 151;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_1"):
			return 64;
	
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_2"):
			return 35;
	
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_3"):
			return 6;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2"):
			return 56;
	
		case joaat("CONTENT__PREDATOR__LEVEL_3"):
			return 139;
	
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_3"):
			return 54;
	
		case joaat("UNLOCK__ROLE__POTENTIAL_BONUS"):
			return 110;
	
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_2"):
			return 78;
	
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_1"):
			return 80;
	
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_2"):
			return 62;
	
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME"):
			return 73;
	
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_2"):
			return 41;
	
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_1"):
			return 25;
	
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_1"):
			return 92;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2"):
			return 47;
	
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_1"):
			return 61;
	
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_3"):
			return 3;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_1"):
			return 49;
	
		case joaat("CONTENT__ACTIVE_DEED__FIRE_VULNERABILITY"):
			return 148;
	
		case joaat("UNLOCK__ROLE__AWARENESS_BONUS"):
			return 107;
	
		case joaat("UNLOCK__ROLE__INTUITION_BONUS"):
			return 111;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1"):
			return 55;
	
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_3"):
			return 9;
	
		case joaat("CONTENT__PREDATOR__LEVEL_1"):
			return 137;
	
		case -1246069683:
			return 124;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1"):
			return 46;
	
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_1"):
			return 74;
	
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_3"):
			return 69;
	
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_1"):
			return 7;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_4"):
			return 131;
	
		case joaat("CONTENT__PREDATOR__LEVEL_7"):
			return 143;
	
		case -1105699593:
			return 153;
	
		case -1047626954:
			return 118;
	
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_1"):
			return 1;
	
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_3"):
			return 79;
	
		case -980934770:
			return 125;
	
		case joaat("CONTENT__PREDATOR__LEVEL_4"):
			return 140;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_5"):
			return 132;
	
		case joaat("CONTENT__PREDATOR__LEVEL_6"):
			return 142;
	
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_3"):
			return 60;
	
		case -821191074:
			return 115;
	
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_1"):
			return 40;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3"):
			return 48;
	
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_1"):
			return 77;
	
		case joaat("ABILITY_CARD__HANGMAN_TIER_2"):
			return 17;
	
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_2"):
			return 2;
	
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_3"):
			return 72;
	
		case joaat("EQUIPMENT__NED_KELLY_FREEROAM"):
			return 121;
	
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_2"):
			return 59;
	
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_3"):
			return 85;
	
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_3"):
			return 94;
	
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_1"):
			return 4;
	
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_2"):
			return 68;
	
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_1"):
			return 58;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_1"):
			return 128;
	
		case joaat("EQUIPMENT__NED_KELLY_ADVERSARY"):
			return 119;
	
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_1"):
			return 10;
	
		case joaat("CONTENT__HUNTED__MASKED"):
			return 146;
	
		case joaat("CONTENT__PASSIVE_MODE"):
			return 135;
	
		case -193167881:
			return 127;
	
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_3"):
			return 30;
	
		case joaat("EQUIPMENT__NED_KELLY_GOLDEN"):
			return 122;
	
		case joaat("CONSUMABLE__DAILY_STEW"):
			return 150;
	
		case joaat("CONTENT__PREDATOR__LEVEL_5"):
			return 141;
	
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_1"):
			return 67;
	
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_1"):
			return 43;
	
		case joaat("UNLOCK__ROLE__EFFICIENCY_BONUS"):
			return 106;
	
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_3"):
			return 39;
	
		case -1:
			return 0;
	
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_2"):
			return 8;
	
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_2"):
			return 11;
	
		case 130533095:
			return 126;
	
		case joaat("ABILITY_CARD__HANGMAN_TIER_3"):
			return 18;
	
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_2"):
			return 44;
	
		case 158579484:
			return 117;
	
		case joaat("STATUS_EFFECT__TOXIC_MOONSHINE"):
			return 101;
	
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_3"):
			return 15;
	
		case joaat("UNLOCK__ROLE__EAGLE_EYE_PLUS"):
			return 113;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_6"):
			return 133;
	
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_1"):
			return 86;
	
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_2"):
			return 71;
	
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_2"):
			return 29;
	
		case joaat("UNLOCK__ROLE__PERCEPTION_BONUS"):
			return 105;
	
		case joaat("STATUS_EFFECT__POISON"):
			return 102;
	
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_3"):
			return 12;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_3"):
			return 51;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_7"):
			return 134;
	
		case joaat("UNLOCK__ROLE__PROTECTION_MOONSHINE_BONUS"):
			return 109;
	
		case 549687162:
			return 145;
	
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_1"):
			return 28;
	
		case joaat("ABILITY_CARD__HANGMAN_TIER_1"):
			return 16;
	
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_2"):
			return 26;
	
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_1"):
			return 98;
	
		case joaat("CONTENT__ACTIVE_DEED__BOUNTER_HUNTER_ACCURACY_DEBUFF"):
			return 149;
	
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_3"):
			return 45;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_2"):
			return 50;
	
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_3"):
			return 88;
	
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_3"):
			return 36;
	
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_2"):
			return 90;
	
		case joaat("CONTENT__PREDATOR__LEVEL_8"):
			return 144;
	
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_2"):
			return 81;
	
		case joaat("UNLOCK__ROLE__MASTER_DISTILLER_BONUS"):
			return 114;
	
		case 808176588:
			return 116;
	
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_2"):
			return 38;
	
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_1"):
			return 70;
	
		case joaat("ABILITY_CARD__HORSEMAN_TIER_3"):
			return 21;
	
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_2"):
			return 14;
	
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_1"):
			return 89;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2"):
			return 96;
	
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_3"):
			return 82;
	
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_2"):
			return 87;
	
		case joaat("UNLOCK__ROLE__FOCUS_BONUS"):
			return 104;
	
		case 1130659268:
			return 123;
	
		case joaat("ABILITY_CARD__HORSEMAN_TIER_2"):
			return 20;
	
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_2"):
			return 75;
	
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_1"):
			return 31;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3"):
			return 97;
	
		case joaat("ABILITY_CARD__HORSEMAN_TIER_1"):
			return 19;
	
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_2"):
			return 32;
	
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_3"):
			return 24;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_2"):
			return 129;
	
		case joaat("UNLOCK__ROLE__DIVINATION_BONUS"):
			return 112;
	
		case joaat("CONTENT__PREDATOR__LEVEL_2"):
			return 138;
	
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_1"):
			return 83;
	
		case joaat("CONTENT__ACTIVE_DEED__EAGLE_EYE_GENERIC_BUFF"):
			return 147;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3"):
			return 57;
	
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_1"):
			return 22;
	
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_3"):
			return 33;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_3"):
			return 130;
	
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_1"):
			return 13;
	
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_2"):
			return 84;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1"):
			return 95;
	
		case joaat("EQUIPMENT__NED_KELLY_COOP"):
			return 120;
	
		case joaat("STATUS_EFFECT__TRACKING"):
			return 103;
	
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_2"):
			return 23;
	
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_2"):
			return 99;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_3"):
			return 66;
	
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_1"):
			return 52;
	
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_3"):
			return 27;
	
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_3"):
			return 76;
	
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_2"):
			return 5;
	
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_3"):
			return 42;
	
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_1"):
			return 37;
	
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_1"):
			return 34;
	
		case joaat("UNLOCK__ROLE__PROTECTION_TRADER_BONUS"):
			return 108;
	
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_2"):
			return 53;
	
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_3"):
			return 91;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

int func_120(int iParam0, int iParam1) // Position - 0x4115
{
	Player player;
	Player player2;
	int num;

	player = func_146(iParam0);
	player2 = Global_1295666;
	num = func_123(iParam1, 1);

	switch (Global_1156111.f_35859.f_3116[num /*31*/].f_1)
	{
		case joaat("ON_DISABLE"):
			if (player2 == player)
				return 0;
			else
				return 2;
			break;
	
		case joaat("Duration"):
		case joaat("DURATION_OR_MISS"):
		case joaat("ALLY_LEAVE_DEADEYE"):
		case 1002704651:
		case 1270499458:
			return 1;
	
		default:
			if (player2 == player)
				return 1;
			break;
	}

	return 2;
}

int func_121(int iParam0, int iParam1, int iParam2) // Position - 0x4198
{
	int num;
	int num2;

	if (!func_85(iParam1))
		return 0;

	if (!func_147(iParam0))
		return 0;

	num = func_123(iParam0, 1);
	func_148(iParam0, iParam1, iParam2);

	if (func_149(Global_1156111.f_35859.f_3116[num /*31*/]) && func_150(iParam0, Global_1156111.f_35859.f_3116[num /*31*/].f_4))
	{
		num2 = { func_151(Global_1156111.f_35859.f_3116[num /*31*/].f_4) };
	
		if (func_152(num2))
			if (func_153(num2, num2.f_1, num2.f_2))
				func_154(Global_1156111.f_35859.f_3116[num /*31*/].f_4, num2, num2.f_1, num2.f_2);
			else
				func_155(Global_1156111.f_35859.f_3116[num /*31*/].f_4);
		else
			func_155(Global_1156111.f_35859.f_3116[num /*31*/].f_4);
	}

	return 1;
}

void func_122(int iParam0) // Position - 0x4290
{
	*iParam0 = -1;
	iParam0->f_1 = 0;
	iParam0->f_2 = -1;
	return;
}

int func_123(int iParam0, int iParam1) // Position - 0x42A6
{
	switch (iParam0)
	{
		case joaat("UNLOCK__ROLE__POTENTIAL_BONUS_EFFECT"):
			return 145;
	
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_2_EFFECT"):
			return 108;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_1_EFFECT"):
			return 90;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2_LOCAL_EFFECT"):
			return 79;
	
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_3_EFFECT"):
			return 60;
	
		case joaat("STATUS_EFFECT__POISON_EFFECT"):
			return 137;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_2_EFFECT"):
			return 91;
	
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_2_EFFECT"):
			return 75;
	
		case -2019073637:
			return 198;
	
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_3_EFFECT"):
			return 26;
	
		case joaat("CONTENT__PREDATOR__LEVEL_2_EFFECTS"):
			return 180;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_3_EFFECT"):
			return 92;
	
		case joaat("CONTENT__ACTIVE_DEED__FIRE_VULNERABILITY_EFFECT"):
			return 194;
	
		case joaat("ABILITY_CARD__HANGMAN_TIER_2_EFFECT"):
			return 28;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2_DAMAGE_TAKEN_EFFECT"):
			return 130;
	
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_3_EFFECT"):
			return 49;
	
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_3_EFFECT"):
			return 22;
	
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_1_EFFECT"):
			return 55;
	
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_DEALT_ON_HORSEBACK_INDICATOR"):
			return 6;
	
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_2_EFFECT"):
			return 134;
	
		case joaat("ABILITY_CARD__HANGMAN_TIER_3_EFFECT"):
			return 29;
	
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_3_EFFECT"):
			return 16;
	
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_3_EFFECT"):
			return 112;
	
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_3_EFFECT"):
			return 106;
	
		case joaat("ABILITY_CARD__HANGMAN_INDICATOR"):
			return 30;
	
		case joaat("ABILITY_CARD__DEFAULT_DAMAGED_INDICATOR"):
			return 8;
	
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_2_EFFECT"):
			return 111;
	
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_2_EFFECT"):
			return 96;
	
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_3_EFFECT"):
			return 45;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1_EFFECT"):
			return 63;
	
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_2_EFFECT"):
			return 38;
	
		case joaat("CONTENT__PREDATOR__BASE_EFFECTS"):
			return 188;
	
		case joaat("EQUIPMENT__NED_KELLY_BASE_IMMUNITIES"):
			return 156;
	
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_INDICATOR"):
			return 50;
	
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_1_EFFECT"):
			return 117;
	
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_3_EFFECT"):
			return 39;
	
		case joaat("CONTENT__PREDATOR__LEVEL_4_EFFECTS"):
			return 182;
	
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_3_EFFECT"):
			return 109;
	
		case joaat("ABILITY_CARD__HORSEMAN_TIER_3_EFFECT"):
			return 33;
	
		case -1394912816:
			return 199;
	
		case -1391351739:
			return 166;
	
		case joaat("ABILITY_CARD__HANGMAN_TIER_1_EFFECT"):
			return 27;
	
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_1_EFFECT"):
			return 110;
	
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_1_COST"):
			return 1;
	
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_PENALTY"):
			return 46;
	
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_2_COST"):
			return 2;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3_DAMAGE_TAKEN_EFFECT"):
			return 132;
	
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_3_EFFECT"):
			return 119;
	
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_3_EFFECT"):
			return 76;
	
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_AURA"):
			return 61;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_7_EFFECT"):
			return 173;
	
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_1_EFFECT"):
			return 47;
	
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_1_EFFECT"):
			return 74;
	
		case joaat("ABILITY_CARD__HORSEMAN_TIER_1_EFFECT"):
			return 31;
	
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_1_EFFECT"):
			return 123;
	
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_2_EFFECT"):
			return 124;
	
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_2_EFFECT"):
			return 11;
	
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME_INDICATOR"):
			return 103;
	
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_2_EFFECT"):
			return 21;
	
		case joaat("CONTENT__PREDATOR__LEVEL_6_EFFECTS"):
			return 184;
	
		case -749371485:
			return 164;
	
		case joaat("UNLOCK__ROLE__AWARENESS_BONUS_EFFECT"):
			return 142;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3_LOCAL_EFFECT"):
			return 81;
	
		case joaat("UNLOCK__ROLE__EAGLE_EYE_PLUS_EFFECT"):
			return 148;
	
		case joaat("CONTENT__ACTIVE_DEED__EAGLE_EYE_GENERIC_BUFF_EFFECT"):
			return 193;
	
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_3_EFFECT"):
			return 57;
	
		case joaat("CONTENT__PREDATOR__LEVEL_3_EFFECTS"):
			return 181;
	
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_2_EFFECT"):
			return 48;
	
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_2_EFFECT"):
			return 59;
	
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_3_EFFECT"):
			return 97;
	
		case joaat("CONTENT__PREDATOR__LEVEL_7_EFFECTS"):
			return 185;
	
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_1_EFFECT"):
			return 104;
	
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_3_EFFECT"):
			return 19;
	
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_1_EFFECT"):
			return 133;
	
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_1_EFFECT"):
			return 113;
	
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_INDICATOR"):
			return 23;
	
		case joaat("EQUIPMENT__NED_KELLY_FREEROAM_EFFECT"):
			return 160;
	
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_TAKEN_INDICATOR"):
			return 5;
	
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_AURA"):
			return 13;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3_COST"):
			return 66;
	
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_DEALT_INDICATOR"):
			return 4;
	
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_1_COST"):
			return 51;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_6_EFFECT"):
			return 172;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_PENALTY"):
			return 68;
	
		case -254950601:
			return 152;
	
		case -242870769:
			return 163;
	
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_2_EFFECT"):
			return 35;
	
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_2_EFFECT"):
			return 105;
	
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_2_EFFECT"):
			return 41;
	
		case joaat("EQUIPMENT__NED_KELLY_BASE_EFFECTS"):
			return 155;
	
		case -124368414:
			return 197;
	
		case -106398498:
			return 153;
	
		case -97000889:
			return 86;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_3_EFFECT"):
			return 169;
	
		case -1:
			return 0;
	
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_2_EFFECT"):
			return 56;
	
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_3_EFFECT"):
			return 125;
	
		case joaat("ABILITY_CARD__DEFAULT_WINDED_INDICATOR"):
			return 9;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_1_EFFECT"):
			return 69;
	
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_2_EFFECT"):
			return 15;
	
		case joaat("CONTENT__PASSIVE_MODE__IMMUNITIES_EFFECT"):
			return 177;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2_COST"):
			return 64;
	
		case joaat("CONTENT__PASSIVE_MODE__MOUNT_EFFECTS"):
			return 175;
	
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_1_EFFECT"):
			return 98;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1_LOCAL_EFFECT"):
			return 77;
	
		case 275909046:
			return 151;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_5_EFFECT"):
			return 171;
	
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_INDICATOR"):
			return 54;
	
		case joaat("STATUS_EFFECT__TOXIC_MOONSHINE_EFFECT"):
			return 136;
	
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_3_EFFECT"):
			return 89;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1_DAMAGE_DEALT_EFFECT"):
			return 127;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2_DAMAGE_DEALT_EFFECT"):
			return 129;
	
		case 558636891:
			return 187;
	
		case joaat("CONSUMABLE__DAILY_STEW_EFFECT"):
			return 196;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2_REMOTE_EFFECT"):
			return 80;
	
		case 634217179:
			return 150;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_2_EFFECT"):
			return 70;
	
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_1_EFFECT"):
			return 95;
	
		case joaat("CONTENT__ACTIVE_DEED__BOUNTER_HUNTER_ACCURACY_DEBUFF_EFFECT"):
			return 195;
	
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_1_EFFECT"):
			return 107;
	
		case joaat("UNLOCK__ROLE__FOCUS_BONUS_EFFECT"):
			return 139;
	
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_1_EFFECT"):
			return 20;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3_REMOTE_EFFECT"):
			return 82;
	
		case joaat("CONTENT__PREDATOR__LEVEL_0_EFFECTS"):
			return 178;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2_EFFECT"):
			return 65;
	
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_1_EFFECT"):
			return 58;
	
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_1_EFFECT"):
			return 83;
	
		case joaat("UNLOCK__ROLE__MASTER_DISTILLER_BONUS_EFFECT"):
			return 149;
	
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_2_EFFECT"):
			return 18;
	
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME_COST"):
			return 102;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_4_EFFECT"):
			return 170;
	
		case joaat("CONTENT__PREDATOR__LEVEL_8_EFFECTS"):
			return 186;
	
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_2_EFFECT"):
			return 84;
	
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_3_EFFECT"):
			return 100;
	
		case joaat("CONTENT__HUNTED__MASKED_EFFECTS"):
			return 192;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_DEADEYE_INDICATOR"):
			return 93;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3_DAMAGE_DEALT_EFFECT"):
			return 131;
	
		case joaat("CONTENT__PREDATOR__LEVEL_5_EFFECTS"):
			return 183;
	
		case joaat("EQUIPMENT__NED_KELLY_BASE_RESTRICTIONS"):
			return 157;
	
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_1_EFFECT"):
			return 17;
	
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_3_EFFECT"):
			return 122;
	
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_3_EFFECT"):
			return 115;
	
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_1_EFFECT"):
			return 34;
	
		case joaat("ABILITY_CARD__HORSEMAN_TIER_2_EFFECT"):
			return 32;
	
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_1_EFFECT"):
			return 43;
	
		case joaat("STATUS_EFFECT__TRACKING_EFFECT"):
			return 138;
	
		case joaat("CONTENT__PASSIVE_MODE__VEHICLE_EFFECTS"):
			return 176;
	
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_3_EFFECT"):
			return 42;
	
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_1_EFFECT"):
			return 10;
	
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_3_EFFECT"):
			return 12;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_AURA"):
			return 73;
	
		case 1256374770:
			return 165;
	
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_3_EFFECT"):
			return 36;
	
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_1_EFFECT"):
			return 37;
	
		case joaat("CONTENT__PREDATOR__BASE_IMMUNITIES"):
			return 190;
	
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_2_EFFECT"):
			return 114;
	
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_2_EFFECT"):
			return 99;
	
		case 1305406380:
			return 162;
	
		case joaat("UNLOCK__ROLE__PROTECTION_MOONSHINE_BONUS_EFFECT"):
			return 144;
	
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_2_EFFECT"):
			return 25;
	
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_2_EFFECT"):
			return 88;
	
		case joaat("UNLOCK__ROLE__PROTECTION_TRADER_BONUS_EFFECT"):
			return 143;
	
		case joaat("UNLOCK__ROLE__PERCEPTION_BONUS_EFFECT"):
			return 140;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_EAGLE_EYE_INDICATOR"):
			return 94;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_2_EFFECT"):
			return 168;
	
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_3_EFFECT"):
			return 85;
	
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_1_EFFECT"):
			return 87;
	
		case 1462245043:
			return 154;
	
		case joaat("CONTENT__PREDATOR__BASE_EFFECTS_VULNERABLE"):
			return 189;
	
		case joaat("UNLOCK__ROLE__INTUITION_BONUS_EFFECT"):
			return 146;
	
		case joaat("CONTENT__PREDATOR__RESPAWN_EFFECTS"):
			return 191;
	
		case joaat("UNLOCK__ROLE__DIVINATION_BONUS_EFFECT"):
			return 147;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1_COST"):
			return 62;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1_REMOTE_EFFECT"):
			return 78;
	
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_INDICATOR"):
			return 126;
	
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_INDICATOR"):
			return 116;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_PENALTIES"):
			return 72;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3_EFFECT"):
			return 67;
	
		case joaat("ABILITY_CARD__WINNING_STREAK_INDICATOR"):
			return 101;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1_DAMAGE_TAKEN_EFFECT"):
			return 128;
	
		case joaat("EQUIPMENT__NED_KELLY_ADVERSARY_EFFECT"):
			return 158;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_3_EFFECT"):
			return 71;
	
		case joaat("CONTENT__PREDATOR__LEVEL_1_EFFECTS"):
			return 179;
	
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_3_EFFECT"):
			return 135;
	
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_3_COST"):
			return 3;
	
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_2_EFFECT"):
			return 121;
	
		case joaat("UNLOCK__ROLE__EFFICIENCY_BONUS_EFFECT"):
			return 141;
	
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_1_EFFECT"):
			return 24;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_1_EFFECT"):
			return 167;
	
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_1_EFFECT"):
			return 40;
	
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_TAKEN_ON_HORSEBACK_INDICATOR"):
			return 7;
	
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_3_COST"):
			return 53;
	
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_2_EFFECT"):
			return 118;
	
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_2_EFFECT"):
			return 44;
	
		case joaat("EQUIPMENT__NED_KELLY_GOLDEN_EFFECT"):
			return 161;
	
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_2_COST"):
			return 52;
	
		case joaat("CONTENT__PASSIVE_MODE__DAMAGE_EFFECTS"):
			return 174;
	
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_1_EFFECT"):
			return 120;
	
		case joaat("EQUIPMENT__NED_KELLY_COOP_EFFECT"):
			return 159;
	
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_1_EFFECT"):
			return 14;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

void func_124(int iParam0, int iParam1) // Position - 0x4B57
{
	Global_1156111.f_35859.f_3116[iParam0 /*31*/].f_29 = Global_1156111.f_35859.f_3116[iParam0 /*31*/].f_29 + iParam1;
	return;
}

void func_125(int iParam0, int iParam1) // Position - 0x4B86
{
	Global_1156111.f_35859.f_3116[iParam0 /*31*/].f_29 = iParam1;
	return;
}

void func_126(int iParam0) // Position - 0x4BA2
{
	int i;

	for (i = 0; i < 4; i = i + 1)
	{
		iParam0->f_1[i /*2*/] = 0;
		iParam0->f_1[i /*2*/].f_1 = 0;
	}

	return;
}

int func_127(int iParam0, int iParam1) // Position - 0x4BD0
{
	Player player;
	Player player2;
	int num;

	player = func_146(iParam0);
	player2 = Global_1295666;
	num = func_123(iParam1, 1);

	switch (Global_1156111.f_35859.f_3116[num /*31*/])
	{
		case joaat("ENTER_REVIVED_REMOTE"):
		case -2129621195:
		case -1503245593:
		case joaat("ALLY_ENTER_DEADEYE"):
			return 1;
	
		case joaat("ON_ENABLE"):
			if (player2 == player)
				return 0;
			else
				return 2;
			break;
	
		default:
			if (player2 == player)
				return 1;
			break;
	}

	return 2;
}

int func_128(int iParam0, int iParam1, int iParam2) // Position - 0x4C4B
{
	int num;
	BOOL flag;
	int num2;

	if (!func_85(iParam1))
		return 0;

	if (!func_147(iParam0))
		return 0;

	num = func_123(iParam0, 1);

	if (!func_156(iParam2))
		return 0;

	flag = func_149(Global_1156111.f_35859.f_3116[num /*31*/]);

	if (flag && func_157(Global_1156111.f_35859.f_3116[num /*31*/].f_4))
	{
		num2 = { func_158(Global_1156111.f_35859.f_3116[num /*31*/].f_4) };
	
		if (!func_148(num2, num2.f_1, num2.f_2))
			return 0;
	}

	if (func_153(iParam0, iParam1, iParam2))
	{
		if (flag)
			func_154(Global_1156111.f_35859.f_3116[num /*31*/].f_4, iParam0, iParam1, iParam2);
	
		return 1;
	}

	return 0;
}

BOOL func_129(int iParam0) // Position - 0x4D22
{
	int num;

	num = func_118(iParam0, 1);

	if (num >= 2 && num <= 129)
		return true;

	return false;
}

BOOL func_130(int iParam0) // Position - 0x4D49
{
	int num;

	num = func_118(iParam0, 1);

	if (num >= 130 && num <= 149)
		return true;

	return false;
}

BOOL func_131(int iParam0) // Position - 0x4D71
{
	int num;

	num = func_118(iParam0, 1);

	if (num >= 166 && num <= 166)
		return true;

	return false;
}

BOOL func_132(int iParam0) // Position - 0x4D99
{
	int num;

	num = func_118(iParam0, 1);

	if (num >= 167 && num <= 171)
		return true;

	return false;
}

BOOL func_133(int iParam0) // Position - 0x4DC1
{
	int num;

	num = func_118(iParam0, 1);

	if (num >= 172 && num <= 179)
		return true;

	return false;
}

BOOL func_134(int iParam0) // Position - 0x4DE9
{
	int num;

	num = func_118(iParam0, 1);

	if (num >= 150 && num <= 165)
		return true;

	return false;
}

BOOL func_135(Any* panParam0, int iParam1, int iParam2) // Position - 0x4E11
{
	return MISC::IS_BIT_SET(panParam0->[iParam1 / 31], iParam1 % 31);
}

int func_136(int iParam0) // Position - 0x4E48
{
	switch (iParam0)
	{
		case 0:
			return func_31(2) * 2;
	
		case 1:
			return func_35(2) * 2;
	
		case 2:
			return func_33(2) * 2;
	
		default:
		
	}

	return -1;
}

var func_137(BOOL bParam0, var uParam1, var uParam2) // Position - 0x4E89
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_138(int iParam0, int iParam1) // Position - 0x4EA0
{
	if (iParam1 < 0)
		return;

	if (iParam1 > 1930 || iParam1 < 1866)
		return;

	*iParam0 = *iParam0 - *iParam0 & 2080374784;

	if (iParam1 < 1898)
	{
		*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(1898 - iParam1, 26);
		*iParam0 = *iParam0 | -2147483648;
	}
	else
	{
		*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1 - 1898, 26);
		*iParam0 = *iParam0 - *iParam0 & -2147483648;
	}

	return;
}

void func_139(int iParam0, int iParam1) // Position - 0x4F26
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*iParam0 = *iParam0 - *iParam0 & 62914560;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_140(int iParam0, int iParam1) // Position - 0x4F62
{
	int num;
	int num2;

	num = func_97(*iParam0);
	num2 = func_96(*iParam0);

	if (iParam1 < 1 || iParam1 > func_102(num, num2))
		return;

	*iParam0 = *iParam0 - *iParam0 & 4063232;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_141(int iParam0, int iParam1) // Position - 0x4FB5
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*iParam0 = *iParam0 - *iParam0 & 126976;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_142(int iParam0, int iParam1) // Position - 0x4FF0
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*iParam0 = *iParam0 - *iParam0 & 4032;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_143(int iParam0, int iParam1) // Position - 0x5029
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*iParam0 = *iParam0 - *iParam0 & 63;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

BOOL func_144(int iParam0) // Position - 0x5061
{
	switch (iParam0)
	{
		case 12:
			return true;
	
		case 13:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_145() // Position - 0x5086
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

Player func_146(int iParam0) // Position - 0x509A
{
	if (func_129(iParam0))
		return func_89(iParam0) % 32;

	return Global_1295666;
}

BOOL func_147(int iParam0) // Position - 0x50BB
{
	int num;

	num = func_123(iParam0, 1);

	if (num < 1 || num >= 199)
		return false;

	return true;
}

BOOL func_148(int iParam0, int iParam1, int iParam2) // Position - 0x50E3
{
	int num;
	int num2;
	int num3;
	int num4;
	int i;
	int num5;
	int num6;
	int j;
	int num7;

	num = func_118(iParam1, 1);
	num2 = func_123(iParam0, 1);
	num3 = func_119(Global_1156111.f_35859.f_919[num /*12*/], 1);

	if (Global_1156111.f_35859[num3 /*6*/][iParam2] != iParam0)
		return false;

	if (!Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/])
		return true;

	Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/] = false;

	for (i = 0; i < Global_1156111.f_35859.f_3116[num2 /*31*/].f_16; i = i + 1)
	{
		num4 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/];
		num5 = func_159(num4, 1);
	
		if (!func_160(num4))
		{
		}
		else
		{
			Global_1156111.f_2169[num5 /*205*/].f_1[num2] = Global_1156111.f_2169[num5 /*205*/].f_1[num2] - 1;
			Global_1156111.f_2169[num5 /*205*/].f_201 = Global_1156111.f_2169[num5 /*205*/].f_201 - func_161(&Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/]);
			func_162(num4);
		}
	}

	for (j = 0; j < Global_1156111.f_35859.f_3116[num2 /*31*/].f_28; j = j + 1)
	{
		num6 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_17[j /*2*/];
	
		if (!func_163(num6))
		{
		}
		else
		{
			num7 = func_164(num6, 1);
			Global_1156111.f_21645[num7 /*209*/][num2] = Global_1156111.f_21645[num7 /*209*/][num2] - 1;
		
			if (Global_1156111.f_21645[num7 /*209*/][num2] <= 0)
				MISC::_CLEAR_BIT_FLAG(&(Global_1156111.f_21645[num7 /*209*/].f_200), num2);
		
			if (!MISC::_IS_ANY_BIT_FLAG_SET(&(Global_1156111.f_21645[num7 /*209*/].f_200)))
			{
				Global_1156111.f_21645[num7 /*209*/].f_208 = 0;
				func_165(num6);
			}
		}
	}

	return true;
}

BOOL func_149(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30) // Position - 0x52D4
{
	return uParam0.f_4 != 0;
}

BOOL func_150(int iParam0, int iParam1) // Position - 0x52E2
{
	int num;

	if (!func_147(iParam0))
		return false;

	if (!func_166(iParam1))
		return false;

	num = func_167(iParam1, 1);
	return Global_1156111.f_35859.f_9286[num /*3*/] == iParam0;
}

Vector3 func_151(int iParam0) // Position - 0x5322
{
	int num;
	var unk;

	num = func_168(iParam0);

	if (num == -1)
	{
		unk = -1;
		unk.f_2 = -1;
		return unk;
	}

	return Global_1156111.f_35859.f_9503[num /*3*/];
}

BOOL func_152(int iParam0, var uParam1, var uParam2) // Position - 0x535E
{
	if (!func_147(iParam0))
		return false;

	if (!func_85(iParam0.f_1))
		return false;

	if (!func_156(iParam0.f_2))
		return false;

	return true;
}

BOOL func_153(int iParam0, int iParam1, int iParam2) // Position - 0x5395
{
	int num;
	int num2;
	int num3;
	int num4;
	int i;
	int num5;
	int num6;
	int j;
	int num7;

	num = func_118(iParam1, 1);
	num2 = func_123(iParam0, 1);
	num3 = func_119(Global_1156111.f_35859.f_919[num /*12*/], 1);

	if (Global_1156111.f_35859[num3 /*6*/][iParam2] != iParam0)
		return false;

	Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/].f_1 = Global_1295666.f_16;

	if (Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/])
		return true;

	Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/] = true;

	for (i = 0; i < Global_1156111.f_35859.f_3116[num2 /*31*/].f_16; i = i + 1)
	{
		num4 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/];
		num5 = func_159(num4, 1);
	
		if (!func_160(num4))
		{
		}
		else
		{
			Global_1156111.f_2169[num5 /*205*/].f_1[num2] = Global_1156111.f_2169[num5 /*205*/].f_1[num2] + 1;
			Global_1156111.f_2169[num5 /*205*/].f_201 = Global_1156111.f_2169[num5 /*205*/].f_201 + func_161(&Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/]);
			func_169(num4);
		}
	}

	for (j = 0; j < Global_1156111.f_35859.f_3116[num2 /*31*/].f_28; j = j + 1)
	{
		num6 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_17[j /*2*/];
	
		if (!func_163(num6))
		{
		}
		else if (!func_170(&Global_1156111.f_35859.f_3116[num2 /*31*/].f_17[j /*2*/]))
		{
		}
		else
		{
			num7 = func_164(num6, 1);
			Global_1156111.f_21645[num7 /*209*/][num2] = Global_1156111.f_21645[num7 /*209*/][num2] + 1;
			MISC::_SET_BIT_FLAG(&(Global_1156111.f_21645[num7 /*209*/].f_200), num2);
		
			if (!Global_1156111.f_21645[num7 /*209*/].f_208)
			{
				Global_1156111.f_21645[num7 /*209*/].f_208 = 1;
				func_171(num6);
			}
		}
	}

	func_172(Global_1156111.f_35859.f_3116[num2 /*31*/].f_2);
	return true;
}

void func_154(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x55C3
{
	int num;

	if (!func_166(iParam0))
		return;

	num = func_167(iParam0, 1);

	if (!func_147(iParam1))
		return;

	if (!func_85(iParam2))
		return;

	if (!func_156(iParam3))
		return;

	Global_1156111.f_35859.f_9286[num /*3*/] = iParam1;
	Global_1156111.f_35859.f_9286[num /*3*/].f_1 = iParam2;
	Global_1156111.f_35859.f_9286[num /*3*/].f_2 = iParam3;
	return;
}

void func_155(int iParam0) // Position - 0x5642
{
	int num;

	if (!func_166(iParam0))
		return;

	num = func_167(iParam0, 1);
	Global_1156111.f_35859.f_9286[num /*3*/] = -1;
	Global_1156111.f_35859.f_9286[num /*3*/].f_1 = 0;
	Global_1156111.f_35859.f_9286[num /*3*/].f_2 = -1;
	return;
}

BOOL func_156(int iParam0) // Position - 0x5697
{
	if (iParam0 < 0 || iParam0 > 4)
		return false;

	return true;
}

BOOL func_157(int iParam0) // Position - 0x56B5
{
	int num;

	if (!func_166(iParam0))
		return 0;

	num = func_173(iParam0);

	if (!func_147(num))
		return 0;

	return 1;
}

Vector3 func_158(int iParam0) // Position - 0x56E2
{
	var unk;
	int num;

	if (!func_166(iParam0))
	{
		unk = -1;
		unk.f_2 = -1;
		return unk;
	}

	num = func_167(iParam0, 1);
	return Global_1156111.f_35859.f_9286[num /*3*/];
}

int func_159(int iParam0, int iParam1) // Position - 0x5723
{
	switch (iParam0)
	{
		case -2123992989:
			return 59;
	
		case joaat("MDEFENSE__BULLET"):
			return 49;
	
		case -1936069272:
			return 47;
	
		case joaat("MHEALTH__REGEN_RATE"):
			return 42;
	
		case joaat("MHORSE__TRAMPLE_DAMAGE"):
			return 58;
	
		case joaat("ADEADEYE_COST_PER_SHOT"):
			return 2;
	
		case joaat("MWEAPON__BOW_STAMINA_DRAIN"):
			return 41;
	
		case joaat("MDEFENSE__BULLET_USING_MELEE_WEAPON"):
			return 50;
	
		case joaat("MACCURACY__LOCAL_PLAYER_ACCURACY_FLOOR_MODIFIER"):
			return 64;
	
		case joaat("MDAMAGE__DISTANCE_CLOSE"):
			return 37;
	
		case -1575020444:
			return 94;
	
		case -1572802418:
			return 71;
	
		case joaat("ALASSO__DAMAGE_DEALT_PER_SECOND"):
			return 78;
	
		case joaat("MDEFENSE__EXPLOSIVE"):
			return 53;
	
		case -1349331938:
			return 43;
	
		case joaat("MDAMAGE__MISSING_HEALTH_CONVERSION"):
			return 29;
	
		case joaat("ASTAMINA__ALTER_TANK_PER_SECOND_PERCENT"):
			return 22;
	
		case joaat("ADEADEYE__ALTER_CORE_PER_SECOND_PERCENT"):
			return 7;
	
		case joaat("MHORSE__DEFENSE"):
			return 56;
	
		case joaat("ASTAMINA__HORSE_GAIN_ON_HORSEBACK_KILL_PERCENT"):
			return 23;
	
		case joaat("MDEFENSE__RANGED"):
			return 46;
	
		case joaat("MDAMAGE__ALL_WEAPONS_DIFFERENT_WEAPON"):
			return 25;
	
		case joaat("MDEFENSE__BULLET_PER_CONSECUTIVE_SHOT"):
			return 51;
	
		case joaat("MEAGLE_EYE__DEPLETION_RATE"):
			return 67;
	
		case joaat("MDEFENSE__FIRE"):
			return 52;
	
		case joaat("AHEALTH__GAIN_ON_KILL_PERCENT"):
			return 11;
	
		case joaat("MRPG_ATTIRBUTE_CORE_DRAIN_RATE"):
			return 66;
	
		case joaat("MDAMAGE__EXPLOSIVE_WEAPONS"):
			return 36;
	
		case joaat("MSTAMINA__REGEN_RATE"):
			return 75;
	
		case joaat("AHEALTH__ALTER_TANK_PER_SECOND_PERCENT"):
			return 14;
	
		case joaat("MDEADEYE__GAIN_MULTIPLIER_WITH_REPEATER"):
			return 73;
	
		case -377364039:
			return 60;
	
		case joaat("MACCURACY__AI_MODIFIER"):
			return 62;
	
		case joaat("MDAMAGE__FALLOFF"):
			return 39;
	
		case joaat("AHEALTH__ALTER_TOTAL_PER_MINUTE_PERCENT"):
			return 15;
	
		case joaat("ADEADEYE_COST_DURATION"):
			return 1;
	
		case joaat("MACCURACY__REMOTE_PLAYER_ACCURACY_FLOOR_MODIFIER"):
			return 65;
	
		case joaat("MSKILL__PERCEPTION"):
			return 83;
	
		case -1:
			return 0;
	
		case 66478954:
			return 93;
	
		case 91687087:
			return 79;
	
		case joaat("MSKILL__DISTILLER"):
			return 90;
	
		case 194431787:
			return 61;
	
		case joaat("MDEADEYE__GAIN_MULTIPLIER"):
			return 72;
	
		case joaat("MSKILL__PROTECTION_TRADER"):
			return 85;
	
		case joaat("MWEAPON__BOW_DRAW_TIME"):
			return 40;
	
		case joaat("MDEADEYE__DEPLETION_RATE"):
			return 70;
	
		case joaat("MSKILL__DIVINATION"):
			return 89;
	
		case 410940916:
			return 92;
	
		case 447408404:
			return 81;
	
		case joaat("ADEADEYE__GAIN_ON_HEADSHOT_PERCENT"):
			return 5;
	
		case joaat("MHEALTH__RECHARGE_RATE"):
			return 44;
	
		case joaat("MACCURACY__LOCAL_PLAYER_MODIFIER"):
			return 63;
	
		case joaat("MSKILL__INTUITION"):
			return 88;
	
		case joaat("MDAMAGE__MELEE"):
			return 30;
	
		case joaat("AHORSE__HEALTH_GAIN_ON_DAMAGE_TAKEN_PERCENT"):
			return 19;
	
		case joaat("ADEADEYE__GAIN_ON_REVIVE_PERCENT"):
			return 4;
	
		case joaat("MSKILL__PROTECTION_MOONSHINE"):
			return 86;
	
		case joaat("MDEFENSE__PLAYERS"):
			return 48;
	
		case 874892169:
			return 95;
	
		case joaat("AHEALTH__ALTER_CORE_PER_SECOND_PERCENT"):
			return 16;
	
		case 920214733:
			return 91;
	
		case joaat("MINCAPACITATION__BLEEDOUT_TIME"):
			return 68;
	
		case joaat("ADEADEYE__ALTER_TANK_PER_SECOND_PERCENT"):
			return 6;
	
		case joaat("MDAMAGE__ALL_WEAPONS_AIMING_WITHOUT_FIRING"):
			return 27;
	
		case joaat("ADEADEYE__ALTER_TANK_DAMAGE_TAKEN_PERCENT"):
			return 8;
	
		case joaat("MSTAMINA__REGEN_RATE_HEALTH_CONVERSION"):
			return 76;
	
		case joaat("MDEFENSE__MELEE"):
			return 45;
	
		case joaat("AHORSE__STAMINA_GAIN_ON_DAMAGE_TAKEN_PERCENT"):
			return 20;
	
		case joaat("AHEALTH__GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 10;
	
		case 1356998909:
			return 80;
	
		case joaat("MSKILL__FOCUS"):
			return 82;
	
		case joaat("MDEADEYE__GAIN_MULTIPLIER_STR_WEAPON"):
			return 74;
	
		case joaat("AHORSE__HEALTH_GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 17;
	
		case 1546732394:
			return 34;
	
		case joaat("MDEFENSE__STAMINA_CONVERSION"):
			return 55;
	
		case joaat("MDAMAGE__DISTANCE_FAR"):
			return 38;
	
		case joaat("MDAMAGE__BULLETS"):
			return 32;
	
		case joaat("MDEFENSE__STRENGTH_IN_NUMBERS"):
			return 54;
	
		case 1727267699:
			return 69;
	
		case joaat("MDAMAGE__STAMINA_CONVERSION"):
			return 28;
	
		case joaat("ADEADEYE_COST_ACTIVATION"):
			return 3;
	
		case joaat("MSTAMINA__SPRINT_DEPLETION_RATE"):
			return 77;
	
		case joaat("ASTAMINA__ALTER_CORE_PER_SECOND_PERCENT"):
			return 21;
	
		case joaat("AHORSE__STAMINA_GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 18;
	
		case joaat("AHEALTH__GAIN_KILL_PERCENT_STR_WEAPON"):
			return 12;
	
		case joaat("MDAMAGE__ALL_WEAPONS"):
			return 24;
	
		case joaat("MDAMAGE__THROWN"):
			return 31;
	
		case joaat("MSKILL__AWARENESS"):
			return 84;
	
		case joaat("MHORSE__DEFENSE_PLAYERS"):
			return 57;
	
		case joaat("ADEADEYE__ALTER_TANK_BULLET_DAMAGE_TAKEN_PERCENT"):
			return 9;
	
		case joaat("MDAMAGE__SHOTGUN"):
			return 33;
	
		case joaat("AHEALTH__GAIN_KILL_PERCENT_NON_STR_WEAPON"):
			return 13;
	
		case joaat("MDAMAGE__BULLET_PER_CONSECUTIVE_SHOT"):
			return 35;
	
		case joaat("MDAMAGE__ALL_WEAPONS_SINCE_LAST_SHOT"):
			return 26;
	
		case joaat("MSKILL__POTENTIAL"):
			return 87;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

BOOL func_160(int iParam0) // Position - 0x5B5C
{
	int num;

	num = func_159(iParam0, 1);

	if (num < 1 || num >= 95)
		return false;

	return true;
}

float func_161(int iParam0) // Position - 0x5B84
{
	float num;

	if (iParam0->f_2 != 0)
	{
		num = func_174(794259616, iParam0->f_2, iParam0->f_1, "");
		return num;
	}

	return iParam0->f_1;
}

void func_162(int iParam0) // Position - 0x5BB3
{
	int num;
	int num2;
	int i;

	if (!func_160(iParam0))
		return;

	num = func_159(iParam0, 1);

	if (!func_175(Global_1156111.f_2169[num /*205*/]))
		return;

	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] = Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] - 1;

	if (Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] > 0)
		return;

	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] = 0;
	Global_1156111.f_2169[num /*205*/].f_204 = 0;

	if (!func_176(Global_1156111.f_2169[num /*205*/].f_203))
		return;

	num2 = func_177(Global_1156111.f_2169[num /*205*/].f_203, 1);
	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/].f_96[num2] = Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/].f_96[num2] - 1;

	if (Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/].f_96[num2] > 0)
		return;

	for (i = 0; i < Global_1156111.f_47561[num2 /*25*/].f_23; i = i + 1)
	{
		if (Global_1156111.f_47561[num2 /*25*/][i] != Global_1156111.f_2169[num /*205*/])
		{
		}
		else
		{
			Global_1156111.f_47561[num2 /*25*/][i] = -1;
			Global_1156111.f_47561[num2 /*25*/].f_23 = Global_1156111.f_47561[num2 /*25*/].f_23 - 1;
			Global_1156111.f_47561[num2 /*25*/][i] = Global_1156111.f_47561[num2 /*25*/][Global_1156111.f_47561[num2 /*25*/].f_23];
			Global_1156111.f_47561[num2 /*25*/][Global_1156111.f_47561[num2 /*25*/].f_23] = -1;
			break;
		}
	}

	return;
}

BOOL func_163(int iParam0) // Position - 0x5D92
{
	int num;

	num = func_164(iParam0, 1);

	if (num < 1 || num >= 68)
		return false;

	return true;
}

int func_164(int iParam0, int iParam1) // Position - 0x5DBA
{
	switch (iParam0)
	{
		case joaat("EAGLE_EYE_HIGHLIGHT_BOUNTIES"):
			return 52;
	
		case joaat("HEADSHOT_IMMUNITY"):
			return 12;
	
		case joaat("HAT_BLOCKS_HEADSHOT"):
			return 11;
	
		case joaat("ANIMAL_TURN_IN_EFFICIENCY"):
			return 64;
	
		case joaat("DISABLE_HEALTH_REGENERATION"):
			return 2;
	
		case joaat("FIRE_CAP_INFINTE"):
			return 41;
	
		case joaat("SLOW_AND_STEADY_AURA"):
			return 28;
	
		case joaat("EAGLE_EYE_HIGHLIGHT_EARTH"):
			return 53;
	
		case -1730553768:
			return 3;
	
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			return 25;
	
		case -1651690657:
			return 65;
	
		case joaat("NO_CRITICAL_DAMAGE_AGAINST_PLAYERS"):
			return 10;
	
		case -1583192324:
			return 66;
	
		case joaat("REVIVE_ON_BLEEDOUT"):
			return 34;
	
		case -1486292178:
			return 67;
	
		case joaat("LASSO_IMMUNITY"):
			return 5;
	
		case joaat("DISABLE_JUMPING"):
			return 45;
	
		case joaat("GRAPPLE_IMMUNITY_FROM_AI"):
			return 31;
	
		case -1026481003:
			return 6;
	
		case joaat("TAGGING_IMMUNITY"):
			return 13;
	
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			return 33;
	
		case joaat("ON_HORSE_SPEED_RESTRICTION_JOG"):
			return 59;
	
		case joaat("FATAL_MELEE_IMMUNITY"):
			return 32;
	
		case joaat("FORCE_HEALTH_REGEN"):
			return 1;
	
		case joaat("CONFUSION_EFFECT"):
			return 14;
	
		case joaat("FULL_LOCKON_IMMUNITY"):
			return 4;
	
		case joaat("OVERPOWER_INFINITE_HEALTH"):
			return 36;
	
		case -350459285:
			return 68;
	
		case joaat("DAMAGE_CAP_INFINTE"):
			return 40;
	
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			return 26;
	
		case -199042163:
			return 60;
	
		case joaat("NED_KELLY_ADVERSARY"):
			return 22;
	
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
			return 55;
	
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			return 19;
	
		case -1:
			return 0;
	
		case joaat("TRAIL_EFFECT"):
			return 17;
	
		case joaat("POISON_EFFECT"):
			return 20;
	
		case joaat("ON_HORSE_SPEED_RESTRICTION_WALK"):
			return 61;
	
		case joaat("SLIPPERY_BASTARD_VFX"):
			return 24;
	
		case joaat("DISORIENT_EFFECT"):
			return 18;
	
		case joaat("FOCUS_FIRE_VFX"):
			return 23;
	
		case joaat("PREDATOR_ICON_DISPLAY"):
			return 39;
	
		case joaat("WOUND_EFFECT"):
			return 15;
	
		case 718630298:
			return 56;
	
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			return 48;
	
		case joaat("NED_KELLY_BASE"):
			return 21;
	
		case joaat("DISABLE_COMBAT_DIVE"):
			return 46;
	
		case joaat("SLOW_AND_STEADY_VFX"):
			return 27;
	
		case joaat("DISABLE_FACIAL_ACTIONS"):
			return 43;
	
		case joaat("CANNOT_LOCK_ON_PLAYERS"):
			return 7;
	
		case joaat("GRAPPLE_IMMUNITY_FROM_PLAYERS"):
			return 30;
	
		case 1037859088:
			return 51;
	
		case 1066450193:
			return 54;
	
		case 1159158432:
			return 62;
	
		case joaat("OVERPOWER_PREDATOR"):
			return 37;
	
		case 1242495215:
			return 9;
	
		case joaat("ON_HORSE_SPEED_RESTRICTION_IGNORE_MOUNT_CLASS") /* collision: RCEXO_RSC2_LIJ_1 */:
			return 63;
	
		case 1341326366:
			return 58;
	
		case joaat("OVERRIDE_INFINITE_DEADEYE"):
			return 35;
	
		case 1398483650:
			return 50;
	
		case joaat("PULSE_REPOST_STATE"):
			return 38;
	
		case joaat("DISABLE_CONSUMABLES"):
			return 42;
	
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			return 57;
	
		case joaat("DISABLE_INCAPACITATION"):
			return 44;
	
		case joaat("DRAIN_EFFECT"):
			return 16;
	
		case 1898374676:
			return 49;
	
		case 2067881273:
			return 8;
	
		case joaat("DISABLE_DROWNING"):
			return 47;
	
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			return 29;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

void func_165(int iParam0) // Position - 0x60CA
{
	Ped ped;
	Player player;

	ped = PLAYER::PLAYER_PED_ID();
	player = PLAYER::PLAYER_ID();

	switch (iParam0)
	{
		case joaat("HEADSHOT_IMMUNITY"):
			func_179();
			break;
	
		case joaat("SLOW_AND_STEADY_AURA"):
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(player, 0);
			PLAYER::_0xE910932F4B30BE23(player);
			PLAYER::_0x0E9057A9DA78D0F8(player, 8);
			PLAYER::_0x263D69767F76059C(player, 0);
			break;
	
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_178();
			break;
	
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
		case joaat("SLIPPERY_BASTARD_VFX"):
		case joaat("SLOW_AND_STEADY_VFX"):
			func_182(func_181(iParam0));
			break;
	
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_175(16);
			break;
	
		case joaat("OVERPOWER_INFINITE_HEALTH"):
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 19);
			break;
	
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_175(17);
			break;
	
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_180(iParam0));
			break;
	
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(ped, false, 0);
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_180(iParam0));
			break;
	
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(5);
			func_42(105, true);
			break;
	
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_180(iParam0));
			break;
	
		case joaat("FOCUS_FIRE_VFX"):
			PLAYER::_SET_LOCKON_FOCUS_FIRE_VFX(player, "");
			break;
	
		case joaat("PREDATOR_ICON_DISPLAY"):
			ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(15);
			break;
	
		case joaat("WOUND_EFFECT"):
			PED::_UPDATE_PED_WOUND_EFFECT(ped, 0f);
			break;
	
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			PLAYER::_EAGLE_EYE_SET_PLUS_FLAG_DISABLED(player, true);
			break;
	
		case joaat("NED_KELLY_BASE"):
			func_183();
			break;
	
		case joaat("OVERPOWER_PREDATOR"):
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 19);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 1);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 18);
			break;
	
		case 1398483650:
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE(player, 1f);
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE_2(player, -1f);
			break;
	
		case joaat("PULSE_REPOST_STATE"):
			NETWORK::_SET_NETWORK_RESPOT_TIMER(ped, 0, true);
			break;
	
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_180(iParam0));
			break;
	
		case 1898374676:
			PLAYER::_SET_PLAYER_CAN_MERCY_KILL(player, false);
			break;
	
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			GRAPHICS::_RESET_ENTITY_AURA();
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(player, 0);
			PLAYER::_0xE910932F4B30BE23(player);
			PLAYER::_0x0E9057A9DA78D0F8(player, 8);
			PLAYER::_0x263D69767F76059C(player, 0);
			break;
	}

	return;
}

BOOL func_166(int iParam0) // Position - 0x62D9
{
	int num;

	num = func_167(iParam0, 1);

	if (num < 0 || num >= 5)
		return false;

	return true;
}

int func_167(int iParam0, int iParam1) // Position - 0x6300
{
	switch (iParam0)
	{
		case joaat("FOCUS_FIRE"):
			return 1;
	
		case -1038992817:
			return 5;
	
		case -950874556:
			return 4;
	
		case joaat("QUITE_AN_INSPIRATION"):
			return 3;
	
		case 0:
			return 0;
	
		case 1938826026:
			return 2;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

int func_168(int iParam0) // Position - 0x635D
{
	int num;
	var unk;
	var unk32;
	int num2;
	int num3;
	int i;

	num = func_173(iParam0);
	unk.f_3 = 1065353216;
	unk.f_5 = -1;
	unk.f_6 = 3;
	unk.f_6.f_1 = -1;
	unk.f_6.f_1.f_3 = -1;
	unk.f_6.f_1.f_3.f_3 = -1;
	unk.f_17 = 5;
	unk32.f_3 = 1065353216;
	unk32.f_5 = -1;
	unk32.f_6 = 3;
	unk32.f_6.f_1 = -1;
	unk32.f_6.f_1.f_3 = -1;
	unk32.f_6.f_1.f_3.f_3 = -1;
	unk32.f_17 = 5;
	num2 = -1;

	for (i = 0; i < Global_1156111.f_35859.f_11700; i = i + 1)
	{
		num3 = func_123(Global_1156111.f_35859.f_9503[i /*3*/], 1);
	
		if (Global_1156111.f_35859.f_3116[num3 /*31*/].f_4 != iParam0)
		{
		}
		else if (Global_1156111.f_35859.f_9503[i /*3*/] == num)
		{
		}
		else if (!func_184(Global_1156111.f_35859.f_9503[i /*3*/], Global_1156111.f_35859.f_9503[i /*3*/].f_1))
		{
		}
		else
		{
			unk = { func_185(Global_1156111.f_35859.f_9503[i /*3*/]) };
		
			if (unk.f_5 > unk32.f_5)
			{
				unk32 = { unk };
				num2 = i;
			}
		}
	}

	return num2;
}

void func_169(int iParam0) // Position - 0x64A1
{
	int num;
	int num2;
	int i;

	if (!func_160(iParam0))
		return;

	num = func_159(iParam0, 1);

	if (!func_175(Global_1156111.f_2169[num /*205*/]))
		return;

	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] = Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] + 1;
	Global_1156111.f_2169[num /*205*/].f_204 = 1;

	if (!func_176(Global_1156111.f_2169[num /*205*/].f_203))
		return;

	num2 = func_177(Global_1156111.f_2169[num /*205*/].f_203, 1);
	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/].f_96[num2] = Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/].f_96[num2] + 1;

	for (i = 0; i < Global_1156111.f_47561[num2 /*25*/].f_23; i = i + 1)
	{
		if (Global_1156111.f_47561[num2 /*25*/][i] == Global_1156111.f_2169[num /*205*/])
			return;
	}

	Global_1156111.f_47561[num2 /*25*/][Global_1156111.f_47561[num2 /*25*/].f_23] = Global_1156111.f_2169[num /*205*/];
	Global_1156111.f_47561[num2 /*25*/].f_23 = Global_1156111.f_47561[num2 /*25*/].f_23 + 1;
	return;
}

BOOL func_170(int iParam0) // Position - 0x65F6
{
	BOOL flag;

	if (iParam0->f_1 != 0)
	{
		flag = func_186(794259616, iParam0->f_1, true, "");
		return flag;
	}

	return true;
}

void func_171(int iParam0) // Position - 0x661F
{
	Ped EntityIndex;
	Player player;
	int num;
	int entityBoneIndexByName;

	EntityIndex = PLAYER::PLAYER_PED_ID();
	player = PLAYER::PLAYER_ID();

	switch (iParam0)
	{
		case joaat("HEADSHOT_IMMUNITY"):
			func_179();
			break;
	
		case joaat("SLOW_AND_STEADY_AURA"):
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(player, 1936842089);
			PLAYER::_0x2B12B6FC8B8772AB(player, 8);
			PLAYER::_0x131E294EF60160DF(player, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(player, 1);
			break;
	
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_178();
			break;
	
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			num = func_181(iParam0);
			func_188(num, 3, 1, -1, 1);
			break;
	
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_175(16);
			break;
	
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(player, 1014693585);
			PLAYER::_0x2B12B6FC8B8772AB(player, 8);
			PLAYER::_0x131E294EF60160DF(player, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(player, 1);
			break;
	
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_175(17);
			break;
	
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_180(iParam0));
			break;
	
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(EntityIndex, true, 0);
			GRAPHICS::ANIMPOSTFX_PLAY(func_180(iParam0));
			break;
	
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(5);
			func_42(104, true);
			break;
	
		case joaat("SLIPPERY_BASTARD_VFX"):
			num = func_181(iParam0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(EntityIndex, func_187(iParam0, 0));
			func_188(num, 0, 1, entityBoneIndexByName, 0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(EntityIndex, func_187(iParam0, 1));
			func_188(num, 1, 1, entityBoneIndexByName, 0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(EntityIndex, func_187(iParam0, 2));
			func_188(num, 2, 1, entityBoneIndexByName, 0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(EntityIndex, func_187(iParam0, 3));
			func_188(num, 2, 1, entityBoneIndexByName, 0);
			break;
	
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_180(iParam0));
			break;
	
		case joaat("FOCUS_FIRE_VFX"):
			PLAYER::_SET_LOCKON_FOCUS_FIRE_VFX(player, "focusfire");
			break;
	
		case joaat("PREDATOR_ICON_DISPLAY"):
			ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(15);
			break;
	
		case joaat("WOUND_EFFECT"):
			PED::_SET_PED_ACTIVATE_WOUND_EFFECT(EntityIndex, 2, 14411, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
	
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			PLAYER::_EAGLE_EYE_SET_PLUS_FLAG_DISABLED(player, false);
			break;
	
		case joaat("NED_KELLY_BASE"):
			func_189();
			break;
	
		case joaat("SLOW_AND_STEADY_VFX"):
			num = func_181(iParam0);
			func_188(num, 4, 1, -1, 0);
			break;
	
		case joaat("OVERPOWER_PREDATOR"):
			break;
	
		case 1398483650:
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE(player, 0.5f);
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE_2(player, 2f);
			break;
	
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_180(iParam0));
			break;
	
		case 1898374676:
			PLAYER::_SET_PLAYER_CAN_MERCY_KILL(player, true);
			break;
	
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			GRAPHICS::_SET_ENTITY_AURA(0f, 2f, 2f);
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(player, 1979474018);
			PLAYER::_0x2B12B6FC8B8772AB(player, 25);
			PLAYER::_0x263D69767F76059C(player, 2);
			break;
	}

	return;
}

void func_172(int iParam0) // Position - 0x68BA
{
	char* StringToTest;
	char* StringToTest2;

	if (iParam0 == 0)
		return;

	StringToTest = func_190(iParam0);

	if (MISC::IS_STRING_NULL_OR_EMPTY(StringToTest))
		return;

	StringToTest2 = func_191(iParam0);

	if (MISC::IS_STRING_NULL_OR_EMPTY(StringToTest2))
		return;

	AUDIO::PLAY_SOUND_FROM_ENTITY(StringToTest, Global_1295666.f_3, StringToTest2, false, 0, 0);
	return;
}

int func_173(int iParam0) // Position - 0x6904
{
	int num;

	if (!func_166(iParam0))
		return -1;

	num = func_167(iParam0, 1);
	return Global_1156111.f_35859.f_9286[num /*3*/];
}

float func_174(Hash hParam0, Hash hParam1, float fParam2, char* sParam3) // Position - 0x6933
{
	var unk;
	float num;

	if (func_192(hParam0, hParam1, &unk))
		num = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(hParam0, hParam1, unk.f_10.f_1);
	else
		num = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(hParam0, hParam1, fParam2);

	return num;
}

BOOL func_175(int iParam0) // Position - 0x6969
{
	if (iParam0 <= -1 || iParam0 >= 21)
		return false;

	if (iParam0 == 0)
		return true;

	if (MISC::_IS_BIT_FLAG_SET(&(Global_1156111.f_2166), iParam0))
		return true;

	if (Global_1156111.f_2165 >= 21)
		return false;

	Global_1156111.f_2143[Global_1156111.f_2165] = iParam0;
	Global_1156111.f_2165 = Global_1156111.f_2165 + 1;
	return true;
}

BOOL func_176(int iParam0) // Position - 0x69D8
{
	int num;

	num = func_177(iParam0, 1);

	if (num < 1 || num >= 5)
		return false;

	return true;
}

int func_177(int iParam0, int iParam1) // Position - 0x69FF
{
	switch (iParam0)
	{
		case joaat("CONSECUTIVE_DAMAGE_DEALT"):
			return 3;
	
		case -1016837116:
			return 5;
	
		case 0:
			return 0;
	
		case joaat("CONSECUTIVE_DAMAGE_TAKEN"):
			return 4;
	
		case joaat("NEARBY_ALLIES"):
			return 2;
	
		case 1416591065:
			return 1;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

void func_178() // Position - 0x6A5C
{
	BOOL bTrue;
	BOOL bTrue2;

	if (Global_1156111.f_21645[3 /*209*/].f_208)
		bTrue = true;

	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 550, bTrue);

	if (Global_1156111.f_21645[4 /*209*/].f_208)
		if (!func_193(Global_1297600[Global_1295666 /*87*/].f_86, 1))
			bTrue2 = true;

	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 556, bTrue2);
	return;
}

void func_179() // Position - 0x6ABE
{
	BOOL bTrue;

	bTrue = false;

	if (Global_1156111.f_21645[12 /*209*/].f_208)
		bTrue = true;

	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 263, bTrue);
	return;
}

char* func_180(int iParam0) // Position - 0x6AEE
{
	switch (iParam0)
	{
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			return "MP_MoonshineToxic";
	
		case joaat("TRAIL_EFFECT"):
			return "MP_ArrowTracking";
	
		case joaat("DISORIENT_EFFECT"):
			return "MP_ArrowDisorient";
	
		case joaat("DRAIN_EFFECT"):
			return "MP_ArrowDrain";
	
		default:
		
	}

	return "";
}

int func_181(int iParam0) // Position - 0x6B35
{
	switch (iParam0)
	{
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			return joaat("MOMENT_TO_RECUPERATE_VFX");
	
		case joaat("SLIPPERY_BASTARD_VFX"):
			return -843895567;
	
		case joaat("SLOW_AND_STEADY_VFX"):
			return joaat("SLOW_AND_STEADY_VFX");
	
		default:
		
	}

	return 0;
}

void func_182(int iParam0) // Position - 0x6B70
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (Global_1203871[i /*8*/].f_5 == iParam0)
		{
			Global_1203871[i /*8*/].f_7 = 1;
			Global_1203871[i /*8*/].f_5 = 0;
		}
	}

	return;
}

void func_183() // Position - 0x6BB0
{
	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 305, false);
	PED::_RESET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Global_1295666.f_3);
	return;
}

BOOL func_184(int iParam0, int iParam1) // Position - 0x6BD0
{
	int num;
	Player player;
	int num2;
	int num3;
	var unk;

	if (!func_147(iParam0))
		return false;

	num = func_123(iParam0, 1);
	num2 = Global_1156111.f_35859.f_3116[num /*31*/].f_4;

	if (func_149(Global_1156111.f_35859.f_3116[num /*31*/]))
	{
		num3 = Global_1156111.f_35859.f_9286[func_167(num2, 1) /*3*/];
		unk = { func_185(num3) };
	
		if (num3 != iParam0 && Global_1156111.f_35859.f_3116[num /*31*/].f_5 <= unk.f_5)
			return false;
	}

	switch (Global_1156111.f_35859.f_3116[num /*31*/])
	{
		case joaat("ENTER_REVIVED_REMOTE"):
			player = func_146(iParam1);
		
			if (player == Global_1295666)
				return false;
		
			return true;
	
		case -2129621195:
			player = func_146(iParam1);
		
			if (player == Global_1295666)
				return false;
		
			if (!GANG::NETWORK_IS_GANG_LEADER(Global_1295666.f_149[Global_1295666]))
				return false;
		
			if (!GANG::_NETWORK_IS_IN_MY_GANG(Global_1295666.f_149[player]))
				return false;
		
			return true;
	
		case -2010146101:
			if (!func_194())
				return false;
		
			return true;
	
		case -1606735498:
		case joaat("ON_HEADSHOT"):
		case joaat("ENTER_WEARING_HAT"):
		case joaat("ENTER_SPRINTING"):
		case joaat("ENTER_MOUNTED"):
		case joaat("ENTER_DUAL_WIELD"):
		case -971275364:
		case joaat("ON_KILL"):
		case joaat("ENTER_SCENARIO"):
		case joaat("ENTER_REVIVER"):
		case -193993646:
		case joaat("ENTER_ALLY_NEARBY"):
		case -23641105:
		case joaat("ON_DAMAGE_TAKEN"):
		case joaat("ENTER_MELEE"):
		case joaat("ON_DAMAGE_DEALT_FROM_HORSEBACK"):
		case 429965152:
		case joaat("ON_DAMAGE_TAKEN_FROM_HORSEBACK"):
		case joaat("ENTER_WINDED"):
		case joaat("ENTER_NO_HAT"):
		case joaat("ON_ENABLE"):
		case joaat("ENTER_EAGLE_EYE"):
		case joaat("ENTER_DEADEYE"):
		case joaat("ENTER_SCOPED"):
		case joaat("ENTER_COVER"):
		case 1305415806:
		case 1461424861:
		case 1691008805:
		case joaat("ENTER_DAMAGED"):
		case joaat("ON_DAMAGE_DEALT"):
		case joaat("ENTER_REVIVED"):
		case joaat("ENTER_LASSOING"):
		case joaat("ENTER_IN_VEHICLE"):
		case 2116793692:
			return true;
	
		case -1503245593:
			if (!Global_1956875.f_1716[8])
				return false;
		
			player = func_146(iParam1);
		
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295666.f_149[player]))
				return false;
		
			if (PED::_GET_LASSOED_LASSOER(Global_1295666.f_3) != PLAYER::GET_PLAYER_PED(Global_1295666.f_149[player]))
				return false;
		
			return true;
	
		case joaat("ALLY_ENTER_DEADEYE"):
			player = func_146(iParam1);
		
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295666.f_149[player]))
				return false;
		
			if (player != Global_1295666 && !func_196(Global_1295666.f_149[player]))
				return false;
		
			if (!func_197(512, player))
				return false;
		
			return true;
	
		case joaat("ENTER_FREEROAM_OR_COOP"):
			if (!func_194() && !func_195())
				return false;
		
			return true;
	
		default:
		
	}

	return false;
}

struct<31> func_185(int iParam0) // Position - 0x6EA5
{
	int num;

	num = func_123(iParam0, 1);
	return Global_1156111.f_35859.f_3116[num /*31*/];
}

BOOL func_186(Hash hParam0, Hash hParam1, BOOL bParam2, char* sParam3) // Position - 0x6EC9
{
	var unk;
	BOOL flag;

	if (func_192(hParam0, hParam1, &unk))
		flag = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(hParam0, hParam1, unk.f_10.f_2);
	else
		flag = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(hParam0, hParam1, bParam2);

	return flag;
}

char* func_187(int iParam0, int iParam1) // Position - 0x6EFF
{
	switch (iParam0)
	{
		case joaat("SLIPPERY_BASTARD_VFX"):
			switch (iParam1)
			{
				case 0:
					return "PH_HEAD";
			
				case 1:
					return "CP_CHEST";
			
				case 2:
					return "CP_R_UpperArm";
			
				case 3:
					return "CP_L_UpperArm";
			
				default:
					break;
			}
			break;
	}

	return "";
}

void func_188(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x6F57
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Global_1203871[i /*8*/]) && !Global_1203871[i /*8*/].f_6)
		{
			Global_1203871[i /*8*/].f_5 = iParam0;
			Global_1203871[i /*8*/].f_1 = iParam1;
			Global_1203871[i /*8*/].f_2 = iParam2;
			Global_1203871[i /*8*/].f_3 = iParam3;
			Global_1203871[i /*8*/].f_4 = iParam4;
			Global_1203871[i /*8*/].f_6 = 1;
			return;
		}
	}

	return;
}

void func_189() // Position - 0x6FDC
{
	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 305, true);
	PED::_SET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Global_1295666.f_3, 0.7f);
	return;
}

char* func_190(int iParam0) // Position - 0x7001
{
	switch (iParam0)
	{
		case -1822335806:
			return "Head_Shot_Ricco";
	
		default:
		
	}

	return "";
}

char* func_191(int iParam0) // Position - 0x7021
{
	switch (iParam0)
	{
		case -1822335806:
			return "RDRO_Ability_Cards_SFX_Sounds";
	
		default:
		
	}

	return "";
}

BOOL func_192(Hash hParam0, Hash hParam1, var uParam2) // Position - 0x7041
{
	int num;
	int num2;

	num = -178401592;
	num.f_1 = hParam0;
	num.f_2 = joaat("name");
	num.f_3 = 1;
	num.f_4 = hParam1;
	DATAFILE::_PARSEDDATA_GET_FILE(&num);

	if (DATAFILE::_PARSEDDATA_GET_SECTION(&num2, &num, joaat("name")))
	{
		*uParam2 = hParam0;
		uParam2->f_9 = hParam1;
		TEXT_LABEL_ASSIGN_STRING(&(uParam2->f_1), "", 64);
		TEXT_LABEL_APPEND_INT(&(uParam2->f_1), num2, 64);
		DATAFILE::_PARSEDDATA_GET_SECTION(&num2, &num, joaat("TYPE"));
		uParam2->f_10.f_3 = func_198(num2);
		uParam2->f_14.f_3 = uParam2->f_10.f_3;
		uParam2->f_18.f_3 = uParam2->f_10.f_3;
	
		switch (uParam2->f_10.f_3)
		{
			case 0:
				!DATAFILE::_PARSEDDATA_GET_INT(&(uParam2->f_10), &num, joaat("DEFAULT"));
				break;
		
			case 1:
				!DATAFILE::_PARSEDDATA_GET_FLOAT(&(uParam2->f_10.f_1), &num, joaat("DEFAULT"));
				break;
		
			case 2:
				!DATAFILE::_PARSEDDATA_GET_BOOL(&(uParam2->f_10.f_2), &num, joaat("DEFAULT"));
				break;
		}
	
		switch (uParam2->f_14.f_3)
		{
			case 0:
				DATAFILE::_PARSEDDATA_GET_INT(&(uParam2->f_14), &num, joaat("min"));
				break;
		
			case 1:
				DATAFILE::_PARSEDDATA_GET_FLOAT(&(uParam2->f_14.f_1), &num, joaat("min"));
				break;
		
			case 2:
				DATAFILE::_PARSEDDATA_GET_BOOL(&(uParam2->f_14.f_2), &num, joaat("min"));
				break;
		}
	
		switch (uParam2->f_18.f_3)
		{
			case 0:
				DATAFILE::_PARSEDDATA_GET_INT(&(uParam2->f_18), &num, joaat("max"));
				break;
		
			case 1:
				DATAFILE::_PARSEDDATA_GET_FLOAT(&(uParam2->f_18.f_1), &num, joaat("max"));
				break;
		
			case 2:
				DATAFILE::_PARSEDDATA_GET_BOOL(&(uParam2->f_18.f_2), &num, joaat("max"));
				break;
		}
	
		switch (uParam2->f_10.f_3)
		{
			case 0:
				break;
		
			case 1:
				break;
		
			case 2:
				break;
		}
	
		switch (uParam2->f_14.f_3)
		{
			case 0:
				break;
		
			case 1:
				break;
		
			case 2:
				break;
		}
	
		switch (uParam2->f_18.f_3)
		{
			case 0:
				break;
		
			case 1:
				break;
		
			case 2:
				break;
		}
	
		return true;
	}

	return false;
}

BOOL func_193(int iParam0, int iParam1) // Position - 0x7262
{
	return iParam0 && iParam1 != false;
}

BOOL func_194() // Position - 0x7271
{
	return Global_1572887.f_7;
}

BOOL func_195() // Position - 0x727F
{
	if (!Global_1048577)
		return false;

	if (!func_200(func_199(0)))
		return false;

	if (Global_3145858 != -504335712)
		return false;

	if (func_201(*Global_524288.f_39632))
		return true;

	return false;
}

BOOL func_196(Player plParam0) // Position - 0x72CA
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (func_202(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) != 1)
			func_203(plParam0);
	
		return true;
	}

	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) == 1;
}

BOOL func_197(int iParam0, Player plParam1) // Position - 0x730F
{
	if (plParam1 == 255)
		return Global_1102813.f_3 && iParam0 != false;

	return Global_1101558[plParam1 /*38*/].f_3 && iParam0 != false;
}

int func_198(int iParam0) // Position - 0x733B
{
	int num;

	switch (iParam0)
	{
		case joaat("bool"):
			num = 2;
			break;
	
		case joaat("float"):
			num = 1;
			break;
	
		case joaat("int"):
			num = 0;
			break;
	}

	return num;
}

struct<2> func_199(int iParam0) // Position - 0x7371
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

BOOL func_200(var uParam0, var uParam1) // Position - 0x7385
{
	if (!func_204(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_205(uParam0))
		return false;

	return true;
}

BOOL func_201(int iParam0) // Position - 0x73B9
{
	return iParam0 == -1759663922 || iParam0 == -318976023 || iParam0 == 772881414 || iParam0 == 31269700 || iParam0 == -133550749;
}

BOOL func_202(Player plParam0) // Position - 0x7401
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), plParam0))
		return true;

	return false;
}

void func_203(Player plParam0) // Position - 0x741E
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (!Global_1295666.f_17[player])
	{
		func_206(plParam0);
		return;
	}

	if (Global_1072759.f_21353.f_1[player /*8*/] == 1)
		return;

	func_207(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 1);
	Global_1072759.f_21353.f_1[player /*8*/] = 1;
	return;
}

BOOL func_204(int iParam0) // Position - 0x74A1
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return true;
	
		default:
		
	}

	return false;
}

int func_205(int iParam0) // Position - 0x74E0
{
	switch (iParam0)
	{
		case 2:
			return Global_1072759.f_573.f_601;
	
		case 3:
			return Global_1072759.f_573.f_2103;
	
		case 4:
			return Global_1072759.f_573.f_12605;
	
		case 5:
			return Global_1072759.f_573.f_12907;
	
		case 6:
			return Global_1072759.f_573.f_15909;
	
		case 7:
			return Global_1072759.f_573.f_16511;
	
		case 8:
			return Global_1072759.f_573.f_18913;
	
		default:
		
	}

	return -1;
}

void func_206(Player plParam0) // Position - 0x7576
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (Global_1072759.f_21353.f_1[player /*8*/] == 0)
		return;

	func_207(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 0);
	Global_1072759.f_21353.f_1[player /*8*/] = 0;
	return;
}

void func_207(Player plParam0) // Position - 0x75E2
{
	if (Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 = 0;
	}

	return;
}

