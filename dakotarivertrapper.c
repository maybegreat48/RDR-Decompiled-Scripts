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
	Volume volLocal_19 = 0;
	Volume volLocal_20 = 0;
	Volume volLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	BOOL bLocal_27 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion

void main() // Position - 0x0
{
	int num;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	iLocal_22 = 20000;
	iLocal_25 = iScriptParam_0;
	iLocal_23 = iScriptParam_0.f_2;
	bLocal_27 = false;

	if (Global_1901671.f_2.f_26 > 0)
		func_1();

	func_2();
	func_3();
	iLocal_24 = MISC::GET_GAME_TIMER();
	num = 0;

	while (func_4())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_24)
		{
			iLocal_24 = 0;
			func_5(iLocal_25, &iLocal_23);
		
			switch (iLocal_23)
			{
				case 0:
					if (Global_1901671.f_2.f_26 > 0)
					{
						iLocal_26 = MISC::GET_GAME_TIMER() + Global_1901671.f_2.f_26;
						iLocal_23 = 1;
					}
					else
					{
						iLocal_23 = 2;
					}
					break;
			
				case 1:
					if (!func_1() || iLocal_26 < MISC::GET_GAME_TIMER())
					{
						bLocal_27 = false;
						iLocal_23 = 2;
					}
					break;
			
				case 2:
					func_6(iLocal_25);
					func_7();
					func_8();
				
					if (func_10(func_9(iLocal_25)))
						func_11(func_9(iLocal_25), 4);
				
					LAW::_SET_LAW_RBS_VOLUME(PLAYER::PLAYER_ID(), func_12(iLocal_25));
					Global_1896644 = -1;
					iLocal_26 = iLocal_22 + MISC::GET_GAME_TIMER();
					iLocal_23 = 3;
					break;
			
				case 3:
					if (func_13() || iLocal_26 < MISC::GET_GAME_TIMER())
					{
						_DEBUG_PRINT(iLocal_25);
						iLocal_26 = MISC::GET_GAME_TIMER() + iLocal_22;
						iLocal_23 = 4;
					}
					break;
			
				case 4:
					if (func_15(iLocal_25) || iLocal_26 < MISC::GET_GAME_TIMER())
					{
						func_16(iLocal_25);
						iLocal_26 = MISC::GET_GAME_TIMER() + iLocal_22;
						iLocal_23 = 5;
					}
					break;
			
				case 5:
					if (func_17(iLocal_25) || iLocal_26 < MISC::GET_GAME_TIMER())
					{
						_DEBUG_PRINT_0(iLocal_25);
						iLocal_26 = iLocal_22 + MISC::GET_GAME_TIMER();
						iLocal_23 = 7;
					}
					break;
			
				case 7:
					if (func_10(func_9(iLocal_25)))
						if (func_19(func_9(iLocal_25), 4) && !(iLocal_26 < MISC::GET_GAME_TIMER()))
							break;
				
					if (func_20(iLocal_25) || iLocal_26 < MISC::GET_GAME_TIMER())
					{
						func_21(iLocal_25, 4);
						iLocal_26 = MISC::GET_GAME_TIMER() + iLocal_22;
						iLocal_23 = 8;
					}
					break;
			
				case 8:
					_DEBUG_PRINT_0_0(iLocal_25);
					func_23();
				
					if (!func_24(4105, false))
						func_25();
				
					func_26();
					func_27();
					func_28();
					func_29(iLocal_25);
					func_30(iLocal_25);
					func_31();
					func_32();
					iLocal_23 = 9;
					break;
			
				case 9:
					_DEBUG_PRINT_0_0_0(iLocal_25);
					func_34();
					iLocal_23 = 10;
					break;
			
				case 10:
					func_35(&Global_1896698);
					func_36(iLocal_25, &Global_1896698);
					iLocal_23 = 11;
					break;
			
				case 11:
					func_37(iLocal_25);
					func_21(iLocal_25, 8);
				
					if (func_38(32))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
							CAM::DO_SCREEN_FADE_IN(500);
					
						func_39(32);
					}
				
					iLocal_23 = 12;
					break;
			
				case 12:
					if (func_40(iLocal_25))
						iLocal_24 = MISC::GET_GAME_TIMER() + 1000;
				
					func_41(&Global_1896698, iLocal_25);
					func_42(iLocal_25);
					func_21(iLocal_25, 8);
				
					if (func_43())
						PED::_SET_AMBIENT_HUMAN_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				
					PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1887363[iLocal_25 /*36*/].f_11);
				
					if (Global_1887363[iLocal_25 /*36*/].f_12 > 0f)
						PED::_SET_SCENARIO_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1887363[iLocal_25 /*36*/].f_12);
					break;
			
				case 13:
					func_8();
					func_44(num);
					num = num + 1;
					break;
			}
		}
	
		if (Global_1887363[iLocal_25 /*36*/].f_13 == 0)
		{
		}
		else
		{
			PED::_SET_SCENARIO_PED_DENSITY_THIS_FRAME(Global_1887363[iLocal_25 /*36*/].f_13);
		}
	
		BUILTIN::WAIT(0);
	}

	num = 0;

	while (!func_44(num))
	{
		num = num + 1;
		BUILTIN::WAIT(0);
	}

	if (func_45() == -1)
	{
	}
	else
	{
		func_46();
	}

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_1() // Position - 0x385
{
	if (!bLocal_27)
	{
		if (Global_1051194)
		{
			bLocal_27 = true;
			return true;
		}
	
		if (func_47() && func_48())
		{
			bLocal_27 = true;
			return true;
		}
	
		return false;
	}

	if (Global_1051194)
		return true;

	if (func_48())
		return true;

	bLocal_27 = false;
	return false;
}

void func_2() // Position - 0x3D6
{
	int num;

	if (func_45() != -1)
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT();
		num = 0;
	
		while (!func_44(num))
		{
			num = num + 1;
			BUILTIN::WAIT(0);
		}
	
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	return;
}

void func_3() // Position - 0x427
{
	return;
}

BOOL func_4() // Position - 0x42F
{
	if (func_45() != -1)
		return !func_49(true, true);

	return true;
}

void func_5(int iParam0, var uParam1) // Position - 0x44A
{
	if (!func_38(16))
		return;

	if (Global_1893611.f_7 == 0)
	{
		func_39(16);
		return;
	}

	if (!func_50(iParam0))
	{
		Global_1893611.f_7 = 0;
		func_39(16);
		return;
	}

	if (func_51(8))
	{
		if (*uParam1 == 12)
		{
			*uParam1 = 8;
			return;
		}
		else if (*uParam1 != 8)
		{
			func_52(8);
			*uParam1 = 12;
			return;
		}
	}

	if (func_51(2))
	{
		if (*uParam1 == 12)
		{
			*uParam1 = 4;
			return;
		}
		else if (*uParam1 != 4)
		{
			func_52(2);
			*uParam1 = 12;
			return;
		}
	}

	if (func_51(16))
	{
		if (*uParam1 == 12)
		{
			*uParam1 = 9;
			return;
		}
		else if (*uParam1 != 9)
		{
			func_52(16);
			*uParam1 = 12;
			return;
		}
	}

	if (func_51(4))
	{
		if (*uParam1 == 12)
		{
			*uParam1 = 7;
			return;
		}
		else if (*uParam1 != 7)
		{
			func_52(4);
			*uParam1 = 12;
			return;
		}
	}

	if (func_51(1))
	{
		if (*uParam1 == 12)
		{
			*uParam1 = 3;
			return;
		}
		else if (*uParam1 != 3)
		{
			func_52(1);
			*uParam1 = 12;
			return;
		}
	}

	return;
}

void func_6(int iParam0) // Position - 0x57A
{
	return;
}

void func_7() // Position - 0x582
{
	if (!Global_1102813.f_3967)
		Global_1102813.f_3967 = 1;

	return;
}

void func_8() // Position - 0x5A0
{
	if (!Global_1072759.f_23824)
		Global_1072759.f_23824 = 1;

	return;
}

int func_9(int iParam0) // Position - 0x5BB
{
	if (iParam0 < 0)
		return -1;
	else if (iParam0 <= 10)
		return 0;
	else if (iParam0 <= 30)
		return 1;
	else if (iParam0 <= 34)
		return 2;
	else if (iParam0 <= 38)
		return 3;
	else if (iParam0 <= 41)
		return 4;
	else if (iParam0 <= 52)
		return 7;
	else if (iParam0 <= 61)
		return 6;
	else if (iParam0 <= 66)
		return 8;
	else if (iParam0 <= 81)
		return 9;
	else if (iParam0 <= 98)
		return 10;
	else if (iParam0 <= 112)
		return 11;
	else if (iParam0 <= 119)
		return 12;
	else if (iParam0 <= 122)
		return 13;
	else if (iParam0 <= 126)
		return 14;
	else if (iParam0 <= 134)
		return 15;
	else if (iParam0 <= 138)
		return 16;

	return -1;
}

BOOL func_10(int iParam0) // Position - 0x6B7
{
	return iParam0 > -1 && iParam0 < 17;
}

void func_11(int iParam0, BOOL bParam1) // Position - 0x6CD
{
	Global_1896646[iParam0 /*2*/] = Global_1896646[iParam0 /*2*/] || bParam1;
	return;
}

Hash func_12(int iParam0) // Position - 0x6E8
{
	Hash num;

	switch (iParam0)
	{
		case 5:
			num = joaat("SAINTDENIS_RESIDENTS");
			break;
	
		case 26:
			num = joaat("STRAWBERRY_RESIDENTS");
			break;
	
		case 37:
			num = joaat("OLDFORTWALLACE_RESIDENTS");
			break;
	
		case 40:
			num = joaat("BLACKWATER_RESIDENTS");
			break;
	
		case 60:
			num = joaat("WAPITI_RESIDENTS");
			break;
	
		case 66:
			num = joaat("MANICATO_RESIDENTS");
			break;
	
		case 74:
			num = joaat("EMERALDRANCH_RESIDENTS");
			break;
	
		case 81:
			num = joaat("VALENTINE_RESIDENTS");
			break;
	
		case 83:
			num = joaat("ANNESBURG_RESIDENTS");
			break;
	
		case 87:
			num = joaat("BUTCHERCREEK_RESIDENTS");
			break;
	
		case 98:
			num = joaat("VANHORNPOST_RESIDENTS");
			break;
	
		case 111:
			num = joaat("RHODES_RESIDENTS");
			break;
	
		case 116:
			num = joaat("MANZANITAPOST_RESIDENTS");
			break;
	
		default:
			num = 0;
			break;
	}

	return num;
}

BOOL func_13() // Position - 0x7D0
{
	volLocal_19 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1007.375f, -542.224f, 98f, 0f, 0f, 8.306f, 13.464f, 12.135f, 4f, "Dakota River Trapper - m_volTrapper");
	volLocal_20 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1007.35f, -544.42f, 98.65f, 0f, 0f, 13.277f, 3f, 3f, 4.419f, "Dakota River Trapper - m_volTrapperPrompt");
	volLocal_21 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1008.018f, -541.155f, 100.546f, 0f, 0f, 13.277f, 2.5f, 3f, 4.419f, "Dakota River Trapper - m_volTrapperOfflimits");
	return true;
}

void _DEBUG_PRINT(int iParam0) // Position - 0x852
{
	iParam0 = iParam0;
	return;
}

BOOL func_15(int iParam0) // Position - 0x85E
{
	iParam0 = iParam0;
	return true;
}

void func_16(int iParam0) // Position - 0x86B
{
	return;
}

BOOL func_17(int iParam0) // Position - 0x873
{
	iParam0 = iParam0;
	return true;
}

void _DEBUG_PRINT_0(int iParam0) // Position - 0x880
{
	iParam0 = iParam0;
	return;
}

BOOL func_19(int iParam0, BOOL bParam1) // Position - 0x88C
{
	return Global_1896646[iParam0 /*2*/] && bParam1 != false;
}

BOOL func_20(int iParam0) // Position - 0x8A1
{
	return func_53(iParam0, -1, -1, false);
}

void func_21(int iParam0, BOOL bParam1) // Position - 0x8B2
{
	if (Global_1572887.f_14 == -1)
		Global_8130[iParam0 /*11*/] = Global_8130[iParam0 /*11*/] || bParam1;
	else
		Global_1072759.f_19611[iParam0 /*11*/] = Global_1072759.f_19611[iParam0 /*11*/] || bParam1;

	return;
}

void _DEBUG_PRINT_0_0(int iParam0) // Position - 0x8F1
{
	iParam0 = iParam0;
	return;
}

void func_23() // Position - 0x8FD
{
	return;
}

BOOL func_24(int iParam0, BOOL bParam1) // Position - 0x905
{
	if (func_54(iParam0))
		return true;

	if (!bParam1)
		if (func_55(5000))
			return true;

	switch (func_57(func_56(0)))
	{
		case -1:
			return false;
	
		case 2:
			if (iParam0 & 1 != 0)
				return true;
			break;
	
		case 3:
			if (iParam0 & 16 != 0)
				return true;
			break;
	
		case 4:
			if (iParam0 & 32 != 0)
				return true;
			break;
	
		case 5:
			if (iParam0 & 2 != 0)
				return true;
			break;
	
		case 7:
			if (iParam0 & 1024 != 0)
				return true;
			break;
	}

	return false;
}

void func_25() // Position - 0x9B5
{
	return;
}

void func_26() // Position - 0x9BD
{
	return;
}

void func_27() // Position - 0x9C5
{
	return;
}

void func_28() // Position - 0x9CD
{
	return;
}

void func_29(int iParam0) // Position - 0x9D5
{
	func_58(15, volLocal_19, iParam0, volLocal_20, volLocal_21, 12, false, false, -1082130432, 0);
	func_59(15, 536870912);
	func_60(15, false);
	AUDIO::SET_AMBIENT_ZONE_STATE("AZ_Naturalist_Camp", true, true);
	AUDIO::_SET_AMBIENT_ZONE_POSITION("AZ_Naturalist_Camp", VOLUME::GET_VOLUME_COORDS(volLocal_19), 0f);
	return;
}

void func_30(int iParam0) // Position - 0xA1F
{
	return;
}

void func_31() // Position - 0xA27
{
	return;
}

void func_32() // Position - 0xA2F
{
	return;
}

void _DEBUG_PRINT_0_0_0(int iParam0) // Position - 0xA37
{
	iParam0 = iParam0;
	return;
}

void func_34() // Position - 0xA43
{
	if (!Global_1893611.f_186)
		VEHICLE::_SET_HORSE_TRAFFIC_GROUPING_DISTRIBUTION(Global_1893611.f_182, Global_1893611.f_183, Global_1893611.f_184, Global_1893611.f_185);

	return;
}

void func_35(var uParam0) // Position - 0xA74
{
	int i;

	if (uParam0->f_61 == 0)
		return;

	for (i = 0; i < 20; i = i + 1)
	{
		uParam0->[i /*3*/] = 0;
		uParam0->[i /*3*/].f_1 = 0;
		uParam0->[uParam0->f_61 /*3*/].f_2 = 0;
	}

	uParam0->f_61 = 0;
	return;
}

void func_36(int iParam0, var uParam1) // Position - 0xABA
{
	return;
}

void func_37(int iParam0) // Position - 0xAC2
{
	if (!func_61(iParam0))
		return;

	func_62();
	return;
}

BOOL func_38(BOOL bParam0) // Position - 0xADB
{
	return Global_1893611 && bParam0 != false;
}

void func_39(BOOL bParam0) // Position - 0xAEC
{
	Global_1893611 = Global_1893611 - Global_1893611 && bParam0;
	return;
}

BOOL func_40(int iParam0) // Position - 0xB04
{
	func_45() == -1;
	return false;
}

void func_41(var uParam0, int iParam1) // Position - 0xB15
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	int i;

	if (BUILTIN::VDIST(Global_34, 0f, 0f, 0f) <= 5f || func_63(Global_1940199, 32768) || func_63(Global_1940199, 16777216))
		return;

	if (func_64(uParam0, 1))
		return;

	uParam0->f_63 = uParam0->f_63 + 1;

	if (uParam0->f_63 < 10)
		return;

	uParam0->f_63 = 0;
	flag = false;
	flag2 = CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_IN() || CAM::IS_SCREEN_FADING_OUT();
	flag3 = func_65();

	for (i = 0; i < uParam0->f_61; i = i + 1)
	{
		switch (uParam0->[i /*3*/].f_1)
		{
			case 1:
				if (VOLUME::DOES_VOLUME_EXIST(uParam0->[i /*3*/]))
				{
					if (VOLUME::IS_POINT_IN_VOLUME(uParam0->[i /*3*/], Global_34))
					{
						if (!flag2 && !flag3)
						{
							if (!func_66(&uParam0->[i /*3*/], 1) && func_67(iParam1) && !func_68(iParam1, 16))
							{
								func_70(iParam1, func_69(), -1, false, -1, false);
								func_71(&uParam0->[i /*3*/], 1);
							}
						
							func_72(iParam1, false);
						}
					
						flag = true;
					}
				}
				break;
		
			default:
				break;
		}
	}

	func_73(flag);
	return;
}

int func_42(int iParam0) // Position - 0xC54
{
	iParam0 = iParam0;
	return 1;
}

BOOL func_43() // Position - 0xC61
{
	var prevTypeHashName;
	var nextTypeHashName;
	float interpVal;
	var unk;

	MISC::GET_CURR_WEATHER_STATE(&prevTypeHashName, &nextTypeHashName, &interpVal);

	if (interpVal < 0.75f)
		unk = prevTypeHashName;
	else
		unk = nextTypeHashName;

	if (func_74(unk))
		return true;

	return false;
}

BOOL func_44(int iParam0) // Position - 0xC97
{
	if (iParam0 == 0)
	{
		func_75();
		LAW::_SET_LAW_RBS_VOLUME(PLAYER::PLAYER_ID(), 0);
		func_21(iLocal_25, 2048);
	
		if (STATS::CHAL_IS_GOAL_ACTIVE(joaat("mpac_travel"), joaat("mpac_travel_012")))
		{
			switch (iLocal_25)
			{
				case 3:
				case 5:
				case 26:
				case 40:
				case 45:
				case 81:
				case 83:
				case 98:
				case 111:
				case 121:
				case 127:
				case 136:
					STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(func_76(iLocal_25, false), 1);
					break;
			}
		}
	
		if (func_10(func_69()))
			func_11(func_69(), 8);
	
		func_77(iLocal_25, 4);
		func_77(iLocal_25, 8);
		func_73(false);
	
		if (func_45() == -1)
			func_78(false);
	
		func_79(iLocal_25);
		func_34();
		return false;
	}
	else if (func_45() == -1)
	{
		func_80(iLocal_25);
		func_81(iLocal_25);
	
		if (!func_82(iLocal_25, false))
			return false;
	}
	else if (!func_83(iLocal_25))
	{
		return false;
	}

	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

int func_45() // Position - 0xDAB
{
	return Global_1572887.f_14;
}

void func_46() // Position - 0xDB9
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_47() // Position - 0xDC5
{
	if (Global_1572887.f_260.f_3 > 0)
		return true;

	if (Global_1572887.f_260.f_4 != 0)
		return true;

	return false;
}

BOOL func_48() // Position - 0xDF0
{
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(joaat("fm_mission_controller"), -1, false, 0))
		return 1;

	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(joaat("fm_deathmatch_controller"), -1, false, 0))
		return 1;

	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(joaat("fm_race_controller"), -1, false, 0))
		return 1;

	return 0;
}

