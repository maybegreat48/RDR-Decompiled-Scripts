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
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = -1;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = -1;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = -1;
	var uLocal_46 = -1;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	Entity eScriptParam_0 = 0;
#endregion

void main() // Position - 0x0
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	func_1(&uLocal_24, eScriptParam_0);

	while (!func_2(&uLocal_24))
	{
		func_3(&uLocal_24);
		BUILTIN::WAIT(0);
	}

	func_4(&uLocal_24);
	return;
}

void func_1(var uParam0, Entity eParam1) // Position - 0x34
{
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_5(false, 0);
	func_6();
	func_7();
	Global_1072759.f_23824.f_3 = 0;
	Global_1072759.f_23824.f_2 = 0;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam1))
		uParam0->f_3 = BRAIN::_GET_SCRIPT_BRAIN_ENTITY();
	else
		uParam0->f_3 = eParam1;

	return;
}

BOOL func_2(var uParam0) // Position - 0x87
{
	if (func_8(true, true))
		return true;

	if (*uParam0 <= 0)
		return false;

	if (*uParam0 == 6)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			return true;
		}
		else
		{
			if (uParam0->f_5)
			{
				if (Global_1072759.f_23824.f_2 && Global_1072759.f_23824.f_3 == SCRIPTS::GET_ID_OF_THIS_THREAD() || Global_1072759.f_23824.f_3 == 0)
					return true;
			
				if (func_9(uParam0->f_9, Global_34) > Global_1901671.f_604.f_1)
					return true;
			}
		
			if (uParam0->f_6)
			{
				if (!Global_1148185[Global_1295666 /*10*/].f_4)
				{
					Global_1072759.f_23824.f_3 = 0;
					Global_1072759.f_23824.f_2 = 0;
					return true;
				}
			}
		
			if (!CAM::IS_SCREEN_FADING_OUT() && !uParam0->f_5 && !uParam0->f_6 && func_9(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false), Global_34) > 10f)
				func_10(uParam0, 1);
		}
	}

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
		return true;

	return false;
}

void func_3(var uParam0) // Position - 0x198
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	switch (*uParam0)
	{
		case 0:
			func_11(uParam0);
			break;
	
		case 1:
			func_12(uParam0);
			break;
	
		case 2:
			func_13(uParam0);
			break;
	
		case 3:
			func_14(uParam0);
			break;
	
		case 4:
			func_15(uParam0);
			break;
	
		case 5:
			func_16(uParam0);
			break;
	
		case 6:
			break;
	}

	if (uParam0->f_26 > 0f)
		uParam0->f_26 = uParam0->f_26 - MISC::GET_FRAME_TIME();

	return;
}

void func_4(var uParam0) // Position - 0x22D
{
	Player PlayerIndex;
	Ped playerPed;

	PlayerIndex = PLAYER::PLAYER_ID();
	playerPed = PLAYER::GET_PLAYER_PED(PlayerIndex);

	if (HUD::BUSYSPINNER_IS_ON())
	{
		func_17();
		func_18();
	}

	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_27))
		VOLUME::DELETE_VOLUME(uParam0->f_27);

	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_28))
	{
		PATHFIND::_REMOVE_NAVMESH_BLOCKING_VOLUME(uParam0->f_28);
		VOLUME::DELETE_VOLUME(uParam0->f_28);
	}

	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_29))
	{
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_29);
		VOLUME::DELETE_VOLUME(uParam0->f_29);
	}

	GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(&(uParam0->f_30), 1);

	if (!func_19(8))
		func_20();

	if (!ENTITY::IS_ENTITY_DEAD(playerPed))
		func_21(playerPed, false);

	func_22(uParam0);
	func_23();
	return;
}

void func_5(BOOL bParam0, int iParam1) // Position - 0x2CE
{
	if (bParam0)
	{
		Global_1940252 = 1;
		Global_1940252.f_1 = iParam1;
	}
	else
	{
		Global_1940252 = 2;
	}

	return;
}

void func_6() // Position - 0x2F0
{
	Global_1913441 = 1;
	return;
}

void func_7() // Position - 0x2FD
{
	if (!Global_1072759.f_23824)
		Global_1072759.f_23824 = 1;

	return;
}

BOOL func_8(BOOL bParam0, BOOL bParam1) // Position - 0x318
{
	int i;

	if (Global_1572887.f_13)
		return false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam1 && NETWORK::NETWORK_SESSION_IS_TRANSITIONING())
		{
		}
		else if (bParam1 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
		}
		else if (bParam1 && Global_1572887 < 39)
		{
		}
		else
		{
			return true;
		}
	}

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
		{
			case 0:
				return true;
		
			case 1:
				return true;
		
			case 2:
				if (!bParam0)
					return true;
				break;
		
			case 3:
				return true;
		
			case 4:
				return true;
		
			default:
				return true;
		}
	}

	for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK); i = i + 1)
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i) == 1976253964)
			return true;
	}

	return false;
}

float func_9(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x3F8
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

void func_10(var uParam0, int iParam1) // Position - 0x416
{
	*uParam0 = iParam1;
	uParam0->f_31 = MISC::GET_SYSTEM_TIME();
	return;
}

void func_11(var uParam0) // Position - 0x42B
{
	float num;
	int _int;
	int gangId;

	uParam0->f_4 = func_24(uParam0->f_3);

	if (uParam0->f_4 == 15)
		return;

	uParam0->f_9 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false) };
	num = BUILTIN::VDIST(Global_1072759.f_23824.f_383[uParam0->f_4 /*272*/].f_2, uParam0->f_9);
	uParam0->f_2 = 1;

	if (num > 5f)
	{
		if (Global_1148185[Global_1295666 /*10*/].f_4)
		{
			uParam0->f_7 = num;
			uParam0->f_8 = BUILTIN::ROUND(num / 1000f);
			uParam0->f_6 = 1;
			uParam0->f_2 = 1;
		}
		else if (DECORATOR::DECOR_EXIST_ON(uParam0->f_3, "fast_travel_camp_barker"))
		{
			_int = DECORATOR::DECOR_GET_INT(uParam0->f_3, "fast_travel_camp_barker");
		
			if (func_25(_int))
			{
				gangId = func_26(_int, true);
			
				if (GANG::NETWORK_IS_GANG_ID_VALID(gangId))
				{
					uParam0->f_12 = gangId;
					uParam0->f_7 = num;
					uParam0->f_5 = 1;
					uParam0->f_8 = BUILTIN::ROUND(num / 1000f);
					uParam0->f_13 = _int;
				}
				else
				{
					uParam0->f_2 = 0;
				}
			}
			else
			{
				uParam0->f_2 = 0;
			}
		}
		else
		{
			uParam0->f_2 = 0;
		}
	}
	else
	{
		_int = func_27(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
	
		if (_int >= 0)
		{
			uParam0->f_9 = { func_28(_int) };
			num = BUILTIN::VDIST(Global_1072759.f_23824.f_383[uParam0->f_4 /*272*/].f_2, uParam0->f_9);
			gangId = func_26(_int, true);
		
			if (GANG::NETWORK_IS_GANG_ID_VALID(gangId))
			{
				uParam0->f_12 = gangId;
				uParam0->f_7 = num;
				uParam0->f_8 = BUILTIN::ROUND(num / 1000f);
				uParam0->f_13 = _int;
			}
		}
	}

	uParam0->f_20 = func_29("NFT_MENU_OPEN", joaat("INPUT_CONTEXT_Y"), uParam0->f_3, 0, 0, false, 1, 5, 3.5f, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, 0);

	if (!func_30(uParam0->f_20))
		return;

	func_31(uParam0->f_20, 13, true, true);
	uParam0->f_27 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(Global_1072759.f_23824.f_383[uParam0->f_4 /*272*/].f_2, 0f, 0f, 0f, 10.5f, 10.5f, 5.5f, "Fast Travel Ghosting Area");
	uParam0->f_28 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(Global_1072759.f_23824.f_383[uParam0->f_4 /*272*/].f_2, 0f, 0f, 0f, 1f, 1f, 2f, "Fast Travel Navmesh Blocking Area");
	uParam0->f_29 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(Global_1072759.f_23824.f_383[uParam0->f_4 /*272*/].f_2, 0f, 0f, 0f, 2f, 2f, 2f, "Fast Travel Ambient Avoidance Area");
	PATHFIND::_ADD_NAVMESH_BLOCKING_VOLUME(uParam0->f_28, 7);
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_29, 2238463, 0, 0, -1, -1, 0);
	uParam0->f_30 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(Global_1072759.f_23824.f_383[uParam0->f_4 /*272*/].f_2, 1f, 1, 4, 0);
	uParam0->f_21 = -1;
	func_32(uParam0, 4);
	func_32(uParam0, 2);
	func_32(uParam0, 8);
	func_33(uParam0->f_20, false, true, true);
	func_34(uParam0->f_20, false, true);
	func_20();
	func_35(uParam0, 0);
	func_10(uParam0, 1);
	return;
}

void func_12(var uParam0) // Position - 0x6F0
{
	float num;
	Player PlayerIndex;
	Ped playerPed;
	BOOL flag;

	if (Global_1072759.f_23824.f_2 && Global_1072759.f_23824.f_3 == SCRIPTS::GET_ID_OF_THIS_THREAD() || Global_1072759.f_23824.f_3 == 0)
	{
		if (!(Global_1148185[Global_1295666 /*10*/].f_4 && uParam0->f_5))
		{
			func_10(uParam0, 6);
			Global_1072759.f_23824.f_3 = 0;
			Global_1072759.f_23824.f_2 = 0;
			return;
		}
	}

	num = 0f;

	if (Global_1148185[Global_1295666 /*10*/].f_4)
	{
		num = func_9(Global_1148185[Global_1295666 /*10*/], func_36(PLAYER::PLAYER_ID()));
	
		if (num < 10f)
		{
			if (uParam0->f_5)
			{
				func_10(uParam0, 2);
				return;
			}
		
			if (!uParam0->f_6)
				uParam0->f_6 = 1;
		}
	}
	else if (uParam0->f_6)
	{
		uParam0->f_6 = 0;
	}

	PlayerIndex = PLAYER::PLAYER_ID();
	playerPed = PLAYER::GET_PLAYER_PED(PlayerIndex);

	if (func_37(32768, PLAYER::NETWORK_PLAYER_ID_TO_INT()))
		if (!VOLUME::IS_POINT_IN_VOLUME(uParam0->f_27, ENTITY::GET_ENTITY_COORDS(playerPed, false, true)))
			func_20();

	flag = false;

	if (HUD::BUSYSPINNER_IS_ON())
		func_18();

	if (!uParam0->f_2)
		flag = func_35(uParam0, 3);
	else if (Global_1148185[Global_1295666 /*10*/].f_4 && num < 10f)
		flag = func_35(uParam0, 2);
	else if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT() || func_38() || func_39() || func_40() || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		flag = func_35(uParam0, 15);
	else if (ENTITY::IS_ENTITY_DEAD(playerPed) || PED::IS_PED_INCAPACITATED(playerPed))
		flag = func_35(uParam0, 8);
	else if (PED::IS_PED_HOGTIED(playerPed))
		flag = func_35(uParam0, 9);
	else if (PED::IS_PED_CARRYING_SOMETHING(playerPed))
		flag = func_35(uParam0, 10);
	else if (func_41(255))
		flag = func_35(uParam0, 11);
	else if (func_42(PlayerIndex, true, false, true))
		flag = func_35(uParam0, 6);
	else if (func_43())
		flag = func_35(uParam0, 4);
	else if (func_44())
		flag = func_35(uParam0, 7);
	else if (uParam0->f_5 && !GANG::_NETWORK_IS_GANG_MEMBER(uParam0->f_12, PlayerIndex))
		flag = func_35(uParam0, 12);
	else if (func_45())
		flag = func_35(uParam0, 5);
	else if (func_46())
		flag = func_35(uParam0, 17);
	else if (func_47())
		flag = func_35(uParam0, 18);
	else if (func_48())
		flag = func_35(uParam0, 16);
	else if (func_49(PlayerIndex))
		flag = func_35(uParam0, 14);
	else if (func_50(Global_33, 0))
		flag = func_35(uParam0, 19);
	else
		flag = func_35(uParam0, 1);

	switch (uParam0->f_19)
	{
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(playerPed))
				if (func_9(Global_1072759.f_23824.f_383[uParam0->f_4 /*272*/].f_2, ENTITY::GET_ENTITY_COORDS(playerPed, false, false)) <= 3.5f)
					func_21(playerPed, true);
				else
					func_21(playerPed, false);
		
			if (flag)
			{
				func_51(uParam0);
				func_33(uParam0->f_20, true, true, true);
				func_34(uParam0->f_20, true, true);
			}
		
			if (func_52(uParam0->f_20, true) > 0f)
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_PLAYER_MENU"), false);
		
			if (func_53(uParam0->f_20, true))
			{
				func_33(uParam0->f_20, false, true, true);
				func_34(uParam0->f_20, false, true);
				func_35(uParam0, 0);
				func_54(32);
				func_10(uParam0, 3);
			}
			break;
	
		case 2:
			if (flag)
			{
				func_51(uParam0);
				func_33(uParam0->f_20, false, true, true);
				func_34(uParam0->f_20, false, true);
			}
		
			if (!ENTITY::IS_ENTITY_DEAD(playerPed))
				if (func_9(Global_1072759.f_23824.f_383[uParam0->f_4 /*272*/].f_2, ENTITY::GET_ENTITY_COORDS(playerPed, false, false)) <= 3.5f)
					func_21(playerPed, true);
				else
					func_21(playerPed, false);
		
			if (Global_1148185[Global_1295666 /*10*/].f_8)
			{
				func_33(uParam0->f_20, false, true, true);
				func_34(uParam0->f_20, false, true);
				func_35(uParam0, 0);
				func_54(32);
				func_10(uParam0, 3);
			}
			break;
	
		case 4:
			if (flag)
			{
				func_33(uParam0->f_20, false, true, true);
				func_34(uParam0->f_20, true, true);
			}
		
			if (func_55(uParam0->f_20, true))
				func_56(uParam0, "NFT_MISSION_RUNNING");
			break;
	
		case 5:
			if (flag)
			{
				func_33(uParam0->f_20, false, true, true);
				func_34(uParam0->f_20, true, true);
				func_57(uParam0->f_20, joaat("INPUT_HORSE_EXIT"));
			}
		
			if (func_55(uParam0->f_20, true))
				func_56(uParam0, "NFT_PASSENGER_HORSE_WARN");
			break;
	
		case 6:
			if (flag)
			{
				func_33(uParam0->f_20, false, true, true);
				func_34(uParam0->f_20, true, true);
			}
		
			if (func_55(uParam0->f_20, true))
				func_56(uParam0, "NFT_WANTED");
			break;
	
		case 7:
			if (flag)
			{
				func_33(uParam0->f_20, false, true, true);
				func_34(uParam0->f_20, false, true);
			}
			break;
	
		case 8:
			if (flag)
			{
				func_33(uParam0->f_20, false, true, true);
				func_34(uParam0->f_20, false, true);
			}
			break;
	
		case 9:
			if (flag)
			{
				func_33(uParam0->f_20, false, true, true);
				func_34(uParam0->f_20, false, true);
			}
			break;
	
		case 10:
			if (flag)
			{
				func_33(uParam0->f_20, false, true, true);
				func_34(uParam0->f_20, false, true);
			}
			break;
	
		case 11:
			if (flag)
			{
				func_33(uParam0->f_20, false, true, true);
				func_34(uParam0->f_20, false, true);
			}
			break;
	
		case 14:
			if (flag)
			{
				func_33(uParam0->f_20, false, true, true);
				func_34(uParam0->f_20, false, true);
			}
			break;
	
		case 15:
			if (flag)
			{
				func_33(uParam0->f_20, false, true, true);
				func_34(uParam0->f_20, false, true);
			}
			break;
	
		case 16:
			if (flag)
			{
				func_33(uParam0->f_20, false, true, true);
				func_34(uParam0->f_20, true, true);
			}
		
			if (func_55(uParam0->f_20, true))
				func_56(uParam0, "NFT_HOGTIED_HORSE_WARN");
			break;
	
		case 17:
			if (flag)
			{
				func_33(uParam0->f_20, false, true, true);
				func_34(uParam0->f_20, true, true);
				func_57(uParam0->f_20, joaat("INPUT_VEH_EXIT"));
			}
		
			if (func_55(uParam0->f_20, true))
				func_56(uParam0, "NFT_PASSENGER_WAGON_PASSENGER_WARN");
			break;
	
		case 18:
			if (flag)
			{
				func_33(uParam0->f_20, false, true, true);
				func_34(uParam0->f_20, true, true);
				func_57(uParam0->f_20, joaat("INPUT_VEH_EXIT"));
			}
		
			if (func_55(uParam0->f_20, true))
				func_56(uParam0, "NFT_PASSENGER_WAGON_WARN");
			break;
	
		case 19:
			if (flag)
			{
				func_33(uParam0->f_20, false, true, true);
				func_34(uParam0->f_20, true, true);
			}
		
			if (func_55(uParam0->f_20, true))
				func_56(uParam0, "NFT_COMBAT");
			break;
	}

	return;
}

void func_13(var uParam0) // Position - 0xDED
{
	if (!Global_1148185[Global_1295666 /*10*/].f_4 || MISC::GET_DISTANCE_BETWEEN_COORDS(Global_1148185[Global_1295666 /*10*/], func_36(PLAYER::PLAYER_ID()), true) > 10f)
		func_10(uParam0, 1);

	return;
}

void func_14(var uParam0) // Position - 0xE31
{
	if (!UIAPPS::CAN_LAUNCH_UIAPP_BY_HASH(joaat("fast_travel_menu")))
	{
		return;
	}
	else
	{
		if (!func_58(true, 1))
			return;
	
		if (UIAPPS::LAUNCH_UIAPP_BY_HASH(joaat("fast_travel_menu")) == 0)
		{
		}
		else
		{
			return;
		}
	}

	func_59();
	func_32(uParam0, 2);
	func_32(uParam0, 4);
	func_60(uParam0, -931758312);
	func_10(uParam0, 4);
	return;
}

void func_15(var uParam0) // Position - 0xE91
{
	Player PlayerIndex;
	Ped playerPed;
	int num;
	float num2;
	int gangId;
	Ped mount;
	const char* stringFromHashKey;
	var unk;
	BOOL flag;
	Player player;
	Hash hash;
	Hash hash2;
	Hash hash3;

	PlayerIndex = PLAYER::PLAYER_ID();
	playerPed = PLAYER::GET_PLAYER_PED(PlayerIndex);

	if (PLAYER::IS_PLAYER_DEAD(PlayerIndex))
		func_61(uParam0, 2);

	if (Global_1072759.f_23824.f_2 && Global_1072759.f_23824.f_3 == SCRIPTS::GET_ID_OF_THIS_THREAD() || Global_1072759.f_23824.f_3 == 0)
		func_61(uParam0, 2);

	if (Global_1148185[Global_1295666 /*10*/].f_4 && uParam0->f_5)
	{
		if (func_9(Global_1148185[Global_1295666 /*10*/], func_36(PLAYER::PLAYER_ID())) < 10f)
		{
			func_10(uParam0, 2);
			return;
		}
	}

	CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, false, 17, true, true);

	if (uParam0->f_5 && !uParam0->f_6)
	{
		if (func_9(uParam0->f_9, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false)) > 3.5f + 2f)
			func_61(uParam0, 2);
	}
	else if (uParam0->f_6)
	{
		if (!Global_1148185[Global_1295666 /*10*/].f_4)
			func_61(uParam0, 2);
	}
	else
	{
		num = func_27(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
	
		if (num >= 0 && num != uParam0->f_13)
		{
			uParam0->f_9 = { func_28(num) };
			num2 = BUILTIN::VDIST(Global_1072759.f_23824.f_383[uParam0->f_4 /*272*/].f_2, uParam0->f_9);
			gangId = func_26(num, true);
		
			if (GANG::NETWORK_IS_GANG_ID_VALID(gangId))
			{
				uParam0->f_12 = gangId;
				uParam0->f_7 = num2;
				uParam0->f_8 = BUILTIN::ROUND(num2 / 1000f);
				uParam0->f_13 = num;
			}
		}
	
		if (func_9(Global_1072759.f_23824.f_383[uParam0->f_4 /*272*/].f_2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false)) > 3.5f + 2f && !uParam0->f_6)
			func_61(uParam0, 2);
	}

	mount = PED::GET_MOUNT(PLAYER::PLAYER_PED_ID());

	if (ENTITY::DOES_ENTITY_EXIST(mount))
		if (!PED::_IS_MOUNT_SEAT_FREE(mount, 0))
			func_61(uParam0, 2);

	if (func_49(PlayerIndex))
		func_61(uParam0, 2);

	if (!func_62(uParam0, 2))
	{
		func_63(uParam0, &(uParam0->f_21));
	
		if (uParam0->f_21 == -1)
			return;
	
		if (func_62(uParam0, 8))
		{
			flag = func_65(func_64(uParam0), &unk);
			flag = flag || func_66(func_64(uParam0), &unk);
		
			if (uParam0->f_21 < 14)
			{
				if (flag)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1072759.f_23824.f_6.f_1, MISC::VAR_STRING(2, "NFT_VOUCHER_FOOTER"));
				}
				else
				{
					stringFromHashKey = HUD::GET_STRING_FROM_HASH_KEY(Global_1072759.f_23824.f_383[uParam0->f_4 /*272*/].f_5[uParam0->f_21 /*19*/]);
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1072759.f_23824.f_6.f_1, MISC::VAR_STRING(10, "NFT_FOOTER", stringFromHashKey));
				}
			
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1072759.f_23824.f_6.f_2, MISC::VAR_STRING(2, func_67(Global_1072759.f_23824.f_383[uParam0->f_4 /*272*/].f_5[uParam0->f_21 /*19*/])));
			}
			else if (uParam0->f_21 == 14)
			{
				if (uParam0->f_5)
				{
					if (flag)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1072759.f_23824.f_6.f_1, MISC::VAR_STRING(2, "NFT_VOUCHER_FOOTER"));
					}
					else
					{
						stringFromHashKey = MISC::VAR_STRING(0, Global_1072759.f_23824.f_383[uParam0->f_4 /*272*/]);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1072759.f_23824.f_6.f_1, MISC::VAR_STRING(10, "NFT_FOOTER", stringFromHashKey));
					}
				
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1072759.f_23824.f_6.f_2, MISC::VAR_STRING(2, func_67(Global_1072759.f_23824.f_383[uParam0->f_4 /*272*/])));
				}
				else
				{
					if (!(func_27(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) >= 0))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1072759.f_23824.f_6.f_1, MISC::VAR_STRING(2, "NFT_NO_CAMP_FOOTER"));
					}
					else if (flag)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1072759.f_23824.f_6.f_1, MISC::VAR_STRING(2, "NFT_VOUCHER_FOOTER"));
					}
					else
					{
						stringFromHashKey = MISC::VAR_STRING(2, "NFT_LOCATION_TYPE_CAMP_DESC");
						DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1072759.f_23824.f_6.f_1, MISC::VAR_STRING(10, "NFT_FOOTER", stringFromHashKey));
					}
				
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1072759.f_23824.f_6.f_2, MISC::VAR_STRING(2, "NFT_CAMP_DESC"));
				}
			}
			else if (uParam0->f_21 == 15)
			{
				player = func_68();
			
				if (!func_69(player, true))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1072759.f_23824.f_6.f_1, MISC::VAR_STRING(2, "NFT_NO_MOONSHINE_FOOTER"));
				}
				else if (flag)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1072759.f_23824.f_6.f_1, MISC::VAR_STRING(2, "NFT_VOUCHER_FOOTER"));
				}
				else
				{
					stringFromHashKey = MISC::VAR_STRING(2, "NFT_LOCATION_TYPE_MOONSHINE_DESC");
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1072759.f_23824.f_6.f_1, MISC::VAR_STRING(10, "NFT_FOOTER", stringFromHashKey));
				}
			
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1072759.f_23824.f_6.f_2, MISC::VAR_STRING(2, "NFT_MOONSHINE_DESC"));
			}
		
			if (uParam0->f_21 < 14)
			{
				hash = func_64(uParam0);
			
				if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(func_70(hash, 59806960, true, false, true, 0), 0))
					DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1072759.f_23824.f_6.f_4, "subFooter", MISC::VAR_STRING(2, "NFT_CANT_AFFORD_SHORT"));
				else
					DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1072759.f_23824.f_6.f_4, "subFooter", "");
			}
			else if (uParam0->f_21 == 14)
			{
				if (uParam0->f_5)
				{
					hash = func_71(0, uParam0);
				
					if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(func_70(hash, 59806960, true, false, true, 0), 0))
						DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1072759.f_23824.f_6.f_4, "subFooter", MISC::VAR_STRING(2, "NFT_CANT_AFFORD_SHORT"));
					else
						DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1072759.f_23824.f_6.f_4, "subFooter", "");
				}
				else
				{
					hash = func_71(0, uParam0);
				
					if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(func_70(hash, 59806960, true, false, true, 0), 0))
						DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1072759.f_23824.f_6.f_4, "subFooter", MISC::VAR_STRING(2, "NFT_CANT_AFFORD_SHORT"));
					else
						DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1072759.f_23824.f_6.f_4, "subFooter", "");
				}
			}
			else if (uParam0->f_21 == 15)
			{
				hash = func_71(0, uParam0);
			
				if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(func_70(hash, 59806960, true, false, true, 0), 0))
					DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1072759.f_23824.f_6.f_4, "subFooter", MISC::VAR_STRING(2, "NFT_CANT_AFFORD_SHORT"));
				else
					DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1072759.f_23824.f_6.f_4, "subFooter", "");
			}
		
			func_32(uParam0, 8);
		}
	
		if (func_62(uParam0, 4))
		{
			hash2 = func_64(uParam0);
		
			switch (func_72(uParam0->f_21, hash2))
			{
				case 0:
					if (func_65(hash2, &hash3))
						uParam0->f_22 = func_73(hash2, 0, 1, true, true, hash3);
					else if (func_66(hash2, &hash3))
						uParam0->f_22 = func_73(hash2, 0, 1, true, true, hash3);
					else
						uParam0->f_22 = func_73(hash2, 0, 1, true, true, 59806960);
				
					func_76(uParam0, hash2, hash3, func_75(func_74(hash2, hash3, false)));
					func_32(uParam0, 4);
					func_61(uParam0, 2);
					func_22(uParam0);
					func_77(1);
					func_78(false, 72);
					func_10(uParam0, 5);
				
					if (uParam0->f_6)
					{
						Global_1148185[Global_1295666 /*10*/].f_8 = 0;
						Global_1148185[Global_1295666 /*10*/].f_9 = 1;
					}
				
					return;
			
				case 1:
					break;
			
				case 2:
					break;
			
				case 3:
					break;
			
				case 4:
					func_56(uParam0, "NFT_CANT_AFFORD");
					func_32(uParam0, 4);
					func_61(uParam0, 2);
					func_22(uParam0);
					func_10(uParam0, 1);
				
					if (uParam0->f_6)
						Global_1148185[Global_1295666 /*10*/].f_8 = 0;
					break;
			
				case 5:
					func_56(uParam0, "NFT_NO_CAMP");
					func_32(uParam0, 4);
					func_61(uParam0, 2);
					func_22(uParam0);
					func_10(uParam0, 1);
				
					if (uParam0->f_6)
						Global_1148185[Global_1295666 /*10*/].f_8 = 0;
					break;
			
				case 6:
					func_56(uParam0, "NFT_NO_MOONSHINE");
					func_32(uParam0, 4);
					func_61(uParam0, 2);
					func_22(uParam0);
					func_10(uParam0, 1);
				
					if (uParam0->f_6)
						Global_1148185[Global_1295666 /*10*/].f_8 = 0;
					break;
			
				case 7:
					func_56(uParam0, "NFT_POSSE_DISBAND");
					func_32(uParam0, 4);
					func_61(uParam0, 2);
					func_22(uParam0);
					func_10(uParam0, 1);
				
					if (uParam0->f_6)
						Global_1148185[Global_1295666 /*10*/].f_8 = 0;
					break;
			}
		}
	}

	if (func_62(uParam0, 2))
	{
		func_21(playerPed, false);
		func_79(32);
		func_22(uParam0);
		func_20();
		func_10(uParam0, 1);
		Global_1148185[Global_1295666 /*10*/].f_8 = 0;
	}

	return;
}