BOOL func_49(BOOL bParam0, BOOL bParam1) // Position - 0xE32
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

BOOL func_50(int iParam0) // Position - 0xF12
{
	if (!func_61(iParam0))
		return false;

	return func_84(iParam0, 8);
}

BOOL func_51(int iParam0) // Position - 0xF30
{
	return Global_1893611.f_7 && iParam0 != false;
}

void func_52(int iParam0) // Position - 0xF43
{
	Global_1893611.f_7 = Global_1893611.f_7 - Global_1893611.f_7 && iParam0;
	return;
}

BOOL func_53(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0xF61
{
	int num;
	int num2;
	int num3;

	if (func_45() != -1)
		return 1;

	if (!func_61(iParam0))
		return 1;

	if (func_84(iParam0, 16))
		return 1;

	func_85(iParam0) && !func_86(iParam0);

	if (func_87(iParam0, &num, &num2, false, false))
	{
		if (func_88(iParam1))
			num = iParam1;
	
		if (func_88(iParam2))
			num2 = iParam2;
	
		if (Global_1896644 < num || Global_1896644 > num2)
			Global_1896644 = num;
	
		while (true)
		{
			if (!func_85(iParam0) || func_86(iParam0) || func_89(Global_1896644))
				func_90(Global_1896644, false);
		
			Global_1896644 = Global_1896644 + 1;
			num3 = num3 + 1;
		
			if (Global_1896644 > num2)
			{
				Global_1896644 = -1;
				return 1;
			}
		
			if (num3 >= 10 && !bParam3)
				return 0;
		}
	}

	return 1;
}

BOOL func_54(int iParam0) // Position - 0x1059
{
	return Global_1940199 && iParam0 != false;
}

BOOL func_55(int iParam0) // Position - 0x106A
{
	return MISC::GET_GAME_TIMER() - iParam0 < Global_1900595;
}

struct<2> func_56(int iParam0) // Position - 0x107E
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

int func_57(var uParam0, var uParam1) // Position - 0x1092
{
	return uParam0;
}

void func_58(int iParam0, Volume volParam1, int iParam2, Volume volParam3, Volume volParam4, int iParam5, BOOL bParam6, BOOL bParam7, int iParam8, int iParam9) // Position - 0x109C
{
	if (iParam0 == 9 && !(!func_91() && func_92()))
		if (func_93(255))
			if (VOLUME::IS_POINT_IN_VOLUME(volParam1, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
				func_94(true, true);

	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	func_95(iParam0, true);
	Global_1051832.f_92[iParam0 /*75*/] = 0;
	Global_1051832.f_92[iParam0 /*75*/].f_18 = func_96(iParam2, iParam0);
	Global_1051832.f_92[iParam0 /*75*/].f_24 = volParam1;
	Global_1051832.f_92[iParam0 /*75*/].f_3 = { VOLUME::GET_VOLUME_COORDS(volParam1) };
	Global_1051832.f_92[iParam0 /*75*/].f_25 = volParam3;
	Global_1051832.f_92[iParam0 /*75*/].f_27 = volParam4;
	Global_1051832.f_92[iParam0 /*75*/].f_2 = iParam2;
	Global_1051832.f_92[iParam0 /*75*/].f_63 = func_97(Global_1051832.f_92[iParam0 /*75*/].f_18);
	Global_1051832.f_92[iParam0 /*75*/].f_72 = iParam9;
	Global_1051832.f_92[iParam0 /*75*/].f_73 = 0;
	Global_1051832.f_92[iParam0 /*75*/].f_48 = 0;

	if (iParam8 <= 0f)
		iParam8 = func_98(iParam0);

	Global_1051832.f_92[iParam0 /*75*/].f_10 = iParam8;
	Global_1051832.f_92[iParam0 /*75*/].f_14 = iParam5;

	if (bParam6)
	{
		POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_24, 0, 0, 0, -1, -1, 0);
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_24, 0, 0, 0, -1, -1, 0);
	}

	if (bParam7)
	{
		POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_25, 0, 0, 0, -1, -1, 0);
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_25, 0, 0, 0, -1, -1, 0);
	}

	NETWORK::_NETWORK_SPAWN_CONFIG_ADD_EXCLUSION_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_24);
	func_99(iParam0, 4);
	func_100(iParam0);
	return;
}

void func_59(int iParam0, int iParam1) // Position - 0x124B
{
	func_101(&(Global_1051832.f_92[iParam0 /*75*/].f_49), iParam1);
	return;
}

int func_60(int iParam0, BOOL bParam1) // Position - 0x1265
{
	int num;
	Hash hash;
	float num2;
	var unk;

	if (func_102(iParam0, 16384) || func_102(iParam0, 32768) || _IS_NULL_VECTOR(Global_1051832.f_92[iParam0 /*75*/].f_3))
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_6))
			TASK::_DELETE_SCENARIO_POINT(Global_1051832.f_92[iParam0 /*75*/].f_6);
	
		if (TASK::DOES_SCENARIO_POINT_EXIST(Global_1915656.f_3[iParam0 /*447*/].f_16))
			TASK::_DELETE_SCENARIO_POINT(Global_1915656.f_3[iParam0 /*447*/].f_16);
	
		Global_1051832.f_92[iParam0 /*75*/].f_6 = 0;
		Global_1915656.f_3[iParam0 /*447*/].f_16 = 0;
		Global_1051832.f_92[iParam0 /*75*/].f_8 = 0;
		return 0;
	}

	num = func_96(func_104(), iParam0);

	if (!bParam1 && func_105(num, &hash, &num2, &unk) || bParam1 && func_106(num, &hash, &num2, &unk))
	{
		func_107(iParam0, hash, unk, num2, false);
		Global_1051832.f_92[iParam0 /*75*/].f_3 = { unk };
		Global_1051832.f_92[iParam0 /*75*/].f_8 = hash;
	}

	return Global_1051832.f_92[iParam0 /*75*/].f_6;
}

BOOL func_61(int iParam0) // Position - 0x138C
{
	return iParam0 >= 0 && iParam0 <= 150;
}

void func_62() // Position - 0x13A2
{
	int i;

	for (i = 0; i < 17; i = i + 1)
	{
		if (func_108(i))
			Global_1900426[i] = -1;
	}

	return;
}

BOOL func_63(int iParam0, int iParam1) // Position - 0x13CF
{
	return iParam0 && iParam1 != false;
}

BOOL func_64(var uParam0, int iParam1) // Position - 0x13DE
{
	return uParam0->f_62 && iParam1 != false;
}

BOOL func_65() // Position - 0x13EF
{
	return func_63(Global_1940199, 8192);
}

BOOL func_66(var uParam0, int iParam1) // Position - 0x1402
{
	return uParam0->f_2 && iParam1 != false;
}

BOOL func_67(int iParam0) // Position - 0x1413
{
	if (!func_61(iParam0))
		return false;

	return Global_1887363[iParam0 /*36*/].f_21 == 1 || Global_1887363[iParam0 /*36*/].f_21 == 2 && !func_109(iParam0);
}

BOOL func_68(int iParam0, int iParam1) // Position - 0x1453
{
	if (iParam0 < 0 || iParam0 >= 150)
		return false;

	return Global_1887363[iParam0 /*36*/].f_22 && iParam1 != false;
}

int func_69() // Position - 0x1480
{
	return Global_1896646.f_41;
}

void func_70(int iParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0x148E
{
	BOOL flag;
	const char* StringToTest;
	char* str;
	int num;
	int num2;
	int num3;
	var unk;
	float temperatureAtCoords;
	char* str2;
	char* str3;
	var unk2;

	if (!func_110())
		return;

	StringToTest = func_111(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &flag);

	if (MISC::IS_STRING_NULL_OR_EMPTY(StringToTest))
	{
		if (bParam3)
			return;
	
		StringToTest = "DISTRICT_GRIZZLIES";
	}

	if (!func_112(iParam4))
		if (func_61(iParam0))
			iParam4 = func_113(func_9(iParam0));
		else
			iParam4 = func_113(iParam1);

	if (func_112(iParam4))
		num = func_114(iParam4);

	if (flag && bParam3)
	{
		str = func_116(func_115(iParam2));
	}
	else if (func_117(iParam1, 2) || func_118(iParam4, 2) && !Global_1893611.f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
				str = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
			else
				str = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
	
		Global_1893611.f_9 = 1;
	}
	else if (func_61(iParam0) && func_84(iParam0, 16777216) && !Global_1893611.f_9)
	{
		str = MISC::VAR_STRING(2, "LAW_UI_RESTRICTED_AREA");
		Global_1893611.f_9 = 1;
	}
	else if (num >= 1 && !Global_1893611.f_9)
	{
		str = MISC::VAR_STRING(2, "REGION_BOUNTY", num);
		Global_1893611.f_9 = 1;
	}
	else
	{
		num2 = func_120(func_119());
		num3 = func_121(func_119());
	
		if (num3 < 10)
			TEXT_LABEL_APPEND_STRING(&unk, "0", 8);
	
		TEXT_LABEL_APPEND_INT(&unk, num3, 8);
		temperatureAtCoords = MISC::_GET_TEMPERATURE_AT_COORDS(Global_34);
	
		if (!MISC::_SHOULD_USE_24_HOUR_CLOCK())
		{
			str3 = "AM";
		
			if (num2 >= 12)
			{
				str3 = "PM";
			
				if (num2 > 12)
					num2 = num2 - 12;
			}
			else if (num2 == 0)
			{
				num2 = 12;
			}
		
			str2 = "TIME_AND_TEMP_C";
		
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				temperatureAtCoords = func_122(temperatureAtCoords);
				str2 = "TIME_AND_TEMP_F";
			}
		
			TEXT_LABEL_ASSIGN_INT(&unk2, BUILTIN::ROUND(temperatureAtCoords), 8);
			str = MISC::VAR_STRING(674, str2, num2, func_123(&unk, joaat("COLOR_PURE_WHITE")), str3, func_123(&unk2, joaat("COLOR_PURE_WHITE")));
		}
		else
		{
			str2 = "TIME_AND_TEMP_C_24";
		
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				temperatureAtCoords = func_122(temperatureAtCoords);
				str2 = "TIME_AND_TEMP_F_24";
			}
		
			TEXT_LABEL_ASSIGN_INT(&unk2, BUILTIN::ROUND(temperatureAtCoords), 8);
			str = MISC::VAR_STRING(162, str2, num2, func_123(&unk, joaat("COLOR_PURE_WHITE")), func_123(&unk2, joaat("COLOR_PURE_WHITE")));
		}
	
		Global_1893611.f_9 = 0;
	}

	Global_1939102.f_145 = func_124(StringToTest, str, 4000, 0, 0, 0, false, true);
	return;
}

void func_71(var uParam0, int iParam1) // Position - 0x16F6
{
	uParam0->f_2 = uParam0->f_2 || iParam1;
	return;
}

void func_72(int iParam0, BOOL bParam1) // Position - 0x1709
{
	if (Global_1572887.f_12 && func_45() == 0)
		return;

	if (!func_125(iParam0))
		return;

	if (func_84(iParam0, 32))
		return;

	func_21(iParam0, 32);
	func_126(&Global_1940199, 16384);
	func_128(func_127(joaat("discovered"), joaat("AREAS")), 1);

	switch (func_9(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_128(func_127(joaat("discovered"), joaat("lowlands_areas")), 1);
			break;
	
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_128(func_127(joaat("discovered"), joaat("mountain_areas")), 1);
			break;
	
		case 3:
		case 10:
			func_128(func_127(joaat("discovered"), joaat("foothills_areas")), 1);
			break;
	
		case 4:
		case 9:
			func_128(func_127(joaat("discovered"), joaat("plains_areas")), 1);
			break;
	
		case 8:
			func_128(func_127(joaat("discovered"), joaat("guama_areas")), 1);
			break;
	
		case 13:
		case 14:
		case 15:
		case 16:
			func_128(func_127(joaat("discovered"), joaat("new_austin_areas")), 1);
			break;
	}

	switch (iParam0)
	{
		case 0:
			MAP::_MAP_DISCOVER_REGION(1822876181);
			break;
	
		case 1:
			MAP::_MAP_DISCOVER_REGION(1092217275);
			break;
	
		case 2:
			MAP::_MAP_DISCOVER_REGION(1855549007);
			MAP::_MAP_DISCOVER_REGION(1542246539);
			break;
	
		case 6:
			MAP::_MAP_DISCOVER_REGION(-237206861);
			break;
	
		case 7:
			MAP::_MAP_DISCOVER_REGION(276890716);
			break;
	
		case 9:
			MAP::_MAP_DISCOVER_REGION(-353968602);
			break;
	
		case 10:
			MAP::_MAP_DISCOVER_REGION(-1354901649);
			MAP::_MAP_DISCOVER_REGION(-1354901649);
			break;
	
		case 11:
			MAP::_MAP_DISCOVER_REGION(-496244122);
			break;
	
		case 12:
			MAP::_MAP_DISCOVER_REGION(-678676588);
			break;
	
		case 15:
			MAP::_MAP_DISCOVER_REGION(-732274047);
			break;
	
		case 16:
			MAP::_MAP_DISCOVER_REGION(-12216052);
			break;
	
		case 17:
			MAP::_MAP_DISCOVER_REGION(-1456731677);
			break;
	
		case 21:
			MAP::_MAP_DISCOVER_REGION(-2086563810);
			break;
	
		case 22:
			MAP::_MAP_DISCOVER_REGION(221661572);
			break;
	
		case 24:
			MAP::_MAP_DISCOVER_REGION(222265732);
			break;
	
		case 25:
			MAP::_MAP_DISCOVER_REGION(-1484929764);
			break;
	
		case 26:
			MAP::_MAP_DISCOVER_REGION(1104975149);
			break;
	
		case 27:
			MAP::_MAP_DISCOVER_REGION(235472255);
			break;
	
		case 28:
			MAP::_MAP_DISCOVER_REGION(-1337880478);
			break;
	
		case 30:
			MAP::_MAP_DISCOVER_REGION(-1813267128);
			break;
	
		case 31:
			MAP::_MAP_DISCOVER_REGION(-1941572412);
			break;
	
		case 32:
			MAP::_MAP_DISCOVER_REGION(1006072805);
			break;
	
		case 36:
			MAP::_MAP_DISCOVER_REGION(-1347759053);
			break;
	
		case 38:
			MAP::_MAP_DISCOVER_REGION(-918096609);
			break;
	
		case 39:
			MAP::_MAP_DISCOVER_REGION(-507075109);
			break;
	
		case 42:
			MAP::_MAP_DISCOVER_REGION(462373845);
			break;
	
		case 44:
			MAP::_MAP_DISCOVER_REGION(-1727895786);
			break;
	
		case 45:
			MAP::_MAP_DISCOVER_REGION(1826504111);
			break;
	
		case 46:
			MAP::_MAP_DISCOVER_REGION(1714554710);
			break;
	
		case 47:
			MAP::_MAP_DISCOVER_REGION(-91026072);
			break;
	
		case 52:
			MAP::_MAP_DISCOVER_REGION(653799702);
			break;
	
		case 58:
			MAP::_MAP_DISCOVER_REGION(893855320);
			break;
	
		case 59:
			MAP::_MAP_DISCOVER_REGION(326709244);
			break;
	
		case 67:
			MAP::_MAP_DISCOVER_REGION(415864829);
			break;
	
		case 68:
			MAP::_MAP_DISCOVER_REGION(-33677540);
			break;
	
		case 69:
			MAP::_MAP_DISCOVER_REGION(-1836330842);
			break;
	
		case 70:
			MAP::_MAP_DISCOVER_REGION(648073069);
			break;
	
		case 71:
			MAP::_MAP_DISCOVER_REGION(770074951);
			break;
	
		case 73:
			MAP::_MAP_DISCOVER_REGION(-1276637644);
			break;
	
		case 76:
			MAP::_MAP_DISCOVER_REGION(-431488293);
			break;
	
		case 77:
			MAP::_MAP_DISCOVER_REGION(-1101810198);
			break;
	
		case 79:
			MAP::_MAP_DISCOVER_REGION(-1344767066);
			break;
	
		case 82:
			MAP::_MAP_DISCOVER_REGION(1472232821);
			break;
	
		case 84:
			MAP::_MAP_DISCOVER_REGION(-1368676121);
			break;
	
		case 85:
			MAP::_MAP_DISCOVER_REGION(1602161184);
			MAP::_MAP_DISCOVER_REGION(-443207523);
			MAP::_MAP_DISCOVER_REGION(-683043834);
			break;
	
		case 87:
			MAP::_MAP_DISCOVER_REGION(147256338);
			MAP::_MAP_DISCOVER_REGION(-134804027);
			MAP::_MAP_DISCOVER_REGION(2027689141);
			break;
	
		case 88:
			MAP::_MAP_DISCOVER_REGION(-161135375);
			break;
	
		case 90:
			MAP::_MAP_DISCOVER_REGION(1625008147);
			break;
	
		case 91:
			MAP::_MAP_DISCOVER_REGION(121074776);
			break;
	
		case 92:
			MAP::_MAP_DISCOVER_REGION(1876184276);
			break;
	
		case 94:
			MAP::_MAP_DISCOVER_REGION(458479023);
			break;
	
		case 97:
			MAP::_MAP_DISCOVER_REGION(85299473);
			break;
	
		case 102:
			MAP::_MAP_DISCOVER_REGION(-1150244084);
			break;
	
		case 104:
			MAP::_MAP_DISCOVER_REGION(759314201);
			break;
	
		case 105:
			MAP::_MAP_DISCOVER_REGION(2063457042);
			break;
	
		case 106:
			MAP::_MAP_DISCOVER_REGION(1877776161);
			break;
	
		case 108:
			MAP::_MAP_DISCOVER_REGION(2143316225);
			break;
	
		case 110:
			MAP::_MAP_DISCOVER_REGION(-1623232489);
			MAP::_MAP_DISCOVER_REGION(-1393093729);
			break;
	
		case 112:
			MAP::_MAP_DISCOVER_REGION(1354284392);
			break;
	
		case 113:
			MAP::_MAP_DISCOVER_REGION(-1430883057);
			break;
	
		case 115:
			MAP::_MAP_DISCOVER_REGION(820139809);
			break;
	
		case 118:
			MAP::_MAP_DISCOVER_REGION(1561007383);
			MAP::_MAP_DISCOVER_REGION(-960425936);
			break;
	
		case 120:
			MAP::_MAP_DISCOVER_REGION(1728445882);
			break;
	
		case 128:
			MAP::_MAP_DISCOVER_REGION(929640770);
			break;
	
		case 129:
			MAP::_MAP_DISCOVER_REGION(1603579970);
			break;
	
		case 130:
			MAP::_MAP_DISCOVER_REGION(-1807212021);
			break;
	
		case 131:
			MAP::_MAP_DISCOVER_REGION(-1332669948);
			break;
	}

	if (bParam1)
		func_21(iParam0, 64);

	return;
}

void func_73(BOOL bParam0) // Position - 0x1D72
{
	if (bParam0)
		Global_1893611 = Global_1893611 | true;
	else
		Global_1893611 = Global_1893611 - Global_1893611 & true;

	return;
}

BOOL func_74(int iParam0) // Position - 0x1D9B
{
	switch (iParam0)
	{
		case joaat("DRIZZLE"):
		case joaat("THUNDER"):
		case joaat("Shower"):
		case joaat("sleet"):
		case joaat("hurricane"):
		case joaat("rain"):
		case joaat("hail"):
		case joaat("Thunderstorm"):
			return true;
	
		default:
		
	}

	return false;
}

void func_75() // Position - 0x1DE0
{
	return;
}

Hash func_76(int iParam0, BOOL bParam1) // Position - 0x1DE8
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

void func_77(int iParam0, BOOL bParam1) // Position - 0x25AD
{
	if (Global_1572887.f_14 == -1)
	{
		Global_8130[iParam0 /*11*/] = Global_8130[iParam0 /*11*/] - Global_8130[iParam0 /*11*/] && bParam1;
		return;
	}

	Global_1072759.f_19611[iParam0 /*11*/] = Global_1072759.f_19611[iParam0 /*11*/] - Global_1072759.f_19611[iParam0 /*11*/] && bParam1;
	return;
}

void func_78(BOOL bParam0) // Position - 0x2600
{
	if (bParam0)
		Global_1893611 = Global_1893611 | 2;
	else
		Global_1893611 = Global_1893611 - Global_1893611 & 2;

	return;
}

void func_79(int iParam0) // Position - 0x2629
{
	AUDIO::SET_AMBIENT_ZONE_STATE("AZ_Naturalist_Camp", false, true);
	return;
}

void func_80(int iParam0) // Position - 0x263A
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_1939959.f_5[i /*11*/].f_5 == iParam0)
			func_129(i);
	}

	return;
}