void func_16(var uParam0) // Position - 0x16ED
{
	int i;
	eEventType eventAtIndex;
	int num;
	Player player;

	player = func_68();

	for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK); i = i + 1)
	{
		eventAtIndex = SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i);
	
		switch (eventAtIndex)
		{
			case 1731288223:
				num = func_80(i, uParam0);
				break;
		}
	}

	if (num != 2 && num != 3)
		num = func_81(uParam0->f_22);

	switch (num)
	{
		case 0:
			break;
	
		case 1:
			break;
	
		case 2:
			func_56(uParam0, "NFT_TRANSACTION_FAILED");
			func_10(uParam0, 1);
			func_78(true, 2);
			break;
	
		case 3:
			func_82(uParam0);
		
			if (uParam0->f_21 < 14)
				if (MISC::GET_SYSTEM_TIME() - uParam0->f_31 >= 1000)
					if (!func_83(0, Global_1072759.f_23824.f_383[uParam0->f_4 /*272*/].f_5[uParam0->f_21 /*19*/], true))
						func_10(uParam0, 1);
					else
						func_10(uParam0, 6);
			else if (uParam0->f_21 == 14)
				if (uParam0->f_5)
					if (!func_83(0, Global_1072759.f_23824.f_383[uParam0->f_4 /*272*/], true))
						func_10(uParam0, 1);
					else
						func_10(uParam0, 6);
				else if (!func_83(1, 0, false))
					func_10(uParam0, 1);
				else
					func_10(uParam0, 6);
			else if (uParam0->f_21 == 15)
				if (func_69(player, true))
					if (!func_83(2, 0, false))
						func_10(uParam0, 1);
					else
						func_10(uParam0, 6);
		
			func_32(uParam0, 4);
			break;
	
		case 4:
			func_56(uParam0, "NFT_TRANSACTION_FAILED");
			func_10(uParam0, 1);
			break;
	
		case 5:
			break;
	}

	return;
}

BOOL func_17() // Position - 0x18A1
{
	int num;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	num = func_84();
	flag = func_85();
	flag2 = !CAM::IS_SCREEN_FADED_OUT() && !Global_1048581;

	switch (num)
	{
		case 0:
			break;
	
		case 1:
		case 5:
			if (flag)
				if (func_86() <= 3)
					if (!ENTITY::IS_ENTITY_VISIBLE(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
						func_78(false, 124);
					else
						func_78(false, 104);
				else if (func_87(2))
					func_78(false, 112);
				else
					func_78(false, 124);
			else if (flag2)
				func_78(true, 2);
			else if (!ENTITY::IS_ENTITY_VISIBLE(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
				func_78(false, 12);
			else
				func_78(false, 8);
			break;
	
		case 2:
		case 3:
			if (flag)
				func_78(false, 72);
			else if (flag2)
				func_78(false, 72);
			else
				func_78(false, 8);
			break;
	
		case 4:
			if (Global_1102813 != 22)
			{
				if (flag)
				{
					flag3 = Global_1102813 <= 10;
				
					if (flag2)
						if (flag3)
							func_78(false, 104);
						else
							func_78(false, 124);
					else if (flag3)
						func_78(false, 40);
					else
						func_78(false, 60);
				}
				else
				{
					flag3 = Global_1102813.f_3904;
				
					if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
						flag3 = true;
				
					if (Global_1102813.f_4[Global_1106895[2 /*2*/]] && Global_1106895[2 /*2*/].f_1 == Global_1106895[2 /*2*/].f_1)
						flag3 = false;
				
					if (Global_1102813.f_4[Global_1106895[74 /*2*/]] && Global_1106895[74 /*2*/].f_1 == Global_1106895[74 /*2*/].f_1 || Global_1102813.f_4[Global_1106895[75 /*2*/]] && Global_1106895[75 /*2*/].f_1 == Global_1106895[75 /*2*/].f_1 || Global_1102813.f_4[Global_1106895[69 /*2*/]] && Global_1106895[69 /*2*/].f_1 == Global_1106895[69 /*2*/].f_1 || Global_1102813.f_4[Global_1106895[70 /*2*/]] && Global_1106895[70 /*2*/].f_1 == Global_1106895[70 /*2*/].f_1)
						if (Global_1102813 > 10)
							flag3 = false;
				
					if (flag2)
						func_88(flag3, true, false, flag3, true, false, false);
					else
						func_88(flag3, true, false, flag3, false, false, false);
				}
			}
			else if (flag)
			{
				if (flag2)
					func_78(false, 124);
				else
					func_78(false, 60);
			}
			else if (!(Global_1102813.f_4[Global_1106895[25 /*2*/]] && Global_1106895[25 /*2*/].f_1 == Global_1106895[25 /*2*/].f_1))
			{
				if (Global_1102813.f_4[Global_1106895[63 /*2*/]] && Global_1106895[63 /*2*/].f_1 == Global_1106895[63 /*2*/].f_1 || Global_1102813.f_4[Global_1106895[64 /*2*/]] && Global_1106895[64 /*2*/].f_1 == Global_1106895[64 /*2*/].f_1)
					func_78(true, 256);
				else
					func_78(true, 2);
			}
			else
			{
				func_78(false, 8);
			}
		
			func_89();
			break;
	}

	return ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID());
}

void func_18() // Position - 0x1BCE
{
	Global_1940085.f_105 = -1;
	Global_1940085.f_105.f_1 = 0;
	return;
}

BOOL func_19(int iParam0) // Position - 0x1BE6
{
	return Global_1102813.f_4[Global_1106895[iParam0 /*2*/]] && Global_1106895[iParam0 /*2*/].f_1 == Global_1106895[iParam0 /*2*/].f_1;
}

void func_20() // Position - 0x1C14
{
	func_90(0, 4, false);

	if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4))
		func_91(32768);

	return;
}

void func_21(Ped pedParam0, BOOL bParam1) // Position - 0x1C33
{
	if (bParam1)
	{
		if (!func_92(64))
		{
			PED::SET_PED_RESET_FLAG(pedParam0, 187, bParam1);
			PED::SET_PED_RESET_FLAG(pedParam0, 129, bParam1);
			PED::SET_PED_RESET_FLAG(pedParam0, 219, bParam1);
			PED::SET_PED_RESET_FLAG(pedParam0, 220, bParam1);
			func_54(64);
		}
	}
	else if (func_92(64))
	{
		PED::SET_PED_RESET_FLAG(pedParam0, 187, bParam1);
		PED::SET_PED_RESET_FLAG(pedParam0, 129, bParam1);
		PED::SET_PED_RESET_FLAG(pedParam0, 219, bParam1);
		PED::SET_PED_RESET_FLAG(pedParam0, 220, bParam1);
		func_79(64);
	}

	return;
}

void func_22(var uParam0) // Position - 0x1CB2
{
	func_93();
	func_32(uParam0, 2);
	func_32(uParam0, 4);
	return;
}

void func_23() // Position - 0x1CCC
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

int func_24(Entity eParam0) // Position - 0x1CD8
{
	Vector3 entityCoords;
	int i;
	float num;
	float num2;
	int num3;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(eParam0, true, false) };
	i = 0;
	num = 1E+15f;
	num2 = num;
	num3 = -1;

	for (i = 0; i <= 14; i = i + 1)
	{
		num = BUILTIN::VDIST(entityCoords, Global_1072759.f_23824.f_383[i /*272*/].f_2);
	
		if (num < num2)
		{
			num2 = num;
			num3 = i;
		}
	}

	return num3;
}

BOOL func_25(int iParam0) // Position - 0x1D3F
{
	if (iParam0 < 0 || iParam0 >= 32)
		return false;

	return true;
}

int func_26(int iParam0, BOOL bParam1) // Position - 0x1D5E
{
	if (!func_25(iParam0))
	{
		!bParam1;
		return 0;
	}

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1141332[iParam0 /*27*/].f_9))
	{
		!bParam1;
		return 0;
	}

	return GANG::NETWORK_GET_GANG_ID(Global_1141332[iParam0 /*27*/].f_9);
}

int func_27(Any anParam0) // Position - 0x1DA4
{
	if (!GANG::NETWORK_IS_GANG_ID_VALID(anParam0))
		return -1;

	if (anParam0 == GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))
		return func_94(PLAYER::PLAYER_ID());

	return func_95(GANG::NETWORK_GET_GANG_LEADER(anParam0));
}

Vector3 func_28(int iParam0) // Position - 0x1DDC
{
	if (!func_25(iParam0))
		return 0f, 0f, 0f;

	return Global_1141332[iParam0 /*27*/].f_20;
}

// Unhandled jump detected. Output should be considered invalid
int func_29(char* sParam0, Hash hParam1, Ped pedParam2, int iParam3, int iParam4, BOOL bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, Hash hParam14, BOOL bParam15, int iParam16) // Position - 0x1E00
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam2))
		return 0;

	for (i = 0; i < 60; i = i + 1)
	{
		if (func_96(i, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (pedParam2 == Global_1951910[i /*23*/].f_11 && hParam1 == Global_1951910[i /*23*/].f_4)
					if (iParam3 <= Global_1951910[i /*23*/])
						return i;
			
				goto 0x8C;
			}
		}
	
		if (num == 0)
			num = i;
	}

	if (num != 0)
	{
		func_97(num, hParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, pedParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, false, bParam5, 0, hParam14, iParam16);
		return num;
	}

	return 0;
}

BOOL func_30(int iParam0) // Position - 0x1ED7
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 60)
		return false;

	if (Global_1951910[iParam0 /*23*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3);
}

void func_31(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1F16
{
	int num;

	if (bParam3 && !func_30(iParam0))
		return;

	num = func_98(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951910[num /*23*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1951910[num /*23*/].f_3, iParam1, bParam2);
	return;
}

void func_32(var uParam0, int iParam1) // Position - 0x1F61
{
	uParam0->f_1 = uParam0->f_1 - uParam0->f_1 && iParam1;
	return;
}

void func_33(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1F79
{
	int num;

	if (bParam2 && !func_30(iParam0))
		return;

	num = func_98(iParam0);

	if (bParam1)
	{
		func_99(iParam0, 4);
	
		if (bParam3)
			func_100(num, true);
	
		func_101(num, true);
	}
	else
	{
		func_102(iParam0, 4);
		func_101(num, false);
	}

	return;
}

void func_34(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1FCD
{
	int num;

	if (bParam2 && !func_30(iParam0))
		return;

	num = func_98(iParam0);
	func_100(num, bParam1);
	return;
}

BOOL func_35(var uParam0, int iParam1) // Position - 0x1FF9
{
	if (uParam0->f_19 != iParam1)
	{
		uParam0->f_19 = iParam1;
		return 1;
	}

	return 0;
}

Vector3 func_36(Player plParam0) // Position - 0x2015
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false, false);
}

BOOL func_37(int iParam0, int iParam1) // Position - 0x2029
{
	if (iParam1 == 255)
		return Global_1102813.f_3 && iParam0 != false;

	return Global_1101558[iParam1 /*38*/].f_3 && iParam0 != false;
}

BOOL func_38() // Position - 0x2055
{
	return Global_1072759.f_28644.f_66.f_42 != 0;
}

BOOL func_39() // Position - 0x206A
{
	return Global_1072759.f_28644.f_23.f_3 != 0;
}

BOOL func_40() // Position - 0x207F
{
	return Global_1072759.f_28644.f_59.f_6 == 2;
}

BOOL func_41(int iParam0) // Position - 0x2094
{
	return func_103(1, iParam0);
}

BOOL func_42(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x20A3
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_104(bParam1, bParam2, bParam3);

	if (Global_1572887.f_14 != -1)
		if (plParam0 == Global_1295666.f_5)
			if (!Global_1295666.f_6)
				return false;
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(plParam0)))
			return false;
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(plParam0)))
		return false;

	if (LAW::IS_LAW_INCIDENT_ACTIVE(plParam0))
	{
		LAW::_0xCBFB4951F2E3934C(plParam0, &data);
	
		if (bParam3 || data.f_10 > 0 || PLAYER::GET_PLAYER_WANTED_LEVEL(plParam0) > 0)
			return true;
	}
	else if (bParam2 && !(LAW::_0x148E7AC8141C9E64(plParam0) == 1370593166))
	{
		return false;
	}

	for (i = 0; i < 24; i = i + 1)
	{
		if (LAW::GET_PLAYER_REGISTERED_CRIME(plParam0, i, &crimeType))
			if (crimeType.f_10 && bParam3 || LAW::_0xDAEFDFDB2AEECE37(crimeType, crimeType.f_7) > 0)
				return true;
	}

	if (bParam1)
		if (LAW::ARE_WITNESSES_ACTIVE(plParam0) || LAW::_ARE_INVESTIGATORS_ACTIVE(plParam0, false, 0))
			if (bParam3 || LAW::_0xE083BEDA81709891(plParam0) > 0)
				return true;

	return false;
}

BOOL func_43() // Position - 0x21D8
{
	if (Global_1108965.f_775.f_23 && func_105())
		return true;

	if (func_107(func_106(0)))
	{
		if (func_105() && !func_108())
			return false;
	
		return true;
	}

	return false;
}

BOOL func_44() // Position - 0x221F
{
	return Global_1940252.f_2 || Global_1940252 == 1;
}

BOOL func_45() // Position - 0x2239
{
	Entity transportPedIsSeatedOn;
	Ped PedIndex;

	PedIndex = PLAYER::PLAYER_PED_ID();

	if (!PED::IS_PED_IN_ANY_VEHICLE(PedIndex, false) && !func_109(PedIndex))
		return false;

	transportPedIsSeatedOn = PED::_GET_TRANSPORT_PED_IS_SEATED_ON(PedIndex);

	if (!ENTITY::DOES_ENTITY_EXIST(transportPedIsSeatedOn))
		return false;

	if (!func_110(transportPedIsSeatedOn))
		return false;

	if (!AITRANSPORT::_IS_TRANSPORT_SEAT_OCCUPIED(transportPedIsSeatedOn, -2))
		return false;

	return true;
}

BOOL func_46() // Position - 0x2298
{
	Entity transportPedIsSeatedOn;
	Ped PedIndex;
	Vehicle vehicleIndexFromEntityIndex;
	int i;
	int seat;
	BOOL num;

	PedIndex = PLAYER::PLAYER_PED_ID();

	if (!PED::IS_PED_IN_ANY_VEHICLE(PedIndex, false))
		return false;

	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PedIndex))
		return false;

	transportPedIsSeatedOn = PED::_GET_TRANSPORT_PED_IS_SEATED_ON(PedIndex);

	if (!ENTITY::DOES_ENTITY_EXIST(transportPedIsSeatedOn))
		return false;

	if (!ENTITY::IS_ENTITY_A_VEHICLE(transportPedIsSeatedOn))
		return false;

	vehicleIndexFromEntityIndex = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(transportPedIsSeatedOn);
	num = 0;

	for (i = 0; i < 9; i = i + 1)
	{
		seat = i;
	
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehicleIndexFromEntityIndex, seat) == PedIndex)
			num = 1;
	}

	return num;
}

BOOL func_47() // Position - 0x231B
{
	Entity transportPedIsSeatedOn;
	Ped PedIndex;

	PedIndex = PLAYER::PLAYER_PED_ID();

	if (!PED::IS_PED_IN_ANY_VEHICLE(PedIndex, false) && !func_109(PedIndex))
		return false;

	transportPedIsSeatedOn = PED::_GET_TRANSPORT_PED_IS_SEATED_ON(PedIndex);

	if (!ENTITY::DOES_ENTITY_EXIST(transportPedIsSeatedOn))
		return false;

	if (!ENTITY::IS_ENTITY_A_VEHICLE(transportPedIsSeatedOn))
		return false;

	if (!AITRANSPORT::_IS_TRANSPORT_SEAT_OCCUPIED(transportPedIsSeatedOn, -2))
		return false;

	return true;
}

BOOL func_48() // Position - 0x237A
{
	Ped EntityIndex;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1295666.f_3))
		return false;

	if (!PED::IS_PED_A_PLAYER(Global_1295666.f_3))
		return false;

	EntityIndex = func_111(Global_1295666.f_3);

	if (!ENTITY::DOES_ENTITY_EXIST(EntityIndex))
		return false;

	if (!PED::IS_PED_A_PLAYER(EntityIndex))
		return false;

	return true;
}

BOOL func_49(Player plParam0) // Position - 0x23CF
{
	Ped mountOwnedByPlayer;
	int i;

	if (PLAYER::IS_PLAYER_DEAD(plParam0))
		return true;

	if (PED::IS_PED_INCAPACITATED(PLAYER::GET_PLAYER_PED(plParam0)))
		return true;

	if (TASK::IS_PED_RUNNING_INSPECTION_TASK(PLAYER::GET_PLAYER_PED(plParam0)))
		return true;

	if (func_112())
		return true;

	if (func_113(func_106(0)) == 7)
		return true;

	if (func_114())
		return true;

	if (func_41(255))
		return true;

	if (!func_115(false, false, false, true, false, false, false, true, true))
		return true;

	if (func_116())
		return true;

	if (func_117())
		return true;

	if (func_118())
		return true;

	if (Global_1901671.f_701.f_33)
	{
		mountOwnedByPlayer = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(plParam0);
	
		if (ENTITY::DOES_ENTITY_EXIST(mountOwnedByPlayer))
		{
			for (i = 0; i < 3; i = i + 1)
			{
				if (!func_119(Global_1903838.f_113[i /*96*/].f_1, 0))
				{
				}
				else
				{
					func_120(68, false);
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_50(Ped pedParam0, Ped pedParam1) // Position - 0x24C3
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (PED::IS_PED_IN_COMBAT(pedParam0, pedParam1))
			return true;

	return false;
}

void func_51(var uParam0) // Position - 0x24E5
{
	Hash hash;
	int value;
	float num;
	int value2;
	float num2;
	int value3;
	var buffer;

	value3 = 0;
	value = func_70(-1224135119, 59806960, false, false, true, 0);

	if (func_65(-1224135119, &hash))
		value2 = func_70(-1224135119, hash, true, false, true, 0);
	else if (func_66(-1224135119, &hash))
		value2 = func_70(-1224135119, hash, true, false, true, 0);
	else
		value2 = func_70(-1224135119, 59806960, true, false, true, 0);

	if (value != value2)
	{
		num = BUILTIN::TO_FLOAT(value);
		num2 = BUILTIN::TO_FLOAT(value2);
		value3 = BUILTIN::FLOOR(((num - num2) / num) * 100f);
		MISC::_INT_TO_STRING(value3, "%i", &buffer);
		func_56(uParam0, MISC::VAR_STRING(10, "NFT_DISCOUNTED", &buffer));
	}

	return;
}

float func_52(int iParam0, BOOL bParam1) // Position - 0x25A5
{
	int num;

	if (bParam1 && !func_30(iParam0))
		return 0f;

	num = func_98(iParam0);

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1951910[num /*23*/].f_3))
		return HUD::_UI_PROMPT_GET_MASH_MODE_PROGRESS(Global_1951910[num /*23*/].f_3);

	return HUD::_UI_PROMPT_GET_PROGRESS(Global_1951910[num /*23*/].f_3);
}

BOOL func_53(int iParam0, BOOL bParam1) // Position - 0x25FD
{
	int num;
	int gameTimer;
	float progress;
	int num2;
	int num3;

	if (bParam1 && !func_30(iParam0))
		return false;

	num = func_98(iParam0);

	if (HUD::_UI_PROMPT_HAS_HOLD_AUTO_FILL_MODE(Global_1951910[num /*23*/].f_3))
	{
		if (Global_1951910[num /*23*/].f_20)
			gameTimer = MISC::GET_GAME_TIMER();
		else
			gameTimer = MISC::GET_SYSTEM_TIME();
	
		progress = HUD::_UI_PROMPT_GET_PROGRESS(Global_1951910[num /*23*/].f_3);
	
		if (!HUD::_UI_PROMPT_IS_ACTIVE(Global_1951910[num /*23*/].f_3))
		{
			num2 = gameTimer - Global_1951910[num /*23*/].f_21;
			num3 = BUILTIN::FLOOR((float)Global_1951910[num /*23*/].f_18 * (1f - Global_1951910[num /*23*/].f_22));
		
			if (num2 > num3)
				return true;
		}
		else
		{
			Global_1951910[num /*23*/].f_21 = gameTimer;
			Global_1951910[num /*23*/].f_22 = progress;
		}
	}

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1951910[num /*23*/].f_3))
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1951910[num /*23*/].f_3);

	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1951910[num /*23*/].f_3);
}

void func_54(int iParam0) // Position - 0x26F7
{
	func_121(&(Global_1072759.f_23824.f_5), iParam0);
	return;
}

BOOL func_55(int iParam0, BOOL bParam1) // Position - 0x270E
{
	int num;

	if (bParam1 && !func_30(iParam0))
		return false;

	num = func_98(iParam0);
	return HUD::_UI_PROMPT_IS_ACTIVE(Global_1951910[num /*23*/].f_3);
}

void func_56(var uParam0, const char* sParam1) // Position - 0x2741
{
	if (uParam0->f_26 > 0f)
		return;

	func_122(sParam1, 10000, 0, 0, 0, true);
	uParam0->f_26 = 20f;
	return;
}

void func_57(int iParam0, Hash hParam1) // Position - 0x276C
{
	int num;

	if (!func_30(iParam0))
		return;

	num = func_98(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951910[num /*23*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_ALLOWED_ACTION(Global_1951910[num /*23*/].f_3, hParam1);
	return;
}

BOOL func_58(BOOL bParam0, int iParam1) // Position - 0x27AE
{
	if (!func_123(PLAYER::PLAYER_ID(), bParam0, iParam1))
	{
		func_124(1, true);
		return false;
	}
	else if (!func_125(PLAYER::PLAYER_ID(), bParam0, iParam1))
	{
		return false;
	}

	return true;
}

void func_59() // Position - 0x27E8
{
	func_126(0, 4);
	func_127(32768);
	return;
}

int func_60(var uParam0, int iParam1) // Position - 0x27FE
{
	Global_1072759.f_23824.f_4 = iParam1;
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1072759.f_23824.f_6.f_3, MISC::VAR_STRING(2, func_128(iParam1)));
	func_129(uParam0);
	return 1;
}

void func_61(var uParam0, int iParam1) // Position - 0x2832
{
	uParam0->f_1 = uParam0->f_1 || iParam1;
	return;
}

BOOL func_62(var uParam0, int iParam1) // Position - 0x2845
{
	return uParam0->f_1 && iParam1 != false;
}

void func_63(var uParam0, var uParam1) // Position - 0x2856
{
	int eventData;
	Any any;

	while (UIEVENTS::EVENTS_UI_IS_PENDING(joaat("fast_travel_menu")))
	{
		if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(joaat("fast_travel_menu"), &eventData))
		{
			any = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(eventData.f_3, "locationArrayIndex");
		
			switch (eventData)
			{
				case -1740156697:
					switch (eventData.f_2)
					{
						case 42753526:
							func_61(uParam0, 8);
							*uParam1 = any;
							break;
					}
					break;
			
				case -1203660660:
					switch (eventData.f_2)
					{
						case joaat("FAST_TRAVEL_UI_EVENT_EXIT"):
							func_61(uParam0, 2);
							break;
					
						case 42753526:
							func_61(uParam0, 4);
							*uParam1 = any;
							break;
					}
					break;
			
				case -722926211:
					switch (eventData.f_2)
					{
						case -1517694752:
							func_130(uParam0, false);
							break;
					}
					break;
			
				case 703281244:
					switch (eventData.f_2)
					{
						case -1517694752:
							func_130(uParam0, true);
							break;
					}
					break;
			}
		
			UIEVENTS::EVENTS_UI_POP_MESSAGE(joaat("fast_travel_menu"));
		}
	}

	return;
}

Hash func_64(var uParam0) // Position - 0x2941
{
	int num;

	if (uParam0->f_21 < 14)
		num = Global_1072759.f_23824.f_383[uParam0->f_4 /*272*/].f_5[uParam0->f_21 /*19*/].f_17;
	else if (uParam0->f_21 == 14)
		if (uParam0->f_5)
			num = 0;
		else
			num = 0;
	else if (uParam0->f_21 == 15)
		num = func_131(uParam0);

	return func_71(num, uParam0);
}

BOOL func_65(Hash hParam0, var uParam1) // Position - 0x29A7
{
	*uParam1 = func_132(hParam0, true);
	return *uParam1 != 0;
}

BOOL func_66(Hash hParam0, var uParam1) // Position - 0x29BE
{
	*uParam1 = func_133(hParam0, true, false);
	return *uParam1 != 0;
}

char* func_67(Hash* phParam0) // Position - 0x29D6
{
	Hash* p_hash;

	p_hash = phParam0;

	switch (p_hash)
	{
		case joaat("STATION_BLACKWATER"):
			return "NFT_BLACKWATER_DESC";
	
		case joaat("STATION_ANNESBERG"):
			return "NFT_ANNESBERG_DESC";
	
		case joaat("STATION_VAN_HORN"):
			return "NFT_VAN_HORN_DESC";
	
		case joaat("STATION_ARMADILLO"):
			return "NFT_ARMADILLO_DESC";
	
		case joaat("STATION_WAPITI"):
			return "NFT_WAPITI_DESC";
	
		case joaat("STATION_COLTER"):
			return "NFT_COLTER_DESC";
	
		case joaat("STATION_LAGRAS"):
			return "NFT_LAGRAS_DESC";
	
		case joaat("STATION_EMERALD"):
			return "NFT_EMERALD_DESC";
	
		case joaat("STATION_VALENTINE"):
			return "NFT_VALENTINE_DESC";
	
		case joaat("STATION_TUMBLEWEED"):
			return "NFT_TUMBLEWEED_DESC";
	
		case joaat("STATION_MANZANITA"):
			return "NFT_MANZANITA_DESC";
	
		case joaat("STATION_MACFARLANES"):
			return "NFT_MACFARLANES_DESC";
	
		case joaat("STATION_RHODES"):
			return "NFT_RHODES_DESC";
	
		case joaat("STATION_SAINT_DENIS"):
			return "NFT_SAINT_DENIS_DESC";
	
		case joaat("STATION_STRAWBERRY"):
			return "NFT_STRAWBERRY_DESC";
	}

	return "";
}

Player func_68() // Position - 0x2ADE
{
	return Global_1297229.f_200;
}

BOOL func_69(Player plParam0, BOOL bParam1) // Position - 0x2AEC
{
	Player player;

	if (bParam1)
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			return false;

	player = plParam0;

	if (!func_134(Global_1297600[player /*87*/]))
		return false;

	if (Global_1297600[player /*87*/].f_5.f_12 == -1)
		return false;

	return true;
}

// Unhandled jump detected. Output should be considered invalid
int func_70(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x2B41
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (bParam4 && hParam1 == -915411861 && func_135(hParam0, 59806960))
		hParam1 = 59806960;

	if (func_136(hParam0) || func_137(hParam0, 1077060302))
		return func_139(func_138(hParam0, false), hParam1, bParam3, true);

	if (!func_140(hParam0, hParam1, &unk, &num, bParam2, bParam3))
	{
		!bParam3;
		return 0;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == joaat("currency_cash") || unk[i /*2*/] == joaat("currency_gold_bar"))
		{
			if (iParam5 != 0 && unk[i /*2*/] != iParam5)
			{
			}
			else
			{
				return unk[i /*2*/].f_1;
				goto 0xDD;
			}
		}
	
		if (unk[i /*2*/] == 0)
			break;
	}

	!bParam3;
	return 0;
}

Hash func_71(int iParam0, var uParam1) // Position - 0x2C31
{
	if (uParam1->f_5 || uParam1->f_8 != 0 && iParam0 == 0 || uParam1->f_6)
		iParam0 = iParam0 + uParam1->f_8;

	switch (iParam0)
	{
		case 1:
			return -1224135119;
	
		case 2:
			return -1540978580;
	
		case 3:
			return -1837275878;
	
		case 4:
			return 307422403;
	
		case 5:
			return 5849296;
	
		case 6:
			return -316007822;
	
		case 7:
			return -605358092;
	
		case 8:
			return 455865965;
	
		case 9:
			return 158356214;
	
		case 10:
			return -1476715399;
	
		case 11:
			return -1297534507;
	
		case 12:
			return 1282532708;
	
		case 13:
			return 482346497;
	
		case 14:
			return 1858054659;
	
		case 15:
			return 1100140454;
	
		case 16:
			return 1100140454;
	
		default:
		
	}

	if (iParam0 <= 0)
		return -1224135119;

	return 1100140454;
}

int func_72(int iParam0, Hash hParam1) // Position - 0x2D62
{
	var unk;
	int cashBalance;
	Player player;

	if (!func_119(hParam1, 0))
		return 1;

	if (func_141(hParam1) != 1388422710)
		return 2;

	if (!func_65(hParam1, &unk))
	{
		cashBalance = func_70(hParam1, 59806960, true, false, true, 0);
	
		if (cashBalance < 0 || !func_135(hParam1, 59806960))
			return 3;
	
		if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(cashBalance, 0) && cashBalance != 0)
			return 4;
	}

	if (iParam0 == 14)
		if (!(func_27(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) >= 0))
			return 5;

	if (iParam0 == 15)
	{
		player = func_68();
	
		if (!func_69(player, true))
			return 6;
	}

	return 0;
}

int func_73(Hash hParam0, char* sParam1, int iParam2, BOOL bParam3, BOOL bParam4, Hash hParam5) // Position - 0x2E17
{
	int cashBalance;
	int goldBarBalance;
	var unk;
	int num;
	int num2;
	int i;
	var unk32;
	int num3;
	var unk49;

	if (!func_119(hParam0, 0))
		return -1;

	if (func_142(hParam0) != joaat("fee"))
		return -1;

	if (func_143())
		bParam3 = true;

	unk = 15;

	if (hParam5 == -570078785 || hParam5 == -915411861)
	{
		cashBalance = func_70(hParam0, hParam5, true, false, true, joaat("currency_cash")) * iParam2;
		goldBarBalance = 0;
	
		if (cashBalance <= 0)
		{
			goldBarBalance = func_70(hParam0, hParam5, true, false, true, joaat("currency_gold_bar")) * iParam2;
		
			if (goldBarBalance <= 0)
				return -1;
		}
	
		if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(cashBalance, goldBarBalance))
			return -1;
	}
	else if (func_140(hParam0, hParam5, &unk, &num, true, false))
	{
		for (i = 0; i < num; i = i + 1)
		{
			num2 = unk[i /*2*/].f_1 * iParam2;
		
			if (!(func_144(unk[i /*2*/], false, bParam3, false) >= num2))
				return -1;
		}
	}
	else
	{
		return -1;
	}

	if (!bParam3 && func_145(false))
	{
		if (cashBalance > 0)
		{
			func_146(joaat("currency_cash"), cashBalance, -142743235, 0, false);
		}
		else if (goldBarBalance > 0)
		{
			func_146(joaat("currency_gold_bar"), goldBarBalance, -142743235, 0, false);
		}
		else if (func_147(hParam5))
		{
			for (i = 0; i < num; i = i + 1)
			{
				num2 = unk[i /*2*/].f_1 * iParam2;
				func_146(unk[i /*2*/], num2, -142743235, 0, false);
			}
		}
	
		return -1;
	}

	unk32.f_9 = 1;
	unk32.f_11 = -1591664384;
	unk32.f_8 = hParam0;
	unk32.f_9 = iParam2;
	unk32.f_13 = hParam5;
	unk32.f_12 = -142743235;
	num3 = func_148(joaat("spend"), &unk32, bParam4);

	if (num3 == -1)
	{
	}
	else
	{
		unk49.f_7 = -142743235;
		unk49.f_16 = -1;
		TEXT_LABEL_ASSIGN_STRING(&(unk49.f_12), sParam1, 32);
		func_149(num3, unk49);
	}

	return num3;
}

Hash func_74(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x3007
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (!func_140(hParam0, hParam1, &unk, &num, true, false))
	{
		!bParam2;
		return 0;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (func_150(unk[i /*2*/]))
			return unk[i /*2*/];
		else if (unk[i /*2*/] == 0)
			break;
	}

	!bParam2;
	return 0;
}

int func_75(Hash hParam0) // Position - 0x3071
{
	int num;
	var unk;
	var unk6;

	num = -1;

	if (!func_150(hParam0))
		return num;

	num = 74330131;
	unk = { func_151(hParam0, false, 0) };
	unk6 = { func_152(hParam0, unk, unk.f_4, false) };

	if (!func_153(&unk6))
		return -1;

	if (func_154(unk6))
		num = 90473367;

	return num;
}

void func_76(var uParam0, Hash hParam1, Hash hParam2, int iParam3) // Position - 0x30D3
{
	uParam0->f_24 = hParam2;
	uParam0->f_23 = hParam1;
	uParam0->f_25 = iParam3;
	return;
}

void func_77(int iParam0) // Position - 0x30ED
{
	int idOfThisThread;

	idOfThisThread = SCRIPTS::GET_ID_OF_THIS_THREAD();

	if (SCRIPTS::DOES_THREAD_EXIST(Global_1940085.f_105.f_1) && Global_1940085.f_105.f_1 != idOfThisThread)
		return;

	Global_1940085.f_105.f_1 = idOfThisThread;
	Global_1940085.f_105 = iParam0;
	return;
}

void func_78(BOOL bParam0, int iParam1) // Position - 0x312F
{
	int num;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;

	if (bParam0)
	{
		func_155(iParam1);
		return;
	}

	if (iParam1 == 2)
		iParam1 = 56;

	num = iParam1;
	flag = !(num & 4 != 0);
	flag2 = num & 8 != 0;
	flag3 = num & 16 != 0;
	flag4 = num & 32 != 0;
	flag5 = num & 1024 != 0;
	flag6 = num & 64 != 0;
	func_88(flag, flag2, flag3, flag4 || flag5, flag6, false, flag5);
	return;
}

void func_79(int iParam0) // Position - 0x31A3
{
	func_156(&(Global_1072759.f_23824.f_5), iParam0);
	return;
}

int func_80(int iParam0, var uParam1) // Position - 0x31BA
{
	struct<6> data;
	eEventType eventAtIndex;
	int i;
	var itemInfo;
	int num;

	eventAtIndex = SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, iParam0);

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam0, &data, 6))
		return 1;

	itemInfo.f_9 = -1591664384;
	num = data.f_5;

	if (eventAtIndex != 1731288223)
		return 1;

	if (data != uParam1->f_22)
		return 1;

	if (data.f_2 == 1)
		return 2;

	for (i = 0; i < data.f_4; i = i + 1)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_RESPONSE_GET_ITEM_INFO(data, i, &itemInfo))
		{
			if (!func_119(itemInfo.f_8, 0))
			{
			}
			else if (num == joaat("use"))
			{
				return 3;
			}
		}
	}

	return 1;
}

int func_81(int iParam0) // Position - 0x325B
{
	int i;

	if (iParam0 == -1)
		return 0;

	for (i = 0; i < Global_1292143.f_20; i = i + 1)
	{
		if (Global_1292143.f_20.f_1[i /*21*/] == iParam0)
			return Global_1292143.f_20.f_1[i /*21*/].f_1;
	}

	return 0;
}

void func_82(var uParam0) // Position - 0x32A7
{
	var unk;
	Hash hash;

	if (!func_157(uParam0))
		return;

	if (!func_158(uParam0->f_22, &unk))
	{
		func_159(uParam0);
		return;
	}

	hash = func_74(uParam0->f_23, uParam0->f_24, false);
	TELEMETRY::_TELEMETRY_COUPON(&unk, func_160(hash), hash, uParam0->f_25, uParam0->f_23, joaat("FAST_TRAVEL"));
	func_159(uParam0);
	return;
}

BOOL func_83(int iParam0, Hash* phParam1, BOOL bParam2) // Position - 0x3303
{
	Player playerIndex;
	Ped EntityIndex;
	int num;
	int num2;
	Player player;
	int num3;
	int num4;
	var unk;
	float num5;
	int num6;
	BOOL flag;
	Ped mountOwnedByPlayer;

	playerIndex = PLAYER::GET_PLAYER_INDEX();
	EntityIndex = PLAYER::PLAYER_PED_ID();

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(playerIndex))
		return false;

	if (func_112())
	{
		if (bParam2)
		{
		}
		else
		{
			return false;
		}
	}

	if (func_161(256))
		func_162(512);

	switch (iParam0)
	{
		case 0:
			num6 = func_163(phParam1);
		
			if (num6 < 0)
				return false;
		
			func_164();
			func_165();
			flag = true;
		
			if (func_166(false) && func_167(false))
				flag = false;
		
			if (flag)
			{
				if (func_168(EntityIndex))
				{
					func_169(0, true, true);
				}
				else if (func_170(playerIndex))
				{
					func_169(0, true, true);
				}
				else if (func_171())
				{
					func_172();
				}
				else if (func_109(EntityIndex))
				{
					func_173(true, true);
				}
				else
				{
					mountOwnedByPlayer = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(playerIndex);
				
					if (ENTITY::DOES_ENTITY_EXIST(mountOwnedByPlayer))
						if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(EntityIndex, false, false), ENTITY::GET_ENTITY_COORDS(mountOwnedByPlayer, false, false)) < 15f)
							func_174(true, true);
				}
			}
		
			func_175(Global_1072759.f_23824.f_383[num6 /*272*/]);
			func_176(false, 1017438712);
			func_177();
		
			if (func_178())
				num = joaat("player_camp");
			else
				num = func_180(func_179(), false);
		
			if (num == 0)
				num = joaat("Wilderness");
		
			TELEMETRY::_TELEMETRY_FAST_TRAVEL(num, func_180(func_181(Global_1072759.f_23824.f_383[num6 /*272*/].f_2, true), false), Global_1072759.f_23824.f_383[num6 /*272*/].f_2);
			return true;
	
		case 1:
			if (!func_182(playerIndex, false))
				return false;
		
			func_164();
			func_165();
		
			if (func_168(EntityIndex))
				func_169(0, true, true);
			else if (func_170(playerIndex))
				func_169(0, true, true);
			else if (func_171())
				func_172();
		
			func_183();
			func_176(false, 1017438712);
			func_177();
			num = joaat("player_camp");
			num2 = func_180(func_179(), false);
		
			if (num2 == 0)
				num2 = joaat("Wilderness");
		
			TELEMETRY::_TELEMETRY_FAST_TRAVEL(num2, num, func_28(func_94(PLAYER::PLAYER_ID())));
			return true;
	
		case 2:
			player = func_68();
		
			if (!func_69(player, true))
				return false;
		
			num3 = func_184(player, true);
			num4 = 1;
		
			if (player == playerIndex)
				num4 = 0;
		
			unk = { func_185(num3, num4) };
			num5 = func_186(num3, num4);
			func_187(unk, num5, 2f, 25f, true, 1, 1);
			func_176(false, 1017438712);
			func_177();
			num = func_188(num3);
			num2 = func_180(func_179(), false);
		
			if (num2 == 0)
				num2 = joaat("Wilderness");
		
			TELEMETRY::_TELEMETRY_FAST_TRAVEL(num2, num, unk);
			return true;
	}

	return true;
}

int func_84() // Position - 0x35C8
{
	if (Global_1102813 <= 5)
		return Global_1102813;

	if (Global_1102813 <= 22)
		return 4;

	if (Global_1102813 <= 25)
		return 3;

	return 26;
}

BOOL func_85() // Position - 0x35FB
{
	if (Global_1102813.f_26.f_3337 == 9)
		return 0;

	if (Global_1102813.f_26.f_3337 == 10)
		return 0;

	if (Global_1102813.f_26.f_3337 == 11)
		return 0;

	if (func_87(2048))
		return 1;

	if (func_189(1))
		return 1;

	if (Global_1102813.f_26.f_3337 != 0)
		return 1;

	return 0;
}

int func_86() // Position - 0x3665
{
	return Global_1102813.f_26.f_3337;
}

BOOL func_87(BOOL bParam0) // Position - 0x3676
{
	return Global_1102813.f_26.f_9 && bParam0 != false;
}

void func_88(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x368B
{
	Player iPlayerIndex;
	Ped PedIndex;
	eSetPlayerControlFlags iFlags;

	!bParam0;
	bParam1;
	bParam2;
	bParam3;
	bParam6;
	bParam4;
	bParam5;
	iPlayerIndex = PLAYER::PLAYER_ID();
	PedIndex = PLAYER::PLAYER_PED_ID();
	iFlags = 0;

	if (bParam3 && !PED::IS_PED_FATALLY_INJURED(PedIndex))
		iFlags = SPC_CLEAR_TASKS;

	if (bParam4)
		iFlags = iFlags | SPC_LEAVE_CAMERA_CONTROL_ON;

	if (bParam5)
		iFlags = iFlags | SPC_PREVENT_EVERYBODY_BACKOFF;

	PLAYER::SET_PLAYER_CONTROL(iPlayerIndex, false, iFlags, false);
	ENTITY::SET_ENTITY_VISIBLE(PedIndex, bParam0);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(PedIndex, 2, bParam0);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(PedIndex, 3, bParam0);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(PedIndex, 11, bParam0);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(PedIndex, 12, bParam0);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(PedIndex, 1, bParam0);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(PedIndex, 0, bParam0);

	if (bParam1)
		PLAYER::SET_PLAYER_INVINCIBLE(iPlayerIndex, true);

	if (!PED::IS_PED_IN_ANY_VEHICLE(PedIndex, true) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(PedIndex) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(PedIndex))
	{
		if (bParam2)
		{
			ENTITY::SET_ENTITY_COLLISION(PedIndex, false, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(PedIndex, false, false);
			ENTITY::FREEZE_ENTITY_POSITION(PedIndex, true);
		}
	}

	if (bParam3 && !PED::IS_PED_FATALLY_INJURED(PedIndex))
		if (TASK::_0x9FF5F9B24E870748(PedIndex))
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PedIndex, false, !bParam6);

	return;
}

void func_89() // Position - 0x37AD
{
	Ped EntityIndex;

	if (func_19(36))
	{
		EntityIndex = PLAYER::PLAYER_PED_ID();
		ENTITY::SET_ENTITY_COORDS(EntityIndex, Global_1102813.f_3887, false, false, true, true);
		ENTITY::SET_ENTITY_INVINCIBLE(EntityIndex, true);
		ENTITY::SET_ENTITY_VISIBLE(EntityIndex, false);
		ENTITY::SET_ENTITY_COLLISION(EntityIndex, false, false);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(EntityIndex, false, false);
		PED::SET_PED_CAN_BE_TARGETTED(EntityIndex, false);
		ENTITY::FREEZE_ENTITY_POSITION(EntityIndex, true);
		PED::SET_PED_CONFIG_FLAG(EntityIndex, 301, true);
		PED::SET_PED_CONFIG_FLAG(EntityIndex, 277, true);
		PED::SET_PED_CONFIG_FLAG(EntityIndex, 417, true);
		PED::SET_PED_CONFIG_FLAG(EntityIndex, 394, true);
		PED::SET_PED_CONFIG_FLAG(EntityIndex, 253, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(EntityIndex, true);
	}

	return;
}

void func_90(int iParam0, int iParam1, BOOL bParam2) // Position - 0x383B
{
	if (func_190(iParam0, iParam1) && !bParam2 || Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] == SCRIPTS::GET_ID_OF_THIS_THREAD())
	{
		MISC::CLEAR_BIT(&Global_1072759.f_22475.f_417[iParam0 /*12*/], iParam1);
		Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] = 0;
		func_191();
	}

	return;
}