void func_81(int iParam0) // Position - 0x266B
{
	int i;

	for (i = 0; i < 40; i = i + 1)
	{
		if (Global_1915656.f_3[i /*447*/].f_8 == iParam0)
			func_130(i);
	}

	return;
}

BOOL func_82(int iParam0, BOOL bParam1) // Position - 0x269E
{
	int num;
	int num2;
	int num3;

	if (func_45() != -1)
		return true;

	if (!func_61(iParam0))
		return true;

	if (func_87(iParam0, &num, &num2, false, false))
	{
		if (Global_1896644.f_1 < num || Global_1896644.f_1 > num2)
			Global_1896644.f_1 = num;
	
		while (true)
		{
			if (!func_131(Global_1896644.f_1, 16))
				func_132(Global_1896644.f_1, false);
		
			Global_1896644.f_1 = Global_1896644.f_1 + 1;
			num3 = num3 + 1;
		
			if (Global_1896644.f_1 > num2)
			{
				Global_1896644.f_1 = -1;
				return true;
			}
		
			if (num3 >= 10 && !bParam1)
				return false;
		}
	}

	return true;
}

BOOL func_83(int iParam0) // Position - 0x2754
{
	int i;

	for (i = 0; i < 40; i = i + 1)
	{
		if (func_133(i) || func_134(i))
		{
		}
		else
		{
			switch (i)
			{
				case 30:
					func_135();
					break;
			
				case 32:
					func_136();
					break;
			
				case 34:
					break;
			
				default:
					if (Global_1051832.f_92[i /*75*/].f_2 == iParam0)
						func_95(i, false);
					break;
			}
		}
	}

	return true;
}

BOOL func_84(int iParam0, BOOL bParam1) // Position - 0x27CE
{
	if (Global_1572887.f_14 == -1)
		return Global_8130[iParam0 /*11*/] && bParam1 != false;

	return Global_1072759.f_19611[iParam0 /*11*/] && bParam1 != false;
}

BOOL func_85(int iParam0) // Position - 0x27FF
{
	if (!func_61(iParam0))
		return false;

	return func_84(iParam0, 33554432);
}

BOOL func_86(int iParam0) // Position - 0x2820
{
	if (!func_61(iParam0))
		return false;

	switch (iParam0)
	{
		case 33:
			return true;
	
		case 37:
			return true;
	
		case 70:
			return true;
	
		case 101:
			return true;
	}

	return false;
}

BOOL func_87(int iParam0, var uParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0x2873
{
	BOOL flag;

	flag = func_45() != -1;

	switch (iParam0)
	{
		case 3:
			*uParam1 = 638;
			*uParam2 = 650;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 5:
			*uParam1 = 137;
			*uParam2 = 318;
		
			if (flag)
				*uParam2 = 142;
			break;
	
		case 6:
			*uParam1 = 651;
			*uParam2 = 652;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 11:
			*uParam1 = 801;
			*uParam2 = 827;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 21:
			*uParam1 = 774;
			*uParam2 = 776;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 22:
			if (bParam4)
				*uParam1 = 709;
			else
				*uParam1 = 703;
		
			*uParam2 = 717;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 23:
			*uParam1 = 795;
			*uParam2 = 795;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 26:
			*uParam1 = 466;
		
			if (bParam3)
				*uParam2 = 494;
			else
				*uParam2 = 496;
		
			if (flag)
				*uParam2 = 466;
			break;
	
		case 28:
			*uParam1 = 796;
			*uParam2 = 797;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 30:
			*uParam1 = 738;
			*uParam2 = 738;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 33:
			*uParam1 = 319;
			*uParam2 = 338;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 37:
			*uParam1 = 685;
			*uParam2 = 694;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 40:
			*uParam1 = 502;
			*uParam2 = 547;
		
			if (flag)
				*uParam2 = 503;
			break;
	
		case 44:
			*uParam1 = 788;
			*uParam2 = 792;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 60:
			*uParam1 = 695;
			*uParam2 = 702;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 66:
			*uParam1 = 374;
			*uParam2 = 375;
		
			if (flag)
				*uParam2 = 374;
			break;
	
		case 69:
			*uParam1 = 730;
			*uParam2 = 734;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 70:
			*uParam1 = 560;
			*uParam2 = 582;
		
			if (flag)
				*uParam2 = 560;
			break;
	
		case 71:
			*uParam1 = 739;
			*uParam2 = 744;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 73:
			*uParam1 = 548;
			*uParam2 = 559;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 74:
			*uParam1 = 583;
		
			if (bParam3)
				*uParam2 = 592;
			else
				*uParam2 = 606;
		
			if (flag)
				*uParam2 = 584;
			break;
	
		case 75:
			*uParam1 = 745;
			*uParam2 = 748;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 77:
			*uParam1 = 727;
			*uParam2 = 729;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 80:
			*uParam1 = 497;
			*uParam2 = 500;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 81:
			*uParam1 = 0;
		
			if (bParam3)
				*uParam2 = 47;
			else
				*uParam2 = 63;
		
			if (flag)
				*uParam2 = 5;
			break;
	
		case 82:
			*uParam1 = 725;
			*uParam2 = 726;
			break;
	
		case 83:
			*uParam1 = 376;
			*uParam2 = 425;
		
			if (flag)
				*uParam2 = 378;
			break;
	
		case 87:
			*uParam1 = 653;
		
			if (bParam3)
				*uParam2 = 667;
			else
				*uParam2 = 684;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 91:
			*uParam1 = 762;
			*uParam2 = 766;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 94:
			*uParam1 = 793;
			*uParam2 = 794;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 98:
			*uParam1 = 437;
			*uParam2 = 465;
		
			if (flag)
				*uParam2 = 437;
			break;
	
		case 99:
			*uParam1 = 607;
			*uParam2 = 619;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 101:
			*uParam1 = 620;
			*uParam2 = 635;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 102:
			*uParam1 = 735;
			*uParam2 = 737;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 103:
			*uParam1 = 636;
			*uParam2 = 637;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 106:
			*uParam1 = 749;
			*uParam2 = 757;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 107:
			*uParam1 = 798;
			*uParam2 = 800;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 108:
			*uParam1 = 758;
			*uParam2 = 761;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 111:
			*uParam1 = 69;
		
			if (bParam3)
				*uParam2 = 127;
			else
				*uParam2 = 136;
		
			if (flag)
				*uParam2 = 72;
			break;
	
		case 116:
			*uParam1 = 718;
			*uParam2 = 724;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 121:
			*uParam1 = 339;
			*uParam2 = 369;
		
			if (flag)
				*uParam2 = 369;
			break;
	
		case 122:
			*uParam1 = 777;
			*uParam2 = 784;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 123:
			*uParam1 = 501;
			*uParam2 = 501;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 127:
			*uParam1 = 426;
			*uParam2 = 436;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 131:
			*uParam1 = 785;
			*uParam2 = 787;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 132:
			*uParam1 = 370;
			*uParam2 = 373;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 135:
			*uParam1 = 767;
			*uParam2 = 773;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 139:
			*uParam1 = 828;
			*uParam2 = 851;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		default:
			*uParam1 = -1;
			*uParam2 = -1;
			break;
	}

	if (*uParam1 == -1 || *uParam2 == -1)
		return false;

	return true;
}

BOOL func_88(int iParam0) // Position - 0x2F33
{
	return iParam0 > -1 && iParam0 < 948;
}

BOOL func_89(int iParam0) // Position - 0x2F4A
{
	switch (iParam0)
	{
		case 64:
			return true;
	
		case 65:
			return true;
	
		case 66:
			return true;
	
		case 67:
			return true;
	
		case 68:
			return true;
	
		default:
		
	}

	return false;
}

int func_90(int iParam0, BOOL bParam1) // Position - 0x2F8D
{
	if (!func_88(iParam0))
		return 0;

	if (!func_131(iParam0, 2))
		return 0;

	if (func_131(iParam0, 32) && !bParam1)
	{
		func_138(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_137(iParam0)));
	
		if (func_45() == -1)
		{
			if (func_131(iParam0, 2048))
			{
				PERSCHAR::_REVIVE_PERSCHAR(func_139(iParam0));
				func_140(iParam0, 2048);
			}
		
			PERSCHAR::_0xFCC6DB8DBE709BC8(func_139(iParam0));
		}
	
		return 0;
	}

	if (!func_141(iParam0) && func_45() == -1)
		return 0;

	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_139(iParam0)))
	{
		func_140(iParam0, 128);
		return 1;
	}

	func_138(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_137(iParam0)));
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_139(iParam0));

	if (func_131(iParam0, 2048))
	{
		PERSCHAR::_REVIVE_PERSCHAR(func_139(iParam0));
		func_140(iParam0, 2048);
	}

	return 1;
}

BOOL func_91() // Position - 0x3078
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

BOOL func_92() // Position - 0x308C
{
	return func_142(func_56(0));
}

BOOL func_93(int iParam0) // Position - 0x309D
{
	return !func_143(iParam0);
}

void func_94(BOOL bParam0, BOOL bParam1) // Position - 0x30AC
{
	if (func_144(255) == 4)
		return;

	if (_IS_NULL_VECTOR(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
		return;

	if (!bParam0)
	{
		func_145(0);
	}
	else
	{
		if (bParam1)
			func_146(0, false, 0, true);
	
		func_147(0);
		func_148(&(Global_1102813.f_3839));
		Global_1102813.f_3839 = 0f;
		Global_1102813.f_3839.f_5 = 1;
		Global_1102813.f_3839.f_16 = 0;
		Global_1102813.f_3839.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102813.f_3839.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102813.f_3839.f_17 = { Global_1901671.f_51.f_1, Global_1901671.f_51.f_1, Global_1901671.f_51.f_1 };
		Global_1102813.f_3839.f_17.f_9 = joaat("volSphere");
		func_149(&(Global_1102813.f_3878));
		Global_1102813.f_3878.f_6 = { Global_1102813.f_3839.f_17.f_6 };
		Global_1102813.f_3878 = Global_1102813.f_3839;
		Global_1102813.f_3878.f_5 = 1;
	
		if (bParam1)
		{
			Global_1102813.f_26.f_3341 = 0;
			Global_1102813.f_26.f_3342 = 0;
		}
	}

	func_150(Global_1102813.f_3839, 36);
	func_151(Global_1102813.f_3878, 36);
	return;
}

void func_95(int iParam0, BOOL bParam1) // Position - 0x31F7
{
	BOOL flag;
	Entity propForScenarioPoint;
	int i;
	int num;

	flag = func_152(iParam0) && !bParam1;

	if (!flag && !func_102(iParam0, 65536))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_21))
		{
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1051832.f_92[iParam0 /*75*/].f_21))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1051832.f_92[iParam0 /*75*/].f_21, true, true);
		
			ENTITY::DELETE_ENTITY(&(Global_1051832.f_92[iParam0 /*75*/].f_21));
			Global_1051832.f_92[iParam0 /*75*/].f_21 = 0;
		}
	
		if (STREAMING::IS_MODEL_VALID(Global_1051832.f_92[iParam0 /*75*/].f_19))
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_1051832.f_92[iParam0 /*75*/].f_19);
	
		Global_1051832.f_92[iParam0 /*75*/].f_19 = 0;
	}
	else if (func_153(iParam0, 67108864) && ENTITY::DOES_ENTITY_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_21))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(Global_1051832.f_92[iParam0 /*75*/].f_21);
	}

	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_24))
	{
		NETWORK::_NETWORK_SPAWN_CONFIG_REMOVE_EXCLUSION_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_24);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_24);
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_24);
	
		if (func_102(iParam0, 524288))
			VOLUME::DELETE_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_24);
	}

	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_25))
	{
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_25);
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_25);
	
		if (func_102(iParam0, 524288))
			VOLUME::DELETE_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_25);
	}

	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_27))
		if (func_102(iParam0, 524288))
			VOLUME::DELETE_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_27);

	if (func_153(iParam0, 16384) && !flag)
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_6))
		{
			propForScenarioPoint = TASK::GET_PROP_FOR_SCENARIO_POINT(Global_1051832.f_92[iParam0 /*75*/].f_6, "mp001_s_mp_catalogue01x_noanim_PH_R_HAND");
		
			if (ENTITY::DOES_ENTITY_EXIST(propForScenarioPoint))
				ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&propForScenarioPoint);
		
			TASK::_DELETE_SCENARIO_POINT(Global_1051832.f_92[iParam0 /*75*/].f_6);
		}
	
		Global_1051832.f_92[iParam0 /*75*/].f_6 = 0;
		func_154(iParam0, 16384);
	}

	Global_1051832.f_92[iParam0 /*75*/] = -1;
	Global_1051832.f_92[iParam0 /*75*/].f_3 = { 0f, 0f, 0f };
	Global_1051832.f_92[iParam0 /*75*/].f_48 = 0;
	Global_1051832.f_92[iParam0 /*75*/].f_73 = 1;
	Global_1915656.f_3[iParam0 /*447*/].f_16 = 0;
	num = func_155(iParam0);

	if (num >= 15)
	{
		Global_1915656.f_3[iParam0 /*447*/].f_409 = 0;
	}
	else
	{
		for (i = 0; i < num; i = i + 1)
		{
			func_156(Global_1051832.f_92[iParam0 /*75*/].f_31[i]);
			Global_1051832.f_92[iParam0 /*75*/].f_31[i] = 0;
		}
	
		Global_1051832.f_92[iParam0 /*75*/].f_47 = 0;
	}

	func_157(iParam0);

	if (func_102(iParam0, 262144))
		Global_1051832.f_92[iParam0 /*75*/].f_49 = 262144;
	else
		func_158(iParam0);

	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_24) && func_159(iParam0, 2))
	{
		VOLUME::_SET_VOLUME_RELATIONSHIP(Global_1051832.f_92[iParam0 /*75*/].f_24, joaat("REL_NO_RELATIONSHIP"));
		PATHFIND::_REMOVE_NAVMESH_BLOCKING_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_24);
	}

	Global_1051832.f_92[iParam0 /*75*/].f_50 = Global_1051832.f_92[iParam0 /*75*/].f_50 & 8;
	Global_1051832.f_92[iParam0 /*75*/].f_1 = Global_1051832.f_92[iParam0 /*75*/].f_1 & 2113536;
	func_160(iParam0);
	Global_1051832.f_92[iParam0 /*75*/].f_18 = -1;
	Global_1051832.f_92[iParam0 /*75*/].f_2 = -1;
	return;
}