void func_91(int iParam0) // Position - 0x38A2
{
	Global_1102813.f_3 = Global_1102813.f_3 - Global_1102813.f_3 && iParam0;
	return;
}

BOOL func_92(BOOL bParam0) // Position - 0x38C0
{
	return Global_1072759.f_23824.f_5 && bParam0 != false;
}

void func_93() // Position - 0x38D6
{
	if (func_123(PLAYER::PLAYER_ID(), true, true))
		func_124(false, true);

	UIAPPS::_CLOSE_UIAPP_BY_HASH(joaat("fast_travel_menu"));
	return;
}

int func_94(Player plParam0) // Position - 0x38FA
{
	Player player;

	player = plParam0;

	if (player >= 0 && player < 32)
		return Global_1144526[player /*83*/].f_38.f_3;

	return -1;
}

int func_95(Player plParam0) // Position - 0x392A
{
	int i;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return -1;

	if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1141332.f_1091), plParam0))
		return -1;

	for (i = 0; i < 32; i = i + 1)
	{
		if (Global_1141332[i /*27*/].f_9 == plParam0 && Global_1141332[i /*27*/] != 3)
			return i;
	}

	return -1;
}

BOOL func_96(int iParam0, int iParam1) // Position - 0x398D
{
	if (iParam0 < 0)
		return false;

	return Global_1951910[iParam0 /*23*/].f_1 && iParam1 != false;
}

void func_97(int iParam0, Hash hParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, Volume volParam10, Ped pedParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0x39AE
{
	Prompt prompt;

	Global_1951910[iParam0 /*23*/].f_4 = hParam1;
	Global_1951910[iParam0 /*23*/] = iParam4;
	Global_1951910[iParam0 /*23*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1951910[iParam0 /*23*/].f_2 = iParam5;
	Global_1951910[iParam0 /*23*/].f_6 = { fParam6 };
	Global_1951910[iParam0 /*23*/].f_9 = fParam9;
	Global_1951910[iParam0 /*23*/].f_10 = volParam10;
	Global_1951910[iParam0 /*23*/].f_11 = pedParam11;
	Global_1951910[iParam0 /*23*/].f_12 = { 0f, 0f, 0f };
	Global_1951910[iParam0 /*23*/].f_5 = iParam12;
	Global_1951910[iParam0 /*23*/].f_1 = 2;
	Global_1951910[iParam0 /*23*/].f_17 = -1;
	Global_1951910[iParam0 /*23*/].f_18 = iParam16;
	Global_1951910[iParam0 /*23*/].f_19 = iParam15;
	Global_1951910[iParam0 /*23*/].f_20 = bParam25;
	Global_1951910[iParam0 /*23*/].f_22 = 0f;

	if (bParam25)
		Global_1951910[iParam0 /*23*/].f_21 = MISC::GET_GAME_TIMER();
	else
		Global_1951910[iParam0 /*23*/].f_21 = MISC::GET_SYSTEM_TIME();

	prompt = HUD::_UI_PROMPT_REGISTER_BEGIN();
	HUD::_UI_PROMPT_SET_CONTROL_ACTION(prompt, hParam1);

	if (hParam23 != 0)
		HUD::_UI_PROMPT_SET_CONTROL_ACTION(prompt, hParam23);

	HUD::_UI_PROMPT_SET_TEXT(prompt, sParam2);

	if (iParam3 == 4)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(prompt, fParam6);
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(prompt, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, volParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, pedParam11);
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(prompt, 0f, 0f, 0f);
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(prompt, fParam9);
	}

	HUD::_UI_PROMPT_SET_PRIORITY(prompt, iParam4);
	HUD::_UI_PROMPT_SET_TRANSPORT_MODE(prompt, iParam5);
	HUD::_UI_PROMPT_SET_ATTRIBUTE(prompt, 18, true);

	if (bParam22)
		HUD::_0x53CE46C01A089DA1(prompt, true);

	switch (iParam14)
	{
		case 0:
			HUD::_UI_PROMPT_SET_STANDARD_MODE(prompt, false);
			break;
	
		case 1:
			HUD::_UI_PROMPT_SET_PRESSED_TIMED_MODE(prompt, iParam16);
			break;
	
		case 2:
			HUD::_UI_PROMPT_SET_STANDARD_MODE(prompt, true);
			break;
	
		case 3:
			HUD::_UI_PROMPT_SET_HOLD_INDEFINITELY_MODE(prompt);
			break;
	
		case 4:
		case 5:
			HUD::_UI_PROMPT_SET_STANDARDIZED_HOLD_MODE(prompt, hParam24);
			break;
	
		case 6:
			HUD::_UI_PROMPT_SET_HOLD_AUTO_FILL_MODE(prompt, iParam16, iParam15);
		
			if (bParam25)
				HUD::_UI_PROMPT_SET_ATTRIBUTE(prompt, 24, true);
			break;
	
		case 7:
			HUD::_UI_PROMPT_SET_HOLD_AUTO_FILL_WITH_DECAY_MODE(prompt, iParam16, iParam15);
		
			if (bParam25)
				HUD::_UI_PROMPT_SET_ATTRIBUTE(prompt, 24, true);
			break;
	
		case 8:
			HUD::_UI_PROMPT_SET_MASH_MODE(prompt, iParam17);
			break;
	
		case 9:
			HUD::_UI_PROMPT_SET_MASH_AUTO_FILL_MODE(prompt, iParam16, iParam17);
			break;
	
		case 10:
			HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_MODE(prompt, iParam17, iParam18, iParam19);
			break;
	
		case 11:
			HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(prompt, iParam17, iParam18, iParam19);
			break;
	
		case 12:
			HUD::_UI_PROMPT_SET_MASH_MANUAL_MODE(prompt, 1f / BUILTIN::TO_FLOAT(iParam17), iParam18, 0f, iParam19);
			break;
	
		case 13:
			HUD::_UI_PROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(prompt, 1f / BUILTIN::TO_FLOAT(iParam17), iParam18, 0f, iParam19);
			break;
	
		case 14:
			HUD::_UI_PROMPT_SET_MASH_INDEFINITELY_MODE(prompt);
			break;
	
		case 15:
			HUD::_UI_PROMPT_SET_ROTATE_MODE(prompt, iParam20, bParam21);
			HUD::_UI_PROMPT_SET_ATTRIBUTE(prompt, 10, true);
			break;
	
		case 16:
			HUD::_UI_PROMPT_SET_TARGET_MODE(prompt, 0.5f, 0.1f, 0);
			break;
	}

	HUD::_UI_PROMPT_REGISTER_END(prompt);
	Global_1951910[iParam0 /*23*/].f_3 = prompt;
	func_100(iParam0, true);
	func_101(iParam0, true);
	func_102(iParam0, 128);
	return;
}

int func_98(int iParam0) // Position - 0x3CC8
{
	return iParam0;
}

void func_99(int iParam0, int iParam1) // Position - 0x3CD2
{
	if (iParam0 < 0)
		return;

	Global_1951910[iParam0 /*23*/].f_1 = Global_1951910[iParam0 /*23*/].f_1 - Global_1951910[iParam0 /*23*/].f_1 && iParam1;
	return;
}

void func_100(int iParam0, BOOL bParam1) // Position - 0x3D05
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		if (Global_1951910[iParam0 /*23*/].f_5 == 5 && !func_96(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[iParam0 /*23*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[iParam0 /*23*/].f_3, bParam1);

	return;
}

void func_101(int iParam0, BOOL bParam1) // Position - 0x3D5D
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951910[iParam0 /*23*/].f_3, bParam1);

	return;
}

void func_102(int iParam0, int iParam1) // Position - 0x3D86
{
	if (iParam0 < 0)
		return;

	Global_1951910[iParam0 /*23*/].f_1 = Global_1951910[iParam0 /*23*/].f_1 || iParam1;
	return;
}

BOOL func_103(int iParam0, int iParam1) // Position - 0x3DAE
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_192(&(Global_1102813.f_4), num, 5);

	if (iParam1 == func_193())
		return func_192(&(Global_1102813.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1295666.f_17[iParam1])
		return func_192(&(Global_1101558[iParam1 /*38*/].f_4), num, 5);

	return false;
}

BOOL func_104(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3E22
{
	if (Global_1940199.f_12)
		if (bParam2 || Global_1940199.f_13 > 0 || Global_1940199.f_11 > 0)
			return 1;
	else if (bParam1 && !(Global_1940199.f_9 == 1370593166))
		return 0;

	if (Global_1940199.f_14 > 0 || bParam2 && Global_1940199.f_14 > -1)
		return 1;

	if (bParam0)
		if (Global_1940199.f_7)
			if (bParam2 || Global_1940199.f_15 > 0)
				return 1;

	return 0;
}

BOOL func_105() // Position - 0x3EC0
{
	return Global_1108965.f_775.f_28 != -1;
}

struct<2> func_106(int iParam0) // Position - 0x3ED3
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

BOOL func_107(var uParam0, var uParam1) // Position - 0x3EE7
{
	if (!func_194(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_195(uParam0))
		return false;

	return true;
}

BOOL func_108() // Position - 0x3F1B
{
	switch (Global_1108965.f_775.f_28)
	{
		case 6:
			return true;
	
		case 7:
			if (func_196())
				return true;
		
			return false;
	
		default:
		
	}

	return false;
}

BOOL func_109(Ped pedParam0) // Position - 0x3F52
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		return PED::IS_PED_FULLY_ON_MOUNT(pedParam0, true);

	return false;
}

BOOL func_110(Entity eParam0) // Position - 0x3F6F
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return false;

	if (!ENTITY::IS_ENTITY_A_PED(eParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(eParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(entityModel);
}

Ped func_111(Ped pedParam0) // Position - 0x3FA1
{
	Ped EntityIndex;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		EntityIndex = func_197(pedParam0);
	
		if (!ENTITY::DOES_ENTITY_EXIST(EntityIndex) && PED::IS_PED_ON_MOUNT(pedParam0))
			EntityIndex = func_197(PED::GET_MOUNT(pedParam0));
	}

	return EntityIndex;
}

BOOL func_112() // Position - 0x3FDD
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("FEATURE_FAST_TRAVEL")))
		return true;

	if (func_43())
		return true;

	return func_92(2);
}

int func_113(int iParam0, var uParam1) // Position - 0x4007
{
	return iParam0;
}

BOOL func_114() // Position - 0x4011
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_5)
		return true;

	if (Global_2883584)
		return true;

	if (Global_1048577)
		return true;

	if (!func_107(Global_1051268) && Global_1572887.f_8 & true != 0)
		return true;

	return false;
}

BOOL func_115(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x4069
{
	Player PlayerIndex;
	Ped EntityIndex;
	BOOL isEntityDead;
	BOOL isPedIncapacitated;
	int num;

	if (!bParam7 && UIAPPS::IS_ANY_UIAPP_RUNNING())
		return false;

	if (!NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(-496459706))
		return false;

	PlayerIndex = Global_1295666.f_149[Global_1295666];
	EntityIndex = Global_1295666.f_3;
	isEntityDead = ENTITY::IS_ENTITY_DEAD(EntityIndex);
	isPedIncapacitated = PED::IS_PED_INCAPACITATED(EntityIndex);

	if (isEntityDead || isPedIncapacitated)
	{
		if (!bParam5)
			return false;
	}
	else
	{
		if (!bParam4)
		{
			if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33))
				return false;
		
			if (PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_33, "inInspectionMode"))
				return false;
		}
	
		if (bParam0 && !PLAYER::IS_PLAYER_CONTROL_ON(PlayerIndex))
		{
			if (bParam6 && Global_1102813.f_3 & 32 != 0)
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON(EntityIndex, "iMinigameSeat"))
			{
			}
			else
			{
				return false;
			}
		}
	}

	if (!bParam1)
	{
		if (Global_1915656.f_20638 || Global_1915656.f_22504.f_1)
			return false;
	
		if (TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(Global_33) != 0)
			return false;
	}

	if (func_198())
		return false;

	if (Global_15)
		return false;

	if (!bParam2 && Global_1940085.f_10 || Global_1940085.f_11 || Global_1940085.f_12 || Global_1940085.f_13)
		return false;

	if (!bParam3)
	{
		num = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	
		if (Global_1235687.f_9479 != -1)
			return false;
	
		if (Global_1138673[num /*56*/].f_34 & 1 != 0 && Global_1138673[num /*56*/].f_34 & 2 == 0)
			return false;
	
		if (Global_1140770.f_293)
			return false;
	
		if (Global_1572887.f_72.f_40 > 11 && Global_1572887.f_72.f_40 < 15)
			return false;
		else if (Global_1572887.f_72.f_40 > 15)
			return false;
	}

	if (!bParam8)
	{
		if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(2) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(8) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(9))
		{
			if (Global_1048576 || Global_2883584)
				return false;
		
			if (Global_1048581)
				return false;
		
			if (Global_1048585)
				return false;
		}
	}

	return true;
}

BOOL func_116() // Position - 0x428F
{
	return Global_1896762.f_352;
}

BOOL func_117() // Position - 0x429E
{
	return Global_1940252.f_2;
}

BOOL func_118() // Position - 0x42AC
{
	Ped mountOwnedByPlayer;

	mountOwnedByPlayer = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());

	if (!ENTITY::DOES_ENTITY_EXIST(mountOwnedByPlayer))
	{
		if (func_199(65536, 255))
			func_200(65536);
	
		return false;
	}

	if (func_199(65536, 255))
		return true;

	return false;
}

BOOL func_119(Hash hParam0, int iParam1) // Position - 0x42F3
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

void func_120(int iParam0, BOOL bParam1) // Position - 0x430D
{
	int num;
	int num2;

	func_201(iParam0, &num, &num2);

	if (!func_202(iParam0, num, num2, bParam1))
		return;

	func_203(num, num2);
	return;
}

void func_121(BOOL bParam0, int iParam1) // Position - 0x433A
{
	*bParam0 = *bParam0 || iParam1;
	return;
}

int func_122(const char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x434B
{
	int num;
	var unk13;
	int num2;

	num = -2;
	num = iParam1;
	num.f_1 = iParam2;
	num.f_2 = iParam3;
	num.f_3 = iParam4;
	unk13.f_1 = sParam0;
	num2 = UIFEED::_UI_FEED_POST_HELP_TEXT(&num, &unk13, bParam5);
	return num2;
}

BOOL func_123(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4386
{
	if (bParam1)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0))
			return bParam2;
	
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			return bParam2;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_MOUNT_OWNED_BY_PLAYER(plParam0)))
		return bParam2;

	return func_204(Global_1289643[plParam0 /*19*/].f_12, 1);
}

void func_124(BOOL bParam0, BOOL bParam1) // Position - 0x43D3
{
	Player Plr;
	Player player;

	Plr = PLAYER::PLAYER_ID();

	if (bParam1)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Plr))
			return;
	
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Plr))
			return;
	}

	player = Plr;

	if (func_204(Global_1289643[player /*19*/].f_12, true) != bParam0)
	{
		if (bParam0)
			func_121(&(Global_1289643[player /*19*/].f_12), 1);
		else
			func_156(&(Global_1289643[player /*19*/].f_12), 1);
	
		func_156(&(Global_1289643[player /*19*/].f_12), 2);
	
		if (bParam0)
			func_205(&(Global_1290271.f_11.f_788));
		else
			func_206(&(Global_1290271.f_11.f_788));
	}

	return;
}

BOOL func_125(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x446F
{
	if (bParam1)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0))
			return bParam2;
	
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			return bParam2;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_MOUNT_OWNED_BY_PLAYER(plParam0)))
		return bParam2;

	return func_204(Global_1289643[plParam0 /*19*/].f_12, 2);
}

void func_126(int iParam0, int iParam1) // Position - 0x44BC
{
	if (!func_190(iParam0, iParam1))
	{
		MISC::SET_BIT(&Global_1072759.f_22475.f_417[iParam0 /*12*/], iParam1);
		Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] = SCRIPTS::GET_ID_OF_THIS_THREAD();
		func_191();
	}

	return;
}

void func_127(int iParam0) // Position - 0x4500
{
	Global_1102813.f_3 = Global_1102813.f_3 || iParam0;
	return;
}

char* func_128(int iParam0) // Position - 0x4517
{
	switch (iParam0)
	{
		case joaat("NFT_CATEGORY_AMBARINO"):
			return "TITHE_AMBARINO";
	
		case joaat("NFT_CATEGORY_LEMOYNE"):
			return "TITHE_LEMOYNE";
	
		case -931758312:
			return "CAMP_LOCATION_CATEGORY_ALL";
	
		case joaat("NFT_CATEGORY_NEW_AUSTIN"):
			return "TITHE_NEW_AUSTIN";
	
		case joaat("NFT_CATEGORY_NEW_HANOVER"):
			return "TITHE_NEW_HANOVER";
	
		case joaat("NFT_CATEGORY_WEST_ELIZABETH"):
			return "TITHE_WEST_ELIZABETH";
	}

	return "ALL";
}

void func_129(var uParam0) // Position - 0x458B
{
	Hash i;
	BOOL flag;
	Hash hash;
	int cashBalance;
	Hash hash2;

	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(Global_1072759.f_23824.f_6.f_5);
	flag = 1;
	flag.f_1 = 1;
	flag.f_2 = joaat("COLOR_WHITE");
	flag.f_4 = -1;
	flag.f_5 = -1;
	flag.f_6 = -1;
	flag.f_10 = -1;
	flag.f_11 = -1;
	flag.f_12 = -1;

	for (i = 0; i < 14; i = i + 1)
	{
		if (func_207(Global_1072759.f_23824.f_383[uParam0->f_4 /*272*/].f_5[i /*19*/]))
		{
			hash = func_71(Global_1072759.f_23824.f_383[uParam0->f_4 /*272*/].f_5[i /*19*/].f_17, uParam0);
		
			if (func_65(hash, &hash2))
			{
				cashBalance = 0;
				flag = true;
			}
			else if (func_66(hash, &hash2))
			{
				cashBalance = func_70(hash, hash2, true, false, true, 0);
			
				if (cashBalance != 0)
					flag = MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(cashBalance, 0);
				else
					flag = true;
			}
			else
			{
				cashBalance = func_70(hash, 59806960, true, false, true, 0);
			
				if (cashBalance != 0)
					flag = MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(cashBalance, 0);
				else
					flag = true;
			}
		
			flag.f_16 = MISC::VAR_STRING(0, Global_1072759.f_23824.f_383[uParam0->f_4 /*272*/].f_5[i /*19*/]);
			flag.f_1 = 1;
			flag.f_2 = joaat("COLOR_WHITE");
			flag.f_3 = 0;
			flag.f_17 = cashBalance;
			flag.f_18 = cashBalance;
			flag.f_6 = 42753526;
			flag.f_5 = 42753526;
			flag.f_4 = joaat("fast_travel_menu");
			func_208(&Global_1072759.f_23824.f_6.f_7[i /*22*/], flag, i);
		}
	}

	func_209(uParam0);
	func_210(uParam0);
	return;
}

void func_130(var uParam0, BOOL bParam1) // Position - 0x471F
{
	int num;
	int num2;
	int num3;

	num = func_211();
	num2 = bParam1 ? 1 : -1;
	num3 = func_213(num, 1) + num2;

	if (num3 < 1)
		num3 = 6;
	else if (num3 > 6)
		num3 = 1;

	num = func_214(num3, 1);
	func_60(uParam0, num);
	return;
}

int func_131(var uParam0) // Position - 0x476A
{
	int num;
	Player player;
	int num2;
	var unk;
	float num3;

	player = func_68();

	if (!func_69(player, true))
	{
		num = 1;
		return num;
	}

	num2 = func_184(player, true);
	unk = { func_185(num2, 1) };
	num3 = func_9(unk, Global_34);
	uParam0->f_17 = BUILTIN::ROUND(num3 / 1000f);

	if (uParam0->f_17 == 0)
		uParam0->f_17 = 1;

	return num + uParam0->f_17;
}

Hash func_132(Hash hParam0, BOOL bParam1) // Position - 0x47D2
{
	int i;
	int num;
	var unk;
	Hash hash;
	int j;

	unk = 15;

	for (i = 0; i < 3; i = i + 1)
	{
		hash = func_215(i, true, false);
	
		if (!func_140(hParam0, hash, &unk, &num, true, false))
		{
		}
		else
		{
			for (j = 0; j < num; j = j + 1)
			{
				if (func_216(unk[j /*2*/]))
				{
					if (!bParam1 || func_144(unk[j /*2*/], false, true, true) > 0)
						return hash;
				
					break;
				}
			
				if (unk[j /*2*/] == 0)
					break;
			}
		}
	}

	return 0;
}

Hash func_133(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4865
{
	int i;
	int num;
	var unk;
	var unk2;
	Hash hash;
	Hash hash2;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	var unk3;
	Hash hash3;
	int j;

	unk3 = 15;

	for (i = 0; i < 5; i = i + 1)
	{
		hash3 = func_215(i, false, true);
	
		if (!func_140(hParam0, hash3, &unk3, &num, true, false))
		{
		}
		else
		{
			flag3 = false;
			hash2 = 0;
		
			for (j = 0; j < num; j = j + 1)
			{
				if (func_217(unk3[j /*2*/]))
				{
					if (!bParam1 || func_144(unk3[j /*2*/], false, true, true) > 0)
						flag3 = true;
				}
				else if (unk3[j /*2*/] == joaat("currency_cash") || unk3[j /*2*/] == joaat("currency_gold_bar"))
				{
					if (bParam2 && unk3[j /*2*/] == joaat("currency_cash") || !bParam2 && unk3[j /*2*/] == joaat("currency_gold_bar"))
					{
						if (hash == 0 || flag && unk3[j /*2*/].f_1 < unk)
						{
							hash2 = hash3;
							unk2 = unk3[j /*2*/].f_1;
							flag2 = 1;
						}
					}
					else if (hash == 0 || unk3[j /*2*/].f_1 < unk)
					{
						hash2 = hash3;
						unk2 = unk3[j /*2*/].f_1;
						flag2 = 0;
					}
				}
				else if (unk3[j /*2*/] == 0)
				{
					break;
				}
			}
		
			if (flag3 && hash2 != 0)
			{
				hash = hash2;
				unk = unk2;
				flag = flag2;
			}
		}
	}

	return hash;
}

BOOL func_134(int iParam0) // Position - 0x49C4
{
	return iParam0 > -1 && iParam0 <= 32;
}

BOOL func_135(Hash hParam0, Hash hParam1) // Position - 0x49DA
{
	if (!func_119(hParam0, 0))
		return false;

	if (func_136(hParam0) || func_137(hParam0, 1077060302))
		return func_218(func_138(hParam0, false), hParam1, false);

	return ITEMDATABASE::_0xDEE7B3C76ED664BE(hParam0, hParam1) > 0;
}

BOOL func_136(Hash hParam0) // Position - 0x4A26
{
	if (func_137(hParam0, 75135761))
		return true;

	return false;
}

BOOL func_137(Hash hParam0, Hash hParam1) // Position - 0x4A41
{
	if (!func_119(hParam0, 0))
		return func_220(func_219(hParam0), hParam1);

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, 1120943070))
		return true;

	return false;
}

int func_138(Hash hParam0, BOOL bParam1) // Position - 0x4A82
{
	var unk;

	if (!func_119(hParam0, 0))
		return func_221(func_219(hParam0), bParam1);

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk) || unk.f_5 == 0)
		return 0;

	if (bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(unk.f_5))
		return 0;

	return unk.f_5;
}

int func_139(int iParam0, Hash hParam1, BOOL bParam2, BOOL bParam3) // Position - 0x4ADA
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (!func_222(iParam0, hParam1, &unk, &num, bParam2, bParam3))
	{
		!bParam2;
		return 0;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == joaat("currency_cash") || unk[i /*2*/] == joaat("currency_gold_bar") || unk[i /*2*/] == joaat("character_role_token"))
			return unk[i /*2*/].f_1;
		else if (unk[i /*2*/] == 0)
			break;
	}

	!bParam2;
	return 0;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_140(Hash hParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x4B6E
{
	int i;

	*uParam3 = 0;

	if (*uParam2 < 15)
		return false;

	if (!func_119(hParam0, 0))
		return false;

	*uParam3 = ITEMDATABASE::_0xDEE7B3C76ED664BE(hParam0, hParam1);

	if (*uParam3 == 0)
	{
		!bParam5;
		return false;
	}

	!bParam5;

	for (i = 0; i < *uParam3; i = i + 1)
	{
		if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM(hParam0, hParam1, i, &uParam2->[i /*2*/]))
			goto 0x71;
	
		!bParam5;
	}

	if (bParam4)
		func_223(hParam0, hParam1, uParam2, *uParam3);

	return true;
}

int func_141(Hash hParam0) // Position - 0x4BFE
{
	var unk;

	if (!func_119(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk))
		return 0;

	return unk.f_1;
}

int func_142(Hash hParam0) // Position - 0x4C29
{
	var unk;

	if (!func_119(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk))
		return 0;

	return unk.f_2;
}

BOOL func_143() // Position - 0x4C54
{
	if (INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) != 3)
		return false;

	return INVENTORY::_INVENTORY_IS_PLAYER_INVENTORY_MIRRORING_TRANSACTIONS();
}