int func_96(int iParam0, int iParam1) // Position - 0x35A6
{
	if (iParam1 == 11)
		return 119;
	else if (iParam1 == 27)
		return 133;
	else if (iParam1 == 34)
		return 152;
	else if (iParam1 == 28)
		return 153;
	else if (iParam1 == 29)
		return 154;

	if (iParam1 == 33)
		return 20;

	switch (iParam0)
	{
		case 3:
			switch (iParam1)
			{
				case 14:
					return 26;
			
				case 39:
					return 151;
			
				default:
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					return 168;
			
				case 6:
					return 170;
			
				case 22:
					return 169;
			
				case 23:
					return 171;
			
				default:
					break;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case 0:
					return 45;
			
				case 1:
					return 52;
			
				case 2:
					return 51;
			
				case 3:
					return 48;
			
				case 4:
					return 46;
			
				case 6:
					return 49;
			
				case 7:
					return 53;
			
				case 8:
					return 43;
			
				case 9:
					return 50;
			
				case 10:
					return 44;
			
				case 12:
					return 42;
			
				case 15:
					return 63;
			
				case 18:
					return 60;
			
				case 25:
					return 124;
			
				case 26:
					return 125;
			
				case 30:
					return 54;
			
				case 33:
					return 20;
			
				case 36:
					return 61;
			
				default:
					break;
			}
			break;
	
		case 9:
			switch (iParam1)
			{
				case 0:
					return 172;
			
				case 6:
					return 174;
			
				case 16:
					return 66;
			
				case 22:
					return 173;
			
				case 23:
					return 175;
			
				default:
					break;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 15:
					return 3;
			
				default:
					break;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 15:
					return 4;
			
				default:
					break;
			}
			break;
	
		case 16:
			switch (iParam1)
			{
				case 38:
					return 139;
			
				default:
					break;
			}
			break;
	
		case 23:
			switch (iParam1)
			{
				case 1:
					return 28;
			
				case 2:
					return 27;
			
				default:
					break;
			}
			break;
	
		case 25:
			switch (iParam1)
			{
				case 39:
					return 150;
			
				default:
					break;
			}
			break;
	
		case 26:
			switch (iParam1)
			{
				case 2:
					return 74;
			
				case 3:
					return 69;
			
				case 9:
					return 71;
			
				case 10:
					return 68;
			
				case 17:
					return 70;
			
				case 25:
					return 127;
			
				case 30:
					return 75;
			
				default:
					break;
			}
			break;
	
		case 28:
			switch (iParam1)
			{
				case 1:
					return 100;
			
				case 2:
					return 101;
			
				case 3:
					return 99;
			
				default:
					break;
			}
			break;
	
		case 29:
			switch (iParam1)
			{
				case 35:
					return 114;
			
				default:
					break;
			}
			break;
	
		case 34:
			switch (iParam1)
			{
				case 38:
					return 144;
			
				default:
					break;
			}
			break;
	
		case 39:
			switch (iParam1)
			{
				case 38:
					return 138;
			
				default:
					break;
			}
			break;
	
		case 40:
			switch (iParam1)
			{
				case 1:
					return 15;
			
				case 2:
					return 14;
			
				case 3:
					return 6;
			
				case 7:
					return 19;
			
				case 8:
					return 8;
			
				case 9:
					return 13;
			
				case 10:
					return 9;
			
				case 12:
					return 5;
			
				case 18:
					return 12;
			
				case 25:
					return 122;
			
				case 26:
					return 123;
			
				case 30:
					return 10;
			
				default:
					break;
			}
			break;
	
		case 43:
			switch (iParam1)
			{
				case 38:
					return 145;
			
				default:
					break;
			}
			break;
	
		case 61:
			switch (iParam1)
			{
				case 38:
					return 142;
			
				default:
					break;
			}
			break;
	
		case 74:
			switch (iParam1)
			{
				case 1:
					return 25;
			
				case 2:
					return 24;
			
				case 3:
					return 23;
			
				case 4:
					return 22;
			
				case 33:
					return 21;
			
				case 38:
					return 140;
			
				default:
					break;
			}
			break;
	
		case 76:
			switch (iParam1)
			{
				case 0:
					return 164;
			
				case 6:
					return 166;
			
				case 16:
					return 64;
			
				case 22:
					return 165;
			
				case 23:
					return 167;
			
				case 38:
					return 141;
			
				default:
					break;
			}
			break;
	
		case 81:
			switch (iParam1)
			{
				case 0:
					return 83;
			
				case 1:
					return 88;
			
				case 2:
					return 87;
			
				case 3:
					return 84;
			
				case 6:
					return 85;
			
				case 8:
					return 78;
			
				case 9:
					return 86;
			
				case 10:
					return 82;
			
				case 12:
					return 77;
			
				case 17:
					return 90;
			
				case 25:
					return 120;
			
				case 26:
					return 121;
			
				case 30:
					return 79;
			
				case 36:
					return 89;
			
				case 38:
					return 136;
			
				default:
					break;
			}
			break;
	
		case 83:
			switch (iParam1)
			{
				case 1:
					return 2;
			
				case 2:
					return 1;
			
				case 6:
					return 0;
			
				case 25:
					return 129;
			
				default:
					break;
			}
			break;
	
		case 84:
			switch (iParam1)
			{
				case 0:
					return 155;
			
				case 6:
					return 157;
			
				case 16:
					return 67;
			
				case 22:
					return 156;
			
				case 23:
					return 158;
			
				default:
					break;
			}
			break;
	
		case 85:
			switch (iParam1)
			{
				case 38:
					return 146;
			
				default:
					break;
			}
			break;
	
		case 95:
		case 139:
			switch (iParam1)
			{
				case 15:
					return 40;
			
				default:
					break;
			}
			break;
	
		case 96:
			switch (iParam1)
			{
				case 35:
					return 113;
			
				default:
					break;
			}
			break;
	
		case 98:
			switch (iParam1)
			{
				case 1:
					return 97;
			
				case 2:
					return 98;
			
				case 4:
					return 93;
			
				case 9:
					return 96;
			
				case 26:
					return 128;
			
				case 33:
					return 92;
			
				default:
					break;
			}
			break;
	
		case 100:
			switch (iParam1)
			{
				case 38:
					return 143;
			
				default:
					break;
			}
			break;
	
		case 104:
			switch (iParam1)
			{
				case 0:
					return 159;
			
				case 6:
					return 161;
			
				case 16:
					return 65;
			
				case 22:
					return 160;
			
				case 23:
					return 162;
			
				default:
					break;
			}
			break;
	
		case 107:
			switch (iParam1)
			{
				case 9:
					return 41;
			
				default:
					break;
			}
			break;
	
		case 111:
			switch (iParam1)
			{
				case 1:
					return 39;
			
				case 2:
					return 35;
			
				case 3:
					return 33;
			
				case 4:
					return 31;
			
				case 6:
					return 34;
			
				case 10:
					return 30;
			
				case 12:
					return 29;
			
				case 25:
					return 126;
			
				case 30:
					return 36;
			
				case 33:
					return 32;
			
				default:
					break;
			}
			break;
	
		case 119:
			switch (iParam1)
			{
				case 15:
					return 76;
			
				default:
					break;
			}
			break;
	
		case 121:
			switch (iParam1)
			{
				case 3:
					return 102;
			
				case 6:
					return 103;
			
				case 9:
					return 107;
			
				case 10:
					return 104;
			
				case 30:
					return 105;
			
				default:
					break;
			}
			break;
	
		case 123:
			switch (iParam1)
			{
				case 1:
					return 118;
			
				case 2:
					return 117;
			
				default:
					break;
			}
			break;
	
		case 126:
			switch (iParam1)
			{
				case 38:
					return 135;
			
				default:
					break;
			}
			break;
	
		case 127:
			switch (iParam1)
			{
				case 1:
					return 112;
			
				case 2:
					return 111;
			
				case 3:
					return 108;
			
				case 35:
					return 109;
			
				default:
					break;
			}
			break;
	
		case 130:
			switch (iParam1)
			{
				case 4:
					return 116;
			
				default:
					break;
			}
			break;
	
		case 133:
			switch (iParam1)
			{
				case 38:
					return 136;
			
				default:
					break;
			}
			break;
	
		case 134:
			switch (iParam1)
			{
				case 15:
					return 148;
			
				default:
					break;
			}
			break;
	
		case 136:
			switch (iParam1)
			{
				case 4:
					return 130;
			
				default:
					break;
			}
			break;
	
		case 137:
			switch (iParam1)
			{
				case 38:
					return 137;
			
				default:
					break;
			}
			break;
	
		case 138:
			switch (iParam1)
			{
				case 39:
					return 149;
			
				default:
					break;
			}
			break;
	}

	if (iParam1 == 38)
		return 147;

	if (iParam1 == 33)
		return 20;

	if (iParam1 == 37)
		return 134;

	return -1;
}

int func_97(int iParam0) // Position - 0x3F0C
{
	if (!func_161(iParam0))
		return 0;

	if (Global_1051832.f_4492[iParam0] == 0)
		Global_1051832.f_4492[iParam0] = func_162(iParam0);

	return Global_1051832.f_4492[iParam0];
}

int func_98(int iParam0) // Position - 0x3F4D
{
	switch (iParam0)
	{
		case 3:
			return 50f;
	
		case 9:
			return 25f;
	
		case 10:
			return 25f;
	
		case 15:
			return 25f;
	
		case 29:
			return 25f;
	
		case 37:
			return 30f;
	
		case 38:
			return 70f;
	
		case 39:
			return 100f;
	}

	return 12.5f;
}

void func_99(int iParam0, int iParam1) // Position - 0x3FEA
{
	!func_153(iParam0, iParam1);
	Global_1051832.f_92[iParam0 /*75*/].f_1 = Global_1051832.f_92[iParam0 /*75*/].f_1 || iParam1;
	return;
}

void func_100(int iParam0) // Position - 0x401C
{
	Global_1051832[Global_1051832.f_41] = iParam0;
	Global_1051832.f_41 = Global_1051832.f_41 + 1;

	if (Global_1051832.f_41 >= 40)
		Global_1051832.f_41 = 40 - 1;

	return;
}

void func_101(int iParam0, int iParam1) // Position - 0x4055
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

BOOL func_102(int iParam0, int iParam1) // Position - 0x4066
{
	return Global_1051832.f_92[iParam0 /*75*/].f_49 && iParam1 != false;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x407F
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

int func_104() // Position - 0x40A9
{
	return Global_1893611.f_2;
}

BOOL func_105(int iParam0, Hash* phParam1, float* pfParam2, Vector3* pvParam3) // Position - 0x40B7
{
	return func_163(iParam0, "sHash", phParam1, "fHeading", pfParam2, "vPos", pvParam3);
}

BOOL func_106(int iParam0, Hash* phParam1, float* pfParam2, Vector3* pvParam3) // Position - 0x40D7
{
	return func_163(iParam0, "sClosedHash", phParam1, "fClosedHeading", pfParam2, "vClosedPos", pvParam3);
}

void func_107(int iParam0, Hash hParam1, Vector3 vParam2, var uParam3, var uParam4, float fParam5, BOOL bParam6) // Position - 0x40F7
{
	if (bParam6)
		MISC::GET_GROUND_Z_FOR_3D_COORD(vParam2, &(vParam2.f_2), false);

	Global_1051832.f_92[iParam0 /*75*/].f_6 = func_164(hParam1, vParam2, fParam5, 0, 0, false);
	Global_1915656.f_3[iParam0 /*447*/].f_16 = Global_1051832.f_92[iParam0 /*75*/].f_6;
	TASK::_SET_SCENARIO_POINT_FLAG(Global_1051832.f_92[iParam0 /*75*/].f_6, 23, true);
	TASK::_0xA7479FB665361EDB(Global_1051832.f_92[iParam0 /*75*/].f_6, 0);
	func_99(iParam0, 16384);
	return;
}

BOOL func_108(int iParam0) // Position - 0x4173
{
	return iParam0 > -1 && iParam0 < 16;
}

BOOL func_109(int iParam0) // Position - 0x4189
{
	if (iParam0 == 22 || iParam0 == 39 && !func_165())
		return true;

	if (iParam0 == 66)
		return true;

	return false;
}

BOOL func_110() // Position - 0x41BE
{
	if (Global_13)
		return false;

	if (!func_166())
		return false;

	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939102.f_75.f_55))
		return false;

	if (func_167(-1 ^ 9, false, true))
		return false;

	return true;
}

const char* func_111(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, var uParam6) // Position - 0x4201
{
	const char* StringToTest;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1893611.f_162)))
		StringToTest = func_168(Global_1893611.f_162);

	if (MISC::IS_STRING_NULL_OR_EMPTY(StringToTest) && bParam4)
		StringToTest = func_170(func_169(Global_34));

	if (MISC::IS_STRING_NULL_OR_EMPTY(StringToTest))
	{
		if (!func_171(iParam0) || func_172(44))
		{
			switch (iParam0)
			{
				case 1:
					StringToTest = "LANDMARK_MACOMBS_END";
					break;
			
				case 2:
					StringToTest = "LANDMARK_MERKINS_WALLER";
					break;
			
				case 3:
					StringToTest = "SETTLEMENT_LAGRAS";
					break;
			
				case 4:
					StringToTest = "HIDEOUT_LAKAY";
					break;
			
				case 5:
					StringToTest = "TOWN_SAINTDENIS";
					break;
			
				case 6:
					StringToTest = "LANDMARK_HAGEN_ORCHARDS";
					break;
			
				case 8:
					StringToTest = "SETTLEMENT_GRAND_KORRIGAN";
					break;
			
				case 9:
					StringToTest = "HIDEOUT_SHADY_BELLE";
					break;
			
				case 10:
					StringToTest = "LANDMARK_SILTWATER_STRAND";
					break;
			
				case 11:
					StringToTest = "SETTLEMENT_APPLESEED_TIMBER_CO";
					break;
			
				case 12:
					StringToTest = "LANDMARK_BERYLS_DREAM";
					break;
			
				case 15:
					StringToTest = "SETTLEMENT_FORT_RIGGS_HOLDING_CAMP";
					break;
			
				case 16:
					StringToTest = "HIDEOUT_HANGING_DOG_RANCH";
					break;
			
				case 17:
					StringToTest = "HOMESTEAD_LONE_MULE_STEAD";
					break;
			
				case 19:
					StringToTest = "LANDMARK_MONTOS_REST";
					break;
			
				case 20:
					StringToTest = "LANDMARK_OWANJILA_DAM";
					break;
			
				case 21:
					StringToTest = "HOMESTEAD_PAINTED_SKY";
					break;
			
				case 22:
					StringToTest = "SETTLEMENT_PRONGHORN_RANCH";
					break;
			
				case 23:
					StringToTest = "LANDMARK_RIGGS_STATION";
					break;
			
				case 25:
					StringToTest = "HOMESTEAD_SHEPHERDS_RISE";
					break;
			
				case 26:
					StringToTest = "TOWN_STRAWBERRY";
					break;
			
				case 27:
					StringToTest = "LANDMARK_VALLEY_VIEW";
					break;
			
				case 28:
					StringToTest = "LANDMARK_WALLACE_STATION";
					break;
			
				case 30:
					StringToTest = "HOMESTEAD_WATSONS_CABIN";
					break;
			
				case 31:
					StringToTest = "LANDMARK_CANEBREAK_MANOR";
					break;
			
				case 32:
					StringToTest = "LANDMARK_COPPERHEAD_LANDING";
					break;
			
				case 33:
					StringToTest = "SETTLEMENT_SISIKA_PENITENTIARY";
					break;
			
				case 35:
					StringToTest = "LANDMARK_BACCHUS_BRIDGE";
					break;
			
				case 36:
					StringToTest = "HOMESTEAD_FIRWOOD_RISE";
					break;
			
				case 37:
					StringToTest = "SETTLEMENT_FORT_WALLACE";
					break;
			
				case 38:
					StringToTest = "HIDEOUT_SIX_POINT_CABIN";
					break;
			
				case 39:
					StringToTest = "SETTLEMENT_BEECHERS_HOPE";
					break;
			
				case 40:
					StringToTest = "TOWN_BLACKWATER";
					break;
			
				case 41:
					StringToTest = "LANDMARK_QUAKERS_COVE";
					break;
			
				case 42:
					StringToTest = "HOMESTEAD_ADLER_RANCH";
					break;
			
				case 43:
					StringToTest = "LANDMARK_WINDOW_ROCK";
					break;
			
				case 44:
					StringToTest = "HOMESTEAD_CHEZ_PORTER";
					break;
			
				case 45:
					StringToTest = "HIDEOUT_COLTER";
					break;
			
				case 47:
					StringToTest = "LANDMARK_MILLESANI_CLAIM";
					break;
			
				case 51:
					StringToTest = "LANDMARK_TEMPEST_RIM";
					break;
			
				case 52:
					StringToTest = "LANDMARK_EWING_BASIN";
					break;
			
				case 53:
					StringToTest = "LANDMARK_CALUMET_RAVINE";
					break;
			
				case 58:
					StringToTest = "LANDMARK_THE_LOFT";
					break;
			
				case 60:
					StringToTest = "SETTLEMENT_WAPITI";
					break;
			
				case 62:
					StringToTest = "SETTLEMENT_AGUASDULCES";
					break;
			
				case 64:
					StringToTest = "LANDMARK_CINCO_TORRES";
					break;
			
				case 65:
					StringToTest = "LANDMARK_LA_CAPILLA";
					break;
			
				case 66:
					StringToTest = "TOWN_MANICATO";
					break;
			
				case 67:
					StringToTest = "LANDMARK_OLD_GREENBANK_MILL";
					break;
			
				case 69:
					StringToTest = "HOMESTEAD_CARMODY_DELL";
					break;
			
				case 70:
					StringToTest = "SETTLEMENT_CORNWALL_KEROSENE_TAR";
					break;
			
				case 71:
					StringToTest = "HOMESTEAD_GUTHRIE_FARM";
					break;
			
				case 72:
					StringToTest = "LANDMARK_CUMBERLAND_FALLS";
					break;
			
				case 73:
					StringToTest = "HOMESTEAD_DOWNES_RANCH";
					break;
			
				case 74:
					StringToTest = "SETTLEMENT_EMERALD_RANCH";
					break;
			
				case 75:
					StringToTest = "LANDMARK_GRANGERS_HOGGERY";
					break;
			
				case 77:
					StringToTest = "HOMESTEAD_LARNED_SOD";
					break;
			
				case 79:
					StringToTest = "LANDMARK_LUCKYS_CABIN";
					break;
			
				case 80:
					StringToTest = "LANDMARK_FLATNECK_STATION";
					break;
			
				case 81:
					StringToTest = "TOWN_VALENTINE";
					break;
			
				case 82:
					StringToTest = "HOMESTEAD_ABERDEEN_PIG_FARM";
					break;
			
				case 83:
					StringToTest = "TOWN_ANNESBURG";
					break;
			
				case 84:
					StringToTest = "HIDEOUT_BEAVER_HOLLOW";
					break;
			
				case 85:
					StringToTest = "LANDMARK_BLACK_BALSAM_RISE";
					break;
			
				case 86:
					StringToTest = "LANDMARK_BRANDYWINE_DROP";
					break;
			
				case 87:
					StringToTest = "SETTLEMENT_BUTCHER_CREEK";
					break;
			
				case 88:
					StringToTest = "HOMESTEAD_DOVERHILL";
					break;
			
				case 91:
					StringToTest = "HOMESTEAD_MACLEANS_HOUSE";
					break;
			
				case 92:
					StringToTest = "LANDMARK_MOSSY_FLATS";
					break;
			
				case 93:
					StringToTest = "LANDMARK_ROANOKE_VALLEY";
					break;
			
				case 94:
					StringToTest = "HOMESTEAD_WILLARDS_REST";
					break;
			
				case 98:
					StringToTest = "TOWN_VANHORN";
					break;
			
				case 99:
					StringToTest = "SETTLEMENT_BRAITHWAITE_MANOR";
					break;
			
				case 100:
					StringToTest = "LANDMARK_BOLGER_GLADE";
					break;
			
				case 101:
					StringToTest = "SETTLEMENT_CALIGA_HALL";
					break;
			
				case 102:
					StringToTest = "HOMESTEAD_CATFISH_JACKSONS";
					break;
			
				case 104:
					StringToTest = "HIDEOUT_CLEMENS_POINT";
					break;
			
				case 105:
					StringToTest = "HOMESTEAD_COMPSONS_STEAD";
					break;
			
				case 106:
					StringToTest = "HOMESTEAD_HILL_HAVEN_RANCH";
					break;
			
				case 108:
					StringToTest = "HOMESTEAD_LONNIES_SHACK";
					break;
			
				case 110:
					StringToTest = "LANDMARK_RADLEYS_PASTURE";
					break;
			
				case 111:
					StringToTest = "TOWN_RHODES";
					break;
			
				case 114:
					StringToTest = "LANDMARK_BEAR_CLAW";
					break;
			
				case 116:
					StringToTest = "SETTLEMENT_MANZANITA_POST";
					break;
			
				case 117:
					StringToTest = "LANDMARK_PACIFIC_UNION_RAILROAD";
					break;
			
				case 118:
					StringToTest = "LANDMARK_TANNERS_REACH";
					break;
			
				case 120:
					StringToTest = "HIDEOUT_GAPTOOTH_BREACH";
					break;
			
				case 121:
					StringToTest = "TOWN_TUMBLEWEED";
					break;
			
				case 122:
					StringToTest = "SETTLEMENT_RATHSKELLER_FORK";
					break;
			
				case 123:
					StringToTest = "SETTLEMENT_BENEDICT_POINT";
					break;
			
				case 124:
					StringToTest = "HIDEOUT_FORT_MERCER";
					break;
			
				case 125:
					StringToTest = "SETTLEMENT_PLAINVIEW";
					break;
			
				case 127:
					StringToTest = "TOWN_ARMADILLO";
					break;
			
				case 128:
					StringToTest = "SETTLEMENT_COOTS_CHAPEL";
					break;
			
				case 130:
					StringToTest = "LANDMARK_RILEYS_CHARGE";
					break;
			
				case 131:
					StringToTest = "SETTLEMENT_RIDGEWOOD_FARM";
					break;
			
				case 132:
					StringToTest = "HIDEOUT_TWIN_ROCKS";
					break;
			
				case 135:
					StringToTest = "TOWN_MACFARLANES_RANCH";
					break;
			
				case 136:
					StringToTest = "SETTLEMENT_THIEVES_LANDING";
					break;
			
				case 139:
					StringToTest = "SETTLEMENT_CENTRAL_UNION_RAILROAD_CAMP";
					break;
			}
		}
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(StringToTest) || bParam5)
	{
		switch (iParam2)
		{
			case joaat("water_lannahechee_river"):
				StringToTest = "WATER_LANNAHECHEE_RIVER";
				*uParam6 = 1;
				break;
		
			case joaat("WATER_O_CREAGHS_RUN"):
				StringToTest = "WATER_OCREAGHS_RUN";
				*uParam6 = 1;
				break;
		
			case joaat("water_upper_montana_river"):
				StringToTest = "WATER_UPPER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
		
			case joaat("water_san_luis_river"):
				if (iParam1 == 4 || iParam1 == 12)
					StringToTest = "WATER_SAN_LUIS_RIVER_WEST_ELIZABETH";
				else
					StringToTest = "WATER_SAN_LUIS_RIVER_NEW_AUSTIN";
			
				*uParam6 = 1;
				break;
		
			case joaat("water_little_creek_river"):
				StringToTest = "WATER_LITTLE_CREEK_RIVER";
				*uParam6 = 1;
				break;
		
			case joaat("water_lake_don_julio"):
				StringToTest = "WATER_LAKE_DON_JULIO";
				*uParam6 = 1;
				break;
		
			case joaat("water_flat_iron_lake"):
				StringToTest = "WATER_FLAT_IRON_LAKE";
				*uParam6 = 1;
				break;
		
			case joaat("water_lower_montana_river"):
				StringToTest = "WATER_LOWER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
		
			case joaat("water_owanjila"):
				StringToTest = "WATER_OWANJILA";
				*uParam6 = 1;
				break;
		
			case joaat("water_stillwater_creek"):
				StringToTest = "WATER_STILLWATER_CREEK";
				*uParam6 = 1;
				break;
		
			case joaat("water_hawks_eye_creek"):
				StringToTest = "WATER_HAWKS_EYE_CREEK";
				*uParam6 = 1;
				break;
		
			case joaat("water_kamassa_river"):
				if (iParam1 == 10)
					StringToTest = "WATER_KAMASSA_RIVER";
				else if (iParam1 == 2)
					StringToTest = "WATER_KAMASSA_RIVER_BLUEWATER_MARSH";
				else
					StringToTest = "WATER_KAMASSA_RIVER_BAYOU_NWA";
			
				*uParam6 = 1;
				break;
		
			case joaat("water_bahia_de_la_paz"):
				StringToTest = "WATER_BAHIA_DE_LA_PAZ";
				*uParam6 = 1;
				break;
		
			case joaat("water_cairn_lake"):
				StringToTest = "WATER_CAIRN_LAKE";
				*uParam6 = 1;
				break;
		
			case joaat("water_southfield_flats"):
				StringToTest = "WATER_SOUTHFIELD_FLATS";
				*uParam6 = 1;
				break;
		
			case joaat("water_moonstone_pond"):
				StringToTest = "WATER_MOONSTONE_POND";
				*uParam6 = 1;
				break;
		
			case joaat("WATER_CATTIAL_POND"):
				StringToTest = "WATER_CATTAIL_POND";
				*uParam6 = 1;
				break;
		
			case joaat("water_bayou_nwa"):
				StringToTest = "DISTRICT_BAYOU_NWA";
				*uParam6 = 1;
				break;
		
			case joaat("water_whinyard_strait"):
				StringToTest = "WATER_WHINYARD_STRAIT";
				*uParam6 = 1;
				break;
		
			case joaat("water_sea_of_coronado"):
				StringToTest = "WATER_SEA_OF_CORONADO";
				*uParam6 = 1;
				break;
		
			case joaat("water_spider_gorge"):
				StringToTest = "WATER_SPIDER_GORGE";
				*uParam6 = 1;
				break;
		
			case joaat("water_aurora_basin"):
				StringToTest = "WATER_AURORA_BASIN";
				*uParam6 = 1;
				break;
		
			case joaat("water_elysian_pool"):
				StringToTest = "WATER_ELYSIAN_POOL";
				*uParam6 = 1;
				break;
		
			case joaat("water_arroyo_de_la_vibora"):
				StringToTest = "WATER_ARROYO_DE_LA_VIBORA";
				*uParam6 = 1;
				break;
		
			case joaat("water_mattlock_pond"):
				StringToTest = "WATER_MATTOCK_POND";
				*uParam6 = 1;
				break;
		
			case joaat("water_dakota_river"):
				StringToTest = "WATER_DAKOTA_RIVER";
				*uParam6 = 1;
				break;
		
			case joaat("water_lake_isabella"):
				StringToTest = "WATER_LAKE_ISABELLA";
				*uParam6 = 1;
				break;
		
			case joaat("water_barrow_lagoon"):
				StringToTest = "WATER_BARROW_LAGOON";
				*uParam6 = 1;
				break;
		
			case joaat("water_hot_springs"):
				StringToTest = "WATER_COTORRA_SPRINGS";
				*uParam6 = 1;
				break;
		
			case joaat("water_deadboot_creek"):
				StringToTest = "WATER_DEADBOOT_CREEK";
				*uParam6 = 1;
				break;
		
			case joaat("water_heartlands_overflow"):
				StringToTest = "LANDMARK_HEARTLAND_OVERFLOW";
				*uParam6 = 1;
				break;
		
			case joaat("water_ringneck_creek"):
				StringToTest = "WATER_RINGNECK_CREEK";
				*uParam6 = 1;
				break;
		}
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(StringToTest))
	{
		switch (iParam1)
		{
			case 0:
				StringToTest = "DISTRICT_BAYOU_NWA";
				break;
		
			case 1:
				StringToTest = "DISTRICT_BIG_VALLEY";
				break;
		
			case 2:
				StringToTest = "DISTRICT_BLUEWATER_MARSH";
				break;
		
			case 3:
				StringToTest = "DISTRICT_CUMBERLAND_FOREST";
				break;
		
			case 4:
				StringToTest = "DISTRICT_GREAT_PLAINS";
				break;
		
			case 6:
				StringToTest = "DISTRICT_GRIZZLIES";
				break;
		
			case 7:
				StringToTest = "DISTRICT_GRIZZLIES";
				break;
		
			case 8:
				StringToTest = "DISTRICT_GUARMA";
				break;
		
			case 9:
				StringToTest = "DISTRICT_HEARTLANDS";
				break;
		
			case 10:
				StringToTest = "DISTRICT_ROANOAKE_RIDGE";
				break;
		
			case 11:
				StringToTest = "DISTRICT_SCARLETT_MEADOWS";
				break;
		
			case 12:
				StringToTest = "DISTRICT_TALL_TREES";
				break;
		
			case 13:
				StringToTest = "DISTRICT_GAPTOOTH_RIDGE";
				break;
		
			case 14:
				StringToTest = "DISTRICT_RIO_BRAVO";
				break;
		
			case 15:
				StringToTest = "DISTRICT_CHOLLA_SPRINGS";
				break;
		
			case 16:
				StringToTest = "DISTRICT_HENNIGANS_STEAD";
				break;
		}
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(StringToTest))
	{
		switch (iParam3)
		{
			case 0:
				StringToTest = "STATE_AMBARINO";
				break;
		
			case 1:
				StringToTest = "STATE_NEW_HANOVER";
				break;
		
			case 2:
				StringToTest = "STATE_LEMOYNE";
				break;
		
			case 3:
				StringToTest = "STATE_WEST_ELIZABETH";
				break;
		
			case 4:
				StringToTest = "STATE_NEW_AUSTIN";
				break;
		
			case 5:
				StringToTest = "STATE_GUARMA";
				break;
		}
	}

	return StringToTest;
}

BOOL func_112(int iParam0) // Position - 0x4C67
{
	return iParam0 > -1 && iParam0 < 6;
}

int func_113(int iParam0) // Position - 0x4C7C
{
	switch (iParam0)
	{
		case 0:
			return 2;
	
		case 1:
			return 3;
	
		case 2:
			return 2;
	
		case 3:
			return 1;
	
		case 4:
			return 3;
	
		case 5:
			return 0;
	
		case 6:
			return 0;
	
		case 7:
			return 0;
	
		case 8:
			return 5;
	
		case 9:
			return 1;
	
		case 10:
			return 1;
	
		case 11:
			return 2;
	
		case 12:
			return 3;
	
		case 13:
			return 4;
	
		case 14:
			return 4;
	
		case 15:
			return 4;
	
		case 16:
			return 4;
	
		default:
		
	}

	return -1;
}

int func_114(int iParam0) // Position - 0x4D37
{
	int i;
	var gamerHandle;
	int bountyData;

	if (!func_112(iParam0))
		return -1;

	if (Global_1572887.f_14 == -1)
		return Global_38.f_198[iParam0 /*12*/];

	i = 0;
	gamerHandle = { func_173(PLAYER::PLAYER_ID()) };
	BOUNTY::BOUNTY_GET_BOUNTY_ON_PLAYER(&gamerHandle, &bountyData);

	for (i = 0; i < 6; i = i + 1)
	{
		Global_1072759.f_21262[i /*12*/] = bountyData;
	}

	return Global_1072759.f_21262[iParam0 /*12*/];
}

int func_115(int iParam0) // Position - 0x4DA5
{
	switch (iParam0)
	{
		case joaat("water_lannahechee_river"):
			return 1;
	
		case joaat("WATER_O_CREAGHS_RUN"):
			return 0;
	
		case joaat("water_upper_montana_river"):
			return 1;
	
		case joaat("water_san_luis_river"):
			return 1;
	
		case joaat("water_little_creek_river"):
			return 1;
	
		case joaat("water_lake_don_julio"):
			return 0;
	
		case joaat("water_flat_iron_lake"):
			return 0;
	
		case joaat("water_lower_montana_river"):
			return 1;
	
		case joaat("water_owanjila"):
			return 0;
	
		case joaat("water_stillwater_creek"):
			return 1;
	
		case joaat("water_hawks_eye_creek"):
			return 1;
	
		case joaat("water_kamassa_river"):
			return 1;
	
		case joaat("water_cairn_lake"):
			return 0;
	
		case joaat("water_southfield_flats"):
			return 0;
	
		case joaat("water_moonstone_pond"):
			return 0;
	
		case joaat("WATER_CATTIAL_POND"):
			return 0;
	
		case joaat("water_bayou_nwa"):
			return 2;
	
		case joaat("water_whinyard_strait"):
			return 1;
	
		case joaat("water_sea_of_coronado"):
			return 1;
	
		case joaat("water_spider_gorge"):
			return 1;
	
		case joaat("water_aurora_basin"):
			return 0;
	
		case joaat("water_elysian_pool"):
			return 0;
	
		case joaat("WATER_CALMUT_RAVINE"):
			return 0;
	
		case joaat("water_mattlock_pond"):
			return 0;
	
		case joaat("water_dakota_river"):
			return 1;
	
		case joaat("water_dewberry_creek"):
			return 1;
	
		case joaat("water_lake_isabella"):
			return 0;
	
		case joaat("water_beartooth_beck"):
			return 1;
	
		case joaat("water_barrow_lagoon"):
			return 0;
	
		case joaat("water_hot_springs"):
			return 0;
	
		case joaat("water_deadboot_creek"):
			return 1;
	
		case joaat("water_heartlands_overflow"):
			return 0;
	
		case joaat("water_ringneck_creek"):
			return 1;
	
		default:
		
	}

	return -1;
}

char* func_116(int iParam0) // Position - 0x4F00
{
	switch (iParam0)
	{
		case 0:
			return "WATER_TYPE_LAKE";
	
		case 1:
			return "WATER_TYPE_RIVER";
	
		case 2:
			return "WATER_TYPE_SWAMP";
	
		default:
		
	}

	return "";
}

BOOL func_117(int iParam0, BOOL bParam1) // Position - 0x4F3B
{
	if (!func_10(iParam0))
		return false;

	if (Global_1572887.f_14 == -1)
		return Global_38.f_271[iParam0] && bParam1 != false;

	return Global_1072759.f_21335[iParam0] && bParam1 != false;
}

BOOL func_118(int iParam0, int iParam1) // Position - 0x4F7D
{
	if (!func_112(iParam0))
		return false;

	if (Global_1572887.f_14 == -1)
		return Global_38.f_198[iParam0 /*12*/].f_5 && iParam1 != false;

	return Global_1072759.f_21262[iParam0 /*12*/].f_5 && iParam1 != false;
}

int func_119() // Position - 0x4FC2
{
	return Global_1902569;
}

int func_120(int iParam0) // Position - 0x4FCE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_121(int iParam0) // Position - 0x4FE1
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

float func_122(float fParam0) // Position - 0x4FF3
{
	return (fParam0 * 1.8f) + 32f;
}

const char* func_123(var uParam0, int iParam1) // Position - 0x5009
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "LITERAL_STRING", uParam0);

	return func_174(MISC::VAR_STRING(10, "LITERAL_STRING", uParam0), iParam1);
}

int func_124(const char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x503F
{
	int duration;
	var data;
	int num;

	duration = -2;
	duration = iParam2;
	duration.f_1 = iParam3;
	duration.f_2 = iParam4;
	duration.f_3 = iParam5;
	data.f_1 = sParam0;
	data.f_2 = sParam1;
	num = UIFEED::_UI_FEED_POST_LOCATION_SHARD(&duration, &data, bParam6, bParam7);
	return num;
}

BOOL func_125(int iParam0) // Position - 0x5082
{
	if (func_171(iParam0))
		if (!func_172(44))
			return false;

	return true;
}

void func_126(int iParam0, int iParam1) // Position - 0x50A2
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

struct<2> func_127(int iParam0, int iParam1) // Position - 0x50B3
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

void func_128(var uParam0, var uParam1, int iParam2) // Position - 0x50C9
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
		return;

	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

void func_129(int iParam0) // Position - 0x50E6
{
	func_175(Global_1939959.f_5[iParam0 /*11*/].f_6, true);
	func_176(Global_1939959.f_5[iParam0 /*11*/].f_6, false);

	if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1939959.f_5[iParam0 /*11*/].f_8))
		VOLUME::_RELEASE_LOCK_VOLUME(Global_1939959.f_5[iParam0 /*11*/].f_8);

	func_177(iParam0, 8192);
	func_177(iParam0, 32768);
	func_177(iParam0, 524288);
	func_177(iParam0, 1048576);
	Global_1939959.f_5[iParam0 /*11*/].f_10 = 0;
	Global_1939959.f_5[Global_1939959 /*11*/].f_9 = 0;
	Global_1939959.f_5[iParam0 /*11*/] = 0;
	Global_1939959.f_5[iParam0 /*11*/].f_1 = { 0f, 0f, 0f };
	Global_1939959.f_5[iParam0 /*11*/].f_4 = 0;
	Global_1939959.f_5[iParam0 /*11*/].f_5 = -1;
	Global_1939959.f_5[iParam0 /*11*/].f_6 = -1;
	Global_1939959.f_5[iParam0 /*11*/].f_7 = 0;
	return;
}

void func_130(int iParam0) // Position - 0x51C6
{
	int i;
	int num;

	if (func_88(Global_1915656.f_3[iParam0 /*447*/].f_21) && func_178(Global_1915656.f_3[iParam0 /*447*/].f_21))
		func_179(Global_1915656.f_3[iParam0 /*447*/].f_21, false, true, false, false);

	Global_1915656.f_3[iParam0 /*447*/].f_10 = { 0f, 0f, 0f };
	Global_1915656.f_3[iParam0 /*447*/].f_21 = -1;
	Global_1915656.f_3[iParam0 /*447*/].f_22 = -1;
	Global_1915656.f_3[iParam0 /*447*/].f_16 = 0;
	Global_1915656.f_3[iParam0 /*447*/].f_1 = 0;

	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(Global_1915656.f_3[iParam0 /*447*/].f_35))
		PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1915656.f_3[iParam0 /*447*/].f_35, false);

	func_180(Global_1915656.f_3[iParam0 /*447*/].f_9, false);
	func_181(iParam0, 536870912);
	num = func_182(iParam0);

	if (num >= 15)
	{
		Global_1915656.f_3[iParam0 /*447*/].f_409 = 0;
	}
	else
	{
		for (i = 0; i < num; i = i + 1)
		{
			func_156(Global_1915656.f_3[iParam0 /*447*/].f_318[i /*6*/]);
			Global_1915656.f_3[iParam0 /*447*/].f_318[i /*6*/] = 0;
			Global_1915656.f_3[iParam0 /*447*/].f_318[i /*6*/].f_1 = { 0f, 0f, 0f };
			Global_1915656.f_3[iParam0 /*447*/].f_318[i /*6*/].f_4 = 0f;
			Global_1915656.f_3[iParam0 /*447*/].f_318[i /*6*/].f_5 = 0;
		}
	
		Global_1915656.f_3[iParam0 /*447*/].f_409 = 0;
	}

	if (Global_1915656.f_3[iParam0 /*447*/].f_441 != 0)
		UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(Global_1915656.f_3[iParam0 /*447*/].f_441, false);

	Global_1915656.f_3[iParam0 /*447*/].f_23 = 0;
	func_183(iParam0);
	Global_1915656.f_3[iParam0 /*447*/].f_9 = -1;
	Global_1915656.f_3[iParam0 /*447*/].f_8 = -1;
	return;
}