int func_144(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x4C70
{
	int inventoryItemCountWithItemid;
	int num;
	Hash AmmoType;
	var guid;

	inventoryItemCountWithItemid = 0;

	if (!func_119(hParam0, 0))
		return 0;

	num = func_142(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		AmmoType = func_224(hParam0, 1);
	
		if (AmmoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, AmmoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_225(hParam0, false);
	}

	if (func_226(hParam0, joaat("DEFAULT")) != 0)
	{
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_227(bParam2), hParam0, bParam3);
	}
	else
	{
		guid = { func_228(hParam0, bParam2) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_227(bParam2), &guid, bParam3);
	}

	return inventoryItemCountWithItemid;
}

BOOL func_145(BOOL bParam0) // Position - 0x4D32
{
	if (func_229() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_227(bParam0));
}

BOOL func_146(Hash hParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x4D50
{
	int num;
	var unk;
	var unk6;

	if (!func_119(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	num = func_226(hParam0, joaat("DEFAULT"));

	if (num != 0)
		return func_230(hParam0, iParam1, iParam2, iParam3, bParam4);

	unk = { func_151(hParam0, bParam4, 0) };
	unk6 = { func_152(hParam0, unk, unk.f_4, bParam4) };
	return func_231(hParam0, &unk6, &unk, iParam1, iParam2, iParam3, bParam4);
}

BOOL func_147(Hash hParam0) // Position - 0x4DC8
{
	switch (hParam0)
	{
		case -1551258934:
		case -1103707655:
		case 205718222:
		case 866168015:
			return true;
	
		default:
		
	}

	return false;
}

int func_148(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x4DF5
{
	int num;

	if (hParam0 == 0)
		return -1;

	if (!func_232(hParam0, panParam1))
		return -1;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_234(func_233(num, hParam0, panParam1), num, panParam1);
	else
		return func_235(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 17), num, panParam1);

	return -1;
}

void func_149(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17) // Position - 0x4E5F
{
	int i;

	if (iParam0 == -1)
		return;

	for (i = 0; i < Global_1292143.f_20; i = i + 1)
	{
		if (Global_1292143.f_20.f_1[i /*21*/] == iParam0)
		{
			if (Global_1292143.f_20.f_1[i /*21*/].f_1 == 1 || Global_1292143.f_20.f_1[i /*21*/].f_1 == 5)
				Global_1292143.f_20.f_1[i /*21*/].f_4 = { uParam1 };
		
			return;
		}
	}

	return;
}

BOOL func_150(Hash hParam0) // Position - 0x4EDD
{
	if (func_141(hParam0) == -126813555 || func_141(hParam0) == 1946043663)
		return true;

	return false;
}

struct<5> func_151(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x4F0B
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_236(bParam1) };
	unk.f_4 = 1084182731;
	num = func_142(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_242(hParam0, -1823706425))
			{
				unk = { func_152(joaat("kit_camp"), unk, 1084182731, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_242(hParam0, -1483207246))
			{
				unk = { func_152(joaat("WARDROBE"), unk, 1034665895, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_152(joaat("kit_camp"), unk, 1084182731, bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1311702610))
			{
				unk.f_4 = -1311702610;
			}
			else if (func_242(hParam0, -1653629781))
			{
				unk = { func_152(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			break;
	
		case joaat("coach"):
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = -1591664384;
			unk = { func_241(bParam1) };
		
			switch (func_141(hParam0))
			{
				case -2101244071:
					unk.f_4 = -268116367;
					break;
			
				case -1070622585:
					unk.f_4 = -6796437;
					break;
			
				case -1057349201:
					unk.f_4 = 1473261684;
					break;
			
				case 874188557:
					unk.f_4 = -241855024;
					break;
			}
			break;
	
		case joaat("CLOTHING"):
			unk = { func_152(joaat("WARDROBE"), unk, 1034665895, bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_237(bParam1) };
		
			if (iParam2 && func_238(hParam0, true))
			{
				unk6.f_9 = -1591664384;
			
				if (!func_239(hParam0, &unk, 1728382685, false, false))
					unk.f_4 = 1728382685;
				else if (!func_239(hParam0, &unk, -649335959, false, false))
					unk.f_4 = -649335959;
				else if (func_240(hParam0, &unk6, 1728382685))
					unk.f_4 = 1728382685;
				else
					unk.f_4 = -649335959;
			}
			else
			{
				unk.f_4 = 1728382685;
			}
			break;
	
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, 1084182731))
			{
				unk.f_4 = 1084182731;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, 1034665895))
			{
				unk.f_4 = 1034665895;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -833319691))
			{
				unk28.f_9 = -1591664384;
			
				if (!func_243(unk, &unk28, bParam1, false, -1))
				{
					unk.f_4 = 0;
				}
				else
				{
					unk = { unk28.f_5 };
					unk.f_4 = -833319691;
				}
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -718417579))
			{
				unk.f_4 = -718417579;
			}
			else if (func_242(hParam0, -1653629781))
			{
				unk = { func_152(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			else
			{
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("character"));
				unk.f_4 == 0;
			}
			break;
	}

	return unk;
}

struct<4> func_152(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x527F
{
	var outGuid;

	if (!func_119(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_227(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_153(Any* panParam0) // Position - 0x52B0
{
	if (*panParam0 == 0 && panParam0->f_1 == 0 && panParam0->f_2 == 0 && panParam0->f_3 == 0)
		return false;

	return true;
}

BOOL func_154(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x52E6
{
	if (!func_153(&uParam0))
		return false;

	if (func_244(&uParam0))
		return false;

	return func_246(func_245(uParam0));
}

void func_155(int iParam0) // Position - 0x5315
{
	Player iPlayerIndex;
	Ped EntityIndex;
	BOOL flag;

	iPlayerIndex = PLAYER::PLAYER_ID();
	EntityIndex = PLAYER::PLAYER_PED_ID();
	ENTITY::SET_ENTITY_VISIBLE(EntityIndex, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(EntityIndex, 2, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(EntityIndex, 3, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(EntityIndex, 11, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(EntityIndex, 12, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(EntityIndex, 1, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(EntityIndex, 0, true);
	PED::SET_PED_CAN_RAGDOLL(EntityIndex, true);
	flag = iParam0 & 256 != 0;

	if (flag)
		PLAYER::SET_PLAYER_CONTROL(iPlayerIndex, true, 0, false);
	else
		PLAYER::SET_PLAYER_CONTROL(iPlayerIndex, true, SPC_CLEAR_TASKS, false);

	ENTITY::FREEZE_ENTITY_POSITION(EntityIndex, false);

	if (iParam0 & 512 != 0)
	{
	}
	else
	{
		func_247();
	}

	PLAYER::SET_PLAYER_INVINCIBLE(iPlayerIndex, false);

	if (!PED::IS_PED_IN_ANY_VEHICLE(EntityIndex, false))
	{
		ENTITY::SET_ENTITY_COLLISION(EntityIndex, true, false);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(EntityIndex, true, false);
	}

	return;
}

void func_156(BOOL bParam0, int iParam1) // Position - 0x53C7
{
	*bParam0 = *bParam0 - *bParam0 && iParam1;
	return;
}

BOOL func_157(var uParam0) // Position - 0x53DC
{
	if (uParam0->f_24 == 0)
		return false;

	if (uParam0->f_23 == 0)
		return false;

	if (uParam0->f_25 == -1)
		return false;

	return true;
}

BOOL func_158(Any* panParam0, Any* panParam1) // Position - 0x5409
{
	if (TELEMETRY::_TRY_GET_TELEMETRY_ID_FROM_TRANSACTION_ID(panParam0, panParam1))
		return true;

	return false;
}

void func_159(var uParam0) // Position - 0x5421
{
	uParam0->f_25 = -1;
	uParam0->f_24 = 0;
	uParam0->f_23 = 0;
	return;
}

int func_160(Hash hParam0) // Position - 0x5438
{
	return func_248(hParam0);
}

BOOL func_161(BOOL bParam0) // Position - 0x5446
{
	return Global_1958675 && bParam0 != false;
}

void func_162(BOOL bParam0) // Position - 0x5457
{
	if (!func_161(bParam0))
		Global_1958675 = Global_1958675 || bParam0;

	return;
}

int func_163(Hash* phParam0) // Position - 0x5474
{
	int i;

	i = 0;

	for (i = 0; i <= 14; i = i + 1)
	{
		if (Global_1072759.f_23824.f_383[i /*272*/] == phParam0)
			return i;
	}

	return -1;
}

void func_164() // Position - 0x54AC
{
	func_249(true);
	func_250(true);
	return;
}

void func_165() // Position - 0x54BE
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());

	return;
}

int func_166(BOOL bParam0) // Position - 0x54DA
{
	var unk;

	unk.f_9 = -1591664384;

	if (!func_251(&unk, bParam0))
		return 1;

	return 0;
}

int func_167(BOOL bParam0) // Position - 0x5502
{
	var unk;

	unk.f_9 = -1591664384;

	if (!func_252(&unk, bParam0))
		return 1;

	return 0;
}

BOOL func_168(Ped pedParam0) // Position - 0x552A
{
	Vehicle vehiclePedIsUsing;
	Player playerIndexFromPed;
	Vehicle vehicleOwnedByPlayer;

	if (!PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
		return false;

	vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(pedParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(vehiclePedIsUsing))
		return false;

	if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsUsing, -1) != pedParam0)
		return false;

	playerIndexFromPed = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(pedParam0);

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(playerIndexFromPed))
		return false;

	vehicleOwnedByPlayer = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(playerIndexFromPed);

	if (!ENTITY::DOES_ENTITY_EXIST(vehicleOwnedByPlayer))
		return false;

	if (vehiclePedIsUsing != vehicleOwnedByPlayer)
		return false;

	return true;
}

void func_169(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x559F
{
	if (bParam1)
	{
		func_253(78);
	
		if (bParam2)
			func_253(76);
	
		Global_1102813.f_3792 = iParam0;
	}
	else
	{
		func_254(78);
		func_254(76);
	}

	return;
}

BOOL func_170(Player plParam0) // Position - 0x55D9
{
	Vehicle vehicleOwnedByPlayer;
	Ped playerPed;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0))
		return false;

	vehicleOwnedByPlayer = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(plParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(vehicleOwnedByPlayer))
		return false;

	playerPed = PLAYER::GET_PLAYER_PED(plParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
		return false;

	if (func_255(playerPed, vehicleOwnedByPlayer, true, true) > 25f)
		return false;

	return true;
}

BOOL func_171() // Position - 0x5633
{
	Vehicle vehicleOwnedByPlayer;

	vehicleOwnedByPlayer = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());

	if (!ENTITY::DOES_ENTITY_EXIST(vehicleOwnedByPlayer))
		return false;

	if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(vehicleOwnedByPlayer) > 0)
		return false;

	return true;
}

void func_172() // Position - 0x5662
{
	if (func_256(8, 255))
		return;

	func_257(3);
	return;
}

void func_173(BOOL bParam0, BOOL bParam1) // Position - 0x567C
{
	if (bParam0)
	{
		func_253(70);
	
		if (bParam1)
			func_253(73);
	}
	else
	{
		func_254(70);
		func_254(73);
	}

	return;
}

void func_174(BOOL bParam0, BOOL bParam1) // Position - 0x56AD
{
	if (bParam0)
	{
		func_253(66);
	
		if (bParam1)
			func_253(73);
	}
	else
	{
		func_254(66);
		func_254(50);
		func_254(73);
	}

	return;
}

void func_175(Hash* phParam0) // Position - 0x56E5
{
	func_258(phParam0, true);
	return;
}

int func_176(BOOL bParam0, Hash hParam1) // Position - 0x56F4
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return 0;

	if (!Global_1102813.f_16)
		return 0;

	if (!func_259())
		return 0;

	if (!func_260())
		return 0;

	Global_0 = hParam1;

	if (bParam0)
		func_261(&Global_0, 8);

	func_261(&Global_0, 1);
	return 1;
}

void func_177() // Position - 0x574A
{
	if (Global_1290271.f_1640.f_5 == true)
		return;

	Global_1290271.f_1640.f_5 = 1;
	return;
}

BOOL func_178() // Position - 0x576C
{
	int i;

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (func_262(i))
			return true;
	}

	return false;
}

int func_179() // Position - 0x5798
{
	return Global_1893611.f_2;
}

int func_180(int iParam0, BOOL bParam1) // Position - 0x57A6
{
	switch (iParam0)
	{
		case 0:
			return joaat("region_bay_crawdadwillies");
	
		case 1:
			return joaat("region_bay_macombs_end");
	
		case 2:
			return joaat("region_bay_merkinswaller");
	
		case 3:
			return joaat("region_bay_lagras");
	
		case 4:
			return joaat("region_bay_lakay");
	
		case 5:
			return joaat("region_bay_saint_denis");
	
		case 6:
			return joaat("region_bay_orange_plantation");
	
		case 7:
			return joaat("region_bay_serial_killer");
	
		case 8:
			return joaat("region_bay_serendipity");
	
		case 9:
			return joaat("region_bay_shadybelle");
	
		case 10:
			return joaat("region_bay_siltwaterstrand");
	
		case 11:
			return joaat("region_bgv_appleseedtimber");
	
		case 12:
			return joaat("region_bgv_beryls_dream");
	
		case 13:
			return joaat("region_bgv_blackboneforest_trapper");
	
		case 14:
			return joaat("region_bgv_dakotariver_trapper");
	
		case 15:
			return joaat("region_bgv_fortriggs");
	
		case 16:
			return joaat("region_bgv_hangingdog");
	
		case 17:
			return joaat("region_bgv_lonemulestead");
	
		case 18:
			return joaat("region_bgv_missing_husband");
	
		case 19:
			return joaat("region_bgv_monto_rest");
	
		case 20:
			return joaat("region_bgv_owanjila_dam");
	
		case 21:
			return joaat("region_bgv_paintedsky");
	
		case 22:
			return joaat("region_bgv_pronghorn");
	
		case 23:
			return joaat("region_bgv_riggs_station");
	
		case 24:
			return joaat("region_bgv_shack");
	
		case 25:
			return joaat("region_bgv_shepherds_rise");
	
		case 26:
			return joaat("region_bgv_strawberry");
	
		case 27:
			return joaat("region_bgv_valley_view");
	
		case 28:
			return joaat("region_bgv_wallace_station");
	
		case 29:
			return joaat("region_bgv_old_man_jones");
	
		case 30:
			return joaat("region_bgv_watsonscabin");
	
		case 31:
			return joaat("region_blu_canebreak_manor");
	
		case 32:
			return joaat("region_blu_copperhead");
	
		case 33:
			return joaat("region_blu_sisika");
	
		case 34:
			return joaat("region_blu_travelling_salesman");
	
		case 35:
			return joaat("region_cml_bacchusbridge");
	
		case 36:
			return joaat("region_cml_dino_lady");
	
		case 37:
			return joaat("region_cml_oldfortwallace");
	
		case 38:
			return joaat("region_cml_sixpointcabin");
	
		case 39:
			return joaat("region_grt_beechers");
	
		case 40:
			return joaat("region_grt_blackwater");
	
		case 41:
			return joaat("region_grt_quakers_cove");
	
		case 42:
			return joaat("region_grz_adlerranch");
	
		case 43:
			return joaat("region_grz_dead_rival");
	
		case 44:
			return joaat("region_grz_chezporter");
	
		case 45:
			return joaat("region_grz_colter");
	
		case 46:
			return joaat("region_grz_frozen_explorer");
	
		case 47:
			return joaat("region_grz_millesani_claim");
	
		case 48:
			return joaat("region_grz_mountain_man");
	
		case 49:
			return joaat("region_grz_mount_hagen_peak");
	
		case 50:
			return joaat("region_grz_starving_children");
	
		case 51:
			return joaat("region_grz_tempest_rim");
	
		case 52:
			return joaat("region_grz_wintermining_town");
	
		case 53:
			return joaat("region_grz_calumetravine");
	
		case 54:
			return joaat("region_gre_civil_war_bride");
	
		case 55:
			return joaat("region_grz_cohutta");
	
		case 56:
			return joaat("region_grz_cotorra_springs");
	
		case 57:
			return joaat("region_grz_gunfight");
	
		case 58:
			return joaat("region_grz_theloft");
	
		case 59:
			return joaat("region_gre_veteran");
	
		case 60:
			return joaat("region_grz_wapiti");
	
		case 61:
			return joaat("region_grz_travelling_salesman");
	
		case 62:
			return joaat("region_gua_aguasdulces");
	
		case 63:
			return joaat("region_gua_camp");
	
		case 64:
			return joaat("region_gua_cincotorres");
	
		case 65:
			return joaat("region_gua_lacapilla");
	
		case 66:
			return joaat("region_gua_manicato");
	
		case 67:
			return joaat("region_hrt_abandoned_mill");
	
		case 68:
			return joaat("region_roa_beechers_c");
	
		case 69:
			return joaat("region_hrt_carmodydell");
	
		case 70:
			return joaat("region_hrt_cornwallkerosene");
	
		case 71:
			return joaat("region_hrt_crop_farm");
	
		case 72:
			return joaat("region_hrt_cumberlandfalls");
	
		case 73:
			return joaat("region_hrt_downsranch");
	
		case 74:
			return joaat("region_hrt_emeraldranch");
	
		case 75:
			return joaat("region_hrt_grangers_hoggery");
	
		case 76:
			return joaat("region_hrt_horseshoeoverlook");
	
		case 77:
			return joaat("region_hrt_larnedsod");
	
		case 78:
			return joaat("region_hrt_loony_cult");
	
		case 79:
			return joaat("region_hrt_luckyscabin");
	
		case 80:
			return joaat("region_hrt_swansons_station");
	
		case 81:
			return joaat("region_hrt_valentine");
	
		case 82:
			return joaat("region_roa_aberdeenpigfarm");
	
		case 83:
			return joaat("region_roa_annesburg");
	
		case 84:
			return joaat("region_roa_beaverhollow");
	
		case 85:
			return joaat("region_roa_black_balsam_rise");
	
		case 86:
			return joaat("region_roa_brandywine_drop");
	
		case 87:
			return joaat("region_roa_butchercreek");
	
		case 88:
			return joaat("region_roa_doverhill");
	
		case 89:
			return joaat("region_roa_happy_family");
	
		case 90:
			return joaat("region_roa_isolationist");
	
		case 91:
			return joaat("region_roa_macleanshouse");
	
		case 92:
			return joaat("region_roa_mossy_flats");
	
		case 93:
			return joaat("region_roa_roanoke_valley");
	
		case 94:
			return joaat("region_roa_rockyseven");
	
		case 95:
			return joaat("region_roa_trapper");
	
		case 96:
			return joaat("region_roa_old_man_jones");
	
		case 97:
			return joaat("region_roa_vanhornmansion");
	
		case 98:
			return joaat("region_roa_vanhornpost");
	
		case 99:
			return joaat("region_scm_braithwaitemanor");
	
		case 100:
			return joaat("region_scm_bulgerglade");
	
		case 101:
			return joaat("region_scm_caligahall");
	
		case 102:
			return joaat("region_scm_catfishjacksons");
	
		case 103:
			return joaat("region_scm_clemenscove");
	
		case 104:
			return joaat("region_scm_clemenspoint");
	
		case 105:
			return joaat("region_scm_compsons_stead");
	
		case 106:
			return joaat("region_scm_dairy_farm");
	
		case 107:
			return joaat("region_scm_horse_shop");
	
		case 108:
			return joaat("region_scm_lonniesshack");
	
		case 109:
			return joaat("region_scm_love_triangle");
	
		case 110:
			return joaat("region_scm_radleys_pasture");
	
		case 111:
			return joaat("region_scm_rhodes");
	
		case 112:
			return joaat("region_scm_slave_pen");
	
		case 113:
			return joaat("region_tal_aurora_basin");
	
		case 114:
			return joaat("region_tal_dead_settler");
	
		case 115:
			return joaat("region_tal_cochinay");
	
		case 116:
			return joaat("region_tal_manzanitapost");
	
		case 117:
			return joaat("region_tal_pacificunionrr");
	
		case 118:
			return joaat("region_tal_tannersreach");
	
		case 119:
			return joaat("region_tal_trapper");
	
		case 120:
			return joaat("region_gap_gaptooth_breach");
	
		case 121:
			return joaat("region_gap_tumbleweed");
	
		case 122:
			return joaat("region_gap_rathskeller_fork");
	
		case 123:
			return joaat("region_rio_benedict_point");
	
		case 124:
			return joaat("region_rio_fort_mercer");
	
		case 125:
			return joaat("region_rio_plain_view");
	
		case 126:
			return joaat("region_rio_travelling_salesman");
	
		case 127:
			return joaat("region_cho_armadillo");
	
		case 128:
			return joaat("region_cho_coots_chapel");
	
		case 129:
			return joaat("region_cho_don_julio_house");
	
		case 130:
			return joaat("region_cho_rileys_charge");
	
		case 131:
			return joaat("region_cho_ridgewood_farm");
	
		case 132:
			return joaat("region_cho_twin_rocks");
	
		case 133:
			return joaat("region_cho_travelling_salesman");
	
		case 134:
			return 1869665995;
	
		case 135:
			return joaat("region_hen_macfarlanes_ranch");
	
		case 136:
			return joaat("region_hen_thieves_landing");
	
		case 137:
			return joaat("region_hen_travelling_salesman");
	
		case 138:
			return -1573562784;
	
		case 139:
			return joaat("region_centralunionrr");
	
		default:
		
	}

	if (bParam1)
		return joaat("Wilderness");

	return 0;
}

int func_181(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x5F6B
{
	int num;

	num = func_179();

	if (func_263(num))
		if (VOLUME::DOES_VOLUME_EXIST(Global_1887363[num /*36*/].f_4) && VOLUME::IS_POINT_IN_VOLUME(Global_1887363[num /*36*/].f_4, vParam0))
			return num;

	return func_264(vParam0, bParam3);
}

BOOL func_182(Player plParam0, BOOL bParam1) // Position - 0x5FB9
{
	int i;
	Any gangId;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !NETWORK::NETWORK_IS_IN_SESSION())
	{
		for (i = 0; i <= 31; i = i + 1)
		{
			if (Global_1147183.f_9[i /*10*/].f_4.f_2 != 0 && Global_1147183.f_9[i /*10*/].f_2 == plParam0)
				return true;
		}
	
		if (bParam1)
			func_122("GC_H_PLACE", 10000, 0, 0, 0, true);
	
		return false;
	}

	gangId = GANG::NETWORK_GET_GANG_ID(plParam0);

	if (func_25(func_27(gangId)))
		return true;

	if (bParam1)
		func_122("GC_H_PLACE", 10000, 0, 0, 0, true);

	return false;
}

void func_183() // Position - 0x605A
{
	func_265(true);
	func_266(true, true);
	return;
}

int func_184(Player plParam0, BOOL bParam1) // Position - 0x606D
{
	if (bParam1)
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0))
			return -1;

	return Global_1297600[plParam0 /*87*/].f_5.f_12;
}

Vector3 func_185(int iParam0, int iParam1) // Position - 0x6094
{
	var unk;

	if (iParam0 == -1)
		return 0f, 0f, 0f;

	if (iParam1 == -1)
		return 0f, 0f, 0f;

	unk = { 0f, 0f, 0f };
	func_269(1268215321, func_267(iParam0), func_268(iParam1), 0);

	if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&unk, &(Global_1297441.f_1)))
		return 0f, 0f, 0f;

	return unk;
}

float func_186(int iParam0, int iParam1) // Position - 0x60EB
{
	float num;

	if (iParam0 == -1)
		return 0f;

	if (iParam1 == -1)
		return 0f;

	num = 0f;
	func_269(-226869021, func_267(iParam0), func_268(iParam1), 0);

	if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&num, &(Global_1297441.f_1)))
		return 0f;

	return num;
}

void func_187(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6, int iParam7, int iParam8) // Position - 0x6136
{
	var entityCoords;
	float num;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
	num = fParam3;

	if (!func_270(Global_1295666.f_12, &entityCoords, &num))
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
		num = fParam3;
	}

	func_271(uParam0, fParam3, entityCoords, num, fParam4, fParam5, bParam6, iParam7, iParam8, 1);
	return;
}

int func_188(int iParam0) // Position - 0x6191
{
	return func_267(iParam0);
}

BOOL func_189(int iParam0) // Position - 0x619F
{
	return Global_1102813.f_26.f_7 && iParam0 != false;
}

BOOL func_190(int iParam0, int iParam1) // Position - 0x61B4
{
	return MISC::IS_BIT_SET(Global_1072759.f_22475.f_417[iParam0 /*12*/], iParam1);
}

void func_191() // Position - 0x61D0
{
	SCRIPTS::_SET_ALL_PLAYER_BITS(&(Global_1072759.f_21353.f_260));
	return;
}

BOOL func_192(Any* panParam0, int iParam1, int iParam2) // Position - 0x61E6
{
	return MISC::IS_BIT_SET(panParam0->[iParam1 / 31], iParam1 % 31);
}

int func_193() // Position - 0x621D
{
	return Global_1102813.f_3672;
}

BOOL func_194(int iParam0) // Position - 0x622C
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

int func_195(int iParam0) // Position - 0x626B
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

BOOL func_196() // Position - 0x6301
{
	int i;

	for (i = 0; i <= 7; i = i + 1)
	{
		if (func_272(i, 8192))
			return true;
	}

	return false;
}

Ped func_197(Ped pedParam0) // Position - 0x632C
{
	Ped EntityIndex;

	EntityIndex = func_273(pedParam0);

	if (ENTITY::IS_ENTITY_DEAD(EntityIndex))
		return 0;

	if (PED::IS_PED_HOGTIED(EntityIndex))
		return EntityIndex;

	return 0;
}

BOOL func_198() // Position - 0x6358
{
	return ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_26573) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_26573, false);
}

BOOL func_199(int iParam0, int iParam1) // Position - 0x6374
{
	if (iParam1 == 255)
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	return Global_1289643[iParam1 /*19*/].f_9 && iParam0 != false;
}

void func_200(int iParam0) // Position - 0x63AE
{
	int num;

	num = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	Global_1289643[num /*19*/].f_9 = Global_1289643[num /*19*/].f_9 - Global_1289643[num /*19*/].f_9 && iParam0;
	return;
}

void func_201(int iParam0, var uParam1, var uParam2) // Position - 0x63DE
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_202(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x63FA
{
	if (iParam1 < 0 || iParam1 > 32)
		return false;

	if (func_274(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_275(iParam0))
		return false;

	if (func_276(iParam0))
		return false;

	if (Global_1900460.f_67 && !func_277(iParam0, 1) || func_278(32768))
		if (!func_277(iParam0, 262144) || !Global_1904402.f_8875)
			return false;

	if (!func_279())
		return false;

	return true;
}

void func_203(int iParam0, int iParam1) // Position - 0x649C
{
	int Variable;

	Variable = Global_1904402[iParam0];
	MISC::SET_BIT(&Variable, iParam1);
	Global_1904402[iParam0] = Variable;
	return;
}

BOOL func_204(BOOL bParam0, BOOL bParam1) // Position - 0x64C0
{
	return bParam0 && bParam1 != false;
}

void func_205(var uParam0) // Position - 0x64CF
{
	func_280(uParam0, 0f);
	return;
}

void func_206(var uParam0) // Position - 0x64DE
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

BOOL func_207(Hash* phParam0) // Position - 0x64F4
{
	int num;

	num = func_211();

	if (num == -931758312)
		return true;

	return func_281(phParam0) == num;
}

void func_208(Any anParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, Hash hParam20) // Position - 0x6519
{
	func_282(anParam0, uParam1, hParam20);
	Global_1072759.f_23824.f_6.f_316[hParam20] = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1072759.f_23824.f_6.f_7[hParam20 /*22*/], "locationArrayIndex", hParam20);
	return;
}

void func_209(var uParam0) // Position - 0x6557
{
	BOOL flag;
	BOOL flag2;
	int cashBalance;
	Hash hash;

	flag = 1;
	flag.f_1 = 1;
	flag.f_2 = joaat("COLOR_WHITE");
	flag.f_4 = -1;
	flag.f_5 = -1;
	flag.f_6 = -1;
	flag.f_10 = -1;
	flag.f_11 = -1;
	flag.f_12 = -1;
	flag2 = 1;

	if (uParam0->f_5)
	{
		if (func_65(func_71(0, uParam0), &hash))
		{
			cashBalance = 0;
			flag = true;
		}
		else if (func_66(func_71(0, uParam0), &hash))
		{
			cashBalance = func_70(func_71(0, uParam0), hash, true, false, true, 0);
			flag = MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(cashBalance, 0);
		}
		else
		{
			cashBalance = func_70(func_71(0, uParam0), 59806960, true, false, true, 0);
			flag = MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(cashBalance, 0);
		}
	
		flag.f_1 = 1;
		flag.f_2 = joaat("COLOR_WHITE");
		flag.f_3 = 0;
		flag.f_16 = "";
		flag.f_16 = MISC::VAR_STRING(0, Global_1072759.f_23824.f_383[uParam0->f_4 /*272*/]);
		flag.f_17 = cashBalance;
		flag.f_18 = cashBalance;
		flag.f_6 = 42753526;
		flag.f_5 = 42753526;
		flag.f_4 = joaat("fast_travel_menu");
		func_283(&(Global_1072759.f_23824.f_6.f_331), flag, 14);
		return;
	}
	else if (!(func_27(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) >= 0))
	{
		flag2 = 0;
	}

	if (func_65(func_71(0, uParam0), &hash))
	{
		cashBalance = 0;
		flag = flag2;
	}
	else if (func_66(func_71(0, uParam0), &hash))
	{
		cashBalance = func_70(func_71(0, uParam0), hash, true, false, true, 0);
	
		if (cashBalance != 0)
			flag = MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(cashBalance, 0) && flag2;
		else
			flag = flag2;
	}
	else
	{
		cashBalance = func_70(func_71(0, uParam0), 59806960, true, false, true, 0);
	
		if (cashBalance != 0)
			flag = MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(cashBalance, 0) && flag2;
		else
			flag = flag2;
	}

	flag.f_1 = 1;
	flag.f_2 = joaat("COLOR_WHITE");
	flag.f_3 = 0;
	flag.f_16 = "";
	flag.f_16 = MISC::VAR_STRING(2, "NFT_LOCATION_TYPE_CAMP_DESC");
	flag.f_17 = cashBalance;
	flag.f_18 = cashBalance;
	flag.f_6 = 42753526;
	flag.f_5 = 42753526;
	flag.f_4 = joaat("fast_travel_menu");
	func_283(&(Global_1072759.f_23824.f_6.f_331), flag, 14);
	return;
}

void func_210(var uParam0) // Position - 0x6791
{
	BOOL flag;
	BOOL flag2;
	int cashBalance;
	int num;
	Hash hash;
	Player player;

	flag = 1;
	flag.f_1 = 1;
	flag.f_2 = joaat("COLOR_WHITE");
	flag.f_4 = -1;
	flag.f_5 = -1;
	flag.f_6 = -1;
	flag.f_10 = -1;
	flag.f_11 = -1;
	flag.f_12 = -1;
	flag2 = true;
	player = func_68();

	if (func_69(player, true))
	{
		num = func_131(uParam0);
	
		if (func_65(func_71(0, uParam0), &hash))
		{
			cashBalance = 0;
			flag = true;
		}
		else if (func_66(func_71(0, uParam0), &hash))
		{
			cashBalance = func_70(func_71(num, uParam0), hash, true, false, true, 0);
		
			if (cashBalance != 0)
				flag = MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(cashBalance, 0) && flag2;
			else
				flag = flag2;
		}
		else
		{
			cashBalance = func_70(func_71(num, uParam0), 59806960, true, false, true, 0);
		
			if (cashBalance != 0)
				flag = MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(cashBalance, 0) && flag2;
			else
				flag = flag2;
		}
	
		flag.f_1 = 1;
		flag.f_2 = joaat("COLOR_WHITE");
		flag.f_3 = 0;
		flag.f_16 = "";
		flag.f_16 = MISC::VAR_STRING(2, "NFT_LOCATION_TYPE_MOONSHINE_DESC");
		flag.f_17 = cashBalance;
		flag.f_18 = cashBalance;
		flag.f_6 = 42753526;
		flag.f_5 = 42753526;
		flag.f_4 = joaat("fast_travel_menu");
		func_284(&(Global_1072759.f_23824.f_6.f_354), flag, 15);
		return;
	}
	else
	{
		flag2 = false;
	}

	if (func_65(func_71(0, uParam0), &hash))
	{
		cashBalance = 0;
		flag = flag2;
	}
	else if (func_66(func_71(0, uParam0), &hash))
	{
		cashBalance = func_70(func_71(0, uParam0), hash, true, false, true, 0);
	
		if (cashBalance != 0)
			flag = MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(cashBalance, 0) && flag2;
		else
			flag = flag2;
	}
	else
	{
		cashBalance = func_70(func_71(0, uParam0), 59806960, true, false, true, 0);
	
		if (cashBalance != 0)
			flag = MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(cashBalance, 0) && flag2;
		else
			flag = flag2;
	}

	flag.f_1 = 1;
	flag.f_2 = joaat("COLOR_WHITE");
	flag.f_3 = 0;
	flag.f_16 = "";
	flag.f_16 = MISC::VAR_STRING(2, "NFT_LOCATION_TYPE_MOONSHINE_DESC");
	flag.f_17 = cashBalance;
	flag.f_18 = cashBalance;
	flag.f_6 = 42753526;
	flag.f_5 = 42753526;
	flag.f_4 = joaat("fast_travel_menu");
	func_284(&(Global_1072759.f_23824.f_6.f_354), flag, 15);
	return;
}

int func_211() // Position - 0x69E7
{
	return Global_1072759.f_23824.f_4;
}

var func_212(BOOL bParam0, var uParam1, var uParam2) // Position - 0x69F8
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_213(int iParam0, int iParam1) // Position - 0x6A0F
{
	switch (iParam0)
	{
		case joaat("NFT_CATEGORY_AMBARINO"):
			return 2;
	
		case joaat("NFT_CATEGORY_LEMOYNE"):
			return 3;
	
		case -931758312:
			return 1;
	
		case joaat("NFT_CATEGORY_NEW_AUSTIN"):
			return 6;
	
		case 0:
			return 0;
	
		case joaat("NFT_CATEGORY_NEW_HANOVER"):
			return 5;
	
		case joaat("NFT_CATEGORY_WEST_ELIZABETH"):
			return 4;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

int func_214(int iParam0, int iParam1) // Position - 0x6A76
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return -931758312;
	
		case 2:
			return joaat("NFT_CATEGORY_AMBARINO");
	
		case 3:
			return joaat("NFT_CATEGORY_LEMOYNE");
	
		case 4:
			return joaat("NFT_CATEGORY_WEST_ELIZABETH");
	
		case 5:
			return joaat("NFT_CATEGORY_NEW_HANOVER");
	
		case 6:
			return joaat("NFT_CATEGORY_NEW_AUSTIN");
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

Hash func_215(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x6AF3
{
	int num;

	num = 0;

	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 205718222;
		
			case 1:
				return 866168015;
		
			case 2:
				return -1103707655;
		
			default:
			
		}
	
		num = 3;
	}

	if (bParam2)
	{
		switch (iParam0 - num)
		{
			case 0:
				return 75922725;
		
			case 1:
				return 1070046552;
		
			case 2:
				return -1843707398;
		
			case 3:
				return -1571233163;
		
			case 4:
				return -1197011183;
		
			default:
			
		}
	}

	return 0;
}

BOOL func_216(Hash hParam0) // Position - 0x6B8F
{
	return func_141(hParam0) == 1946043663;
}

BOOL func_217(Hash hParam0) // Position - 0x6BA3
{
	return func_141(hParam0) == -126813555;
}

BOOL func_218(int iParam0, Hash hParam1, BOOL bParam2) // Position - 0x6BB7
{
	if (!func_285(iParam0))
		return false;

	if (ITEMDATABASE::_0xF540239F9937033B(iParam0, hParam1) == 0)
		return false;

	if (bParam2)
		return !func_286(iParam0, hParam1);

	return true;
}

Hash func_219(Hash hParam0) // Position - 0x6BEF
{
	return hParam0;
}

BOOL func_220(Hash hParam0, Hash hParam1) // Position - 0x6BF9
{
	if (!func_287(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, 1120943070))
		return 1;

	return 0;
}

int func_221(Hash hParam0, BOOL bParam1) // Position - 0x6C2F
{
	int num;

	if (!func_287(hParam0, 2))
		return 0;

	num = 0;

	if (num != 0 && bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(num))
		return 0;

	return num;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_222(int iParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x6C68
{
	int i;

	*uParam3 = 0;

	if (*uParam2 < 15)
		return false;

	if (!func_285(iParam0))
		return false;

	*uParam3 = ITEMDATABASE::_0xF540239F9937033B(iParam0, hParam1);

	if (*uParam3 == 0)
	{
		!bParam4;
		return false;
	}

	!bParam4;

	for (i = 0; i < *uParam3; i = i + 1)
	{
		if (!ITEMDATABASE::_0xF27F01BBF5ACD3F3(iParam0, hParam1, i, &uParam2->[i /*2*/]))
			goto 0x70;
	
		!bParam4;
	}

	if (bParam5)
		func_288(iParam0, hParam1, uParam2, *uParam3);

	return true;
}

void func_223(Hash hParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0x6CF7
{
	int i;
	int j;
	int k;
	int l;
	int numberOfModifiedPrices;
	int numberOfModifiers;
	Any any;
	int num;
	var unk12;
	var unk14;

	if (*uParam2 < 15)
		return;
	else if (iParam3 > *uParam2 || iParam3 < 1)
		return;

	num.f_1 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PRICE_MODIFIERS(hParam0, &num) || num == 0)
		return;

	unk14 = 15;

	for (i = 0; i < iParam3; i = i + 1)
	{
		unk14[i] = 1f;
	}

	for (j = 0; j < num; j = j + 1)
	{
		any = num.f_1[j];
		numberOfModifiedPrices = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIED_PRICES(any);
	
		for (k = 0; k < numberOfModifiedPrices; k = k + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(any, k) != hParam1)
			{
			}
			else
			{
				numberOfModifiers = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIERS(any);
			
				for (l = 0; l < numberOfModifiers; l = l + 1)
				{
					if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_MODIFIER(any, l, &unk12))
					{
					}
					else
					{
						for (i = 0; i < iParam3; i = i + 1)
						{
							if (uParam2->[i /*2*/] == unk12)
							{
								unk14[i] = unk14[i] + (unk12.f_1 - 1f);
								break;
							}
						}
					}
				}
			
				break;
			}
		}
	}

	for (i = 0; i < iParam3; i = i + 1)
	{
		if (unk14[i] != 1f && uParam2->[i /*2*/].f_1 > 0)
		{
			if (uParam2->[i /*2*/] == joaat("currency_gold_bar"))
				uParam2->[i /*2*/].f_1 = ((100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk14[i] * 100f)) / 1000000) * 100;
			else
				uParam2->[i /*2*/].f_1 = (100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk14[i] * 100f)) / 10000;
		
			if (uParam2->[i /*2*/].f_1 == 0 && func_141(uParam2->[i /*2*/]) != -829303394)
				uParam2->[i /*2*/].f_1 = 1;
		}
	}

	return;
}

Hash func_224(Hash hParam0, int iParam1) // Position - 0x6ECD
{
	int num;
	var unk;
	Hash hash;

	if (!func_119(hParam0, 0))
		return 0;

	num = func_142(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_137(hParam0, 1399091007))
	{
		func_289(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

int func_225(Hash hParam0, BOOL bParam1) // Position - 0x6F47
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_290(hParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };

	if (bParam1)
		func_291(&unk, func_237(false));

	if (!func_292(&unk, &num, &num2, false))
		return 0;

	func_293(num);
	return num2;
}

int func_226(Hash hParam0, int iParam1) // Position - 0x6FA6
{
	if (iParam1 == 0)
		return 0;

	if (func_287(func_219(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, iParam1);
}

int func_227(BOOL bParam0) // Position - 0x6FD2
{
	if (func_229() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

struct<4> func_228(Hash hParam0, BOOL bParam1) // Position - 0x7013
{
	var unk;

	unk = { func_151(hParam0, bParam1, 0) };
	return func_152(hParam0, unk, unk.f_4, bParam1);
}

int func_229() // Position - 0x7038
{
	return Global_1572887.f_14;
}

BOOL func_230(Hash hParam0, int iParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0x7046
{
	int num;
	var unk;
	int num2;
	int i;
	int num3;
	var unk62;
	int num4;

	if (func_294(hParam0))
		return 0;

	if (iParam1 <= 0)
		return 0;

	num = func_226(hParam0, joaat("DEFAULT"));

	if (num == 0)
		return 0;

	if (!func_145(bParam4))
	{
		unk = 10;
	
		if (num == 0)
			return 0;
	
		if (!func_295(&unk, &num2, hParam0, num, iParam1, true) || num2 < 1)
			return 0;
	
		num3 = -1;
		unk62.f_9 = 1;
		unk62.f_11 = -1591664384;
	
		for (i = 0; i < num2; i = i + 1)
		{
			unk62 = { func_296(hParam0, &unk[i /*6*/]) };
			unk62.f_12 = hParam2;
			num3 = func_148(joaat("use"), &unk62, true);
		
			if (num3 == -1)
				return 0;
		}
	
		if (num3 != -1)
		{
			num4.f_7 = -142743235;
			num4.f_16 = -1;
			num4 = iParam3;
			num4.f_7 = hParam2;
			func_149(num3, num4);
			return 1;
		}
	
		return 0;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_227(bParam4), hParam0, iParam1, hParam2))
		return 0;

	return 1;
}

BOOL func_231(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, int iParam5, BOOL bParam6) // Position - 0x715E
{
	var unk;
	int num;
	var unk15;
	int num2;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_294(hParam0))
		return false;

	unk.f_9 = -1591664384;

	if (!func_243(*panParam1, &unk, bParam6, false, -1))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_145(bParam6))
	{
		num = -1;
	
		if (unk.f_13)
		{
		}
		else if (func_229() == 0)
		{
			unk15.f_9 = 1;
			unk15.f_11 = -1591664384;
			unk15.f_8 = hParam0;
			unk15 = { *panParam1 };
			unk15.f_4 = { *uParam2 };
			unk15.f_11 = uParam2->f_4;
			unk15.f_9 = iParam3;
			unk15.f_12 = hParam4;
			num = func_148(joaat("use"), &unk15, true);
		
			if (num != -1)
			{
				num2.f_7 = -142743235;
				num2.f_16 = -1;
				num2 = iParam5;
				num2.f_7 = hParam4;
				func_149(num, num2);
			}
		}
	
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_227(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

BOOL func_232(Hash hParam0, Any* panParam1) // Position - 0x727C
{
	int num;

	num = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(hParam0, panParam1);

	if (hParam0 == joaat("use"))
		if (func_297(panParam1->f_8, hParam0, num, 2048) || func_297(panParam1->f_8, hParam0, num, 32768) || func_297(panParam1->f_8, hParam0, num, 65536))
			return false;
	else if (hParam0 == 1168099063)
		if (func_297(panParam1->f_8, hParam0, num, 4) || func_297(panParam1->f_8, hParam0, num, 256) || func_297(panParam1->f_8, hParam0, num, 65536) || func_297(panParam1->f_8, hParam0, num, 131072))
			return false;
	else if (hParam0 == joaat("spend"))
		if (func_297(panParam1->f_8, hParam0, num, 1) || func_297(panParam1->f_8, hParam0, num, 8) || func_297(panParam1->f_8, hParam0, num, 65536) || func_297(panParam1->f_8, hParam0, num, 32))
			return false;
	else if (hParam0 == joaat("Sell"))
		if (func_297(panParam1->f_8, hParam0, num, 1) || func_297(panParam1->f_8, hParam0, num, 16) || func_297(panParam1->f_8, hParam0, num, 2) || func_297(panParam1->f_8, hParam0, num, 65536))
			return false;
	else if (func_297(panParam1->f_8, hParam0, num, 8) || func_297(panParam1->f_8, hParam0, num, 4096) || func_297(panParam1->f_8, hParam0, num, 256) || func_297(panParam1->f_8, hParam0, num, 65536))
		return false;

	return true;
}

BOOL func_233(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x7452
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 17, panParam2, 0);
}

int func_234(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0x7469
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_298(iParam1, 1, 0, 0);
			return iParam1;
		}
	
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}

	func_298(iParam1, 2, 0, 0);
	return -1;
}

int func_235(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0x74B2
{
	if (bParam0)
	{
		func_298(iParam1, 1, 0, 0);
		return iParam1;
	}

	return -1;
}

struct<4> func_236(BOOL bParam0) // Position - 0x74CE
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_227(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_152(joaat("character"), func_299(), -1591664384, bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_152(joaat("character"), func_299(), -1591664384, false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_152(joaat("character"), func_299(), -1591664384, bParam0);
}

struct<4> func_237(BOOL bParam0) // Position - 0x756E
{
	int num;

	num = func_227(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_152(923904168, func_236(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_152(923904168, func_236(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_152(923904168, func_236(bParam0), -740156546, false);
}

int func_238(Hash hParam0, BOOL bParam1) // Position - 0x760F
{
	if (func_141(hParam0) == 1779021115)
		return 0;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_300();
		else
			return 1;

	return 0;
}

BOOL func_239(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x7646
{
	return func_301(hParam0, *uParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_240(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x7661
{
	var unk;

	if (func_302(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_241(BOOL bParam0) // Position - 0x7682
{
	int num;

	num = func_227(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_152(271701509, func_236(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_152(271701509, func_236(bParam0), 12999093, false);
}

BOOL func_242(Hash hParam0, int iParam1) // Position - 0x76EC
{
	Hash hash;
	int num;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || iParam1 == 0)
		return false;

	num = func_141(hParam0);

	if (num == -1015256479)
		return false;

	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(num);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(num, i, &hash))
			if (func_303(hParam0, iParam1, hash))
				return true;
	}

	return false;
}

BOOL func_243(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x7759
{
	return func_304(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

BOOL func_244(Any* panParam0) // Position - 0x776F
{
	if (!func_153(panParam0))
		return false;

	return INVENTORY::_INVENTORY_IS_ITEM_EXPIRED(panParam0);
}

int func_245(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x778B
{
	if (!func_153(&uParam0))
		return 0;

	return INVENTORY::_INVENTORY_GET_ITEM_EXPIRY_TIME(&uParam0);
}

BOOL func_246(int iParam0) // Position - 0x77A7
{
	if (iParam0 <= 0)
		return false;

	return NETWORK::GET_CLOUD_TIME_AS_INT() + func_305() > iParam0;
}

void func_247() // Position - 0x77C5
{
	if (!Global_1102813.f_16)
		return;

	Global_1072759.f_28644.f_5 = 1;
	AUDIO::_RELEASE_SOUNDSET("rdro_gamemode_transition_sounds");
	AUDIO::_RELEASE_SOUNDSET("rdro_gamemode_generic_sounds");
	return;
}

int func_248(Hash hParam0) // Position - 0x77F4
{
	if (!func_150(hParam0))
		return 0;

	if (func_217(hParam0))
		return -1957466003;

	if (func_137(hParam0, -1457263561))
		return -84670860;

	if (func_137(hParam0, -732976331))
		return -700121520;

	if (func_137(hParam0, 1495098826))
		return 917298505;

	if (func_137(hParam0, 2088554948))
		return -1638586319;

	return 176863985;
}

void func_249(BOOL bParam0) // Position - 0x7887
{
	if (bParam0)
		func_253(117);
	else
		func_254(117);

	return;
}

void func_250(BOOL bParam0) // Position - 0x78A5
{
	if (bParam0)
		func_253(116);
	else
		func_254(116);

	return;
}

BOOL func_251(var uParam0, BOOL bParam1) // Position - 0x78C3
{
	var unk;
	var unk30;
	int num;
	int num2;
	var unk48;
	int i;

	unk.f_9 = -1591664384;
	unk30 = { func_290(0, -1591664384, -1591664384, -1591664384, joaat("CI_CATEGORY_HORSE"), 0, 0) };

	if (func_292(&unk30, &num, &num2, bParam1))
	{
		unk48.f_9 = -1591664384;
	
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_306(&unk48, i, num, num2))
			{
				if (func_307(&unk48, &unk, false))
				{
					if (func_308(&(unk.f_24), 16))
					{
						*uParam0 = { unk };
						func_293(num);
						return true;
					}
				}
			}
		}
	
		func_293(num);
	}

	return false;
}

BOOL func_252(var uParam0, BOOL bParam1) // Position - 0x796E
{
	var unk;
	var unk25;
	int num;
	int num2;
	var unk43;
	int i;

	unk.f_9 = -1591664384;
	unk25 = { func_290(0, -1591664384, -1591664384, -1591664384, 0, 0, joaat("coach")) };

	if (func_292(&unk25, &num, &num2, bParam1))
	{
		unk43.f_9 = -1591664384;
	
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_306(&unk43, i, num, num2))
			{
				if (func_309(&unk43, &unk, false))
				{
					if (func_308(&(unk.f_23), 16))
					{
						*uParam0 = { unk };
						func_293(num);
						return true;
					}
				}
			}
		}
	
		func_293(num);
	}

	return false;
}

int func_253(int iParam0) // Position - 0x7A19
{
	if (func_310(&(Global_1102813.f_4), iParam0, 5))
		return 1;

	return 0;
}

int func_254(int iParam0) // Position - 0x7A36
{
	if (func_311(&(Global_1102813.f_4), iParam0, 5))
		return 1;

	return 0;
}

float func_255(Ped pedParam0, Vehicle veParam1, BOOL bParam2, BOOL bParam3) // Position - 0x7A53
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(veParam1, false, false), bParam2);
}

BOOL func_256(int iParam0, int iParam1) // Position - 0x7A9B
{
	if (iParam1 == 255)
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	return Global_1289643[iParam1 /*19*/].f_10 && iParam0 != false;
}

void func_257(int iParam0) // Position - 0x7AD5
{
	func_312(2, iParam0);
	return;
}

void func_258(Hash* phParam0, BOOL bParam1) // Position - 0x7AE4
{
	int randomIntInRange;
	int i;
	int MaxInt;
	int randomIntInRange2;

	if (!bParam1)
	{
		func_254(8);
	}
	else
	{
		if (func_313(255) == 4)
			return;
	
		randomIntInRange = -1;
		i = 0;
	
		for (i = 0; i <= 14; i = i + 1)
		{
			if (Global_1072759.f_23824.f_383[i /*272*/] == phParam0)
				randomIntInRange = i;
		}
	
		if (randomIntInRange < 0)
		{
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 15);
			phParam0 = Global_1072759.f_23824.f_383[randomIntInRange /*272*/];
		}
	
		Global_1102813.f_3905 = phParam0;
		func_314(&(Global_1102813.f_3839));
		Global_1102813.f_3839 = 0f;
		Global_1102813.f_3839.f_5 = 1;
		Global_1102813.f_3839.f_16 = 0;
		Global_1102813.f_3839.f_17.f_6 = { Global_1072759.f_23824.f_383[randomIntInRange /*272*/].f_2 };
		Global_1102813.f_3839.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102813.f_3839.f_17 = { Global_1901671.f_51.f_1, Global_1901671.f_51.f_1, Global_1901671.f_51.f_1 };
		Global_1102813.f_3839.f_17.f_9 = joaat("volSphere");
		func_315(&(Global_1102813.f_3878));
		MaxInt = func_316(phParam0);
		randomIntInRange2 = MISC::GET_RANDOM_INT_IN_RANGE(0, MaxInt);
	
		if (func_317(phParam0, randomIntInRange2, &(Global_1102813.f_3878.f_6), &(Global_1102813.f_3878)))
			Global_1102813.f_3878.f_5 = 1;
	
		func_253(8);
		func_253(0);
	}

	return;
}

BOOL func_259() // Position - 0x7C3B
{
	return !Global_1572887.f_10;
}

BOOL func_260() // Position - 0x7C4A
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

void func_261(Hash hParam0, int iParam1) // Position - 0x7C5E
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

BOOL func_262(int iParam0) // Position - 0x7C71
{
	return func_318(iParam0, 1);
}

BOOL func_263(int iParam0) // Position - 0x7C80
{
	return iParam0 >= 0 && iParam0 <= 150;
}

int func_264(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x7C96
{
	int num;
	int num2;
	int num3;
	BOOL flag;
	int num4;

	num = func_319(vParam0);
	num2 = -1;

	if (Global_1893594[num] > 0)
	{
		num3 = Global_1893594[num] - 1;
		flag = false;
	
		while (num3 >= 0 && !flag)
		{
			num4 = Global_1892777[num /*51*/][num3];
		
			if (VOLUME::DOES_VOLUME_EXIST(Global_1887363[num4 /*36*/].f_4))
			{
				if (VOLUME::IS_POINT_IN_VOLUME(Global_1887363[num4 /*36*/].f_4, vParam0))
				{
					switch (Global_1887363[num4 /*36*/].f_21)
					{
						case 5:
							if (!bParam3)
							{
								num2 = num4;
								flag = true;
							}
							break;
					
						default:
							num2 = num4;
							flag = true;
							break;
					}
				}
			}
		
			num3 = num3 - 1;
		}
	}

	if (num2 != -1)
	{
	}

	return num2;
}

void func_265(BOOL bParam0) // Position - 0x7D4D
{
	if (!bParam0)
	{
		func_254(5);
	}
	else
	{
		if (func_313(255) == 4)
			return;
	
		func_253(5);
	}

	return;
}

void func_266(BOOL bParam0, BOOL bParam1) // Position - 0x7D77
{
	if (func_313(255) == 4)
		return;

	if (_IS_NULL_VECTOR(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
		return;

	if (!bParam0)
	{
		func_254(0);
	}
	else
	{
		if (bParam1)
			func_321(0, false, 0, true);
	
		func_253(0);
		func_314(&(Global_1102813.f_3839));
		Global_1102813.f_3839 = 0f;
		Global_1102813.f_3839.f_5 = 1;
		Global_1102813.f_3839.f_16 = 0;
		Global_1102813.f_3839.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102813.f_3839.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102813.f_3839.f_17 = { Global_1901671.f_51.f_1, Global_1901671.f_51.f_1, Global_1901671.f_51.f_1 };
		Global_1102813.f_3839.f_17.f_9 = joaat("volSphere");
		func_315(&(Global_1102813.f_3878));
		Global_1102813.f_3878.f_6 = { Global_1102813.f_3839.f_17.f_6 };
		Global_1102813.f_3878 = Global_1102813.f_3839;
		Global_1102813.f_3878.f_5 = 1;
	
		if (bParam1)
		{
			Global_1102813.f_26.f_3341 = 0;
			Global_1102813.f_26.f_3342 = 0;
		}
	}

	func_322(Global_1102813.f_3839, 36);
	func_323(Global_1102813.f_3878, 36);
	return;
}

int func_267(int iParam0) // Position - 0x7EC2
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROPERTY_BAYOU");
	
		case 1:
			return joaat("PROPERTY_GRIZZLIES");
	
		case 2:
			return joaat("PROPERTY_HENNIGANS");
	
		case 3:
			return joaat("PROPERTY_HEARTLANDS");
	
		case 4:
			return joaat("PROPERTY_TALL_TREES");
	
		default:
		
	}

	return -1588462292;
}

int func_268(int iParam0) // Position - 0x7F1D
{
	switch (iParam0)
	{
		case 0:
			return joaat("EXTERIOR_FRONT");
	
		case 1:
			return joaat("EXTERIOR_SIDE");
	
		case 2:
			return joaat("INTERIOR_GROUND_FRONT");
	
		case 3:
			return joaat("INTERIOR_GROUND_SIDE");
	
		case 4:
			return joaat("INTERIOR_BAR");
	
		default:
		
	}

	return -1950033077;
}

void func_269(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x7F78
{
	func_324();
	Global_1297441.f_1.f_2 = iParam0;
	Global_1297441.f_1.f_3 = iParam1;
	Global_1297441.f_1.f_4 = iParam2;
	Global_1297441.f_1.f_1 = iParam3;
	return;
}

BOOL func_270(var uParam0, var uParam1, var uParam2, Vector3* pvParam3, float* pfParam4) // Position - 0x7FAC
{
	Hash* p_hash;
	int MaxInt;
	int randomIntInRange;

	p_hash = Global_1072759.f_23824.f_383[func_325(uParam0) /*272*/];
	MaxInt = func_316(p_hash);

	if (MaxInt <= 0)
	{
		return false;
	}
	else
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, MaxInt);
	
		if (func_317(p_hash, randomIntInRange, pvParam3, pfParam4))
			return true;
	}

	return false;
}

void func_271(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, float fParam9, BOOL bParam10, int iParam11, int iParam12, int iParam13) // Position - 0x7FFD
{
	if (func_313(255) == 4)
		return;

	if (_IS_NULL_VECTOR(uParam0))
		return;

	if (fParam8 < 0f && fParam9 < 0f)
	{
		fParam8 = Global_1901671.f_51;
		fParam9 = Global_1901671.f_51.f_1;
	}

	if (fParam8 == 0f && fParam9 == 0f)
	{
		fParam8 = Global_1901671.f_51;
		fParam9 = Global_1901671.f_51.f_1;
	}

	if (fParam9 < fParam8)
	{
		fParam8 = Global_1901671.f_51;
		fParam9 = Global_1901671.f_51.f_1;
	}

	if (bParam10)
		func_321(0, false, 0, true);

	func_253(0);
	func_253(3);
	Global_1102813.f_3909 = iParam11;
	Global_1102813.f_3910 = iParam12;
	Global_1102813.f_3911 = iParam13;
	func_314(&(Global_1102813.f_3839));
	Global_1102813.f_3839 = fParam3;
	Global_1102813.f_3839.f_5 = 1;
	Global_1102813.f_3839.f_17.f_6 = { uParam0 };
	Global_1102813.f_3839.f_17.f_3 = { 0f, 0f, 0f };
	Global_1102813.f_3839.f_17 = { fParam9, fParam9, fParam9 };
	Global_1102813.f_3839.f_17.f_9 = joaat("volSphere");

	if (fParam8 > 1f)
	{
		Global_1102813.f_3839.f_16 = 1;
		Global_1102813.f_3839.f_6.f_6 = { Global_1102813.f_3839.f_17.f_6 };
		Global_1102813.f_3839.f_6.f_3 = { 0f, 0f, 0f };
		Global_1102813.f_3839.f_6 = { fParam8, fParam8, fParam8 };
		Global_1102813.f_3839.f_6.f_9 = joaat("volSphere");
	}

	func_315(&(Global_1102813.f_3878));
	Global_1102813.f_3878.f_6 = { uParam4 };
	Global_1102813.f_3878 = fParam7;
	Global_1102813.f_3878.f_5 = 1;
	Global_1102813.f_26.f_3341 = 0;
	Global_1102813.f_26.f_3342 = 0;
	func_322(Global_1102813.f_3839, 36);
	func_323(Global_1102813.f_3878, 36);
	return;
}

BOOL func_272(int iParam0, int iParam1) // Position - 0x81D5
{
	return func_326(Global_1206497.f_78[iParam0 /*20*/].f_6, iParam1);
}

Ped func_273(Ped pedParam0) // Position - 0x81EF
{
	Entity firstEntityPedIsCarrying;
	Ped pedIndexFromEntityIndex;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	firstEntityPedIsCarrying = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(pedParam0);

	if (ENTITY::DOES_ENTITY_EXIST(firstEntityPedIsCarrying))
	{
		if (ENTITY::IS_ENTITY_A_PED(firstEntityPedIsCarrying))
		{
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(firstEntityPedIsCarrying);
			return pedIndexFromEntityIndex;
		}
	}

	return 0;
}

BOOL func_274(int iParam0, int iParam1) // Position - 0x823A
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

BOOL func_275(int iParam0) // Position - 0x8252
{
	if (func_277(iParam0, 4))
		return false;

	return true;
}

BOOL func_276(int iParam0) // Position - 0x8269
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

BOOL func_277(int iParam0, int iParam1) // Position - 0x8335
{
	return Global_1904402.f_33[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_278(int iParam0) // Position - 0x834E
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_279() // Position - 0x8361
{
	if (!func_260())
		return false;

	return Global_1904402.f_8873;
}

void func_280(var uParam0, float fParam1) // Position - 0x837C
{
	uParam0->f_1 = func_327() - fParam1;
	func_328(uParam0, 1);
	func_329(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

int func_281(Hash* phParam0) // Position - 0x83A2
{
	Any any;
	int num;

	any = Global_1072759.f_23824.f_383.f_4085;
	any.f_2 = 724817478;
	any.f_3 = phParam0;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(any.f_1), &any))
	{
		any.f_2 = 355943382;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, &any);
		return num;
	}

	return -931758312;
}

void func_282(Any anParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, Hash hParam20) // Position - 0x83F1
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "Fast_Travel_Location_", 64);
	TEXT_LABEL_APPEND_INT(&unk, hParam20, 64);
	uParam1.f_7 = 1993479432;
	func_330(anParam0, Global_1072759.f_23824.f_6.f_4, unk, uParam1);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1072759.f_23824.f_6.f_5, hParam20, "ft_dynamic_text_and_price", *anParam0);
	return;
}

void func_283(Any anParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, Hash hParam20) // Position - 0x8443
{
	func_282(anParam0, uParam1, hParam20);
	Global_1072759.f_23824.f_6.f_353 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1072759.f_23824.f_6.f_331, "locationArrayIndex", 14);
	return;
}

void func_284(Any anParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, Hash hParam20) // Position - 0x847A
{
	func_282(anParam0, uParam1, hParam20);
	Global_1072759.f_23824.f_6.f_376 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1072759.f_23824.f_6.f_354, "locationArrayIndex", 15);
	return;
}

BOOL func_285(int iParam0) // Position - 0x84B1
{
	if (iParam0 == 0)
		return false;

	return ITEMDATABASE::ITEMDATABASE_IS_BUYABLE_AWARD_VALID(iParam0);
}

BOOL func_286(int iParam0, Hash hParam1) // Position - 0x84C9
{
	var unk;
	int num;
	Hash unlockHash;
	int num2;
	int i;
	int j;

	unk = 10;
	unk.f_1.f_4 = 15;
	unk.f_1.f_36 = 10;
	unk.f_1.f_47.f_4 = 15;
	unk.f_1.f_47.f_36 = 10;
	unk.f_1.f_47.f_47.f_4 = 15;
	unk.f_1.f_47.f_47.f_36 = 10;
	unk.f_1.f_47.f_47.f_47.f_4 = 15;
	unk.f_1.f_47.f_47.f_47.f_36 = 10;
	unk.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	unk.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	unk.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	unk.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	unk.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	unk.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	unk.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	unk.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	unk.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	unk.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	unk.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	unk.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_BUY_AWARD_ACQUIRE_COSTS(iParam0, &unk, &num, 10) || num == 0)
		return false;

	num2 = 0;

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*47*/] == hParam1)
		{
			num2 = unk[i /*47*/].f_35;
		
			for (j = 0; j < num2; j = j + 1)
			{
				unlockHash = unk[i /*47*/].f_36[j];
			
				if (unlockHash == 0)
				{
				}
				else if (!UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
				{
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_287(Hash hParam0, int iParam1) // Position - 0x8612
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

void func_288(int iParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0x862C
{
	int i;
	int j;
	int k;
	int l;
	int numberOfModifiedPrices;
	int numberOfModifiers;
	Any any;
	int num;
	var unk12;
	var unk14;

	if (*uParam2 < 15)
		return;
	else if (iParam3 > *uParam2 || iParam3 < 1)
		return;

	num.f_1 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_AWARD_COST_MODIFIERS(iParam0, &num) || num == 0)
		return;

	unk14 = 15;

	for (i = 0; i < iParam3; i = i + 1)
	{
		unk14[i] = 1f;
	}

	for (j = 0; j < num; j = j + 1)
	{
		any = num.f_1[j];
		numberOfModifiedPrices = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIED_PRICES(any);
	
		for (k = 0; k < numberOfModifiedPrices; k = k + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(any, k) != hParam1)
			{
			}
			else
			{
				numberOfModifiers = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIERS(any);
			
				for (l = 0; l < numberOfModifiers; l = l + 1)
				{
					if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_MODIFIER(any, l, &unk12))
					{
					}
					else
					{
						for (i = 0; i < iParam3; i = i + 1)
						{
							if (uParam2->[i /*2*/] == unk12)
							{
								unk14[i] = unk14[i] + (unk12.f_1 - 1f);
								break;
							}
						}
					}
				}
			
				break;
			}
		}
	}

	for (i = 0; i < iParam3; i = i + 1)
	{
		if (unk14[i] != 1f && uParam2->[i /*2*/].f_1 > 0)
		{
			if (uParam2->[i /*2*/] == joaat("currency_gold_bar"))
				uParam2->[i /*2*/].f_1 = ((100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk14[i] * 100f)) / 1000000) * 100;
			else
				uParam2->[i /*2*/].f_1 = (100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk14[i] * 100f)) / 10000;
		
			if (uParam2->[i /*2*/].f_1 == 0 && func_141(uParam2->[i /*2*/]) != -829303394)
				uParam2->[i /*2*/].f_1 = 1;
		}
	}

	return;
}

void func_289(Hash hParam0, var uParam1, var uParam2) // Position - 0x8802
{
	*uParam1 = 0;
	*uParam2 = 0;

	switch (hParam0)
	{
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("repeater_ammo_box_express");
			*uParam2 = joaat("ammo_repeater_express");
			break;
	
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*uParam1 = joaat("repeater_ammo_box");
			*uParam2 = joaat("ammo_repeater");
			break;
	
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("revolver_ammo_box_high_velocity");
			*uParam2 = joaat("ammo_revolver_high_velocity");
			break;
	
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*uParam1 = joaat("pistol_ammo_box");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
	
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*uParam1 = joaat("revolver_ammo_box_used");
			*uParam2 = joaat("ammo_revolver");
			break;
	
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*uParam1 = joaat("shotgun_ammo_box_used");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
	
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("rifle_ammo_box_high_velocity");
			*uParam2 = joaat("ammo_rifle_high_velocity");
			break;
	
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("pistol_ammo_box_express");
			*uParam2 = joaat("ammo_pistol_express");
			break;
	
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("rifle_ammo_box_express");
			*uParam2 = joaat("ammo_rifle_express");
			break;
	
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("repeater_ammo_box_high_velocity");
			*uParam2 = joaat("ammo_repeater_high_velocity");
			break;
	
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*uParam1 = joaat("shotgun_ammo_box_slug");
			*uParam2 = joaat("ammo_shotgun_slug");
			break;
	
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*uParam1 = joaat("rifle_ammo_box");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
	
		case joaat("AMMO_22_AMMOBOX"):
			*uParam1 = joaat("22_ammo_box");
			*uParam2 = joaat("ammo_22");
			break;
	
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*uParam1 = joaat("revolver_ammo_box");
			*uParam2 = joaat("ammo_revolver");
			break;
	
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("revolver_ammo_box_express");
			*uParam2 = joaat("ammo_revolver_express");
			break;
	
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*uParam1 = joaat("rifle_ammo_box_used");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
	
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*uParam1 = joaat("pistol_ammo_box_used");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
	
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("pistol_ammo_box_high_velocity");
			*uParam2 = joaat("ammo_pistol_high_velocity");
			break;
	
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*uParam1 = joaat("shotgun_ammo_box");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
	
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*uParam1 = joaat("repeater_ammo_box_used");
			*uParam2 = joaat("ammo_repeater");
			break;
	}

	return;
}

struct<18> func_290(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x8A0E
{
	Hash hash;

	hash = -1;
	hash.f_1 = -1;
	hash.f_2 = -1;
	hash.f_3 = -1;
	hash.f_4 = -1;
	hash.f_5 = -1;
	hash.f_6 = -1;
	hash.f_7 = -1;
	hash.f_8 = -1;
	hash.f_13 = -1;
	hash.f_14 = -1;
	hash.f_15 = -1;
	hash.f_16 = -1;
	hash.f_17 = -1;

	if (hParam0 != 0)
		hash = hParam0;

	if (iParam1 != 0 && iParam1 != -1591664384)
		hash.f_1 = iParam1;

	if (iParam2 != 0 && iParam2 != -1591664384)
		hash.f_2 = iParam2;

	if (iParam3 != 0 && iParam3 != -1591664384)
		hash.f_3 = iParam3;

	if (iParam4 != 0)
		hash.f_4 = iParam4;

	if (iParam5 != 0)
		hash.f_5 = iParam5;

	if (iParam6 != 0)
		hash.f_8 = iParam6;

	return hash;
}

void func_291(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x8AEC
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_292(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x8B07
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_227(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

int func_293(int iParam0) // Position - 0x8B2C
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

BOOL func_294(Hash hParam0) // Position - 0x8B4D
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

BOOL func_295(Any anParam0, var uParam1, Hash hParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x8B63
{
	*uParam1 = 0;

	if (iParam4 < 1)
		return false;
	else if (*anParam0 != 10)
		return false;

	if (iParam3 == 0)
	{
		iParam3 = func_226(hParam2, joaat("DEFAULT"));
	
		if (iParam3 == 0)
			return false;
	}

	if (!NETSHOPPING::_0xD1555FBC96C88444(hParam2, iParam3, iParam4, anParam0, 10))
		return false;

	if (!func_331(anParam0, uParam1, iParam4, bParam5))
		return false;

	return true;
}

struct<17> func_296(Hash hParam0, var uParam1) // Position - 0x8BD0
{
	var unk;

	unk.f_9 = 1;
	unk.f_11 = -1591664384;
	unk = { func_152(hParam0, *uParam1, uParam1->f_4, true) };
	unk.f_4 = { *uParam1 };
	unk.f_8 = hParam0;
	unk.f_9 = uParam1->f_5;
	unk.f_11 = uParam1->f_4;
	return unk;
}

BOOL func_297(var uParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0x8C23
{
	if (func_326(iParam2, iParam3))
		return true;

	return false;
}

void func_298(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x8C3B
{
	int i;

	if (iParam0 == -1)
		return;

	for (i = 0; i < Global_1292143.f_20; i = i + 1)
	{
		if (Global_1292143.f_20.f_1[i /*21*/] == iParam0)
		{
			if (Global_1292143.f_20.f_1[i /*21*/].f_1 == iParam1)
			{
			}
			else
			{
				Global_1292143.f_20.f_1[i /*21*/].f_1 = iParam1;
			}
		
			if (iParam2 != 0 && iParam3 != 0)
			{
				Global_1292143.f_20.f_1[i /*21*/].f_2 = iParam2;
				Global_1292143.f_20.f_1[i /*21*/].f_3 = iParam3;
			}
		
			return;
		}
	}

	func_332(iParam0, iParam1, iParam2, iParam3);
	return;
}

struct<4> func_299() // Position - 0x8CD9
{
	var unk;

	return unk;
}

int func_300() // Position - 0x8CE5
{
	if (func_333(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

int func_301(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x8D02
{
	int inventoryItemCountWithGuid;
	var guid;

	if (!func_119(hParam0, 0))
		return 0;

	if (!bParam7 && func_226(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_152(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_227(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_227(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

BOOL func_302(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x8D81
{
	int inventoryId;

	inventoryId = func_227(false);
	*panParam1 = { func_152(hParam0, func_237(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_303(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x8DC6
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, iParam1, hParam2);
}

BOOL func_304(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x8DF9
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_227(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

int func_305() // Position - 0x8E33
{
	int value;

	if (!NETWORK::NETWORK_DOES_TUNABLE_EXIST(-475019843, 135369362))
		return 604800;

	value = 604800;

	if (!NETWORK::NETWORK_ACCESS_TUNABLE_INT(-475019843, 135369362, &value))
		return 604800;

	return value;
}

BOOL func_306(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x8E77
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

BOOL func_307(Any* panParam0, Any* panParam1, BOOL bParam2) // Position - 0x8EB2
{
	int inventoryId;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return false;

	inventoryId = func_227(bParam2);

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam0, panParam1, 29, 1))
		return false;

	return true;
}

BOOL func_308(var uParam0, int iParam1) // Position - 0x8EE6
{
	return func_326(*uParam0, iParam1);
}

BOOL func_309(Any* panParam0, Any* panParam1, BOOL bParam2) // Position - 0x8EF7
{
	int inventoryId;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return false;

	inventoryId = func_227(bParam2);

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam0, panParam1, 24, 1))
		return false;

	return true;
}

BOOL func_310(Any* panParam0, int iParam1, int iParam2) // Position - 0x8F2B
{
	int num;
	int offset;
	BOOL isBitSet;

	num = iParam1 / 31;
	offset = iParam1 % 31;
	isBitSet = MISC::IS_BIT_SET(panParam0->[num], offset);
	MISC::SET_BIT(&panParam0->[num], offset);
	return !isBitSet;
}

BOOL func_311(Any* panParam0, int iParam1, int iParam2) // Position - 0x8F5E
{
	int num;
	int offset;
	BOOL isBitSet;

	num = iParam1 / 31;
	offset = iParam1 % 31;
	isBitSet = MISC::IS_BIT_SET(panParam0->[num], offset);
	MISC::CLEAR_BIT(&panParam0->[num], offset);
	return isBitSet;
}

void func_312(int iParam0, int iParam1) // Position - 0x8F90
{
	int data;
	var value;
	Player Plr;
	int i;

	data.f_4 = -1;
	data.f_5 = -1;
	data = 47;
	data.f_1 = PLAYER::PLAYER_ID();
	data.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	data.f_4 = iParam0;
	data.f_5 = iParam1;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(data.f_1))
		return;

	if (data.f_4 == 2 || data.f_4 == 3 || data.f_4 == 6 || data.f_4 == 7 || data.f_4 == 8 || data.f_4 == 9 || data.f_4 == 10 || data.f_4 == 11 || data.f_4 == 12 || data.f_4 == 13 || data.f_4 == 14 || data.f_4 == 15)
	{
		for (i = 0; i < 32; i = i + 1)
		{
			Plr = PLAYER::INT_TO_PLAYERINDEX(i);
		
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Plr))
			{
			}
			else
			{
				SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, i);
			}
		}
	}
	else
	{
		SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, PLAYER::NETWORK_PLAYER_ID_TO_INT());
	}

	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &data, 6, 0, &value);
	return;
}

int func_313(int iParam0) // Position - 0x90B4
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

void func_314(var uParam0) // Position - 0x90FF
{
	var unk;

	*uParam0 = { unk };
	return;
}

void func_315(float* pfParam0) // Position - 0x9111
{
	var unk;

	*pfParam0 = { unk };
	return;
}

int func_316(Hash* phParam0) // Position - 0x9123
{
	Any any;

	any = Global_1072759.f_23824.f_383.f_4085;
	any.f_2 = 1593794963;
	any.f_3 = phParam0;
	return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&any);
}

BOOL func_317(Hash* phParam0, int iParam1, Vector3* pvParam2, float* pfParam3) // Position - 0x914F
{
	Any any;

	any = Global_1072759.f_23824.f_383.f_4085;
	any.f_2 = 160165798;
	any.f_3 = phParam0;
	any.f_4 = iParam1;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(any.f_1), &any))
	{
		any.f_2 = 1576253240;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(pvParam2, &any);
		any.f_2 = -55481687;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(pfParam3, &any);
		return true;
	}

	return false;
}

BOOL func_318(int iParam0, int iParam1) // Position - 0x91B1
{
	if (!func_25(iParam0))
		return false;

	return func_326(Global_1142424.f_1[iParam0 /*63*/].f_61, iParam1);
}

int func_319(var uParam0, var uParam1, var uParam2) // Position - 0x91D9
{
	int num;

	num = func_334(uParam0, 0f, 0f, 0, 2);
	return func_334(uParam0, Global_1892764[num /*3*/].f_1, Global_1892764[num /*3*/].f_2, Global_1892764[num /*3*/], 4);
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x9214
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

void func_321(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x923E
{
	func_335(iParam0);

	if (!func_189(1))
		return;

	if (bParam1)
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	else if (!func_87(128) && !func_19(19))
		CAM::DO_SCREEN_FADE_OUT(iParam2);

	if (bParam3 && func_84() == 4)
		func_254(18);

	func_336(1024);
	return;
}

void func_322(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, int iParam30) // Position - 0x92A0
{
	switch (uParam0.f_5)
	{
		case 1:
			break;
	
		case 2:
			break;
	
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(uParam0.f_4))
			{
			}
			break;
	}

	uParam0.f_16;
	VOLUME::DOES_VOLUME_EXIST(uParam0.f_27) && uParam0.f_28;
	return;
}

void func_323(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9) // Position - 0x92F6
{
	switch (uParam0.f_5)
	{
		case 1:
			break;
	
		case 2:
			break;
	
		case 3:
			break;
	}

	return;
}

void func_324() // Position - 0x9323
{
	Global_1297441.f_1 = Global_1072759.f_28418[50 /*4*/].f_3;
	Global_1297441.f_1.f_1 = 0;
	Global_1297441.f_1.f_2 = 0;
	Global_1297441.f_1.f_3 = 0;
	Global_1297441.f_1.f_4 = 0;
	return;
}

int func_325(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x9362
{
	int i;
	int num;
	float num2;
	float num3;

	i = 0;
	num = -1;
	num2 = 0f;

	for (i = 0; i <= 14; i = i + 1)
	{
		num3 = BUILTIN::VDIST(vParam0, Global_1072759.f_23824.f_383[i /*272*/].f_2);
	
		if (num3 < num2 || num == -1)
		{
			num = i;
			num2 = num3;
		}
	}

	return num;
}

BOOL func_326(int iParam0, int iParam1) // Position - 0x93BF
{
	return iParam0 && iParam1 != false;
}

float func_327() // Position - 0x93CE
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_328(var uParam0, int iParam1) // Position - 0x9400
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_329(var uParam0, int iParam1) // Position - 0x9411
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_330(Any anParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28) // Position - 0x9426
{
	func_337(anParam0, hParam1, uParam2, uParam10);
	anParam0->f_19 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*anParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(15), uParam10.f_16);
	anParam0->f_20 = DATABINDING::_DATABINDING_ADD_DATA_INT(*anParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(53), uParam10.f_17);
	anParam0->f_21 = DATABINDING::_DATABINDING_ADD_DATA_INT(*anParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(54), uParam10.f_18);
	return;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_331(Any anParam0, var uParam1, int iParam2, BOOL bParam3) // Position - 0x947F
{
	int i;

	*uParam1 = 0;

	if (*anParam0 != 10)
		return false;

	for (i = 0; i < 10; i = i + 1)
	{
		if (iParam2 < 1)
			break;
	
		if (anParam0->[i /*6*/].f_4 == 0)
			goto 0xF4;
	
		if (anParam0->[i /*6*/].f_5 == 0)
			goto 0xF4;
	
		if (func_244(&anParam0->[i /*6*/]))
		{
		}
		else
		{
			if (i != *uParam1)
			{
				anParam0->[*uParam1 /*6*/] = { anParam0->[i /*6*/] };
				anParam0->[*uParam1 /*6*/].f_4 = anParam0->[i /*6*/].f_4;
			}
		
			if (anParam0->[i /*6*/].f_5 > iParam2)
			{
				anParam0->[*uParam1 /*6*/].f_5 = iParam2;
				iParam2 = 0;
			}
			else
			{
				anParam0->[*uParam1 /*6*/].f_5 = anParam0->[i /*6*/].f_5;
				iParam2 = iParam2 - anParam0->[*uParam1 /*6*/].f_5;
			}
		
			if (i > *uParam1)
			{
				anParam0->[i /*6*/] = { func_299() };
				anParam0->[i /*6*/].f_4 = 0;
				anParam0->[i /*6*/].f_5 = 0;
			}
		
			*uParam1 = *uParam1 + 1;
		}
	}

	if (bParam3 && iParam2 > 0)
	{
		*uParam1 = 0;
		return false;
	}

	return true;
}

void func_332(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x9596
{
	int i;

	if (iParam0 == -1)
		return;

	if (Global_1292143.f_20 < 20)
	{
		Global_1292143.f_20 = Global_1292143.f_20 + 1;
	}
	else
	{
		for (i = 0; i < 19; i = i + 1)
		{
			Global_1292143.f_20.f_1[i /*21*/] = { Global_1292143.f_20.f_1[i + 1 /*21*/] };
		}
	}

	func_339(&Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/]);
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/] = iParam0;
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_1 = iParam1;

	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_2 = iParam2;
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_3 = iParam3;
	}

	return;
}

int func_333(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x9672
{
	if (func_340(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_227(bParam1), hParam0, bParam3);
}

int func_334(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5, int iParam6) // Position - 0x96A5
{
	if (fParam0 < fParam3)
		if (fParam0.f_1 < fParam4)
			return iParam5 + iParam6;
		else
			return iParam5;

	if (fParam0.f_1 < fParam4)
		return iParam5 + iParam6 + 1;

	return iParam5 + 1;
}

void func_335(int iParam0) // Position - 0x96ED
{
	Global_1102813.f_26.f_12 = iParam0;
	return;
}

void func_336(BOOL bParam0) // Position - 0x96FF
{
	if (func_341(bParam0))
		return;

	Global_1102813.f_26.f_9 = Global_1102813.f_26.f_9 || bParam0;
	return;
}

void func_337(Any anParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, BOOL bParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25) // Position - 0x9726
{
	*anParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(hParam1, &uParam2);
	anParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*anParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(0), bParam10);
	anParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*anParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(1), bParam10.f_1);
	anParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*anParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(2), bParam10.f_2);
	anParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*anParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(57), bParam10.f_3);
	anParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*anParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(58), bParam10.f_4);
	anParam0->f_7 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*anParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(60), bParam10.f_5);
	anParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*anParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(59), bParam10.f_6);

	if (bParam10.f_7 == 0)
		bParam10.f_7 = joaat("IB_SELECT");

	anParam0->f_8 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*anParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(61), bParam10.f_7);
	anParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*anParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(62), "");
	anParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*anParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(63), bParam10.f_8);
	anParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*anParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(64), bParam10.f_9);
	anParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*anParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(65), bParam10.f_10);
	anParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*anParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(71), bParam10.f_11);
	anParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*anParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(66), bParam10.f_12);

	if (bParam10.f_13 == 0)
		bParam10.f_13 = joaat("IB_SELECT");

	anParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*anParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(68), bParam10.f_13);
	anParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*anParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(69), bParam10.f_14);
	anParam0->f_17 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*anParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(70), bParam10.f_15);
	return;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x98BB
{
	switch (iParam0)
	{
		case 0:
			return "dynamic_list_item_enabled";
	
		case 1:
			return "dynamic_list_item_visible";
	
		case 2:
			return "dynamic_list_item_main_color";
	
		case 3:
			return "dynamic_list_item_secondary_color";
	
		case 4:
			return "dynamic_list_item_tertiary_color";
	
		case 5:
			return "dynamic_list_item_main_img_texture_dic";
	
		case 6:
			return "dynamic_list_item_main_img_texture";
	
		case 7:
			return "dynamic_list_item_main_img_visible";
	
		case 8:
			return "dynamic_list_item_main_img_enabled";
	
		case 9:
			return "dynamic_list_item_status_icon_texture_dic";
	
		case 10:
			return "dynamic_list_item_status_icon_texture";
	
		case 11:
			return "dynamic_list_item_status_icon_visible";
	
		case 12:
			return "dynamic_list_item_deco_texture_dic";
	
		case 13:
			return "dynamic_list_item_deco__texture";
	
		case 14:
			return "dynamic_list_item_deco_visible";
	
		case 15:
			return "dynamic_list_item_raw_text_entry";
	
		case 16:
			return "dynamic_list_item_text_label_entry";
	
		case 17:
			return "dynamic_list_item_secondary_raw_text_entry";
	
		case 18:
			return "dynamic_list_item_secondary_text_label_entry";
	
		case 19:
			return "dynamic_list_item_secondary_text_visible";
	
		case 20:
			return "dynamic_list_item_secondary_text_enabled";
	
		case 21:
			return "dynamic_list_item_end_img_texture_dic";
	
		case 22:
			return "dynamic_list_item_end_img_texture";
	
		case 23:
			return "dynamic_list_item_end_img_visible";
	
		case 24:
			return "dynamic_list_item_end_img_left_texture_dic";
	
		case 25:
			return "dynamic_list_item_end_img_left_texture";
	
		case 26:
			return "dynamic_list_item_end_img_left_visible";
	
		case 27:
			return "dynamic_list_item_corner_end_img_texture_dic";
	
		case 28:
			return "dynamic_list_item_corner_end_img_texture";
	
		case 29:
			return "dynamic_list_item_corner_end_img_visible";
	
		case 30:
			return "dynamic_list_item_entry_player_index";
	
		case 31:
			return "dynamic_list_item_entry_friend_index";
	
		case 32:
			return "dynamic_list_item_player_gamer_handle";
	
		case 33:
			return "dynamic_list_item_option_stepper_visible";
	
		case 34:
			return "dynamic_list_item_option_stepper_text_enabled";
	
		case 35:
			return "dynamic_list_item_option_stepper_items";
	
		case 36:
			return "dynamic_list_item_option_stepper_current_hash";
	
		case 37:
			return "dynamic_list_item_option_stepper_current_index";
	
		case 38:
			return "dynamic_list_item_option_stepper_max_index";
	
		case 39:
			return "dynamic_list_item_left_chevron_enabled";
	
		case 40:
			return "dynamic_list_item_right_chevron_enabled";
	
		case 41:
			return "dynamic_list_item_option_stepper_index_change_ui_event_hash";
	
		case 42:
			return "dynamic_list_item_main_fill_maximum";
	
		case 43:
			return "dynamic_list_item_main_fill_value";
	
		case 44:
			return "dynamic_list_item_extra_text_field_entry_one_raw_text";
	
		case 45:
			return "dynamic_list_item_extra_text_field_entry_two_raw_text";
	
		case 46:
			return "dynamic_list_item_extra_text_field_entry_three_raw_text";
	
		case 47:
			return "dynamic_list_item_extra_text_field_entry_one_visibility";
	
		case 48:
			return "dynamic_list_item_extra_text_field_entry_two_visibility";
	
		case 49:
			return "dynamic_list_item_extra_text_field_entry_three_visibility";
	
		case 50:
			return "dynamic_list_item_extra_img_texture_one_dic";
	
		case 51:
			return "dynamic_list_item_extra_img_one_texture";
	
		case 52:
			return "dynamic_list_item_extra_img_one_visible";
	
		case 53:
			return "dynamic_list_item_extra_int_field_one_value";
	
		case 54:
			return "dynamic_list_item_extra_int_field_two_value";
	
		case 55:
			return "dynamic_list_item_extra_vector_field_one_value";
	
		case 56:
			return "dynamic_list_item_extra_bool_field_one_value";
	
		case 57:
			return "dynamic_list_item_link";
	
		case 58:
			return "dynamic_list_item_event_channel_hash";
	
		case 59:
			return "dynamic_list_item_focus_hash";
	
		case 60:
			return "dynamic_list_item_select_hash";
	
		case 61:
			return "dynamic_list_item_prompt_text";
	
		case 62:
			return "dynamic_list_item_prompt_text_raw";
	
		case 63:
			return "dynamic_list_item_prompt_enabled";
	
		case 64:
			return "dynamic_list_item_prompt_visible";
	
		case 68:
			return "dynamic_list_item_prompt_option_text";
	
		case 69:
			return "dynamic_list_item_prompt_option_enabled";
	
		case 70:
			return "dynamic_list_item_prompt_option_visible";
	
		case 71:
			return "dynamic_list_item_prompt_option_select_hash";
	
		case 72:
			return "dynamic_list_item_prompt_toggle_text";
	
		case 73:
			return "dynamic_list_item_prompt_toggle_enabled";
	
		case 74:
			return "dynamic_list_item_prompt_toggle_visible";
	
		case 75:
			return "dynamic_list_item_prompt_toggle_select_hash";
	
		case 76:
			return "dynamic_list_item_prompt_r3_text";
	
		case 77:
			return "dynamic_list_item_prompt_r3_enabled";
	
		case 78:
			return "dynamic_list_item_prompt_r3_visible";
	
		case 79:
			return "dynamic_list_item_select_r3_select_hash";
	
		case 80:
			return "dynamic_list_item_prompt_dpad_left_right_text";
	
		case 81:
			return "dynamic_list_item_prompt_dpad_left_right_enabled";
	
		case 82:
			return "dynamic_list_item_prompt_dpad_left_right_visible";
	
		case 83:
			return "dynamic_list_item_select_dpad_left_right_select_hash";
	
		case 84:
			return "mount_collection_index";
	
		case 85:
			return "dynamic_list_item_rename_prompt_enabled";
	
		case 86:
			return "dynamic_list_item_rename_prompt_visible";
	
		case 87:
			return "dynamic_list_item_stats_info_toggle_prompt_text";
	
		case 88:
			return "invite_unique_id";
	
		case 89:
			return "invite_tracked";
	
		case 90:
			return "invite_processed";
	
		case 91:
			return "invite_script_type";
	
		case 92:
			return "invite_gang_id";
	
		case 93:
			return "invite_expiration_time";
	
		case 94:
			return "invite_filter_type";
	
		case 95:
			return "invite_feed_message_id";
	
		case 96:
			return "invite_all_enabled";
	
		case 97:
			return "invite_all_visible";
	
		case 98:
			return "dynamic_list_item_overlay_tick_visible";
	
		case 99:
			return "dynamic_list_item_overlay_time_visible";
	
		case 100:
			return "dynamic_list_item_overlay_new_visible";
	
		default:
		
	}

	return "null";
}

void func_339(int iParam0) // Position - 0x9DC9
{
	*iParam0 = -1;
	iParam0->f_1 = 0;
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	func_342(&(iParam0->f_4));
	return;
}

BOOL func_340(Hash hParam0) // Position - 0x9DEC
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

BOOL func_341(BOOL bParam0) // Position - 0x9DFA
{
	return Global_1102813.f_26.f_9 && bParam0 == bParam0;
}

void func_342(var uParam0) // Position - 0x9E10
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = -142743235;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	uParam0->f_8.f_3 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_12), "", 32);
	uParam0->f_16 = -1;
	return;
}