BOOL func_131(int iParam0, BOOL bParam1) // Position - 0x539E
{
	if (func_45() != -1)
		return false;

	if (!func_88(iParam0))
		return false;

	return Global_9899[iParam0 /*2*/] && bParam1 != false;
}

int func_132(int iParam0, BOOL bParam1) // Position - 0x53CC
{
	if (!func_88(iParam0))
		return 0;

	if (!func_131(iParam0, 2))
		return 0;

	if (func_137(iParam0) == 0)
		return 1;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_139(iParam0)))
		return 1;

	if (func_131(iParam0, true) && !bParam1)
	{
		func_184(iParam0, 128);
		return 1;
	}

	func_140(iParam0, 129);
	func_185(iParam0);
	PERSCHAR::_DELETE_PERSCHAR(func_139(iParam0));
	func_138(iParam0, 0);
	return 1;
}

int func_133(int iParam0) // Position - 0x544F
{
	switch (iParam0)
	{
		case 27:
		case 28:
		case 29:
			return 1;
	
		default:
		
	}

	return 0;
}

int func_134(int iParam0) // Position - 0x5476
{
	switch (iParam0)
	{
		case 33:
		case 37:
			return 1;
	
		default:
		
	}

	return 0;
}

void func_135() // Position - 0x5497
{
	int i;
	var unk;

	func_158(30);
	func_186(30);
	func_187(30);
	func_160(30);

	for (i = 0; i <= 3; i = i + 1)
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(Global_1051832.f_3654[i /*19*/].f_6))
			TASK::_DELETE_SCENARIO_POINT(Global_1051832.f_3654[i /*19*/].f_6);
	
		Global_1051832.f_3654[i /*19*/].f_6 = unk;
	
		if (TASK::DOES_SCENARIO_POINT_EXIST(Global_1051832.f_3654[i /*19*/].f_13))
			TASK::_DELETE_SCENARIO_POINT(Global_1051832.f_3654[i /*19*/].f_13);
	
		Global_1051832.f_3654[i /*19*/].f_13 = unk;
	
		if (MAP::DOES_BLIP_EXIST(Global_1051832.f_3654[i /*19*/].f_17))
			MAP::REMOVE_BLIP(&(Global_1051832.f_3654[i /*19*/].f_17));
	
		if (ENTITY::DOES_ENTITY_EXIST(Global_1051832.f_3654[i /*19*/].f_8))
		{
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1051832.f_3654[i /*19*/].f_8))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1051832.f_3654[i /*19*/].f_8, true, true);
		
			PED::DELETE_PED(&(Global_1051832.f_3654[i /*19*/].f_8));
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(Global_1051832.f_3654[i /*19*/].f_15))
		{
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1051832.f_3654[i /*19*/].f_15))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1051832.f_3654[i /*19*/].f_15, true, true);
		
			PED::DELETE_PED(&(Global_1051832.f_3654[i /*19*/].f_15));
		}
	
		Global_1051832.f_3654[i /*19*/].f_1 = 0;
		Global_1051832.f_3654[i /*19*/].f_5 = 0;
		Global_1051832.f_3654[i /*19*/].f_8 = 0;
		Global_1051832.f_3654[i /*19*/].f_15 = 0;
		Global_1051832.f_3654[i /*19*/].f_7 = 0;
		Global_1051832.f_3654[i /*19*/].f_14 = 0;
		Global_1051832.f_3654[i /*19*/].f_9 = -1;
		Global_1051832.f_3654[i /*19*/] = -1;
	}

	return;
}

void func_136() // Position - 0x565E
{
	int i;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_1051832.f_4447[i /*8*/] = -1;
		Global_1051832.f_4447[i /*8*/].f_3 = 0;
		Global_1051832.f_4447[i /*8*/].f_4 = 0;
		Global_1051832.f_4447[i /*8*/].f_7 = 0;
	
		if (TASK::DOES_SCENARIO_POINT_EXIST(Global_1051832.f_4447[i /*8*/].f_6))
			TASK::_DELETE_SCENARIO_POINT(Global_1051832.f_4447[i /*8*/].f_6);
	}

	func_160(32);
	return;
}

Hash func_137(int iParam0) // Position - 0x56D9
{
	if (!func_88(iParam0))
		return 0;

	return Global_1893799[iParam0 /*3*/];
}

void func_138(int iParam0, PersChar pchParam1) // Position - 0x56F7
{
	if (!func_88(iParam0))
		return;

	Global_1893799[iParam0 /*3*/].f_1 = pchParam1;
	return;
}

PersChar func_139(int iParam0) // Position - 0x5718
{
	if (!func_88(iParam0))
		return 0;

	return Global_1893799[iParam0 /*3*/].f_1;
}

void func_140(int iParam0, BOOL bParam1) // Position - 0x5738
{
	if (func_45() != -1)
		return;

	if (!func_88(iParam0))
		return;

	Global_9899[iParam0 /*2*/] = Global_9899[iParam0 /*2*/] - Global_9899[iParam0 /*2*/] && bParam1;
	return;
}

BOOL func_141(int iParam0) // Position - 0x5771
{
	if (!func_88(iParam0))
		return false;

	if (!func_131(iParam0, 2))
		return false;

	return true;
}

BOOL func_142(var uParam0, var uParam1) // Position - 0x5797
{
	return func_188(uParam0, 5, 8);
}

BOOL func_143(int iParam0) // Position - 0x57AA
{
	return func_189(1, iParam0);
}

int func_144(int iParam0) // Position - 0x57B9
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

int func_145(int iParam0) // Position - 0x5804
{
	if (func_190(&(Global_1102813.f_4), iParam0, 5))
		return 1;

	return 0;
}

void func_146(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x5821
{
	func_191(iParam0);

	if (!func_192(1))
		return;

	if (bParam1)
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	else if (!func_193(128) && !func_194(19))
		CAM::DO_SCREEN_FADE_OUT(iParam2);

	if (bParam3 && func_195() == 4)
		func_145(18);

	func_196(1024);
	return;
}

int func_147(int iParam0) // Position - 0x5883
{
	if (func_197(&(Global_1102813.f_4), iParam0, 5))
		return 1;

	return 0;
}

void func_148(var uParam0) // Position - 0x58A0
{
	var unk;

	*uParam0 = { unk };
	return;
}

void func_149(float* pfParam0) // Position - 0x58B2
{
	var unk;

	*pfParam0 = { unk };
	return;
}

void func_150(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, int iParam30) // Position - 0x58C4
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

void func_151(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9) // Position - 0x591A
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

BOOL func_152(int iParam0) // Position - 0x5947
{
	if (iParam0 == 28 || iParam0 == 29 || iParam0 == 38 || iParam0 == 27 || iParam0 == 15 || iParam0 == 39)
		return true;

	if (func_102(iParam0, 65536))
		return true;

	return false;
}

BOOL func_153(int iParam0, int iParam1) // Position - 0x59A4
{
	return Global_1051832.f_92[iParam0 /*75*/].f_1 && iParam1 != false;
}

void func_154(int iParam0, int iParam1) // Position - 0x59BD
{
	func_153(iParam0, iParam1);
	Global_1051832.f_92[iParam0 /*75*/].f_1 = Global_1051832.f_92[iParam0 /*75*/].f_1 - Global_1051832.f_92[iParam0 /*75*/].f_1 && iParam1;
	return;
}

int func_155(int iParam0) // Position - 0x59F8
{
	return Global_1051832.f_92[iParam0 /*75*/].f_47;
}

void func_156(Hash hParam0) // Position - 0x5A0C
{
	if (func_198(hParam0) && func_199())
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(hParam0);

	return;
}

void func_157(int iParam0) // Position - 0x5A2C
{
	return;
}

void func_158(int iParam0) // Position - 0x5A34
{
	Global_1051832.f_92[iParam0 /*75*/].f_49 = 0;
	return;
}

BOOL func_159(int iParam0, int iParam1) // Position - 0x5A49
{
	if (iParam0 == -1)
		return false;

	return func_200(Global_1051832.f_92[iParam0 /*75*/].f_50, iParam1);
}

void func_160(int iParam0) // Position - 0x5A70
{
	int i;
	int num;
	BOOL flag;

	if (Global_1051832.f_41 < 1)
		return;

	for (i = 0; i < Global_1051832.f_41; i = i + 1)
	{
		if (iParam0 == Global_1051832[i])
		{
			num = i;
			flag = true;
			break;
		}
	}

	if (!flag)
		return;

	Global_1051832.f_41 = Global_1051832.f_41 - 1;

	if (Global_1051832.f_41 < 0)
		Global_1051832.f_41 = 0;

	Global_1051832[num] = Global_1051832[Global_1051832.f_41];
	return;
}

BOOL func_161(int iParam0) // Position - 0x5AEF
{
	return iParam0 > -1 && iParam0 < 180;
}

int func_162(int iParam0) // Position - 0x5B05
{
	var unk;

	if (DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1149432.f_7) && !func_202(12, func_201(iParam0), &unk))
		return 0;

	return unk.f_2;
}

BOOL func_163(int iParam0, char* sParam1, Hash* phParam2, char* sParam3, float* pfParam4, char* sParam5, Vector3* pvParam6) // Position - 0x5B36
{
	int num;

	num = func_203();
	num.f_2 = -738708473;
	num.f_3 = func_201(iParam0);

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(num.f_1), &num))
		return 0;

	num.f_2 = -1407851228;
	num.f_3 = MISC::GET_HASH_KEY(sParam1);
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(phParam2, &num);
	num.f_2 = 1059891245;
	num.f_3 = MISC::GET_HASH_KEY(sParam3);
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(pfParam4, &num);
	num.f_2 = -99852754;
	num.f_3 = MISC::GET_HASH_KEY(sParam5);
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(pvParam6, &num);
	return 1;
}

int func_164(Hash hParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x5BBE
{
	return TASK::CREATE_SCENARIO_POINT_HASH(hParam0, vParam1, fParam4, iParam5, iParam6, bParam7);
}

BOOL func_165() // Position - 0x5BD8
{
	return false;
}

BOOL func_166() // Position - 0x5BE1
{
	var unk;
	var unk3;

	if (func_45() != 0)
		return true;

	if (func_204())
		return false;

	if (HUD::_0x7EC0D68233E391AC(6) == 1)
		return true;

	unk = -1;
	unk.f_1 = -1;
	unk = { func_205() };

	if (func_206(unk))
		return false;

	unk3 = { func_207() };

	if (func_206(unk3))
		return false;

	return true;
}

BOOL func_167(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5C49
{
	if (Global_1572887.f_14 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1900460.f_67;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1900460.f_68;
	
		if (func_204())
			return true;
	
		if (Global_1072759.f_3 && !Global_1572887.f_10)
			if (Global_1056554[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*491*/].f_481 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
				return true;
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
			return Global_1900460.f_67;
		else
			return Global_1900460.f_68;
	}

	if (iParam0 == 0 && func_206(func_56(0)))
		return true;

	if (Global_1940199 && 81919 & -1 - iParam0 != false)
		return true;

	if (!bParam1)
		if (MISC::GET_GAME_TIMER() - 5000 < Global_1900595)
			return true;

	switch (func_57(func_56(0)))
	{
		case -1:
			return false;
	
		case 2:
			return iParam0 & 1 == 0;
	
		case 3:
			return iParam0 & 16 == 0;
	
		case 4:
			return iParam0 & 32 == 0;
	
		case 5:
			return iParam0 & 2 == 0;
	
		case 7:
			return iParam0 & 1024 == 0;
	
		default:
		
	}

	return false;
}

const char* func_168(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x5DBF
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_169(var uParam0, var uParam1, var uParam2) // Position - 0x5DD3
{
	int i;

	for (i = 0; i < 51; i = i + 1)
	{
		if (func_208(uParam0, i))
			return i;
	}

	return -1;
}

const char* func_170(int iParam0) // Position - 0x5E01
{
	switch (iParam0)
	{
		case 0:
			return "LANDMARK_MOUNT_HAGEN";
	
		case 1:
			return "LANDMARK_SCRATCHING_POST";
	
		case 2:
			return "LANDMARK_JORGES_GAP";
	
		case 3:
			return "LANDMARK_MERCER_STATION";
	
		case 4:
			return "LANDMARK_ODDFELLOWS_REST";
	
		case 5:
			return "LANDMARK_RATTLESNAKE_HOLLOW";
	
		case 6:
			return "LANDMARK_SILENT_STEAD";
	
		case 7:
			return "LANDMARK_THE_HANGING_ROCK";
	
		case 8:
			return "LANDMARK_THE_OLD_BACCHUS_PLACE";
	
		case 9:
			return "LANDMARK_TWO_CROWS";
	
		case 10:
			return "LANDMARK_REPENTANCE";
	
		case 11:
			return "LANDMARK_BENEDICT_PASS";
	
		case 12:
			return "WATER_MANTECA_FALLS";
	
		case 13:
			return "SETTLEMENT_LIMPANY";
	
		case 14:
			return "WATER_MOUNT_SHANN";
	
		case 15:
			return "LANDMARK_THREE_SISTERS";
	
		case 16:
			return "HIDEOUT_PIKES_BASIN";
	
		case 17:
			return "SETTLEMENT_EL_NIDO";
	
		case 18:
			return "LANDMARK_BRITTLEBUSH_TRAWL";
	
		case 19:
			return "LANDMARK_ERIS_FIELD";
	
		case 20:
			return "LANDMARK_GRANITE_PASS";
	
		case 21:
			return "LANDMARK_VENTERS_PLACE";
	
		case 22:
			return "LANDMARK_PLEASANCE_HOUSE";
	
		case 23:
			return "HOMESTEAD_CHADWICK_FARM";
	
		case 24:
			return "LANDMARK_BLACK_BONE_FOREST";
	
		case 25:
			return "LANDMARK_CITADEL_ROCK";
	
		case 26:
			return "LANDMARK_CUEVA_SECA";
	
		case 27:
			return "LANDMARK_DEWBERRY_CREEK";
	
		case 28:
			return "LANDMARK_DIABLO_RIDGE";
	
		case 29:
			return "LANDMARK_DONNER_FALLS";
	
		case 31:
			return "HIDEOUT_SOLOMONS_FOLLY";
	
		case 32:
			return "LANDMARK_FORT_BRENNAND";
	
		case 33:
			return "LANDMARK_CALIBANS_SEAT";
	
		case 34:
			return "HIDEOUT_HORSESHOE_OVERLOOK";
	
		case 35:
			return "LANDMARK_MESCALERO";
	
		case 36:
			return "LANDMARK_RIO_DEL_LOBO_HOUSE";
	
		case 37:
			return "LANDMARK_RIO_DEL_LOBO_ROCK";
	
		case 38:
			return "LANDMARK_BROKEN_TREE";
	
		case 39:
			return "LANDMARK_BARDS_CROSSING";
	
		case 40:
			return "LANDMARK_FACE_ROCK";
	
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
			return "";
	
		case 50:
			return "LANDMARK_NEKOTI_ROCK";
	}

	return "";
}

BOOL func_171(int iParam0) // Position - 0x60E5
{
	switch (iParam0)
	{
		case 22:
		case 25:
		case 68:
			return true;
	}

	return false;
}

BOOL func_172(int iParam0) // Position - 0x610F
{
	if (!func_209(iParam0))
		return false;

	return func_210(iParam0);
}

struct<2> func_173(Player plParam0) // Position - 0x612B
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle);
	return gamerHandle;
}

const char* func_174(const char* sParam0, int iParam1) // Position - 0x613F
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

void func_175(int iParam0, BOOL bParam1) // Position - 0x6159
{
	char* StringToTest;

	switch (iParam0)
	{
		case 5:
			StringToTest = "IZ_val_saloon_int_room_main";
			break;
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(StringToTest))
		return;

	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(StringToTest, bParam1, true);
	return;
}

void func_176(int iParam0, BOOL bParam1) // Position - 0x618D
{
	switch (iParam0)
	{
		case 5:
			if (bParam1)
				AUDIO::SET_PORTAL_SETTINGS_OVERRIDE("VAL_SALOON_SWINGING_DOOR", "VAL_SALOON_SWINGING_DOOR_BARRED");
			else
				AUDIO::REMOVE_PORTAL_SETTINGS_OVERRIDE("VAL_SALOON_SWINGING_DOOR_BARRED");
			break;
	}

	return;
}

void func_177(int iParam0, int iParam1) // Position - 0x61C2
{
	func_211(&(Global_1939959.f_5[iParam0 /*11*/].f_7), iParam1);
	return;
}

BOOL func_178(int iParam0) // Position - 0x61DC
{
	if (!func_88(iParam0))
		return false;

	return Global_1893799[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_179(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x6201
{
	PersChar persChar;
	Ped perscharPedIndex;

	if (!func_88(iParam0))
		return;

	if (!func_131(iParam0, 1))
		return;

	if (!func_131(iParam0, 2))
		return;

	if (!bParam4 && !func_178(iParam0) && func_212(iParam0))
		return;

	func_140(iParam0, 1);
	func_185(iParam0);

	if (func_213(func_137(iParam0)))
	{
		persChar = func_139(iParam0);
	
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
			return;
	
		PERSCHAR::_0xBB68908CD11AEBDC(persChar);
		PERSCHAR::_0xB65E7F733956CF25(persChar);
	
		if (bParam2 && !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(persChar))
			PERSCHAR::_RETASK_PERSISTENT_CHARACTER(persChar);
	
		perscharPedIndex = PERSCHAR::_GET_PERSCHAR_PED_INDEX(persChar);
	
		if (!PED::IS_PED_INJURED(perscharPedIndex))
			PED::SET_PED_CONFIG_FLAG(perscharPedIndex, 171, false);
	
		if (bParam1)
			PERSCHAR::_FORCE_DESPAWN_PERSCHAR(persChar);
	
		func_140(iParam0, 16);
	}

	if (func_131(iParam0, 128) && !bParam3)
		func_132(iParam0, false);

	return;
}

void func_180(int iParam0, BOOL bParam1) // Position - 0x62ED
{
	if (!func_161(iParam0))
		return;

	if (bParam1)
	{
		if (!func_214(iParam0, 1024))
		{
			func_215(iParam0, 1024);
			INVENTORY::_0x9B4E793B1CB6550A();
		}
	}
	else if (func_214(iParam0, 1024))
	{
		func_216(iParam0, 1024);
		INVENTORY::_0x9B4E793B1CB6550A();
	}

	func_217(iParam0);
	return;
}

void func_181(int iParam0, int iParam1) // Position - 0x6343
{
	if (!func_218(iParam0))
		return;

	if (func_45() == -1)
		Global_1915656.f_3[iParam0 /*447*/].f_6 = Global_1915656.f_3[iParam0 /*447*/].f_6 - Global_1915656.f_3[iParam0 /*447*/].f_6 && iParam1;
	else
		Global_1051832.f_92[iParam0 /*75*/].f_1 = Global_1051832.f_92[iParam0 /*75*/].f_1 - Global_1051832.f_92[iParam0 /*75*/].f_1 && iParam1;

	return;
}

int func_182(int iParam0) // Position - 0x63B6
{
	return Global_1915656.f_3[iParam0 /*447*/].f_409;
}

void func_183(int iParam0) // Position - 0x63CC
{
	Global_1915656.f_3[iParam0 /*447*/].f_6 = 0;
	return;
}

void func_184(int iParam0, BOOL bParam1) // Position - 0x63E2
{
	if (func_45() != -1)
		return;

	if (!func_88(iParam0))
		return;

	Global_9899[iParam0 /*2*/] = Global_9899[iParam0 /*2*/] || bParam1;
	return;
}

void func_185(int iParam0) // Position - 0x6413
{
	Ped EntityIndex;

	if (!func_88(iParam0))
		return;

	EntityIndex = func_219(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(EntityIndex))
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(EntityIndex, false))
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&EntityIndex);

	Global_1893799[iParam0 /*3*/].f_2 = 0;
	return;
}

void func_186(int iParam0) // Position - 0x6457
{
	Global_1051832.f_92[iParam0 /*75*/].f_50 = 0;
	return;
}

void func_187(int iParam0) // Position - 0x646C
{
	Global_1051832.f_92[iParam0 /*75*/].f_1 = 0;
	return;
}

BOOL func_188(int iParam0, var uParam1, int iParam2, int iParam3) // Position - 0x6481
{
	int num;

	if (!func_206(iParam0))
		return false;

	if (iParam0 != 2)
		return false;

	num = func_220(iParam0);
	return num >= iParam2 && num <= iParam3;
}

BOOL func_189(int iParam0, int iParam1) // Position - 0x64BC
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_221(&(Global_1102813.f_4), num, 5);

	if (iParam1 == func_222())
		return func_221(&(Global_1102813.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1295666.f_17[iParam1])
		return func_221(&(Global_1101558[iParam1 /*38*/].f_4), num, 5);

	return false;
}

BOOL func_190(var uParam0, int iParam1, int iParam2) // Position - 0x6530
{
	int num;
	int offset;
	BOOL isBitSet;

	num = iParam1 / 31;
	offset = iParam1 % 31;
	isBitSet = MISC::IS_BIT_SET(uParam0->[num], offset);
	MISC::CLEAR_BIT(&uParam0->[num], offset);
	return isBitSet;
}

void func_191(int iParam0) // Position - 0x6562
{
	Global_1102813.f_26.f_12 = iParam0;
	return;
}

BOOL func_192(int iParam0) // Position - 0x6574
{
	return Global_1102813.f_26.f_7 && iParam0 != false;
}

BOOL func_193(BOOL bParam0) // Position - 0x6589
{
	return Global_1102813.f_26.f_9 && bParam0 != false;
}

BOOL func_194(int iParam0) // Position - 0x659E
{
	return Global_1102813.f_4[Global_1106895[iParam0 /*2*/]] && Global_1106895[iParam0 /*2*/].f_1 == Global_1106895[iParam0 /*2*/].f_1;
}

int func_195() // Position - 0x65CC
{
	if (Global_1102813 <= 5)
		return Global_1102813;

	if (Global_1102813 <= 22)
		return 4;

	if (Global_1102813 <= 25)
		return 3;

	return 26;
}

void func_196(BOOL bParam0) // Position - 0x65FF
{
	if (func_223(bParam0))
		return;

	Global_1102813.f_26.f_9 = Global_1102813.f_26.f_9 || bParam0;
	return;
}

BOOL func_197(var uParam0, int iParam1, int iParam2) // Position - 0x6626
{
	int num;
	int offset;
	BOOL isBitSet;

	num = iParam1 / 31;
	offset = iParam1 % 31;
	isBitSet = MISC::IS_BIT_SET(uParam0->[num], offset);
	MISC::SET_BIT(&uParam0->[num], offset);
	return !isBitSet;
}

BOOL func_198(Hash hParam0) // Position - 0x6659
{
	if (func_224(hParam0))
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(hParam0);

	return false;
}

BOOL func_199() // Position - 0x6674
{
	return 1;
}

BOOL func_200(BOOL bParam0, BOOL bParam1) // Position - 0x667D
{
	return bParam0 && bParam1 != false;
}

int func_201(int iParam0) // Position - 0x668C
{
	switch (iParam0)
	{
		case 0:
			return joaat("shop_asb_gunsmith");
	
		case 1:
			return joaat("shop_asb_post_office");
	
		case 2:
			return joaat("shop_asb_train_station");
	
		case 3:
			return 548657065;
	
		case 4:
			return 243086140;
	
		case 5:
			return joaat("shop_blk_bank");
	
		case 6:
			return joaat("shop_blk_general_store");
	
		case 7:
			return joaat("shop_blk_gunsmith");
	
		case 8:
			return joaat("shop_blk_barber");
	
		case 9:
			return joaat("shop_blk_butcher");
	
		case 10:
			return joaat("shop_blk_bartender");
	
		case 11:
			return joaat("SHOP_BLK_PIANIST");
	
		case 12:
			return joaat("shop_blk_photo_studio");
	
		case 13:
			return joaat("shop_blk_horse_shop");
	
		case 14:
			return joaat("shop_blk_post_office");
	
		case 15:
			return joaat("SHOP_BLK_TRAIN_STATION");
	
		case 16:
			return joaat("SHOP_BLK_MUSICIAN_GUITARIST_FIRST");
	
		case 17:
			return joaat("SHOP_BLK_MUSICIAN_GUITARIST_SECOND");
	
		case 18:
			return joaat("SHOP_BLK_MUSICIAN_GUITARIST_THIRD");
	
		case 19:
			return joaat("shop_blk_tailor");
	
		case 20:
			return joaat("shop_moonshine_still");
	
		case 21:
			return joaat("shop_moonshine_still");
	
		case 22:
			return joaat("shop_emr_fence");
	
		case 23:
			return joaat("shop_emr_general_store");
	
		case 24:
			return joaat("shop_emr_post_office");
	
		case 25:
			return joaat("shop_emr_train_station");
	
		case 26:
			return joaat("shop_lag_bait_store");
	
		case 27:
			return joaat("shop_rgg_post_office");
	
		case 28:
			return joaat("shop_rgg_train_station");
	
		case 29:
			return joaat("shop_rho_bank");
	
		case 30:
			return joaat("shop_rho_butcher");
	
		case 31:
			return joaat("shop_rho_fence");
	
		case 32:
			return joaat("shop_moonshine_still");
	
		case 33:
			return joaat("shop_rho_general_store");
	
		case 34:
			return joaat("shop_rho_gunsmith");
	
		case 35:
			return joaat("shop_rho_post_office");
	
		case 36:
			return joaat("shop_rho_bartender");
	
		case 37:
			return joaat("SHOP_RHO_PIANIST");
	
		case 38:
			return joaat("SHOP_RHO_MUSICIAN_BANJO");
	
		case 39:
			return joaat("shop_rho_train_station");
	
		case 40:
			return -305029900;
	
		case 41:
			return joaat("shop_scm_horse_shop");
	
		case 42:
			return joaat("shop_sdn_bank");
	
		case 43:
			return joaat("shop_sdn_barber");
	
		case 44:
			return joaat("shop_sdn_butcher");
	
		case 45:
			return joaat("shop_sdn_doctor");
	
		case 46:
			return joaat("shop_sdn_fence");
	
		case 47:
			return joaat("shop_moonshine_still");
	
		case 48:
			return joaat("shop_sdn_general_store");
	
		case 49:
			return joaat("shop_sdn_gunsmith");
	
		case 50:
			return joaat("shop_sdn_horse_shop");
	
		case 51:
			return joaat("shop_sdn_post_office");
	
		case 52:
			return joaat("shop_sdn_train_station");
	
		case 53:
			return joaat("shop_sdn_tailor");
	
		case 54:
			return joaat("shop_sdn_bartender");
	
		case 55:
			return joaat("SHOP_SDN_PIANIST");
	
		case 56:
			return joaat("shop_sdn_bartender_slum");
	
		case 57:
			return joaat("SHOP_SDN_PIANIST_SLUM");
	
		case 58:
			return joaat("SHOP_SDN_MUSICIAN_GUITARIST");
	
		case 59:
			return joaat("SHOP_SDN_MUSICIAN_BANJO");
	
		case 60:
			return joaat("shop_sdn_photo_studio");
	
		case 61:
			return joaat("SHOP_SDN_THEATER_MP");
	
		case 62:
			return joaat("SHOP_SDN_THEATER_MAGIC_MP");
	
		case 63:
			return joaat("shop_sdn_trapper");
	
		case 64:
			return 878376253;
	
		case 65:
			return 1388932648;
	
		case 66:
			return -2076086367;
	
		case 67:
			return 1529797091;
	
		case 68:
			return joaat("shop_str_butcher");
	
		case 69:
			return joaat("shop_str_general_store");
	
		case 70:
			return joaat("rage_p2_3") /* collision: shop_str_welcome_center */;
	
		case 71:
			return joaat("shop_str_horse_shop");
	
		case 72:
			return joaat("SHOP_STR_MUSICIAN_BANJO");
	
		case 73:
			return joaat("SHOP_STR_MUSICIAN_GUITARIST");
	
		case 74:
			return joaat("shop_str_post_office");
	
		case 75:
			return joaat("shop_str_bartender");
	
		case 76:
			return 1008537949;
	
		case 77:
			return joaat("shop_val_bank");
	
		case 78:
			return joaat("shop_val_barber");
	
		case 79:
			return joaat("shop_val_bartender");
	
		case 80:
			return joaat("SHOP_VAL_PIANIST");
	
		case 81:
			return joaat("SHOP_VAL_BARTENDER_KEANE");
	
		case 82:
			return joaat("shop_val_butcher");
	
		case 83:
			return joaat("shop_val_doctor");
	
		case 84:
			return joaat("shop_val_general_store");
	
		case 85:
			return joaat("shop_val_gunsmith");
	
		case 86:
			return joaat("shop_val_horse_shop");
	
		case 87:
			return joaat("shop_val_post_office");
	
		case 88:
			return joaat("shop_val_train_station");
	
		case 89:
			return joaat("SHOP_VAL_THEATER_MAGIC_MP");
	
		case 90:
			return joaat("shop_val_hotel");
	
		case 91:
			return joaat("shop_val_bartender_slum");
	
		case 92:
			return joaat("shop_moonshine_still");
	
		case 93:
			return joaat("SHOP_VAN_FENCE");
	
		case 94:
			return joaat("shop_van_bartender");
	
		case 95:
			return joaat("SHOP_VAN_PIANIST");
	
		case 96:
			return joaat("shop_van_horse_shop");
	
		case 97:
			return joaat("shop_van_train_station");
	
		case 98:
			return joaat("shop_van_post_office");
	
		case 99:
			return joaat("shop_wal_general_store");
	
		case 100:
			return joaat("shop_wal_train_station");
	
		case 101:
			return joaat("shop_wal_post_office");
	
		case 102:
			return joaat("shop_tbl_general_store");
	
		case 103:
			return joaat("shop_tbl_gunsmith");
	
		case 104:
			return joaat("shop_tbl_butcher");
	
		case 105:
			return joaat("shop_tbl_bartender");
	
		case 106:
			return joaat("SHOP_TBL_PIANIST");
	
		case 107:
			return joaat("shop_tbl_horse_shop");
	
		case 108:
			return joaat("shop_amd_general_store");
	
		case 109:
			return joaat("shop_amd_honor_mp");
	
		case 110:
			return joaat("shop_amd_bartender");
	
		case 111:
			return joaat("shop_amd_post_office");
	
		case 112:
			return joaat("shop_amd_train_station");
	
		case 113:
			return joaat("shop_roj_honor_mp");
	
		case 114:
			return joaat("shop_boj_honor_mp");
	
		case 115:
			return joaat("shop_moonshine_still");
	
		case 116:
			return joaat("shop_ryc_fence");
	
		case 117:
			return joaat("shop_ben_post_office");
	
		case 118:
			return joaat("shop_ben_train_station");
	
		case 119:
			return joaat("shop_dynamic");
	
		case 120:
			return joaat("shop_val_bountyhunting_mp_return");
	
		case 121:
			return joaat("shop_val_coach");
	
		case 122:
			return joaat("shop_blk_bountyhunting_mp_return");
	
		case 123:
			return joaat("shop_blk_coach");
	
		case 124:
			return joaat("shop_sdn_bountyhunting_mp_return");
	
		case 125:
			return joaat("shop_sdn_coach");
	
		case 126:
			return joaat("shop_rho_bountyhunting_mp_return");
	
		case 127:
			return joaat("shop_str_bountyhunting_mp_return");
	
		case 128:
			return joaat("shop_van_coach");
	
		case 129:
			return joaat("shop_asb_bountyhunting_mp_return");
	
		case 130:
			return joaat("shop_thl_fence");
	
		case 131:
			return joaat("shop_moonshine_still");
	
		case 132:
			return joaat("SHOP_BUT_MUSICIAN_BANJO");
	
		case 133:
			return joaat("shop_wilderness_supplies");
	
		case 134:
			return -765151559;
	
		case 135:
			return joaat("SHOP_RIO_TRAVELLING_SALESMAN");
	
		case 136:
			return joaat("SHOP_CHO_TRAVELLING_SALESMAN");
	
		case 137:
			return joaat("SHOP_HEN_TRAVELLING_SALESMAN");
	
		case 138:
			return joaat("SHOP_TAL_TRAVELLING_SALESMAN");
	
		case 139:
			return joaat("SHOP_BGV_TRAVELLING_SALESMAN");
	
		case 140:
			return joaat("SHOP_HRT_E_TRAVELLING_SALESMAN");
	
		case 141:
			return joaat("SHOP_HRT_W_TRAVELLING_SALESMAN");
	
		case 142:
			return joaat("SHOP_GRZ_TRAVELLING_SALESMAN");
	
		case 143:
			return joaat("SHOP_SCM_TRAVELLING_SALESMAN");
	
		case 144:
			return joaat("SHOP_BLU_TRAVELLING_SALESMAN");
	
		case 145:
			return joaat("SHOP_DER_TRAVELLING_SALESMAN");
	
		case 146:
			return joaat("SHOP_BBR_TRAVELLING_SALESMAN");
	
		case 147:
			return joaat("SHOP_CAMP_TRAVELLING_SALESMAN");
	
		case 148:
			return 1239556700;
	
		case 149:
			return 1968750441;
	
		case 150:
			return 317019665;
	
		case 151:
			return 1421441577;
	
		case 152:
			return joaat("shop_anywhere_handheld");
	
		case 153:
			return joaat("shop_camp_lockbox");
	
		case 154:
			return joaat("shop_camp_butchertable");
	
		case 155:
			return joaat("shop_bvh_doctor");
	
		case 156:
			return joaat("shop_bvh_general_store");
	
		case 157:
			return joaat("shop_bvh_gunsmith");
	
		case 158:
			return joaat("shop_bvh_horse_trainer");
	
		case 159:
			return joaat("shop_clm_doctor");
	
		case 160:
			return joaat("shop_clm_general_store");
	
		case 161:
			return joaat("shop_clm_gunsmith");
	
		case 162:
			return joaat("shop_clm_horse_trainer");
	
		case 163:
			return joaat("shop_clm_horse_fence");
	
		case 164:
			return joaat("shop_hso_doctor");
	
		case 165:
			return joaat("shop_hso_general_store");
	
		case 166:
			return joaat("shop_hso_gunsmith");
	
		case 167:
			return joaat("shop_hso_horse_trainer");
	
		case 168:
			return joaat("SHOP_LAK_DOCTOR");
	
		case 169:
			return joaat("SHOP_LAK_GENERAL_STORE");
	
		case 170:
			return joaat("SHOP_LAK_GUNSMITH");
	
		case 171:
			return joaat("SHOP_LAK_HORSE_TRAINER");
	
		case 172:
			return joaat("shop_shb_doctor");
	
		case 173:
			return joaat("shop_shb_general_store");
	
		case 174:
			return joaat("shop_shb_gunsmith");
	
		case 175:
			return joaat("shop_shb_horse_trainer");
	
		case 176:
			return joaat("shop_weapon_mod_store");
	
		case 177:
			return joaat("shop_clothing");
	
		case 178:
			return joaat("shop_camp_shaving");
	
		case 179:
			return joaat("shop_wardrobe");
	
		default:
		
	}

	return 0;
}

BOOL func_202(int iParam0, int iParam1, var uParam2) // Position - 0x7074
{
	var unk;

	if (func_225(iParam0, iParam1, &unk))
		func_226(&unk, iParam0, uParam2);
	else
		return false;

	return true;
}

int func_203() // Position - 0x709B
{
	return Global_1072759.f_28418[48 /*4*/].f_3;
}

BOOL func_204() // Position - 0x70B0
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_5)
		return true;

	if (Global_2883584)
		return true;

	if (Global_1048577)
		return true;

	if (!func_206(Global_1051268) && Global_1572887.f_8 & true != 0)
		return true;

	return false;
}

struct<2> func_205() // Position - 0x7108
{
	return Global_1051268;
}

BOOL func_206(var uParam0, var uParam1) // Position - 0x7116
{
	if (!func_227(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_228(uParam0))
		return false;

	return true;
}

struct<2> func_207() // Position - 0x714A
{
	if (Global_1205804.f_129 <= 0)
		return func_56(0);

	if (Global_1205804.f_130 < 0 || Global_1205804.f_131 == 0)
		return func_56(0);

	return Global_1205804[Global_1205804.f_130 /*4*/].f_1;
}

BOOL func_208(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x7195
{
	var unk;
	float num;
	float num2;

	func_229(iParam3, &unk, &num, &num2);

	if (func_230(uParam0, unk, num, num.f_1, num2))
		return true;

	return false;
}

BOOL func_209(int iParam0) // Position - 0x71C5
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_210(int iParam0) // Position - 0x71D8
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_38.f_3651[num2], offset);
}

void func_211(var uParam0, int iParam1) // Position - 0x7202
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_212(int iParam0) // Position - 0x7217
{
	if (!func_88(iParam0))
		return false;

	return SCRIPTS::DOES_THREAD_EXIST(Global_1893799[iParam0 /*3*/].f_2);
}

BOOL func_213(Hash hParam0) // Position - 0x723B
{
	return hParam0 != 0;
}

BOOL func_214(int iParam0, BOOL bParam1) // Position - 0x7247
{
	if (!func_161(iParam0))
		return false;

	return Global_1915656.f_17884[iParam0] && bParam1 != false;
}

void func_215(int iParam0, BOOL bParam1) // Position - 0x726D
{
	if (!func_161(iParam0))
		return;

	Global_1915656.f_17884[iParam0] = Global_1915656.f_17884[iParam0] || bParam1;
	return;
}

void func_216(int iParam0, BOOL bParam1) // Position - 0x729B
{
	if (!func_161(iParam0))
		return;

	Global_1915656.f_17884[iParam0] = Global_1915656.f_17884[iParam0] - Global_1915656.f_17884[iParam0] && bParam1;
	return;
}

void func_217(int iParam0) // Position - 0x72D5
{
	func_232(func_231(iParam0));
	return;
}

BOOL func_218(int iParam0) // Position - 0x72E7
{
	return iParam0 > -1 && iParam0 < 40;
}

Ped func_219(int iParam0) // Position - 0x72FD
{
	PersChar persChar;

	persChar = func_139(iParam0);

	if (persChar == 0)
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
		return 0;

	return PERSCHAR::_GET_PERSCHAR_PED_INDEX(persChar);
}

int func_220(int iParam0, var uParam1) // Position - 0x732B
{
	if (iParam0 == 2)
		return func_233(iParam0);

	return -1;
}

BOOL func_221(var uParam0, int iParam1, int iParam2) // Position - 0x7345
{
	return MISC::IS_BIT_SET(uParam0->[iParam1 / 31], iParam1 % 31);
}

int func_222() // Position - 0x737C
{
	return Global_1102813.f_3672;
}

BOOL func_223(BOOL bParam0) // Position - 0x738B
{
	return Global_1102813.f_26.f_9 && bParam0 == bParam0;
}

BOOL func_224(Hash hParam0) // Position - 0x73A1
{
	return hParam0 != 0;
}

BOOL func_225(int iParam0, int iParam1, Any* panParam2) // Position - 0x73AD
{
	*panParam2 = Global_1149432.f_7;
	panParam2->f_2 = 1351168281;
	panParam2->f_3 = func_234(iParam0);
	panParam2->f_4 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam2->f_1), panParam2);
}

void func_226(Any* panParam0, int iParam1, var uParam2) // Position - 0x73E1
{
	var unk;

	*uParam2 = iParam1;
	panParam0->f_2 = -611386243;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), panParam0);
	panParam0->f_2 = -2140901307;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk, panParam0))
		uParam2->f_2 = unk;

	panParam0->f_2 = -2140901307;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_11), panParam0);
	panParam0->f_2 = 1292053410;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_19), panParam0);
	panParam0->f_2 = 1234058424;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_3), panParam0);
	return;
}

BOOL func_227(int iParam0) // Position - 0x745B
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

int func_228(int iParam0) // Position - 0x749A
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

void func_229(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x7530
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1616.769f, 1260.714f, 205.33f };
			*uParam2 = { 150f, 150f, 184f };
			*uParam3 = 0f;
			break;
	
		case 1:
			*uParam1 = { -5837.918f, -3738.832f, -20.6f };
			*uParam2 = { 40f, 35f, 70f };
			*uParam3 = 45f;
			break;
	
		case 2:
			*uParam1 = { -4160.689f, -2836.915f, -13.674f };
			*uParam2 = { 43f, 197f, 70f };
			*uParam3 = 38f;
			break;
	
		case 3:
			*uParam1 = { -4359.861f, -3083.375f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
	
		case 4:
			*uParam1 = { -4446.777f, -2689.265f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
	
		case 5:
			*uParam1 = { -4415.84f, -2199.774f, 22.356f };
			*uParam2 = { 13f, 21f, 47f };
			*uParam3 = 34f;
			break;
	
		case 6:
			*uParam1 = { -5554.764f, -2395.945f, 7.172f };
			*uParam2 = { 21f, 21f, 47f };
			*uParam3 = 0f;
			break;
	
		case 7:
			*uParam1 = { -3447.267f, -2257.723f, 7.172f };
			*uParam2 = { 40f, 23f, 47f };
			*uParam3 = 0f;
			break;
	
		case 8:
			*uParam1 = { -1425.852f, -2676.848f, 73.224f };
			*uParam2 = { 40f, 25f, 47f };
			*uParam3 = 26f;
			break;
	
		case 9:
			*uParam1 = { -3829.438f, -3009.26f, -13.674f };
			*uParam2 = { 39f, 54f, 70f };
			*uParam3 = -46f;
			break;
	
		case 10:
			*uParam1 = { -4696.308f, -3302.809f, -13.674f };
			*uParam2 = { 104f, 57f, 70f };
			*uParam3 = 0f;
			break;
	
		case 11:
			*uParam1 = { -5064.707f, -3139.862f, -13.674f };
			*uParam2 = { 23f, 26f, 70f };
			*uParam3 = 43f;
			break;
	
		case 12:
			*uParam1 = { -1631.875f, -2856.089f, -1.645f };
			*uParam2 = { 149f, 65f, 154f };
			*uParam3 = 39f;
			break;
	
		case 13:
			*uParam1 = { -347.889f, -131.72f, -1.645f };
			*uParam2 = { 52f, 40f, 154f };
			*uParam3 = 0f;
			break;
	
		case 14:
			*uParam1 = { -2126.5f, 88.317f, 139.179f };
			*uParam2 = { 334f, 171f, 277f };
			*uParam3 = -45f;
			break;
	
		case 15:
			*uParam1 = { 1574.061f, 1121.954f, 201.6f };
			*uParam2 = { 147f, 194f, 201f };
			*uParam3 = 0f;
			break;
	
		case 16:
			*uParam1 = { -2741.641f, -2375.761f, 31.492f };
			*uParam2 = { 86f, 61f, 50f };
			*uParam3 = 11f;
			break;
	
		case 17:
			*uParam1 = { 1773.323f, -5976.334f, 71.662f };
			*uParam2 = { 34f, 34f, 100f };
			*uParam3 = -124f;
			break;
	
		case 18:
			*uParam1 = { -2022.258f, -3039.913f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
	
		case 19:
			*uParam1 = { 1394.172f, -647.735f, 72.455f };
			*uParam2 = { 19f, 18f, 100f };
			*uParam3 = 40f;
			break;
	
		case 20:
			*uParam1 = { -242.336f, 1624.373f, 212.894f };
			*uParam2 = { 98f, 52f, 120f };
			*uParam3 = 51f;
			break;
	
		case 21:
			*uParam1 = { -3543.512f, -3032.038f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
	
		case 22:
			*uParam1 = { -4348.655f, -2427.582f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
	
		case 23:
			*uParam1 = { -391.586f, 922.337f, 137.604f };
			*uParam2 = { 31f, 30f, 40f };
			*uParam3 = 0f;
			break;
	
		case 24:
			*uParam1 = { -2656.999f, 153.667f, 189.043f };
			*uParam2 = { 177f, 126f, 102f };
			*uParam3 = 52f;
			break;
	
		case 25:
			*uParam1 = { 156.109f, 425.799f, 120f };
			*uParam2 = { 249f, 112f, 120f };
			*uParam3 = -36f;
			break;
	
		case 26:
			*uParam1 = { -5868.5f, -2752.441f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
	
		case 27:
			*uParam1 = { 898.505f, -335.252f, 48.403f };
			*uParam2 = { 56f, 152f, 70f };
			*uParam3 = -36f;
			break;
	
		case 28:
			*uParam1 = { -889.947f, -171.356f, 90.537f };
			*uParam2 = { 180f, 95f, 100f };
			*uParam3 = 29f;
			break;
	
		case 29:
			*uParam1 = { 571.454f, 1968.615f, 122.93f };
			*uParam2 = { 32f, 49f, 140f };
			*uParam3 = 0f;
			break;
	
		case 30:
			*uParam1 = { -2769.681f, -3210.99f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
	
		case 31:
			*uParam1 = { -5409.034f, -3657.266f, -14.496f };
			*uParam2 = { 36f, 30f, 30f };
			*uParam3 = -24f;
			break;
	
		case 32:
			*uParam1 = { 2453.293f, 290.68f, 69.615f };
			*uParam2 = { 35f, 42f, 19f };
			*uParam3 = -4f;
			break;
	
		case 33:
			*uParam1 = { -643.042f, 278.359f, 95.5f };
			*uParam2 = { 70f, 67f, 65f };
			*uParam3 = -109f;
			break;
	
		case 34:
			*uParam1 = { -118.339f, -24.853f, 96.907f };
			*uParam2 = { 84f, 69f, 37f };
			*uParam3 = 0f;
			break;
	
		case 35:
			*uParam1 = { -2863.456f, -2723.259f, 93.195f };
			*uParam2 = { 196f, 157f, 85f };
			*uParam3 = -18f;
			break;
	
		case 36:
			*uParam1 = { -3484.814f, -3466.383f, -0.849f };
			*uParam2 = { 12f, 12f, 70f };
			*uParam3 = 0f;
			break;
	
		case 37:
			*uParam1 = { -3620.875f, -3575.926f, -0.849f };
			*uParam2 = { 126f, 86f, 70f };
			*uParam3 = -6f;
			break;
	
		case 38:
			*uParam1 = { -1382.32f, -1400.969f, 56.092f };
			*uParam2 = { 22f, 32f, 86f };
			*uParam3 = 0f;
			break;
	
		case 39:
			*uParam1 = { -713.105f, -538.091f, 59.42f };
			*uParam2 = { 160f, 22f, 100f };
			*uParam3 = 26f;
			break;
	
		case 40:
			*uParam1 = { 1083.588f, -693.478f, 48.403f };
			*uParam2 = { 45f, 46f, 70f };
			*uParam3 = 0f;
			break;
	
		case 41:
			*uParam1 = { -956.489f, 2175.227f, 307.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
	
		case 42:
			*uParam1 = { 1457.354f, -1576.261f, 95.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
	
		case 43:
			*uParam1 = { 348.488f, -669.098f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
	
		case 44:
			*uParam1 = { 2008.052f, 617.155f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
	
		case 45:
			*uParam1 = { 2099.835f, -283.012f, 42f };
			*uParam2 = { 21f, 29f, 49f };
			*uParam3 = 52f;
			break;
	
		case 46:
			*uParam1 = { -1759.31f, -224.369f, 168f };
			*uParam2 = { 21f, 29f, 116f };
			*uParam3 = 56f;
			break;
	
		case 47:
			*uParam1 = { 2142.39f, -1284.068f, 85f };
			*uParam2 = { 40f, 71f, 116f };
			*uParam3 = 70f;
			break;
	
		case 48:
			*uParam1 = { 2309.119f, -343.031f, 85f };
			*uParam2 = { 15f, 15f, 116f };
			*uParam3 = 0f;
			break;
	
		case 49:
			*uParam1 = { -1815.147f, -2405.116f, 71f };
			*uParam2 = { 25f, 25f, 50f };
			*uParam3 = 0f;
			break;
	
		case 50:
			*uParam1 = { -2269.232f, -1145.787f, 214f };
			*uParam2 = { 37f, 33f, 68f };
			*uParam3 = 0f;
			break;
	}

	return;
}

BOOL func_230(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, float fParam8) // Position - 0x7FCD
{
	float num;
	float num2;
	float num3;

	num = { uParam0 - uParam3 };
	num2 = (num * BUILTIN::COS(fParam8)) + (num.f_1 * BUILTIN::SIN(fParam8));
	num2.f_1 = (num * BUILTIN::SIN(fParam8)) - (num.f_1 * BUILTIN::COS(fParam8));
	num3 = ((num2 * num2) / (fParam6 * fParam6)) + ((num2.f_1 * num2.f_1) / (fParam7 * fParam7));
	return num3 <= 1f;
}

int func_231(int iParam0) // Position - 0x8034
{
	if (!(iParam0 > -1 && iParam0 < 180))
		return -1;

	switch (iParam0)
	{
		case 0:
		case 7:
		case 34:
		case 49:
		case 85:
		case 103:
		case 157:
		case 161:
		case 166:
		case 170:
		case 174:
			return 6;
	
		case 1:
		case 14:
		case 24:
		case 27:
		case 35:
		case 51:
		case 74:
		case 87:
		case 98:
		case 101:
		case 111:
		case 117:
			return 2;
	
		case 2:
		case 15:
		case 25:
		case 28:
		case 39:
		case 52:
		case 88:
		case 97:
		case 100:
		case 112:
		case 118:
			return 1;
	
		case 3:
		case 4:
		case 40:
		case 63:
		case 76:
		case 148:
			return 15;
	
		case 5:
		case 29:
		case 42:
		case 77:
			return 12;
	
		case 6:
		case 23:
		case 33:
		case 48:
		case 69:
		case 84:
		case 99:
		case 102:
		case 108:
		case 156:
		case 160:
		case 165:
		case 169:
		case 173:
			return 3;
	
		case 8:
		case 43:
		case 78:
			return 8;
	
		case 9:
		case 30:
		case 44:
		case 68:
		case 82:
		case 104:
			return 10;
	
		case 10:
		case 36:
		case 54:
		case 56:
		case 75:
		case 79:
		case 81:
		case 91:
		case 94:
		case 105:
		case 110:
			return 30;
	
		case 11:
		case 37:
		case 55:
		case 57:
		case 80:
		case 95:
		case 106:
			return 31;
	
		case 12:
		case 60:
			return 18;
	
		case 13:
		case 41:
		case 50:
		case 71:
		case 86:
		case 96:
		case 107:
			return 9;
	
		case 16:
		case 17:
		case 18:
		case 38:
		case 58:
		case 59:
		case 72:
		case 73:
		case 132:
			return 32;
	
		case 19:
		case 53:
			return 7;
	
		case 20:
			return 33;
	
		case 21:
		case 32:
		case 47:
		case 92:
		case 115:
		case 131:
			return 33;
	
		case 22:
		case 31:
		case 46:
		case 93:
		case 116:
		case 130:
			return 4;
	
		case 26:
			return 14;
	
		case 45:
		case 83:
		case 155:
		case 159:
		case 164:
		case 168:
		case 172:
			return 0;
	
		case 61:
		case 62:
		case 89:
			return 36;
	
		case 64:
		case 65:
		case 66:
		case 67:
			return 16;
	
		case 70:
		case 90:
			return 17;
	
		case 109:
		case 113:
		case 114:
			return 35;
	
		case 119:
			return 11;
	
		case 120:
		case 122:
		case 124:
		case 126:
		case 127:
		case 129:
			return 25;
	
		case 121:
		case 123:
		case 125:
		case 128:
			return 26;
	
		case 133:
			return 27;
	
		case 134:
			return 37;
	
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
			return 38;
	
		case 149:
		case 150:
		case 151:
			return 39;
	
		case 152:
			return 34;
	
		case 153:
			return 28;
	
		case 154:
			return 29;
	
		case 158:
		case 162:
		case 167:
		case 171:
		case 175:
			return 23;
	
		case 163:
			return 5;
	
		case 176:
			return 19;
	
		case 177:
			return 20;
	
		case 178:
			return 21;
	
		case 179:
			return 20;
	
		default:
		
	}

	return -1;
}

void func_232(int iParam0) // Position - 0x8551
{
	Global_1915656.f_18247 = iParam0;
	return;
}

int func_233(var uParam0, var uParam1) // Position - 0x8562
{
	var unk;

	unk.f_1 = -1;
	unk.f_2 = -1;

	if (func_235(uParam0, &unk))
		return unk.f_1;

	return -1;
}

int func_234(int iParam0) // Position - 0x858E
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case -3:
			num = 1300413597;
			break;
	
		case -2:
			num = joaat("GOLD");
			break;
	
		case 0:
			num = joaat("Challenge");
			break;
	
		case 1:
			num = joaat("feature");
			break;
	
		case 2:
			num = joaat("MISSION_STORY");
			break;
	
		case 3:
			num = joaat("MISSION_PROCEDURAL");
			break;
	
		case 4:
			num = joaat("MISSION_FETCH");
			break;
	
		case 5:
			num = joaat("MISSION_MINIGAME");
			break;
	
		case 6:
			num = joaat("MISSION_FREE_MODE_EVENT");
			break;
	
		case 7:
			num = joaat("MISSION_UGC");
			break;
	
		case 8:
			num = joaat("MISSION_BEAT");
			break;
	
		case 9:
			num = joaat("Property");
			break;
	
		case 10:
			num = joaat("Recipe");
			break;
	
		case 11:
			num = joaat("TITLE");
			break;
	
		case 12:
			num = joaat("SHOP");
			break;
	
		case 13:
			num = joaat("GFH_GIVERS");
			break;
	
		case 14:
			num = joaat("GFH_LOCATIONS");
			break;
	
		case 15:
			num = 1332629624;
			break;
	
		case 16:
			num = 1746212499;
			break;
	
		case 17:
			num = joaat("GVO_UNLOCKS");
			break;
	
		case 18:
			num = 1151893103;
			break;
	
		case 19:
			num = -312924468;
			break;
	}

	return num;
}

BOOL func_235(int iParam0, var uParam1, Any* panParam2) // Position - 0x8703
{
	if (!func_206(iParam0))
		return false;

	func_236(panParam2);

	switch (iParam0)
	{
		case 2:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 3:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_602[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 4:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_2104[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 5:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_12606[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 6:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_12908[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 7:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_15910[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 8:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_16512[iParam0.f_1 /*3*/], 3);
			return true;
	
		default:
		
	}

	return false;
}

void func_236(Any* panParam0) // Position - 0x880E
{
	*panParam0 = 0;
	panParam0->f_1 = -1;
	panParam0->f_2 = -1;
	return;
}

