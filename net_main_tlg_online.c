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
	char* sLocal_28 = 0;
	char* sLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
#endregion

void main() // Position - 0x0
{
	int gameTimer;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	sLocal_28 = "props_misc@campfires@5_logs";
	sLocal_29 = "Script_PropCampfire";
	uLocal_31 = uLocal_31;
	func_1("START THREAD");
	gameTimer = MISC::GET_GAME_TIMER();
	func_2();
	func_3();
	func_1("NETWORK_CACHE_MATCHMAKING_GLOBAL_DATA - before");

	if (func_4(33554432))
	{
		func_5(33554432);
		func_6();
	}

	func_1("NETWORK_CACHE_MATCHMAKING_GLOBAL_DATA - after");
	func_1("Main loop start");

	if (!func_7(false, false))
	{
		func_8();
		func_9();
	}

	while (!func_7(false, false))
	{
		func_10();
	
		switch (func_11(PLAYER::PLAYER_ID()))
		{
			case 0:
				if (func_12() > 0)
				{
					if (func_13() && func_14())
					{
						func_15();
					}
					else if (Global_1572887.f_72.f_9 == -1 && Global_1572887.f_72.f_13 != 3)
					{
						func_16();
					}
					else if (Global_1572887.f_72.f_9 == -1 && Global_1572887.f_72.f_13 == 3)
					{
						func_15();
					}
					else if (func_17())
					{
						func_16();
					}
					else if (!func_18(Global_1572887.f_72.f_11))
					{
						func_15();
					}
					else
					{
						switch (func_19(Global_1572887.f_72.f_11))
						{
							case joaat("mpfbla"):
							case joaat("mpcval"):
							case joaat("mpibla"):
							case joaat("mpfval"):
							case joaat("mpiol2"):
							case joaat("mpcrho"):
							case joaat("mpfol2"):
							case joaat("mpirho"):
							case joaat("mpival"):
							case joaat("mpfrho"):
							case joaat("mpcol2"):
							case joaat("mpcbla"):
								func_16();
								break;
						
							default:
								func_15();
								break;
						}
					}
				
					func_20(true);
				
					if (!func_21())
						func_22(1);
					else
						func_22(2);
				}
				break;
		
			case 1:
				if (func_23() != joaat("freeroam"))
				{
				}
				else
				{
					func_24();
				}
			
				func_22(2);
				break;
		
			case 2:
				if (func_25())
					func_22(3);
				break;
		
			case 3:
				if (func_21())
					func_22(8);
				else if (func_23() == joaat("Series") && !func_21())
					func_22(7);
				else if (!func_26())
					func_22(7);
				else
					func_22(4);
				break;
		
			case 4:
				switch (func_27(uLocal_32))
				{
					case 0:
						break;
				
					case 1:
						break;
				
					case 2:
						break;
				
					case 3:
						func_22(6);
						break;
				
					case 4:
						func_28(32);
						break;
				
					case 5:
						func_22(6);
						break;
				}
				break;
		
			case 6:
				if (func_13())
					if (func_29())
						func_22(7);
				else
					func_22(7);
				break;
		
			case 7:
				func_30();
				func_22(8);
				break;
		
			case 8:
				func_31();
				func_32();
				func_33();
				func_34(true);
				func_22(9);
				break;
		
			case 9:
				func_35(&uLocal_30);
				func_36();
				func_37();
				break;
		
			case 10:
				func_38();
				func_39();
			
				if (NETWORK::NETWORK_CAN_SESSION_END() && NETWORK::NETWORK_IS_SESSION_STARTED())
				{
					PLAYER::FORCE_CLEANUP(523);
					NETWORK::NETWORK_SESSION_LEAVE_SESSION();
				}
				break;
		
			default:
				break;
		}
	
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_12())
			{
				case 0:
					func_40(9);
					break;
			
				case 9:
					func_41();
					func_42("MP_GAME_STATE_MAIN_UPDATE", 8);
					break;
			
				case 10:
					break;
			}
		}
	
		BUILTIN::WAIT(0);
	}

	func_38();
	func_39();
	func_43();

	while (func_44())
	{
		BUILTIN::WAIT(0);
	}

	while (!SCRIPTS::HAVE_ALL_CHILD_SCRIPTS_TERMINATED(1440))
	{
		BUILTIN::WAIT(0);
	}

	func_45();
	return;
}

void func_1(char* sParam0) // Position - 0x39D
{
	int systemTime;
	int frameCount;

	systemTime = MISC::GET_SYSTEM_TIME();
	frameCount = MISC::GET_FRAME_COUNT();
	Global_1572887.f_2 = MISC::GET_FRAME_COUNT();
	Global_1572887.f_3 = MISC::GET_SYSTEM_TIME();
	return;
}

void func_2() // Position - 0x3C5
{
	SCRIPTS::REQUEST_SCRIPT("net_train_manager");
	SCRIPTS::REQUEST_SCRIPT("net_fme_manager");
	SCRIPTS::REQUEST_SCRIPT("net_gangfeud_manager");
	SCRIPTS::REQUEST_SCRIPT("net_ugc_global_loader");
	SCRIPTS::REQUEST_SCRIPT("net_camp_manager");
	SCRIPTS::REQUEST_SCRIPT("net_camp_dog_manager");
	SCRIPTS::REQUEST_SCRIPT("net_player_camp_manager");
	SCRIPTS::REQUEST_SCRIPT("net_ace_thread_manager");
	SCRIPTS::REQUEST_SCRIPT("net_fetch_manager");
	SCRIPTS::REQUEST_SCRIPT("net_crew_manager");
	SCRIPTS::REQUEST_SCRIPT("net_beat_manager");
	SCRIPTS::REQUEST_SCRIPT("net_scan_manager");
	return;
}

void func_3() // Position - 0x429
{
	func_1("NET_MAIN_ONLINE__PROCESS_PRE_GAME - start");
	func_46();
	func_47();
	func_48();
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
	func_49();
	func_50();
	func_1("PROCESS_PRE_GAME_BROADCAST_ARRAY_REGISTRATION - before");
	func_51();
	func_1("PROCESS_PRE_GAME_BROADCAST_ARRAY_REGISTRATION - after");
	func_52(false);
	func_1("WAIT_FOR_FIRST_NETWORK_BROADCAST");
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::_0xB711EB4BC8D06013();

	if (!func_21())
		func_53();

	func_22(0);
	func_54();
	Global_1051645.f_13 = 0;
	func_55();
	Global_1051608.f_36 = 0;
	func_1("NET_MAIN_ONLINE__PROCESS_PRE_GAME - end");
	return;
}

BOOL func_4(BOOL bParam0) // Position - 0x4B2
{
	return Global_1572887.f_72.f_15 && bParam0 != false;
}

void func_5(int iParam0) // Position - 0x4C7
{
	func_56(&(Global_1572887.f_72.f_15), iParam0);
	return;
}

void func_6() // Position - 0x4DD
{
	Player player;

	if (func_57() == -1)
		return;

	player = Global_1295666;

	if (func_58(Global_1572887.f_8, 1))
		func_59(&(Global_1056554[player /*491*/].f_204.f_10), 4);
	else
		func_56(&(Global_1056554[player /*491*/].f_204.f_10), 4);

	Global_1056554[player /*491*/].f_204 = Global_1572887.f_72;
	Global_1056554[player /*491*/].f_204.f_1 = Global_1572887.f_72.f_9;
	Global_1056554[player /*491*/].f_204.f_2 = Global_1572887.f_72.f_10;
	Global_1056554[player /*491*/].f_204.f_3 = { Global_1572887.f_72.f_11 };
	Global_1056554[player /*491*/].f_204.f_8 = Global_1572887.f_72.f_13;
	Global_1056554[player /*491*/].f_204.f_5 = { Global_1572887.f_260 };
	Global_1056554[player /*491*/].f_204.f_9 = Global_1572887.f_72.f_39;

	if (func_4(1024))
		func_59(&(Global_1056554[player /*491*/].f_204.f_10), 2);
	else
		func_56(&(Global_1056554[player /*491*/].f_204.f_10), 2);

	return;
}

BOOL func_7(BOOL bParam0, BOOL bParam1) // Position - 0x5F2
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

void func_8() // Position - 0x6D2
{
	func_60();
	func_61(-1, false, true);
	func_62();

	if (func_63(joaat("bg_custom_1")) || func_63(joaat("bg_custom_2")) || func_63(joaat("bg_custom_3")))
		Global_1102813.f_3969.f_5 = 1;

	return;
}

void func_9() // Position - 0x71E
{
	Global_1072759.f_4 = 1;
	Global_1051645.f_42 = MISC::GET_GAME_TIMER() - Global_1051645.f_40;
	return;
}

void func_10() // Position - 0x73E
{
	func_64();

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
		if (Global_1056554[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*491*/] < 8)
			PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);

	func_60();
	func_65();
	return;
}

int func_11(Player plParam0) // Position - 0x772
{
	if (plParam0 >= 0)
		return Global_1056554[plParam0 /*491*/];

	return -1;
}

int func_12() // Position - 0x78D
{
	return Global_1072758;
}

BOOL func_13() // Position - 0x799
{
	return Global_1572887.f_196 > 0;
}

BOOL func_14() // Position - 0x7A9
{
	int num;
	Player Plr;
	Player player;

	num.f_1 = -1;
	num.f_2 = -1;
	num.f_3 = -1;
	num.f_3.f_1 = -1;
	num = { func_66() };
	Plr = func_67();

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Plr))
	{
		player = Plr;
		num.f_10 = func_68(player);
		num = func_69(player);
		num.f_1 = func_70(player);
		num.f_2 = func_71(player);
		num.f_3 = { func_72(player) };
	}

	if (num.f_3 == 6)
		return 0;

	if (!func_58(num.f_10, 4))
		return 0;

	switch (num)
	{
		case 0:
			if (num.f_1 >= 34 && num.f_1 <= 42)
				return 0;
			break;
	
		case 2:
			if (func_73(Plr, 4096))
				return 0;
			break;
	}

	return 1;
}

void func_15() // Position - 0x87E
{
	Global_1051645.f_15 = 1;
	return;
}

void func_16() // Position - 0x88D
{
	Global_1051645.f_15 = 0;
	return;
}

BOOL func_17() // Position - 0x89C
{
	if (func_74() != 0)
		return false;

	if (Global_1572887.f_72.f_9 >= 5 && Global_1572887.f_72.f_9 <= 8)
		return false;

	return true;
}

BOOL func_18(var uParam0, var uParam1) // Position - 0x8D2
{
	if (!func_75(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_76(uParam0))
		return false;

	return true;
}

Hash func_19(var uParam0, var uParam1) // Position - 0x906
{
	int num;

	num.f_1 = -1;
	num.f_2 = -1;

	if (func_77(uParam0, &num))
		return num;

	return 0;
}

void func_20(BOOL bParam0) // Position - 0x930
{
	if (func_78())
	{
		if (!Global_1051645.f_15 || Global_1048577 || Global_1048581 && !Global_1049295 && func_26())
		{
			func_79();
			func_80(bParam0);
			func_81(16);
		}
		else if (Global_1049295)
		{
			if (func_82(15))
			{
				func_81(15);
				func_83(16);
			}
		}
	}
	else
	{
		func_85(func_84() && func_82(16));
	
		if (func_82(16))
			func_81(16);
	}

	return;
}

BOOL func_21() // Position - 0x9C4
{
	return !Global_1572887.f_10;
}

void func_22(int iParam0) // Position - 0x9D3
{
	int num;

	num = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (num == 255 || num >= 32)
	{
	}
	else
	{
		Global_1056554[num /*491*/] = iParam0;
		Global_1056554[num /*491*/].f_1 = Global_1056554[num /*491*/].f_1 + 1;
		func_1(func_86(Global_1056554[num /*491*/]));
	}

	return;
}

int func_23() // Position - 0xA2B
{
	return Global_1572887.f_300;
}

void func_24() // Position - 0xA3A
{
	if (!Global_1572887.f_7)
	{
		Global_1572887.f_7 = 1;
		TELEMETRY::ANALYTICS_PLAYTIME_FREEMODE_START();
	}

	return;
}

BOOL func_25() // Position - 0xA57
{
	BOOL flag;

	flag = false;

	if (func_87(true))
	{
		if (func_88("net_train_manager", 3, 1024))
			func_59(&(Global_1051645.f_13), 1);
	
		flag = true;
	}

	if (func_87(2))
	{
		if (func_88("net_fme_manager", 4, 1024))
			func_59(&(Global_1051645.f_13), 2);
	
		flag = true;
	}

	if (func_87(32))
	{
		if (func_88("net_gangfeud_manager", 8, 1024))
			func_59(&(Global_1051645.f_13), 32);
	
		flag = true;
	}

	if (func_87(4))
	{
		if (func_88("net_ugc_global_loader", 5, 3088))
			func_59(&(Global_1051645.f_13), 4);
	
		flag = true;
	}

	if (func_87(64))
	{
		if (func_88("net_camp_manager", 9, 1024))
			func_59(&(Global_1051645.f_13), 64);
	
		flag = true;
	}

	if (func_87(128))
	{
		if (func_88("net_camp_dog_manager", 10, 1024))
			func_59(&(Global_1051645.f_13), 128);
	
		flag = true;
	}

	if (func_87(16384))
	{
		if (func_88("net_player_camp_manager", 11, 1024))
			func_59(&(Global_1051645.f_13), 16384);
	
		flag = true;
	}

	if (func_87(256))
	{
		if (func_88("net_ace_thread_manager", 12, 1024))
			func_59(&(Global_1051645.f_13), 256);
	
		flag = true;
	}

	if (func_87(512))
	{
		if (func_88("net_fetch_manager", 13, FRIEND))
			func_59(&(Global_1051645.f_13), 512);
	
		flag = true;
	}

	if (func_87(1024))
	{
		if (func_88("net_crew_manager", 14, 1024))
			func_59(&(Global_1051645.f_13), 1024);
	
		flag = true;
	}

	if (func_87(2048))
	{
		if (func_88("net_beat_manager", 15, 3500))
			func_59(&(Global_1051645.f_13), 2048);
	
		flag = true;
	}

	if (func_87(4096))
	{
		if (func_88("net_scan_manager", 16, MINI))
			func_59(&(Global_1051645.f_13), 4096);
	
		flag = true;
	}

	if (func_87(8192))
	{
		if (func_88("net_moonshine_manager", 17, 1024))
			func_59(&(Global_1051645.f_13), 8192);
	
		flag = true;
	}

	if (func_87(32768))
	{
		if (func_88("flow_controller", 19, 1024))
			func_59(&(Global_1051645.f_13), 32768);
	
		flag = true;
	}

	if (func_87(65536))
	{
		if (func_88("net_stable_manager", 18, 1024))
			func_59(&(Global_1051645.f_13), 65536);
	
		flag = true;
	}

	if (flag)
		return false;

	return true;
}

BOOL func_26() // Position - 0xCCD
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

int func_27(var uParam0) // Position - 0xCE1
{
	int uniqueIntForPlayer;
	var unk;

	uniqueIntForPlayer = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(PLAYER::PLAYER_ID());

	switch (Global_1142424.f_2018)
	{
		case 1:
			if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("FEATURE_POSSE_CAMP")))
				break;
		
			unk = { func_89() };
		
			if (unk.f_2 != 0)
			{
				if (func_90(64))
					unk.f_2 = -2;
			
				if (func_91(Global_1295666.f_10))
					func_92(unk);
				else
					func_92(unk);
			
				func_93(2);
			}
			else
			{
				func_93(4);
			}
			break;
	
		case 2:
			if (Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_3 != -1 && Global_1141332.f_865[uniqueIntForPlayer /*7*/].f_4 == Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_3 && Global_1141332.f_865[uniqueIntForPlayer /*7*/] == 6)
			{
				func_93(3);
				return 3;
			}
			break;
	
		case 4:
			func_93(3);
			break;
	}

	if (Global_1142424.f_2041 == 0)
		Global_1142424.f_2041 = MISC::GET_SYSTEM_TIME();
	else if (MISC::GET_SYSTEM_TIME() - Global_1142424.f_2041 >= Global_1901671.f_604.f_2)
		return 5;

	return func_94();
}

void func_28(int iParam0) // Position - 0xE07
{
	func_95(&(Global_1147183.f_8), iParam0);
	return;
}

BOOL func_29() // Position - 0xE1B
{
	return Global_1572887.f_196 > 19;
}

void func_30() // Position - 0xE2C
{
	float num;
	var unk;
	float num2;

	num = (float)MISC::GET_RANDOM_INT_IN_RANGE(0, 359) * 1f;
	func_96(0);
	Global_1102813.f_3594 = 1;

	if (_IS_NULL_VECTOR(Global_17418.f_55.f_1) || func_98(Global_17418.f_55.f_1) == -1 || func_98(Global_17418.f_55.f_1) == 8 || func_99(Global_17418.f_55) == 8)
	{
		if (!func_100(&(Global_17418.f_55.f_1), &num))
		{
			Global_17418.f_55.f_1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
			num = (float)MISC::GET_RANDOM_INT_IN_RANGE(0, 359) * 1f;
		}
	
		Global_17418.f_55 = func_101(Global_17418.f_55.f_1, true);
	}

	if (func_23() == joaat("Series"))
	{
		func_102(true);
		func_103(true);
		func_104(122, false);
	}
	else if (func_26())
	{
		func_105(true, 1);
	
		if (NETWORK::NETWORK_IS_PLATFORM_INVITE_PENDING() || func_13())
		{
			func_106(64);
			func_106(256);
		}
		else if (Global_1572887.f_300.f_6 != -1)
		{
			func_104(Global_1572887.f_300.f_6, false);
			func_107();
		}
		else if (Global_1572887.f_300.f_7 != -1)
		{
			func_104(Global_1102813.f_25, false);
			func_107();
		}
		else if (Global_1572887.f_300.f_8 != -1)
		{
			func_104(Global_1102813.f_25, false);
			func_107();
		}
		else if (func_63(joaat("bg_custom_1")) || func_63(joaat("bg_custom_2")) || func_63(joaat("bg_custom_3")))
		{
			func_108(&(Global_1102813.f_3969.f_6), &(Global_1102813.f_3969.f_36), 1, true, 1);
		
			if (Global_1102813.f_3969.f_45)
				func_109();
		
			if (Global_1102813.f_3969.f_46)
				func_110(true, false);
		
			Global_1102813.f_3969.f_5 = 0;
			Global_1102813.f_3969 = 0;
		}
		else if (func_63(joaat("COUPON")))
		{
			func_111(true);
			func_112();
			func_105(false, -1);
			func_113(false);
		}
		else if (func_63(joaat("hub")))
		{
			func_114(true);
			func_112();
			func_105(false, -1);
			func_113(false);
		}
		else if (func_63(413241879))
		{
			func_115(true);
			func_112();
			func_105(false, -1);
			func_113(false);
		}
		else if (func_63(928971890))
		{
			func_116(true);
			func_112();
			func_105(false, -1);
			func_113(false);
		}
		else if (func_63(joaat("camp")))
		{
			func_112();
			func_105(false, -1);
			func_113(false);
		}
		else if (func_63(1735278055))
		{
			func_117();
			func_105(false, -1);
			func_113(false);
		}
		else if (func_63(-283069378))
		{
			func_118(&unk);
			func_119(&num2);
			unk.f_17.f_9 = joaat("volSphere");
			unk.f_17.f_6 = { func_120() };
			unk.f_17 = { 30f, 30f, 30f };
			unk.f_16 = 1;
			unk.f_6 = { unk.f_17 };
			unk.f_6 = { 1.5f, 1.5f, 5f };
			unk.f_1 = { unk.f_17.f_6 };
			unk.f_5 = 2;
			num2.f_5 = 1;
		
			if (!func_121(unk.f_17.f_6, &(num2.f_6), &num2))
			{
				num2.f_6 = { Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
				num2 = (float)MISC::GET_RANDOM_INT_IN_RANGE(0, 359) * 1f;
			}
		
			func_108(&unk, &num2, 1, true, 1);
			func_109();
		}
		else if (func_63(joaat("random_region")))
		{
			func_104(Global_1102813.f_25, false);
			func_107();
		}
		else if (func_63(joaat("last_region")))
		{
			func_104(Global_17418.f_55, false);
			func_107();
		}
		else if (func_63(joaat("last_location")))
		{
			func_122(Global_17418.f_55.f_1, num, -1f, 75f, true, 1, 1);
			func_107();
		}
		else if (func_63(joaat("open_posse")) && func_123())
		{
			func_124();
		}
		else if (func_63(joaat("near_posse")) && func_123())
		{
			func_124();
		}
		else if (func_63(joaat("last_mission")))
		{
			if (BUILTIN::VDIST(func_125(1), 0f, 0f, 0f) < 2f)
			{
				func_122(Global_17418.f_55.f_1, num, -1f, 75f, true, 1, 1);
			}
			else
			{
				func_118(&unk);
				func_119(&num2);
				unk.f_17.f_9 = joaat("volSphere");
				unk.f_17.f_6 = { func_125(1) };
				unk.f_17 = { 30f, 30f, 50f };
				unk.f_16 = 1;
				unk.f_6 = { unk.f_17 };
				unk.f_6 = { 1.5f, 1.5f, 5f };
				unk.f_1 = { unk.f_17.f_6 };
				unk.f_5 = 2;
				num2.f_5 = 1;
			
				if (!func_121(unk.f_17.f_6, &(num2.f_6), &num2))
				{
					num2.f_6 = { Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
					num2 = (float)MISC::GET_RANDOM_INT_IN_RANGE(0, 359) * 1f;
				}
			
				func_108(&unk, &num2, 1, true, 1);
				func_109();
			}
		}
		else if (func_63(joaat("random_poker")))
		{
			func_118(&unk);
			func_119(&num2);
			unk.f_17.f_9 = joaat("volSphere");
			unk.f_17.f_6 = { func_126(Global_17418.f_55.f_1, -471827042) };
			unk.f_17 = { 30f, 30f, 30f };
			unk.f_16 = 1;
			unk.f_6 = { unk.f_17 };
			unk.f_6 = { 1.5f, 1.5f, 5f };
			unk.f_1 = { unk.f_17.f_6 };
			unk.f_5 = 2;
			num2.f_5 = 1;
		
			if (!func_121(unk.f_17.f_6, &(num2.f_6), &num2))
			{
				num2.f_6 = { Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
				num2 = (float)MISC::GET_RANDOM_INT_IN_RANGE(0, 359) * 1f;
			}
		
			func_108(&unk, &num2, 1, true, 1);
			func_109();
		}
		else if (func_63(joaat("trade_1")))
		{
			func_118(&unk);
			func_119(&num2);
			unk.f_17.f_9 = joaat("volSphere");
		
			if (func_127(3, &(unk.f_17.f_6)))
			{
			}
			else
			{
				unk.f_17.f_6 = { -1723.0731f, -430.4347f, 151.0119f };
			}
		
			unk.f_17 = { 50f, 50f, 30f };
			unk.f_16 = 1;
			unk.f_6 = { unk.f_17 };
			unk.f_6 = { 20f, 20f, 5f };
			unk.f_1 = { unk.f_17.f_6 };
			unk.f_5 = 2;
			num2.f_5 = 1;
		
			if (!func_121(unk.f_17.f_6, &(num2.f_6), &num2))
			{
				num2.f_6 = { Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
				num2 = (float)MISC::GET_RANDOM_INT_IN_RANGE(0, 359) * 1f;
			}
		
			func_108(&unk, &num2, 1, true, 1);
			func_109();
		}
		else if (func_63(joaat("trade_2")))
		{
			func_118(&unk);
			func_119(&num2);
			unk.f_17.f_9 = joaat("volSphere");
		
			if (func_127(4, &(unk.f_17.f_6)))
			{
			}
			else
			{
				unk.f_17.f_6 = { -1723.0731f, -430.4347f, 151.0119f };
			}
		
			unk.f_17 = { 50f, 50f, 30f };
			unk.f_16 = 1;
			unk.f_6 = { unk.f_17 };
			unk.f_6 = { 20f, 20f, 5f };
			unk.f_1 = { unk.f_17.f_6 };
			unk.f_5 = 2;
			num2.f_5 = 1;
		
			if (!func_121(unk.f_17.f_6, &(num2.f_6), &num2))
			{
				num2.f_6 = { Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
				num2 = (float)MISC::GET_RANDOM_INT_IN_RANGE(0, 359) * 1f;
			}
		
			func_108(&unk, &num2, 1, true, 1);
			func_109();
		}
		else if (func_63(joaat("trade_3")))
		{
			func_118(&unk);
			func_119(&num2);
			unk.f_17.f_9 = joaat("volSphere");
		
			if (NETWORK::_0xD7D0DF27CB1765B5(1))
			{
				unk.f_17.f_6 = { Global_1102813.f_4076 };
			}
			else if (func_127(2, &(unk.f_17.f_6)))
			{
			}
			else
			{
				unk.f_17.f_6 = { -190.3148f, 639.5237f, 112.2634f };
			}
		
			unk.f_17 = { 50f, 50f, 30f };
			unk.f_16 = 1;
			unk.f_6 = { unk.f_17 };
			unk.f_6 = { 20f, 20f, 5f };
			unk.f_1 = { unk.f_17.f_6 };
			unk.f_5 = 2;
			num2.f_5 = 1;
		
			if (!func_121(unk.f_17.f_6, &(num2.f_6), &num2))
			{
				num2.f_6 = { Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
				num2 = (float)MISC::GET_RANDOM_INT_IN_RANGE(0, 359) * 1f;
			}
		
			func_108(&unk, &num2, 1, true, 1);
			func_109();
		}
		else if (func_63(joaat("trade_4")))
		{
			func_118(&unk);
		
			if (func_127(5, &(unk.f_17.f_6)))
			{
				func_119(&num2);
				unk.f_17.f_9 = joaat("volSphere");
				unk.f_17 = { 50f, 50f, 30f };
				unk.f_16 = 1;
				unk.f_6 = { unk.f_17 };
				unk.f_6 = { 1.5f, 1.5f, 5f };
				unk.f_1 = { unk.f_17.f_6 };
				unk.f_5 = 2;
				num2.f_5 = 1;
			
				if (!func_121(unk.f_17.f_6, &(num2.f_6), &num2))
				{
					num2.f_6 = { Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
					num2 = (float)MISC::GET_RANDOM_INT_IN_RANGE(0, 359) * 1f;
				}
			
				func_108(&unk, &num2, 1, true, 1);
				func_109();
			}
			else
			{
				func_118(&unk);
				func_122(Global_17418.f_55.f_1, num, -1f, 75f, true, 1, 1);
				func_107();
				func_128(904, true);
			}
		}
		else if (func_63(joaat("trade_5")))
		{
			func_118(&unk);
			func_119(&num2);
			unk.f_17.f_9 = joaat("volSphere");
		
			if (func_127(6, &(unk.f_17.f_6)))
			{
			}
			else
			{
				unk.f_17.f_6 = { -190.3148f, 639.5237f, 112.2634f };
			}
		
			unk.f_17 = { 50f, 50f, 30f };
			unk.f_16 = 1;
			unk.f_6 = { unk.f_17 };
			unk.f_6 = { 1.5f, 1.5f, 5f };
			unk.f_1 = { unk.f_17.f_6 };
			unk.f_5 = 2;
			num2.f_5 = 1;
		
			if (!func_121(unk.f_17.f_6, &(num2.f_6), &num2))
			{
				num2.f_6 = { Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
				num2 = (float)MISC::GET_RANDOM_INT_IN_RANGE(0, 359) * 1f;
			}
		
			func_108(&unk, &num2, 1, true, 1);
			func_109();
		}
		else if (func_63(joaat("trade_6")))
		{
			func_118(&unk);
			func_119(&num2);
			unk.f_17.f_9 = joaat("volSphere");
		
			if (func_127(7, &(unk.f_17.f_6)))
			{
			}
			else
			{
				unk.f_17.f_6 = { -190.3148f, 639.5237f, 112.2634f };
			}
		
			unk.f_17 = { 50f, 50f, 30f };
			unk.f_16 = 1;
			unk.f_6 = { unk.f_17 };
			unk.f_6 = { 20f, 20f, 5f };
			unk.f_1 = { unk.f_17.f_6 };
			unk.f_5 = 2;
			num2.f_5 = 1;
		
			if (!func_121(unk.f_17.f_6, &(num2.f_6), &num2))
			{
				num2.f_6 = { Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
				num2 = (float)MISC::GET_RANDOM_INT_IN_RANGE(0, 359) * 1f;
			}
		
			func_108(&unk, &num2, 1, true, 1);
			func_109();
		}
		else if (func_63(joaat("trade_7")))
		{
			func_118(&unk);
			func_119(&num2);
			unk.f_17.f_9 = joaat("volSphere");
		
			if (func_127(8, &(unk.f_17.f_6)))
			{
			}
			else
			{
				unk.f_17.f_6 = { -190.3148f, 639.5237f, 112.2634f };
			}
		
			unk.f_17 = { 50f, 50f, 30f };
			unk.f_16 = 1;
			unk.f_6 = { unk.f_17 };
			unk.f_6 = { 1.5f, 1.5f, 5f };
			unk.f_1 = { unk.f_17.f_6 };
			unk.f_5 = 2;
			num2.f_5 = 1;
		
			if (!func_121(unk.f_17.f_6, &(num2.f_6), &num2))
			{
				num2.f_6 = { Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
				num2 = (float)MISC::GET_RANDOM_INT_IN_RANGE(0, 359) * 1f;
			}
		
			func_108(&unk, &num2, 1, true, 1);
			func_109();
		}
		else if (func_63(joaat("cchar")))
		{
			func_102(true);
			func_129(true);
			func_130(-561.4f, -3782.6f, 237.6f, 166.8f, true);
			Global_1072759.f_28760 = Global_1072759.f_28760 | 1;
		}
		else
		{
			func_122(Global_17418.f_55.f_1, num, -1f, 75f, true, 1, 1);
		}
	
		Global_1056554[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*491*/].f_481 = 1;
	}
	else if (!func_131())
	{
		func_102(true);
		func_129(true);
		func_122(func_132(33, true), 0f, -1082130432, -1082130432, true, 1, 1);
	}
	else if (!func_133())
	{
		func_102(true);
		func_129(true);
		func_112();
	}
	else
	{
		func_102(true);
		func_129(true);
		func_122(func_132(func_134(Global_1072759.f_28295.f_2), true), 0f, -1082130432, -1082130432, true, 1, 1);
	}

	Global_1056554[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*491*/].f_482 = NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(-1);
	return;
}

void func_31() // Position - 0x1BCE
{
	func_135();
	func_136();
	NETWORK::_NETWORK_AUTO_SESSION_SET_ALLOWED_TO_SPLIT(true);

	if (func_21())
		return;

	if (func_137())
		return;

	NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(false);
	func_138(-1);
	func_139();
	UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
	UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
	func_140(3);
	func_141();
	func_142();
	func_143();
	func_144();
	SCRIPTS::_0x11B0A0B282FA9B10(true);
	SCRIPTS::_0x6F700A4BF7C3331B(true);
	SCRIPTS::_0xF9E951A1E5517C06();
	STATS::_0x218F7710A139D012();
	func_145();
	func_146();
	Global_1072759.f_21626.f_262 = 1;
	Global_1572887.f_72.f_70 = 0;
	Global_1149432.f_5568 = 1;
	func_147(false);
	NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(func_148(PLAYER::PLAYER_ID(), false, true));
	func_149(1, 6);
	return;
}

void func_32() // Position - 0x1C75
{
	if (func_137())
		return;

	if (func_21())
		return;

	if (func_57() != 0)
		return;

	func_150();
	func_151();
	return;
}

void func_33() // Position - 0x1CA4
{
	if (!Global_1572887.f_10)
		return;

	NETWORK::_0x2CD41AC000E6F611();
	Global_1572887.f_10 = 0;
	return;
}

void func_34(BOOL bParam0) // Position - 0x1CC4
{
	NETWORK::_0x704F92B3AF20D857(bParam0);
	return;
}

void func_35(var uParam0) // Position - 0x1CD2
{
	var unk;

	if (*uParam0)
		return;

	if (func_152(255) != 1)
		return;

	if (func_21())
		return;

	unk.f_12 = -1;
	unk.f_12.f_1 = -1;
	unk.f_14 = 255;
	unk.f_15 = 255;
	unk.f_4 = 0;
	func_154(unk, func_153(3, 8), false, false);
	*uParam0 = 1;
	return;
}

void func_36() // Position - 0x1D34
{
	func_155();
	func_156();
	func_157();
	func_158();
	func_159();
	func_160();
	func_161();
	func_162();
	func_163();
	func_164();
	func_165();
	func_166();
	func_167();
	return;
}

void func_37() // Position - 0x1D70
{
	if (func_57() != 0)
		return;

	switch (Global_1051608.f_36)
	{
		case 0:
			break;
	
		case 1:
			func_168();
			break;
	}

	Global_1051608.f_36 = Global_1051608.f_36 + 1;

	if (Global_1051608.f_36 >= 3)
		Global_1051608.f_36 = 0;

	func_169();
	func_170();
	func_171();
	func_172();
	func_173();
	func_174();
	func_155();
	func_175();
	func_176();
	return;
}

void func_38() // Position - 0x1DE8
{
	func_177();
	return;
}

void func_39() // Position - 0x1DF4
{
	func_178();
	func_46();
	func_47();
	func_48();
	return;
}

void func_40(int* piParam0) // Position - 0x1E0C
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		Global_1072758 = piParam0;

	return;
}

void func_41() // Position - 0x1E24
{
	Global_1295299 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	func_179();
	func_180();
	return;
}

void func_42(char* sParam0, int iParam1) // Position - 0x1E3C
{
	iParam1 = iParam1;
	sParam0 = sParam0;
	!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT();
	return;
}

void func_43() // Position - 0x1E54
{
	func_46();
	func_47();
	func_48();
	func_181();
	func_16();

	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		func_182();

	func_183();
	return;
}

BOOL func_44() // Position - 0x1E89
{
	int i;
	BOOL num;

	num = 0;

	for (i = 0; i < 20; i = i + 1)
	{
		if (i != 0)
			if (Global_1051645.f_16[i] != 0)
				if (SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[i]))
					num = 1;
	}

	return num;
}

void func_45() // Position - 0x1ED1
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_46() // Position - 0x1EDD
{
	Global_1072759.f_5 = 0;
	return;
}

void func_47() // Position - 0x1EEC
{
	Global_1072759.f_4 = 0;
	return;
}

void func_48() // Position - 0x1EFB
{
	Global_1072759.f_3 = 0;
	return;
}

int func_49() // Position - 0x1F0A
{
	int scriptStatus;
	int gameTimer;
	int timeoutTime;

	scriptStatus = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	gameTimer = MISC::GET_GAME_TIMER();
	timeoutTime = NETWORK::NETWORK_GET_TIMEOUT_TIME();

	if (timeoutTime < 50000)
		timeoutTime = 50000;

	while (scriptStatus != 2)
	{
		MISC::GET_GAME_TIMER() - gameTimer > timeoutTime - 5000;
	
		if (MISC::GET_GAME_TIMER() - gameTimer > 300000)
			func_45();
	
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
			
				case 1:
					func_45();
					break;
			
				case 2:
					func_45();
					break;
			
				case 3:
					func_45();
					break;
			
				case 4:
					func_45();
					break;
			
				default:
					break;
			}
		}
	
		if (scriptStatus == 3 || scriptStatus == 4 || scriptStatus == 5 || scriptStatus == 6)
			func_45();
	
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			func_45();
	
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
			func_45();
	
		if (func_57() == 0)
			if (func_184())
				func_45();
	
		BUILTIN::WAIT(0);
		scriptStatus = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_45();

	return 1;
}

BOOL func_50() // Position - 0x201B
{
	if (Global_1572887.f_10)
		return false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return true;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	return false;
}

void func_51() // Position - 0x2049
{
	BOOL flag;

	Global_1072759.f_13 = 0;
	flag = false;

	while (!func_7(false, false) && !flag)
	{
		switch (Global_1072759.f_13)
		{
			case 0:
				func_185(&Global_1072758);
				NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1072758, 1, 82);
				func_186(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Global_1072758), 1, "g_mpHostData");
			
				if (func_21())
				{
					Global_1072267 = { Global_1056554[func_187() /*491*/] };
					func_188(&Global_1056554);
					NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1056554, 15713, 83);
					func_189(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1056554[0 /*491*/]), 15713, "g_mpPlayerData");
					Global_1056554[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*491*/] = { Global_1072267 };
				}
				else
				{
					NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1056554, 15713, 83);
					func_189(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1056554[0 /*491*/]), 15713, "g_mpPlayerData");
				}
			
				Global_1072759.f_13 = Global_1072759.f_13 + 1;
				break;
		
			case 1:
				func_190();
				Global_1072759.f_13 = Global_1072759.f_13 + 1;
				break;
		
			case 2:
				func_191();
				Global_1072759.f_13 = Global_1072759.f_13 + 1;
				break;
		
			case 3:
				func_192();
				Global_1072759.f_13 = Global_1072759.f_13 + 1;
				break;
		
			case 4:
				func_193();
				Global_1072759.f_13 = Global_1072759.f_13 + 1;
				break;
		
			case 5:
				func_194();
				Global_1072759.f_13 = Global_1072759.f_13 + 1;
				break;
		
			case 6:
				func_195();
				Global_1072759.f_13 = Global_1072759.f_13 + 1;
				break;
		
			case 7:
				func_196();
				Global_1072759.f_13 = Global_1072759.f_13 + 1;
				break;
		
			case 8:
				func_197();
				Global_1072759.f_13 = Global_1072759.f_13 + 1;
				break;
		
			case 9:
				func_198();
				Global_1072759.f_13 = Global_1072759.f_13 + 1;
				break;
		
			case 10:
				func_199();
				Global_1072759.f_13 = Global_1072759.f_13 + 1;
				break;
		
			case 11:
				func_200();
				Global_1072759.f_13 = Global_1072759.f_13 + 1;
				break;
		
			case 12:
				func_201();
				Global_1072759.f_13 = Global_1072759.f_13 + 1;
				break;
		
			case 13:
				flag = true;
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	func_202();
	return;
}

void func_52(BOOL bParam0) // Position - 0x229B
{
	int num;
	var unk;
	int num2;

	num = MISC::GET_SYSTEM_TIME() + 180000;
	num2 = 0;
	unk = { unk };

	while (true)
	{
		num2 = num2 + 1;
	
		if (bParam0)
			NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
			
				case 1:
					func_45();
					break;
			
				case 2:
					func_45();
					break;
			
				case 3:
					func_45();
					break;
			
				case 4:
					func_45();
					break;
			
				default:
					break;
			}
		}
	
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			return;
	
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			TEXT_LABEL_ASSIGN_STRING(&unk, "HOST" /*Host*/, 64);
		else
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLIENT", 64);
	
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
			return;
	
		if (MISC::GET_SYSTEM_TIME() >= num)
		{
			func_45();
			return;
		}
	
		BUILTIN::WAIT(0);
	}

	return;
}

void func_53() // Position - 0x2366
{
	func_203();
	return;
}

void func_54() // Position - 0x2372
{
	int i;

	i = 0;

	for (i = 0; i <= 9; i = i + 1)
	{
		Global_1072759.f_23.f_5[i /*30*/] = 0;
	}

	Global_1072759.f_23 = 0;
	return;
}

void func_55() // Position - 0x23A4
{
	int num;
	int i;
	BOOL flag;

	num = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (num == 255)
		return;

	for (i = 0; i <= 17; i = i + 1)
	{
		flag = Global_1072759.f_19585[i];
		Global_1072759.f_19585[i] = Global_38.f_118[i];
		Global_1056554[num /*491*/].f_443[i] = Global_38.f_118[i];
		Global_1056554[num /*491*/].f_443.f_19[i] = -1;
		func_204(i, flag, num);
	}

	func_205(num, Global_1072759.f_19585.f_21);
	Global_1072759.f_19585.f_21 = 0;
	return;
}

void func_56(BOOL bParam0, BOOL bParam1) // Position - 0x243F
{
	*bParam0 = *bParam0 - *bParam0 && bParam1;
	return;
}

int func_57() // Position - 0x2454
{
	return Global_1572887.f_14;
}

BOOL func_58(BOOL bParam0, BOOL bParam1) // Position - 0x2462
{
	return bParam0 && bParam1 != false;
}

void func_59(BOOL bParam0, BOOL bParam1) // Position - 0x2471
{
	*bParam0 = *bParam0 || bParam1;
	return;
}

void func_60() // Position - 0x2482
{
	int num;

	num = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (num == 255)
		return;

	if (Global_1102813.f_3672 != num)
		Global_1102813.f_3672 = num;

	return;
}

int func_61(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x24AF
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return 0;

	if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == iParam0 && !bParam2)
		return 1;

	if (!(iParam0 >= -1 && iParam0 <= 7))
		return 0;

	PLAYER::SET_PLAYER_TEAM(PLAYER::PLAYER_ID(), iParam0, bParam1);

	if (!bParam1)
		func_206();

	return 1;
}

void func_62() // Position - 0x2509
{
	int num;

	num = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	func_207(&(Global_1295299.f_25), true, true);
	func_207(&(Global_1295299.f_26), true, true);

	if (num != 255)
		Global_1295232[num /*2*/] = false;

	func_208(1);
	return;
}

BOOL func_63(int iParam0) // Position - 0x2544
{
	return func_210(func_209(iParam0));
}

void func_64() // Position - 0x2556
{
	Global_1051645.f_38 = NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT();
	return;
}

void func_65() // Position - 0x2568
{
	BOOL flag;
	int num;
	int num2;
	var unk;
	var unk36;
	int i;
	int num3;
	int j;
	int num4;
	BOOL flag2;
	var unk217;
	int k;
	var unk225;
	var unk255;

	flag = false;
	num = 12;

	if (func_211(&num))
		flag = true;

	while (num != 12)
	{
		if (func_211(&num))
			flag = true;
	}

	if (Global_1051645.f_45.f_1)
	{
		num2 = 0;
	
		if (func_212(&num2))
			flag = true;
	
		while (num2 != 0)
		{
			if (func_212(&num2))
				flag = true;
		}
	
		Global_1051645.f_45.f_1 = 0;
	}
	else if (func_212(&(Global_1051645.f_45)))
	{
		flag = true;
	}

	unk = { Global_1051645.f_45 };
	unk36 = 12;
	unk36.f_1.f_4 = 10;
	unk36.f_1.f_15.f_4 = 10;
	unk36.f_1.f_15.f_15.f_4 = 10;
	unk36.f_1.f_15.f_15.f_15.f_4 = 10;
	unk36.f_1.f_15.f_15.f_15.f_15.f_4 = 10;
	unk36.f_1.f_15.f_15.f_15.f_15.f_15.f_4 = 10;
	unk36.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_4 = 10;
	unk36.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_4 = 10;
	unk36.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_4 = 10;
	unk36.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_4 = 10;
	unk36.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_4 = 10;
	unk36.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_4 = 10;

	for (i = 0; i < 12; i = i + 1)
	{
		unk36[i /*15*/] = 15;
	}

	num3 = 0;
	num4 = 0;
	flag2 = true;

	if (unk.f_2[0] && num3 < 12)
	{
		flag2 = false;
		unk36[num3 /*15*/] = 0;
		unk36[num3 /*15*/].f_1 = { Global_1295666.f_12 };
		unk36[num3 /*15*/].f_4[0] = func_214(func_213(0));
		num3 = num3 + 1;
	}

	if (unk.f_2[1] && num3 < 12)
	{
		flag2 = false;
		unk36[num3 /*15*/] = 1;
		unk36[num3 /*15*/].f_1 = { Global_1295666.f_12 };
	
		if (SCRIPTS::DOES_THREAD_EXIST(Global_1142424.f_2055) && SCRIPTS::IS_THREAD_ACTIVE(Global_1142424.f_2055, false) && Global_1142424.f_2056 != -1)
			unk36[num3 /*15*/].f_4[0] = MISC::_GET_STRING_FROM_VECTOR(Global_1141332[Global_1142424.f_2056 /*27*/].f_20);
		else if (func_215(16))
			unk36[num3 /*15*/].f_4[0] = func_217(func_216(PLAYER::PLAYER_ID(), true));
	
		num3 = num3 + 1;
	}

	if (unk.f_2[2] && num3 < 12)
	{
		flag2 = false;
		unk36[num3 /*15*/] = 2;
		unk36[num3 /*15*/].f_1 = { Global_1295666.f_12 };
		j = 0;
		num4 = func_218() - 1;
	
		for (j = 0; j <= num4; j = j + 1)
		{
			unk217 = { Global_1051645.f_80[j /*10*/] };
			TEXT_LABEL_APPEND_STRING(&unk217, " ", 64);
			TEXT_LABEL_APPEND_INT(&unk217, Global_1051645.f_80[j /*10*/].f_9, 64);
			unk36[num3 /*15*/].f_4[j] = func_219(unk217);
		}
	
		num3 = num3 + 1;
	}

	if (unk.f_2[3] && num3 < 12)
	{
		flag2 = false;
		unk36[num3 /*15*/] = 3;
		unk36[num3 /*15*/].f_1 = { Global_1295666.f_12 };
		unk36[num3 /*15*/].f_4[0] = func_221(func_220(255));
		num3 = num3 + 1;
	}

	if (unk.f_2[4] && num3 < 12)
	{
		flag2 = false;
		unk36[num3 /*15*/] = 4;
		unk36[num3 /*15*/].f_1 = { Global_1295666.f_12 };
	
		if (MISC::IS_STRING_NULL_OR_EMPTY(func_222()))
			if (func_223())
				unk36[num3 /*15*/].f_4[0] = func_224();
		else
			unk36[num3 /*15*/].f_4[0] = func_222();
	
		num3 = num3 + 1;
	}

	if (unk.f_2[6] && num3 < 12)
	{
		flag2 = false;
		unk36[num3 /*15*/] = 6;
		unk36[num3 /*15*/].f_1 = { Global_1295666.f_12 };
		j = 0;
	
		if (func_225(0, Global_1295666))
		{
			unk36[num3 /*15*/].f_4[j] = func_226(0);
			j = j + 1;
		}
	
		if (func_225(1, Global_1295666))
		{
			unk36[num3 /*15*/].f_4[j] = func_226(1);
			j = j + 1;
		}
	
		if (func_225(2, Global_1295666))
		{
			unk36[num3 /*15*/].f_4[j] = func_226(2);
			j = j + 1;
		}
	
		num3 = num3 + 1;
	}

	if (unk.f_2[7] && num3 < 12)
	{
		flag2 = false;
		unk36[num3 /*15*/] = 7;
		unk36[num3 /*15*/].f_1 = { Global_1295666.f_12 };
		unk36[num3 /*15*/].f_4[0] = func_227();
		num3 = num3 + 1;
	}

	if (unk.f_2[8] && num3 < 12)
	{
		flag2 = false;
		unk36[num3 /*15*/] = 8;
		unk36[num3 /*15*/].f_1 = { Global_1295666.f_12 };
		j = 0;
		unk225.f_3 = -1;
		unk225.f_3.f_1 = -1;
		unk225.f_11.f_12 = -1;
		unk225.f_11.f_12.f_1 = -1;
		unk225.f_11.f_14 = 255;
		unk225.f_11.f_15 = 255;
	
		for (k = 0; k < 10; k = k + 1)
		{
			if (j >= 10)
				break;
		
			unk225 = { func_228(k) };
		
			if (!func_229(&unk225))
			{
			}
			else
			{
				TEXT_LABEL_ASSIGN_STRING(&unk255, "Invite - ", 64);
				TEXT_LABEL_APPEND_INT(&unk255, k, 64);
				unk36[num3 /*15*/].f_4[j] = func_219(unk255);
				j = j + 1;
			}
		}
	
		num3 = num3 + 1;
	}

	if (unk.f_2[9] && num3 < 12)
	{
		flag2 = false;
		unk36[num3 /*15*/] = 9;
		unk36[num3 /*15*/].f_1 = { Global_1295666.f_12 };
		unk36[num3 /*15*/].f_4[0] = "Matchmaking Hack";
		num3 = num3 + 1;
	}

	if (unk.f_2[10] && num3 < 12)
	{
		flag2 = false;
		unk36[num3 /*15*/] = 10;
		unk36[num3 /*15*/].f_1 = { Global_1295666.f_12 };
		unk36[num3 /*15*/].f_4[0] = func_230(PLAYER::PLAYER_ID());
		num3 = num3 + 1;
	}

	if (unk.f_2[11] && num3 < 12)
	{
		flag2 = false;
		unk36[num3 /*15*/] = 11;
		unk36[num3 /*15*/].f_1 = { func_231() };
		unk36[num3 /*15*/].f_4[0] = func_232();
		num3 = num3 + 1;
	}

	if (unk.f_2[12] && num3 < 12)
	{
		flag2 = false;
		unk36[num3 /*15*/] = 12;
		unk36[num3 /*15*/].f_1 = { Global_1295666.f_12 };
		num3 = num3 + 1;
	}

	if (unk.f_2[13] && num3 < 12)
	{
		flag2 = false;
		unk36[num3 /*15*/] = 13;
		unk36[num3 /*15*/].f_1 = { Global_1295666.f_12 };
		num3 = num3 + 1;
	}

	if (unk.f_2[14] && num3 < 12)
	{
		flag2 = false;
		unk36[num3 /*15*/] = 14;
		unk36[num3 /*15*/].f_1 = { Global_1295666.f_12 };
		num3 = num3 + 1;
	}

	if (!flag2)
	{
		if (NETWORK::NETWORK_AUTO_SESSION_IS_ALLOWED_TO_MERGE() || flag)
			NETWORK::_NETWORK_AUTO_SESSION_SET_ALLOWED_TO_MERGE(false, &unk36, num3);
	
		if (unk.f_2[12] || unk.f_2[13] || unk.f_2[14] || unk.f_2[0])
			if (NETWORK::_NETWORK_AUTO_SESSION_IS_AUTO_WARP_DISABLED())
				NETWORK::_NETWORK_AUTO_SESSION_SET_AUTO_WARP_ENABLED(false);
		else if (!NETWORK::_NETWORK_AUTO_SESSION_IS_AUTO_WARP_DISABLED())
			NETWORK::_NETWORK_AUTO_SESSION_SET_AUTO_WARP_ENABLED(true);
	}
	else
	{
		if (!NETWORK::NETWORK_AUTO_SESSION_IS_ALLOWED_TO_MERGE())
			NETWORK::_NETWORK_AUTO_SESSION_SET_ALLOWED_TO_MERGE(true, &unk36, -1);
	
		if (!NETWORK::_NETWORK_AUTO_SESSION_IS_AUTO_WARP_DISABLED())
			NETWORK::_NETWORK_AUTO_SESSION_SET_AUTO_WARP_ENABLED(true);
	}

	return;
}

struct<11> func_66() // Position - 0x2C83
{
	return Global_1572887.f_196.f_30;
}

Player func_67() // Position - 0x2C96
{
	return Global_1572887.f_196.f_41;
}

BOOL func_68(Player plParam0) // Position - 0x2CA6
{
	return Global_1056554[plParam0 /*491*/].f_204.f_10;
}

var func_69(Player plParam0) // Position - 0x2CBB
{
	return Global_1056554[plParam0 /*491*/].f_204;
}

var func_70(Player plParam0) // Position - 0x2CCE
{
	return Global_1056554[plParam0 /*491*/].f_204.f_1;
}

var func_71(Player plParam0) // Position - 0x2CE3
{
	return Global_1056554[plParam0 /*491*/].f_204.f_2;
}

struct<2> func_72(Player plParam0) // Position - 0x2CF8
{
	return Global_1056554[plParam0 /*491*/].f_204.f_3;
}

BOOL func_73(Player plParam0, int iParam1) // Position - 0x2D0F
{
	return Global_263042[plParam0 /*65*/].f_63 && iParam1 != false;
}

int func_74() // Position - 0x2D26
{
	return Global_1572887.f_72;
}

BOOL func_75(int iParam0) // Position - 0x2D34
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

int func_76(int iParam0) // Position - 0x2D73
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

BOOL func_77(int iParam0, var uParam1, Any* panParam2) // Position - 0x2E09
{
	if (!func_18(iParam0))
		return false;

	func_233(panParam2);

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

BOOL func_78() // Position - 0x2F14
{
	int num;

	if (Global_1901671.f_45.f_2 == 1788394582)
	{
		num = Global_1295666.f_16;
	
		if (num > Global_1901671.f_45.f_3 && num < Global_1901671.f_45.f_4)
			return true;
	}

	return false;
}

void func_79() // Position - 0x2F57
{
	int weather;
	int num;

	if (!func_82(1))
		return;

	MISC::_GET_FORCED_WEATHER(&weather, &num);

	if (weather != 0 || num != 0)
		if (Global_1295666.f_16 % 239 != 0)
			return;

	func_235(func_234(), func_84());
	return;
}

void func_80(BOOL bParam0) // Position - 0x2FA3
{
	Hash hash;

	if (!func_78())
		return;

	if (func_236() || func_237())
	{
		if (!func_82(1) || bParam0)
		{
			hash = joaat("SNOWLIGHT");
		
			if (func_236())
				hash = joaat("snow");
		
			func_235(hash, func_84());
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_RDRO_X18", true, true);
			POPULATION::_0xEC116EDB683AD479(true);
			GRAPHICS::SET_TIMECYCLE_MODIFIER("MP_reduceGlobalTemperature");
			func_83(1);
		}
	
		if (func_84() || bParam0)
		{
			if (func_236())
			{
				if (!func_82(4))
				{
					GRAPHICS::_SET_SNOW_COVERAGE_TYPE(3);
					func_83(4);
					func_81(2);
				}
			}
			else if (!func_82(2))
			{
				GRAPHICS::_SET_SNOW_COVERAGE_TYPE(2);
				func_83(2);
				func_81(4);
			}
		}
	}

	if (func_238())
	{
		if (!func_82(8) && !STREAMING::IS_LOAD_SCENE_ACTIVE() && !func_239(-1562607865) || bParam0)
		{
			func_240(-1562607865);
			func_83(8);
		}
	}

	return;
}

void func_81(int iParam0) // Position - 0x30A0
{
	Global_1939596.f_84 = Global_1939596.f_84 - Global_1939596.f_84 && iParam0;
	return;
}

BOOL func_82(int iParam0) // Position - 0x30BE
{
	return Global_1939596.f_84 && iParam0 != false;
}

void func_83(int iParam0) // Position - 0x30D1
{
	Global_1939596.f_84 = Global_1939596.f_84 || iParam0;
	return;
}

BOOL func_84() // Position - 0x30E8
{
	return SCRIPTS::IS_LOADING_SCREEN_VISIBLE() || CAM::IS_SCREEN_FADED_OUT();
}

void func_85(BOOL bParam0) // Position - 0x30FE
{
	if (func_82(1) || bParam0)
	{
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
		AUDIO::CLEAR_AMBIENT_ZONE_LIST_STATE("AZL_RDRO_X18", true);
		POPULATION::_0xEC116EDB683AD479(false);
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		func_81(1);
	}

	if (func_82(6) && func_84() || bParam0)
	{
		GRAPHICS::_SET_SNOW_COVERAGE_TYPE(0);
		func_81(2);
		func_81(4);
	}

	if (func_82(8) && !STREAMING::IS_LOAD_SCENE_ACTIVE() && !func_239(-1562607865) || bParam0)
	{
		func_241(-1562607865);
		func_81(8);
	}

	return;
}

char* func_86(int iParam0) // Position - 0x3192
{
	char* str;

	str = 0;

	switch (iParam0)
	{
		case -1:
			str = "MP_GAME_STATE_INVALID";
			break;
	
		case 0:
			str = "MP_GAME_STATE_GAME_INIT";
			break;
	
		case 1:
			str = "MP_GAME_STATE_LOAD_INIT_THREADS";
			break;
	
		case 2:
			str = "MP_GAME_STATE_LOAD_MAIN_THREADS";
			break;
	
		case 3:
			str = "MP_GAME_STATE_ROUTE_TRANSITION";
			break;
	
		case 4:
			str = "MP_GAME_STATE_CREATE_PLAYER_CAMP";
			break;
	
		case 5:
			str = "MP_GAME_STATE_VERIFY_MADAM_NAZAR";
			break;
	
		case 6:
			str = "MP_GAME_STATE_CHECK_FOR_INVITE";
			break;
	
		case 7:
			str = "MP_GAME_STATE_SPAWN_PLAYER";
			break;
	
		case 8:
			str = "MP_GAME_STATE_MAIN_UPDATE_FIRST_FRAME";
			break;
	
		case 9:
			str = "MP_GAME_STATE_MAIN_UPDATE";
			break;
	
		case 10:
			str = "MP_GAME_STATE_END";
			break;
	
		case 11:
			str = "MP_GAME_STATE_ALL_LEAVE";
			break;
	}

	return str;
}

BOOL func_87(BOOL bParam0) // Position - 0x3269
{
	if (Global_1051645.f_15 && func_58(Global_1051645.f_14, bParam0))
		return false;

	if (func_58(Global_1051645.f_13, bParam0))
		return false;

	return true;
}

BOOL func_88(char* sParam0, int iParam1, eStackSize essParam2) // Position - 0x32A3
{
	SCRIPTS::REQUEST_SCRIPT(sParam0);

	if (SCRIPTS::HAS_SCRIPT_LOADED(sParam0) && MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(essParam2) > 0)
	{
		Global_1051645.f_16[iParam1] = SCRIPTS::START_NEW_SCRIPT(sParam0, essParam2);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam0);
		return true;
	}

	return false;
}

Vector3 func_89() // Position - 0x32E4
{
	var unk;
	var unk4;

	unk4 = { func_242(false) };
	unk4.f_8 != joaat("kit_camp");

	if (unk4.f_17 == 0 && unk4.f_19 == 0 && Global_17418.f_55.f_4.f_2 != 0 && Global_17418.f_55.f_4 >= 4)
	{
		unk = { Global_17418.f_55.f_4 };
	}
	else
	{
		unk = unk4.f_17;
		unk.f_1 = unk4.f_18;
		unk.f_2 = unk4.f_19;
	}

	return unk;
}

BOOL func_90(int iParam0) // Position - 0x335E
{
	return func_243(Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_73, iParam0);
}

BOOL func_91(int iParam0) // Position - 0x3378
{
	Player gangLeader;
	int num;
	var unk;
	int num2;
	int i;

	if (!GANG::NETWORK_IS_GANG_ID_VALID(iParam0))
		return false;

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(iParam0);

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(gangLeader))
	{
		if (gangLeader == PLAYER::PLAYER_ID())
		{
			POSSE::_0xC08AFF658B2E51DA(&num);
		
			if (num != 0)
				return true;
		}
		else
		{
			unk = { func_244(gangLeader) };
		
			for (i = 0; i <= POSSE::_0xC084FF658B2E61DA(&unk) - 1; i = i + 1)
			{
				if (POSSE::_0xC084FF658B2E81DA(&unk, i, &num2) && num2 != 0 && num2.f_9 == 1)
					return true;
			}
		}
	}

	return false;
}

int func_92(var uParam0, var uParam1, var uParam2) // Position - 0x3404
{
	if (!func_245(uParam0, 0))
		return 0;

	func_246(64);
	return 1;
}

void func_93(int iParam0) // Position - 0x3424
{
	if (Global_1142424.f_2018 != iParam0)
		Global_1142424.f_2018 = iParam0;

	return;
}

int func_94() // Position - 0x3441
{
	return Global_1142424.f_2018;
}

void func_95(int iParam0, int iParam1) // Position - 0x3450
{
	func_247(iParam0, iParam1);
	return;
}

void func_96(int iParam0) // Position - 0x3460
{
	int frameCount;
	int systemTime;

	frameCount = MISC::GET_FRAME_COUNT();
	systemTime = MISC::GET_SYSTEM_TIME();
	Global_1102813 = iParam0;
	Global_1102813.f_3571 = systemTime;
	Global_1102813.f_3572 = frameCount;
	Global_1102813.f_3573 = 0;
	return;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x3494
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

int func_98(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x34BE
{
	return func_248(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

int func_99(int iParam0) // Position - 0x34D4
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

BOOL func_100(Vector3* pvParam0, float* pfParam1) // Position - 0x35D0
{
	Hash* p_hash;
	int MaxInt;
	int randomIntInRange;

	p_hash = Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/];
	MaxInt = func_249(p_hash);

	if (MaxInt <= 0)
	{
		return false;
	}
	else
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, MaxInt);
	
		if (func_250(p_hash, randomIntInRange, pvParam0, pfParam1))
			return true;
	}

	return false;
}

int func_101(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x3620
{
	int num;

	num = func_251();

	if (func_252(num))
		if (VOLUME::DOES_VOLUME_EXIST(Global_1887363[num /*36*/].f_4) && VOLUME::IS_POINT_IN_VOLUME(Global_1887363[num /*36*/].f_4, vParam0))
			return num;

	return func_253(vParam0, bParam3);
}

void func_102(BOOL bParam0) // Position - 0x366E
{
	if (!bParam0)
		func_254(18);
	else
		func_255(18);

	return;
}

void func_103(BOOL bParam0) // Position - 0x368D
{
	if (!bParam0)
		func_254(24);
	else
		func_255(24);

	return;
}

void func_104(int iParam0, BOOL bParam1) // Position - 0x36AC
{
	var unk;
	float num;

	if (!func_100(&(num.f_6), &num))
	{
		num.f_6 = { Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
		num = (float)MISC::GET_RANDOM_INT_IN_RANGE(0, 359) * 1f;
	}

	num.f_5 = 1;
	func_255(92);

	if (func_256(iParam0, &unk))
	{
		func_108(&unk, &num, 1, true, 1);
	
		if (bParam1)
			func_254(0);
	
		return;
	}

	func_122(num.f_6, num, -1082130432, -1082130432, true, 1, 1);

	if (bParam1)
		func_254(0);

	return;
}

void func_105(BOOL bParam0, int iParam1) // Position - 0x3741
{
	if (bParam0)
	{
		if (iParam1 != -1)
			Global_1102813.f_3799 = 0;
		else
			Global_1102813.f_3799 = 1;
	
		func_255(62);
		Global_1102813.f_3798 = iParam1;
	}
	else
	{
		func_254(62);
	}

	return;
}

void func_106(int iParam0) // Position - 0x3781
{
	func_59(&(Global_1572887.f_196.f_43), iParam0);
	return;
}

void func_107() // Position - 0x3797
{
	func_255(94);
	return;
}

void func_108(var uParam0, var uParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x37A6
{
	if (func_152(255) == 4)
		return;

	if (bParam3)
	{
		if (_IS_NULL_VECTOR(uParam0->f_17.f_6))
			return;
	
		if (BUILTIN::VMAG(uParam0->f_17) < 1f)
		{
			uParam0->f_17 = Global_1901671.f_51.f_1;
			uParam0->f_17.f_1 = Global_1901671.f_51.f_1;
			uParam0->f_17.f_2 = Global_1901671.f_51.f_1;
		}
	}

	if (_IS_NULL_VECTOR(uParam1->f_6))
		return;

	if (uParam0->f_16)
	{
		if (BUILTIN::VMAG(uParam0->f_6) < 1f)
			return;
	
		if (BUILTIN::VMAG(uParam0->f_17) < BUILTIN::VMAG(uParam0->f_6))
			uParam0->f_16 = 0;
	}

	func_255(0);
	func_255(3);
	Global_1102813.f_3909 = iParam2;
	Global_1102813.f_3910 = bParam3;
	Global_1102813.f_3911 = iParam4;
	func_118(&(Global_1102813.f_3839));
	Global_1102813.f_3839 = { *uParam0 };
	func_119(&(Global_1102813.f_3878));
	Global_1102813.f_3878 = { *uParam1 };
	Global_1102813.f_26.f_3341 = 0;
	Global_1102813.f_26.f_3342 = 0;
	func_257(Global_1102813.f_3839, 36);
	func_258(Global_1102813.f_3878, 36);
	return;
}

void func_109() // Position - 0x38DE
{
	func_255(93);
	func_255(92);
	return;
}

void func_110(BOOL bParam0, BOOL bParam1) // Position - 0x38F4
{
	if (bParam0)
	{
		func_255(70);
	
		if (bParam1)
			func_255(73);
	}
	else
	{
		func_254(70);
		func_254(73);
	}

	return;
}

void func_111(BOOL bParam0) // Position - 0x3925
{
	if (bParam0)
		func_255(52);
	else
		func_254(52);

	return;
}

void func_112() // Position - 0x3943
{
	func_259(true);
	func_260(true, true);
	return;
}

void func_113(BOOL bParam0) // Position - 0x3956
{
	if (bParam0)
		func_255(60);
	else
		func_254(60);

	return;
}

void func_114(BOOL bParam0) // Position - 0x3974
{
	if (bParam0)
		func_255(54);
	else
		func_254(54);

	return;
}

void func_115(BOOL bParam0) // Position - 0x3992
{
	if (bParam0)
		func_255(56);
	else
		func_254(56);

	return;
}

void func_116(BOOL bParam0) // Position - 0x39B0
{
	if (bParam0)
		func_255(58);
	else
		func_254(58);

	return;
}

void func_117() // Position - 0x39CE
{
	func_261(true);
	func_260(true, true);
	return;
}

void func_118(var uParam0) // Position - 0x39E1
{
	var unk;

	*uParam0 = { unk };
	return;
}

void func_119(float* pfParam0) // Position - 0x39F3
{
	var unk;

	*pfParam0 = { unk };
	return;
}

Vector3 func_120() // Position - 0x3A05
{
	int num;

	num = MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 4;

	switch (num)
	{
		case 0:
			return 1879.3817f, 274.6259f, 76.1829f;
	
		case 1:
			return -2360.78f, -1590.05f, 151.962f;
	
		case 2:
			return 1121.74f, -1315.53f, 64.3595f;
	
		case 3:
			return -3424.42f, -3298.08f, -6.87744f;
	
		default:
		
	}

	return 1879.3817f, 274.6259f, 76.1829f;
}

BOOL func_121(var uParam0, var uParam1, var uParam2, Vector3* pvParam3, float* pfParam4) // Position - 0x3A91
{
	Hash* p_hash;
	int MaxInt;
	int randomIntInRange;

	p_hash = Global_1072759.f_23824.f_383[func_262(uParam0) /*272*/];
	MaxInt = func_249(p_hash);

	if (MaxInt <= 0)
	{
		return false;
	}
	else
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, MaxInt);
	
		if (func_250(p_hash, randomIntInRange, pvParam3, pfParam4))
			return true;
	}

	return false;
}

void func_122(var uParam0, var uParam1, var uParam2, float fParam3, int iParam4, int iParam5, BOOL bParam6, int iParam7, int iParam8) // Position - 0x3AE2
{
	var entityCoords;
	float num;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
	num = fParam3;

	if (!func_121(Global_1295666.f_12, &entityCoords, &num))
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
		num = fParam3;
	}

	func_263(uParam0, fParam3, entityCoords, num, iParam4, iParam5, bParam6, iParam7, iParam8, 1);
	return;
}

BOOL func_123() // Position - 0x3B3D
{
	Any gangId;
	Player gangLeader;

	gangId = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());

	if (!GANG::NETWORK_IS_GANG_ACTIVE(gangId))
		return 0;

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(gangId);

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(gangLeader))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(gangLeader)))
		return 0;

	if (gangLeader == PLAYER::PLAYER_ID())
		return 0;

	return 1;
}

void func_124() // Position - 0x3B93
{
	Ped playerPed;
	var unk;
	var unk31;

	playerPed = PLAYER::GET_PLAYER_PED(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())));
	unk.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(playerPed, false, false) };
	unk.f_17 = { 25f, 25f, 25f };
	unk.f_17.f_9 = joaat("volSphere");
	unk.f_4 = playerPed;
	unk.f_5 = 3;
	func_100(&(unk31.f_6), &unk31);
	unk31.f_5 = 1;
	func_108(&unk, &unk31, 1, true, 1);

	if (PED::IS_PED_ON_MOUNT(playerPed))
		func_110(true, false);

	return;
}

Vector3 func_125(int iParam0) // Position - 0x3C12
{
	switch (iParam0)
	{
		case 1:
			return Global_17418.f_2964[1 /*3*/];
	
		default:
		
	}

	return func_264();
}

Vector3 func_126(Vector3 vParam0, var uParam1, var uParam2, int iParam3) // Position - 0x3C3A
{
	int num;
	int i;
	int num2;
	int num3;
	float distanceBetweenCoords;
	var unk;
	var unk17;

	if (iParam3 == 0)
		return 0f, 0f, 0f;

	num3 = -1;
	unk = 5;

	if (iParam3 == -471827042)
	{
		for (i = 0; i <= 4; i = i + 1)
		{
			num = i;
			unk17 = { func_265(num) };
			unk[i /*3*/] = { unk17.f_5 };
			num2 = num2 + 1;
		}
	}
	else
	{
		return 0f, 0f, 0f;
	}

	if (!(num2 == 0))
	{
		for (i = 0; i <= num2 - 1; i = i + 1)
		{
			if (num3 == -1)
			{
				num3 = i;
				distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, unk[i /*3*/], true);
			}
			else if (distanceBetweenCoords > MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, unk[i /*3*/], true))
			{
				num3 = i;
				distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, unk[i /*3*/], true);
			}
		}
	
		return unk[num3 /*3*/];
	}

	return 0f, 0f, 0f;
}

BOOL func_127(int iParam0, var uParam1) // Position - 0x3D1A
{
	var unk;
	int num;
	var unk4;
	var unk7;

	*uParam1 = { func_264() };

	switch (iParam0)
	{
		case 1:
			*uParam1 = { -870.1846f, -1276.6202f, 42.2367f };
			break;
	
		case 2:
		case 7:
			*uParam1 = { 1352.9501f, -1306.3589f, 75.9113f };
			break;
	
		case 3:
			unk = { func_89() };
		
			switch (unk.f_1)
			{
				case joaat("hennigans_stead_camp"):
				case joaat("rio_bravo_camp"):
				case joaat("great_plains_camp"):
				case joaat("tall_trees_camp"):
				case joaat("cholla_springs_camp"):
				case joaat("gaptooth_ridge_camp"):
					*uParam1 = { -3678.34f, -2623.56f, -14.24f };
					break;
			
				case joaat("roanoke_ridge_camp"):
				case joaat("bayou_nawas_camp"):
				case joaat("scarlett_meadows_camp"):
					*uParam1 = { 2822.76f, -1313f, 46.34f };
					break;
			
				case joaat("cumberland_forest_camp"):
				case joaat("grizzlies_camp"):
				case joaat("heartland_camp"):
				case joaat("big_valley_camp"):
					*uParam1 = { -319.24f, 797.04f, 116.89f };
					break;
			
				default:
					*uParam1 = { -319.24f, 797.04f, 116.89f };
					break;
			}
			break;
	
		case 4:
			num = func_266();
		
			if (num != -1)
				if (func_267(num, &unk4, &unk7))
					*uParam1 = { unk4 };
			break;
	
		case 5:
			if (func_268())
				*uParam1 = { 1440.1381f, 369.3305f, 88.016f };
			break;
	
		case 6:
			*uParam1 = { -1789.9717f, -372.0744f, 158.8352f };
			break;
	
		case 8:
			*uParam1 = { 2521.1f, -1241f, 51f };
			break;
	}

	return !_IS_NULL_VECTOR(*uParam1);
}

void func_128(int iParam0, BOOL bParam1) // Position - 0x3EBF
{
	int num;
	int num2;

	func_269(iParam0, &num, &num2);

	if (!func_270(iParam0, num, num2, bParam1))
		return;

	func_271(num, num2);
	return;
}

void func_129(BOOL bParam0) // Position - 0x3EEC
{
	if (!bParam0)
		func_254(20);
	else
		func_255(20);

	return;
}

void func_130(float fParam0, float fParam1, float fParam2, float fParam3, BOOL bParam4) // Position - 0x3F0B
{
	if (func_272(fParam0, fParam3))
		func_260(true, bParam4);

	return;
}

BOOL func_131() // Position - 0x3F27
{
	int i;

	for (i = 1; i <= 4; i = i + 1)
	{
		if (Global_1149432.f_4920[i /*3*/].f_1 && !Global_1149432.f_4920[i /*3*/].f_2)
			return true;
	}

	return false;
}

Vector3 func_132(int iParam0, BOOL bParam1) // Position - 0x3F69
{
	Vector3 volumeCoords;
	var ReturnZ;

	volumeCoords = { 0f, 0f, 0f };

	if (!func_252(iParam0))
		return volumeCoords;

	if (VOLUME::DOES_VOLUME_EXIST(Global_1887363[iParam0 /*36*/].f_4))
	{
		volumeCoords = { VOLUME::GET_VOLUME_COORDS(Global_1887363[iParam0 /*36*/].f_4) };
	
		if (bParam1)
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(volumeCoords, &ReturnZ, false))
				volumeCoords.f_2 = ReturnZ;
	}

	return volumeCoords;
}

BOOL func_133() // Position - 0x3FC9
{
	int i;

	for (i = 9; i <= 12; i = i + 1)
	{
		if (Global_1149432.f_4920[i /*3*/].f_1 && !Global_1149432.f_4920[i /*3*/].f_2)
			return true;
	}

	return false;
}

int func_134(int iParam0) // Position - 0x400D
{
	switch (iParam0)
	{
		case 0:
			return 111;
	
		case 1:
			return 81;
	
		case 2:
			return 40;
	
		case 3:
			return 121;
	
		default:
		
	}

	return 111;
}

void func_135() // Position - 0x404B
{
	Global_1072759.f_5 = 1;
	Global_1051645.f_43 = MISC::GET_GAME_TIMER() - Global_1051645.f_40;
	return;
}

void func_136() // Position - 0x406B
{
	func_273(256);
	return;
}

BOOL func_137() // Position - 0x407A
{
	return false;
}

void func_138(int iParam0) // Position - 0x4083
{
	Global_1896646.f_41 = iParam0;
	return;
}

void func_139() // Position - 0x4093
{
	func_274();
	func_275();
	func_276();
	func_277();
	return;
}

void func_140(int iParam0) // Position - 0x40AB
{
	Any itemContextByIndex;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1956875.f_5.f_7))
		return;

	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1956875.f_5.f_7) > iParam0)
	{
		itemContextByIndex = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1956875.f_5.f_7, iParam0);
	
		if (itemContextByIndex == Global_1956875.f_5.f_14[iParam0 /*102*/])
			return;
	}

	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1956875.f_5.f_7, iParam0, "pause_info_panel_list", Global_1956875.f_5.f_14[iParam0 /*102*/]);
	return;
}

void func_141() // Position - 0x4119
{
	int i;

	func_278();

	for (i = 0; i < 2; i = i + 1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_279(i)))
			STREAMING::REQUEST_NAMED_PTFX_ASSET(MISC::GET_HASH_KEY(func_279(i)));
	}

	return;
}

void func_142() // Position - 0x4153
{
	BRAIN::ENABLE_SCRIPT_BRAIN_SET(1);
	return;
}

void func_143() // Position - 0x4160
{
	BRAIN::ENABLE_SCRIPT_BRAIN_SET(4);
	return;
}

void func_144() // Position - 0x416D
{
	BRAIN::DISABLE_SCRIPT_BRAIN_SET(2);
	return;
}

void func_145() // Position - 0x417A
{
	int num;
	int i;
	var unk;

	num = func_280();
	i = func_281();
	unk = 7;
	unk.f_1 = 10;
	unk.f_1.f_11 = 10;
	unk.f_1.f_11.f_11 = 10;
	unk.f_1.f_11.f_11.f_11 = 10;
	unk.f_1.f_11.f_11.f_11.f_11 = 10;
	unk.f_1.f_11.f_11.f_11.f_11.f_11 = 10;
	unk.f_1.f_11.f_11.f_11.f_11.f_11.f_11 = 10;

	while (i > 0)
	{
		i = i - 1;
		func_282(&num, 0, 0, 0, 1, 0, 0);
	}

	for (i = 0; i < 7; i = i + 1)
	{
		Global_1296539.f_34[i /*10*/] = { func_283(num, i, &unk) };
		func_284(&num, 0, 0, 0, 1, 0, 0, false);
	}

	return;
}

void func_146() // Position - 0x420B
{
	LAW::CLEAR_WANTED_SCORE(PLAYER::PLAYER_ID());
	LAW::_SET_BOUNTY_HUNTER_PURSUIT_CLEARED();
	return;
}

void func_147(BOOL bParam0) // Position - 0x421F
{
	Blip mainPlayerBlipId;

	mainPlayerBlipId = MAP::GET_MAIN_PLAYER_BLIP_ID();

	if (func_285(PLAYER::PLAYER_ID(), true) && !bParam0)
	{
		MAP::BLIP_ADD_MODIFIER(mainPlayerBlipId, -600115211);
		MAP::BLIP_REMOVE_MODIFIER(mainPlayerBlipId, -706674318);
	}
	else if (func_286(PLAYER::PLAYER_ID(), true) && !bParam0)
	{
		MAP::BLIP_REMOVE_MODIFIER(mainPlayerBlipId, -600115211);
		MAP::BLIP_ADD_MODIFIER(mainPlayerBlipId, -706674318);
	}
	else
	{
		MAP::BLIP_REMOVE_MODIFIER(mainPlayerBlipId, -600115211);
		MAP::BLIP_REMOVE_MODIFIER(mainPlayerBlipId, -706674318);
	}

	return;
}

BOOL func_148(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x42A3
{
	Player player;

	if (!Global_1149432.f_5568)
		return false;

	if (plParam0 == Global_1295666.f_149[Global_1295666])
		return Global_17418.f_2641.f_2 == 2 || bParam1 && Global_17418.f_2641.f_2 == 1 || bParam2 && Global_17418.f_2641.f_2 == 3;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return false;

	player = plParam0;

	if (player < 0 || player >= 32)
		return false;

	return Global_1101558[player /*38*/].f_33 == 2 || bParam1 && Global_1101558[player /*38*/].f_33 == 1 || bParam2 && Global_1101558[player /*38*/].f_33 == 3;
}

void func_149(int iParam0, int iParam1) // Position - 0x436C
{
	Global_1051829.f_1;
	Global_1051829.f_1 = iParam0;

	if (!func_287(iParam1))
		return;

	Global_1051829.f_2 = 0;
	Global_1051829 = Global_1901671.f_45;
	SCRIPTS::_BG_RELOAD_ALL_BACKGROUND_SCRIPTS();

	if (!Global_1051829.f_1)
		func_288("BGS_CONFIRM", 15000, 0, 0, 0, true);

	Global_1051829.f_1 = 0;
	return;
}

void func_150() // Position - 0x43C8
{
	Global_1072759.f_23824.f_383.f_4084 = -1;
	Global_1072759.f_23824 = 1;
	return;
}

void func_151() // Position - 0x43E6
{
	NETWORK::RESERVE_NETWORK_CLIENT_MISSION_PEDS(1 + NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false));
	return;
}

int func_152(int iParam0) // Position - 0x43F9
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

var func_153(int iParam0, int iParam1) // Position - 0x4444
{
	return func_289(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("volCylinder"), iParam0, iParam1);
}

void func_154(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, BOOL bParam20, BOOL bParam21) // Position - 0x4462
{
	var unk;

	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam19))
		return;

	iParam0 = 0;
	iParam0.f_1 = PLAYER::PLAYER_ID();
	iParam0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();

	if (!bParam20)
	{
		if (iParam0.f_18)
		{
			if (bParam21)
			{
				unk.f_12 = -1;
				unk.f_12.f_1 = -1;
				unk.f_14 = 255;
				unk.f_15 = 255;
				unk.f_20 = -1;
				unk = { iParam0 };
				unk.f_19 = uParam19;
				unk.f_20 = iParam0.f_2;
				func_290(&(Global_1072759.f_22981), unk);
				return;
			}
		}
	}

	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &iParam0, 19, 7, &uParam19);
	return;
}

void func_155() // Position - 0x44FC
{
	var unk;

	unk = { func_213(0) };

	if (func_18(unk))
		Global_1056554[Global_1295666 /*491*/].f_2 = { func_213(0) };
	else
		func_291(&(Global_1056554[Global_1295666 /*491*/].f_2));

	return;
}

void func_156() // Position - 0x4540
{
	var gamerHandle;

	if (!func_292())
		return;

	NETWORK::NETWORK_GET_LOCAL_HANDLE(&gamerHandle);

	if (!NETWORK::NETWORK_IS_HANDLE_VALID(&gamerHandle))
		return;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::PLAYER_ID()))
		return;

	if (!NETWORK::NETWORK_IS_HANDLE_VALID(&(Global_1155150[PLAYER::PLAYER_ID() /*30*/].f_1)) || !NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1155150[PLAYER::PLAYER_ID() /*30*/].f_1), &gamerHandle))
		MISC::COPY_SCRIPT_STRUCT(&(Global_1155150[PLAYER::PLAYER_ID() /*30*/].f_1), &gamerHandle, 2);

	return;
}

void func_157() // Position - 0x45B5
{
	Global_1155150[Global_1295666 /*30*/] = NETWORK::_NETWORK_GET_RANK();
	return;
}

void func_158() // Position - 0x45CB
{
	Player i;

	if (!Global_1572887.f_10)
		return;

	Global_1289608[Global_1295666] = Global_1072759.f_21353.f_1[Global_1295666 /*8*/].f_7;
	Global_1056554[Global_1295666 /*491*/].f_10 = Global_1072759.f_21353.f_259;
	Global_1056554[Global_1295666 /*491*/].f_9 = Global_1072759.f_21353.f_258;
	SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&(Global_1072759.f_21353.f_259));

	for (i = 0; i < 32; i = i + 1)
	{
		if (i == Global_1295666)
		{
		}
		else if (!Global_1295666.f_17[i])
		{
		}
		else if (func_293(Global_1295666.f_149[i], false))
		{
			if (func_243(Global_1289608[i], 16))
				SCRIPTS::_0xFFDDF802279BE128(&(Global_1056554[i /*491*/].f_9), &(Global_1072759.f_21353.f_259), &(Global_1072759.f_21353.f_259));
		}
	}

	return;
}

void func_159() // Position - 0x46AD
{
	BOOL flag;

	flag = { func_228(0) };

	if (flag)
	{
		if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), flag.f_11.f_2) > Global_1901671.f_2.f_25)
		{
			func_294();
			func_295(&flag);
		}
	}

	func_296();
	func_298((func_297() + 1) % 10);
	func_299();
	return;
}

void func_160() // Position - 0x471A
{
	return;
}

void func_161() // Position - 0x4722
{
	if (!func_58(Global_1572887.f_8, 1073741824))
		return;

	func_56(&(Global_1572887.f_8), 1073741824);

	if (func_300())
		if (func_17())
			func_301();
		else if (func_74() == 3)
			func_302();
		else
			func_303();
	else
		func_304();

	return;
}

void func_162() // Position - 0x477E
{
	func_305();

	if (!func_287(9))
		return;

	func_149(0, 6);
	return;
}

void func_163() // Position - 0x479D
{
	Global_1295299 = NETWORK::GET_NETWORK_TIME();

	switch (Global_1295299.f_1)
	{
		case 0:
			func_306();
			break;
	
		case 1:
			func_307();
			break;
	
		case 2:
			func_308();
			break;
	
		case 3:
			func_309();
			break;
	
		case 4:
			func_310();
			break;
	
		case 5:
			func_311();
			break;
	
		case 6:
			func_312();
			break;
	}

	Global_1295299.f_27 = Global_1295299;
	return;
}

void func_164() // Position - 0x481E
{
	if (Global_1102813.f_26.f_3345)
		if (func_313())
			Global_1102813.f_26.f_3345 = 0;

	if (Global_1102813.f_26.f_3346)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1102813.f_26.f_3344))
		{
			ENTITY::SET_ENTITY_COORDS(Global_1102813.f_26.f_3344, Global_1102813.f_26.f_3348, false, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(Global_1102813.f_26.f_3344, Global_1102813.f_26.f_3354, 2, false);
		}
	
		Global_1102813.f_26.f_3346 = 0;
	}

	if (Global_1102813.f_26.f_3347)
	{
		if (!func_314())
		{
			func_315();
			Global_1102813.f_26.f_3347 = 0;
		}
	}

	return;
}

void func_165() // Position - 0x48C7
{
	int i;
	int ptfxId;
	int num;
	int num2;
	int boneIndex;
	BOOL flag;

	for (i = 0; i < 10; i = i + 1)
	{
		ptfxId = Global_1203871[i /*8*/];
	
		if (Global_1203871[i /*8*/].f_6)
		{
			num = Global_1203871[i /*8*/].f_1;
			num2 = Global_1203871[i /*8*/].f_2;
			boneIndex = Global_1203871[i /*8*/].f_3;
			flag = Global_1203871[i /*8*/].f_4;
		
			if (num2 != 0)
				GRAPHICS::USE_PARTICLE_FX_ASSET(func_279(num2));
		
			if (Global_1203871[i /*8*/].f_3 >= 0)
				if (!flag)
					ptfxId = GRAPHICS::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(func_316(num), Global_33, 0f, 0f, 0f, 0f, 0f, 0f, boneIndex, 1065353216, false, false, false);
				else
					ptfxId = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(func_316(num), Global_33, 0f, 0f, 0f, 0f, 0f, 0f, boneIndex, 1065353216, false, false, false);
			else if (!flag)
				ptfxId = GRAPHICS::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY(func_316(num), Global_33, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, false, false, false);
			else
				ptfxId = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY(func_316(num), Global_33, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, false, false, false);
		
			Global_1203871[i /*8*/] = ptfxId;
			Global_1203871[i /*8*/].f_6 = 0;
		}
		else if (Global_1203871[i /*8*/].f_7)
		{
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(ptfxId))
				GRAPHICS::REMOVE_PARTICLE_FX(ptfxId, false);
		
			Global_1203871[i /*8*/].f_7 = 0;
		}
	}

	return;
}

void func_166() // Position - 0x4A14
{
	int num;
	var unk;
	int num2;
	int num3;
	var statId;
	int num4;

	func_317();

	switch (func_318())
	{
		case 0:
			if (!func_319())
				break;
		
			if (!func_320())
				break;
		
			func_321(1);
			break;
	
		case 1:
			if (!func_322())
				break;
		
			func_323();
			func_324();
			func_325();
			func_321(2);
			break;
	
		case 2:
			func_326(2);
			break;
	
		default:
			break;
	}

	num = func_327();

	if (func_328(num))
		func_329(13);

	switch (num)
	{
		case 0:
			if (!Global_1048577)
				break;
		
			func_329(1);
			break;
	
		case 1:
			if (Global_1295666 < 0 || Global_1295666 >= 32)
				break;
		
			if (func_330(Global_1295666) == false)
			{
				if (func_18(func_213(0)))
					func_329(2);
			
				break;
			}
		
			func_329(2);
			break;
	
		case 2:
			if (Global_1295666 < 0 || Global_1295666 >= 32)
				break;
		
			func_331(func_330(Global_1295666));
		
			if (func_332(func_330(Global_1295666)))
			{
				func_329(3);
			}
			else
			{
				func_333(1);
				func_329(4);
			}
			break;
	
		case 3:
			func_335(func_334());
			func_329(6);
			break;
	
		case 4:
			if (!func_18(func_213(0)))
				break;
		
			func_329(5);
			break;
	
		case 5:
			if (func_18(func_213(0)))
				break;
		
			func_329(15);
			break;
	
		case 6:
			if (!func_336(1))
				break;
		
			if (func_336(4))
				func_329(8);
			else
				func_329(7);
			break;
	
		case 7:
			func_329(9);
			break;
	
		case 8:
			func_337(4);
			func_329(9);
			break;
	
		case 9:
			if (!func_336(2))
				break;
		
			if (func_336(8))
				func_329(11);
			else
				func_329(10);
			break;
	
		case 10:
			switch (func_338(PLAYER::PLAYER_ID()))
			{
				case 2:
				case 15:
					func_329(11);
					break;
			
				case 10:
					func_339(4);
					func_329(12);
					break;
			
				default:
					break;
			}
			break;
	
		case 11:
			func_340();
			func_329(13);
			break;
	
		case 12:
			func_337(2);
			func_329(6);
			break;
	
		case 13:
			if (func_73(PLAYER::PLAYER_ID(), 1024))
			{
				func_329(0);
				break;
			}
		
			if (!CAM::IS_SCREEN_FADED_IN())
				break;
		
			if (func_341())
				break;
		
			if (Global_1048577)
				break;
		
			if (Global_1048584)
				break;
		
			num2 = func_343(func_342(0));
		
			switch (num2)
			{
				case 9:
					unk = { func_345(func_344(0)) };
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(func_346(unk)))
						AUDIO::PREPARE_MUSIC_EVENT(func_346(unk));
					break;
			}
		
			func_329(14);
			break;
	
		case 14:
			num2 = func_343(func_342(0));
		
			switch (num2)
			{
				case 9:
					if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
						if (UNLOCK::UNLOCK_IS_UNLOCKED(-319651633))
							func_347(joaat("HELP_TEXT_POST_EXT_HAS_SETUP_MOON"));
						else if (func_216(PLAYER::PLAYER_ID(), true) != -1)
							func_348(2048);
						else
							func_347(joaat("HELP_TEXT_POST_EXT_NO_GATING_ITEM"));
				
					unk = { func_345(func_344(0)) };
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY(func_346(unk)))
						AUDIO::TRIGGER_MUSIC_EVENT(func_346(unk));
					break;
			
				case 12:
					num3 = -1;
					num3.f_1 = -1;
					num3.f_2 = -1;
					num3 = func_344(0);
					num3.f_1 = func_349(0);
					num3.f_2 = func_350(0);
				
					if (func_350(0) == 2 && func_336(8))
					{
						statId = { func_351(func_344(0), func_349(0), 2006315537, 0) };
					
						if (STATS::STAT_ID_IS_VALID(&statId))
						{
							STATS::STAT_ID_GET_INT(&statId, &num4);
						
							if (num4 <= 0)
							{
								func_347(1057717540);
								func_352(&num3);
							}
						}
					}
					else
					{
						func_347(1209208750);
						func_352(&num3);
					}
					break;
			}
		
			func_329(15);
			break;
	
		case 15:
			func_353();
			func_354();
			func_329(0);
			break;
	
		default:
			break;
	}

	return;
}

void func_167() // Position - 0x4E6E
{
	int i;
	Player Plr;

	switch (Global_1901671)
	{
		case 0:
			if (func_355())
				return;
		
			if (!func_356())
				return;
		
			for (i = 0; i <= 32; i = i + 1)
			{
				Plr = PLAYER::INT_TO_PLAYERINDEX(i);
			
				if (Plr == PLAYER::PLAYER_ID())
				{
				}
				else if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Plr))
				{
				}
				else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Plr))
				{
				}
				else if (Global_1072759.f_28766[i])
				{
				}
				else if (Global_1056554[i /*491*/].f_484 == 0)
				{
				}
				else
				{
					Global_1072759.f_28766[i] = true;
				
					if (Global_1056554[i /*491*/].f_484 == Global_1056554[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*491*/].f_484)
					{
					}
					else
					{
						NETWORK::NETWORK_REQUEST_CLOUD_TUNABLES();
						Global_1901671 = 1;
					}
				}
			}
			break;
	
		case 1:
			if (NETWORK::NETWORK_IS_TUNABLE_CLOUD_REQUEST_PENDING())
				return;
		
			func_357();
			Global_1901671 = 2;
			break;
	
		case 2:
			if (func_355())
				return;
		
			Global_1901671 = 0;
			Global_1056554[i /*491*/].f_485 = NETWORK::GET_CLOUD_TIME_AS_INT();
			Global_1056554[i /*491*/].f_484 = NETWORK::NETWORK_GET_TUNABLE_CLOUD_CRC();
			break;
	}

	return;
}

void func_168() // Position - 0x4F8C
{
	switch (func_358())
	{
		case -1:
			break;
	
		case 0:
			break;
	
		case 1:
			func_359();
			break;
	
		case 2:
			break;
	
		default:
			break;
	}

	return;
}

void func_169() // Position - 0x4FC9
{
	Global_1108965.f_34.f_612 = (Global_1108965.f_34.f_612 + 1) % 32;
	return;
}

void func_170() // Position - 0x4FE8
{
	int num;
	int num2;

	if (func_57() != 0)
		return;

	num = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (num == 255)
		return;

	if (func_360() || Global_1048585)
		func_361();

	num2 = Global_1072759.f_19585.f_21;
	Global_1056554[num /*491*/].f_443[num2] = Global_38.f_118[num2];

	if (func_362(num2, num))
	{
		Global_1072759.f_19585.f_21 = Global_1072759.f_19585.f_21 + 1;
	
		if (Global_1072759.f_19585.f_21 > 17)
			Global_1072759.f_19585.f_21 = 0;
	
		func_205(num, Global_1072759.f_19585.f_21);
	}

	func_363();
	return;
}

void func_171() // Position - 0x508E
{
	int num;
	Player gangLeader;
	int num2;

	num = Global_1072759.f_28295.f_1 + 1;

	if (num > 25)
		num = 0;

	Global_1072759.f_28295.f_1 = num;

	if (func_364(Global_1835011[num /*72*/].f_32))
		return;

	func_365();

	if (Global_1149432.f_4920[num /*3*/].f_2)
	{
		if (!func_366(num, PLAYER::GET_PLAYER_INDEX()))
			func_367();
	
		func_368(num);
	}
	else
	{
		func_369(num);
	}

	if (Global_1835011[num /*72*/].f_3 == 0)
		return;

	if (!func_18(Global_1835011[num /*72*/].f_1))
		return;

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(Global_1295666.f_10);

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(gangLeader))
		return;

	num2 = func_370(Global_1835011[num /*72*/].f_1);

	if (!func_366(num, gangLeader))
	{
		if (num2 == 1)
		{
			func_371(num, -1, false, false, true, 0, 0);
			return;
		}
	
		return;
	}

	switch (num2)
	{
		case 1:
		case 2:
			return;
	
		case 3:
		case 4:
			return;
	
		default:
		
	}

	func_372(Global_1835011[num /*72*/].f_1);
	return;
}

void func_172() // Position - 0x51AF
{
	int num;
	int num2;
	float num3;
	var unk;

	if (Global_1295849.f_540)
		return;

	func_373();
	num = func_374();

	if (num > 0 && num < 7)
		if (func_375(4))
			if (!Global_1048577)
				func_376(12);
		else if (Global_1048577)
			func_377(4);

	if (func_378())
	{
		if (num > 0 && num < 12 && func_379())
		{
			func_380(1);
			func_381();
		}
	}

	switch (num)
	{
		case 0:
			if (!Global_1048577)
				break;
		
			if (Global_1295666 < 0 || Global_1295666 >= 32)
				break;
		
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Global_1295666.f_11)))
				break;
		
			if (func_330(Global_1295666.f_11) != false)
			{
				func_382();
				func_376(3);
			}
			break;
	
		case 3:
			if (!func_383(PLAYER::PLAYER_ID(), 1))
				break;
		
			if (func_378())
				func_376(4);
			else
				func_376(6);
			break;
	
		case 4:
			if (func_384())
			{
				func_348(8192);
				func_385(false, -1, false, true);
				func_386(1);
				func_376(12);
				break;
			}
		
			if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) > 1)
			{
				if (!BOUNTY::BOUNTY_REQUEST_BEGIN_LEGENDARY_MISSION_FOR_POSSE(&(Global_1295849.f_492.f_6), func_388(func_387()), func_390(func_389())))
				{
					func_376(6);
					break;
				}
			}
			else
			{
				if (BOUNTY::_0x86EC5F83867C4B70(&unk))
				{
					BOUNTY::_BOUNTY_CANCEL_LEGENDARY_MISSION();
					break;
				}
			
				if (!BOUNTY::BOUNTY_REQUEST_BEGIN_LEGENDARY_MISSION(&(Global_1295849.f_492.f_6), func_388(func_387()), func_390(func_389())))
				{
					func_376(6);
					break;
				}
			}
		
			func_391(MISC::GET_GAME_TIMER());
			func_377(1);
			func_376(5);
			break;
	
		case 5:
			if (func_375(536870912))
			{
				func_391(MISC::GET_GAME_TIMER());
				func_380(4);
				func_376(6);
				func_392();
			}
			else if (func_375(1073741824))
			{
				func_376(6);
				func_392();
			}
			else if (func_375(268435456))
			{
				func_376(6);
				func_392();
			}
			break;
	
		case 6:
			if (func_393(4))
				func_377(8);
		
			if (!func_394())
				break;
		
			func_376(8);
			break;
	
		case 7:
			if (!CAM::IS_SCREEN_FADED_IN())
				break;
		
			if (func_341())
				break;
		
			if (Global_1048577)
				break;
		
			if (Global_1048584)
				break;
		
			func_376(10);
			break;
	
		case 8:
			if (func_375(8))
			{
				func_396(func_395());
				func_399(func_398(joaat("currency_gold_bar"), func_397(true), 1084182731, true, false, false));
				func_401(func_400(0));
				func_402(func_400(7));
				func_403();
				BOUNTY::_BOUNTY_REQUEST_COMPLETE_LEGENDARY_MISSION(&(Global_1295849.f_492.f_6), &(Global_1295849.f_492.f_16.f_1));
				func_377(32);
				func_391(MISC::GET_GAME_TIMER());
				func_377(2);
				func_376(9);
			}
			else
			{
				func_376(12);
			}
			break;
	
		case 9:
			if (func_375(1879048192))
			{
				func_376(7);
				func_404();
				func_392();
				BOUNTY::_BOUNTY_CANCEL_LEGENDARY_MISSION();
			}
			break;
	
		case 10:
			if (!func_405())
			{
				if (func_375(32))
				{
					func_406();
					func_407(32);
				}
			}
		
			num2 = func_395() - func_408();
		
			if (num2 > 0)
				func_409(MISC::VAR_STRING(2, "FEED_MONEY_EARN", num2), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
		
			num2 = func_398(joaat("currency_gold_bar"), func_397(true), 1084182731, true, false, false) - func_410();
		
			if (num2 > 0)
			{
				num3 = (float)func_411(num2) + ((float)func_412(num2, true) * (1f / 100f));
				func_409(MISC::VAR_STRING(6, "SHOP_GOLD_PRICE_READ", num3), "ITEMTYPE_TEXTURES", joaat("itemtype_gold"), 0, joaat("color_cash_gold"), 0, 0, 0, true);
			}
		
			num2 = func_400(0) - func_413();
		
			if (num2 > 0)
				func_409(MISC::VAR_STRING(2, "PLAYER_RPG_XP_GAIN", num2), "itemtype_textures", joaat("transaction_xp"), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
		
			num2 = func_400(7) - func_414();
		
			if (num2 > 0)
				func_409(MISC::VAR_STRING(2, "NET_TRADE_BOUNTY_HUNTER_XP", num2), "itemtype_textures", joaat("transaction_xp"), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
		
			if (func_389() != 0)
			{
				func_376(12);
				break;
			}
		
			if (func_415() == 4)
				func_416(1);
			else if (func_415() < 4 && func_375(16))
				func_416(2);
		
			func_416(4);
			func_376(12);
			break;
	
		case 12:
			BOUNTY::_BOUNTY_CANCEL_LEGENDARY_MISSION();
			func_417();
			func_418();
			func_419();
			func_376(13);
			break;
	
		case 13:
			if (func_393(1))
				break;
		
			func_376(0);
			break;
	
		default:
			break;
	}

	return;
}

void func_173() // Position - 0x5683
{
	switch (Global_1940252.f_11600)
	{
		case 0:
			func_420();
			func_421(-1);
			break;
	
		case 2:
			func_422(Global_1940252.f_11606);
			func_423();
			break;
	
		case 3:
			func_420();
			Global_1940252.f_11600 = -1;
			break;
	}

	return;
}

void func_174() // Position - 0x56D7
{
	func_424();
	return;
}

void func_175() // Position - 0x56E3
{
	int i;
	int Arg;
	Player player;
	Player player2;

	player = PLAYER::PLAYER_ID();
	Arg = func_425();

	switch (func_426(Arg))
	{
		case 0:
			func_427();
			break;
	
		case 1:
			break;
	
		case 2:
			func_428();
			break;
	
		case 3:
			func_429();
			break;
	
		default:
			break;
	}

	for (i = 0; i <= 31; i = i + 1)
	{
		Arg = i;
		player2 = PLAYER::INT_TO_PLAYERINDEX(Arg);
	
		if (player2 == player)
		{
			func_430((Arg + 1) % 32);
		}
		else
		{
			switch (func_426(Arg))
			{
				case 0:
					break;
			
				case 1:
					func_431();
					break;
			
				case 2:
					break;
			
				case 3:
					break;
			
				default:
					break;
			}
		}
	}

	func_430((Arg + 1) % 32);
	return;
}

void func_176() // Position - 0x57AC
{
	if (func_360())
		return;

	if (Global_1220761[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/] != Global_1220826.f_1.f_8 || Global_1220761[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/].f_1 != Global_1220826.f_1.f_9)
	{
		Global_1220761[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/] = Global_1220826.f_1.f_8;
		Global_1220761[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/].f_1 = Global_1220826.f_1.f_9;
	}

	if (Global_1220826.f_1200 >= 32)
		Global_1220826.f_1200 = 0;

	func_432(Global_1220826.f_1200);
	Global_1220826.f_1200 = Global_1220826.f_1200 + 1;
	return;
}

void func_177() // Position - 0x5844
{
	Player i;

	for (i = 0; i <= 31; i = i + 1)
	{
		func_433(i);
	}

	return;
}

void func_178() // Position - 0x5865
{
	func_434();
	func_315();
	Global_1102813.f_26.f_3347 = 0;
	Global_1102813.f_26.f_3345 = 0;
	return;
}

void func_179() // Position - 0x5889
{
	func_435(Global_1295299.f_31, Global_1295299.f_32);
	Global_1295299.f_31 = Global_1295299.f_31 + 1;

	if (Global_1295299.f_31 >= 1)
	{
		Global_1295299.f_31 = 0;
		Global_1295299.f_32 = Global_1295299.f_32 + 1;
		Global_1295299.f_32 = Global_1295299.f_32 % 32;
	}

	return;
}

void func_180() // Position - 0x58DD
{
	Global_1295299.f_33 = Global_1295299.f_33 + 1;

	if (Global_1295299.f_33 >= Global_1295205.f_22)
	{
		Global_1295299.f_33 = 0;
		Global_1295299.f_34 = Global_1295299.f_34 + 1;
		Global_1295299.f_34 = Global_1295299.f_34 % 32;
	}

	if (Global_1295299.f_33 >= Global_1295205.f_22)
		return;

	switch (Global_1295205.f_3[Global_1295299.f_33 /*6*/].f_1)
	{
		case 0:
			func_436(&Global_1295205.f_3[Global_1295299.f_33 /*6*/]);
			break;
	
		case 1:
			func_437(&Global_1295205.f_3[Global_1295299.f_33 /*6*/]);
			break;
	
		case 2:
			func_438(&Global_1295205.f_3[Global_1295299.f_33 /*6*/], Global_1295299.f_33);
			break;
	}

	return;
}

void func_181() // Position - 0x59A5
{
	if (SCRIPTS::HAS_SCRIPT_LOADED("net_train_manager"))
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_train_manager");

	if (SCRIPTS::HAS_SCRIPT_LOADED("net_fme_manager"))
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_fme_manager");

	if (SCRIPTS::HAS_SCRIPT_LOADED("net_gangfeud_manager"))
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_gangfeud_manager");

	if (SCRIPTS::HAS_SCRIPT_LOADED("net_ugc_global_loader"))
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_ugc_global_loader");

	if (SCRIPTS::HAS_SCRIPT_LOADED("net_camp_manager"))
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_camp_manager");

	if (SCRIPTS::HAS_SCRIPT_LOADED("net_camp_dog_manager"))
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_camp_dog_manager");

	if (SCRIPTS::HAS_SCRIPT_LOADED("net_player_camp_manager"))
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_player_camp_manager");

	if (SCRIPTS::HAS_SCRIPT_LOADED("net_ace_thread_manager"))
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_ace_thread_manager");

	if (SCRIPTS::HAS_SCRIPT_LOADED("net_fetch_manager"))
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_fetch_manager");

	if (SCRIPTS::HAS_SCRIPT_LOADED("net_crew_manager"))
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_crew_manager");

	if (SCRIPTS::HAS_SCRIPT_LOADED("net_beat_manager"))
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_beat_manager");

	if (SCRIPTS::HAS_SCRIPT_LOADED("net_scan_manager"))
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_scan_manager");

	return;
}

void func_182() // Position - 0x5A89
{
	func_439(256);
	return;
}

void func_183() // Position - 0x5A98
{
	SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&(Global_1056554[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*491*/].f_10));
	return;
}

BOOL func_184() // Position - 0x5AB1
{
	return Global_1051645.f_8;
}

void func_185(int* piParam0) // Position - 0x5ABF
{
	var unk;

	*piParam0 = unk;
	return;
}

int func_186(int iParam0, int iParam1, char* sParam2) // Position - 0x5ACC
{
	return 1;
}

int func_187() // Position - 0x5AD5
{
	return Global_1102813.f_3672;
}

void func_188(Any* panParam0) // Position - 0x5AE4
{
	int i;

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		func_440(&panParam0->[i /*491*/]);
	}

	return;
}

int func_189(int iParam0, int iParam1, char* sParam2) // Position - 0x5B0D
{
	return 1;
}

void func_190() // Position - 0x5B16
{
	if (func_21())
	{
		Global_1102775 = { Global_1101558[func_187() /*38*/] };
		func_441(&Global_1101558);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1101558, 1217, 72);
		func_189(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1101558[0 /*38*/]), 1217, "g_mpPlayerStatusSyncData");
		Global_1101558[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*38*/] = { Global_1102775 };
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1101558, 1217, 72);
		func_189(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1101558[0 /*38*/]), 1217, "g_mpPlayerStatusSyncData");
	}

	return;
}

void func_191() // Position - 0x5BA0
{
	if (func_21())
	{
		func_442(&Global_1155150);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1155150, 961, 67);
		func_189(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1155150[0 /*30*/]), 961, "g_mpPlayerPersona");
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1155150, 961, 67);
		func_189(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1155150[0 /*30*/]), 961, "g_mpPlayerPersona");
	}

	func_157();
	func_156();
	return;
}

void func_192() // Position - 0x5C0A
{
	func_443(&Global_1107816);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1107816, 33, 51);
	func_186(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Global_1107816), 33, "g_mpHostJobData.sGangImpromptuRaceData");

	if (func_21())
	{
		Global_1110230 = { Global_1109780[func_187() /*6*/] };
		func_444(&Global_1109780);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1109780, 193, 52);
		func_189(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1109780[0 /*6*/]), 193, "g_mpPlayerJobData.sGangImpromptuRaceData");
		Global_1109780[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*6*/] = { Global_1110230 };
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1109780, 193, 52);
		func_189(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1109780[0 /*6*/]), 193, "g_mpPlayerJobData.sGangImpromptuRaceData");
	}

	return;
}

void func_193() // Position - 0x5CB0
{
	func_445(&Global_1206954);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1206954, 385, 46);
	func_189(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1206954[0 /*12*/]), 385, "g_mpSessionManagerPlayerData");
	func_203();
	return;
}

void func_194() // Position - 0x5CE8
{
	func_446(&Global_1283549);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1283549, 181, 44);
	func_186(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Global_1283549), 181, "g_mpShopManagerHostData");

	if (func_21())
	{
		Global_1283795 = { Global_1283730[func_187() /*2*/] };
		func_447(&Global_1283730);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1283730, 65, 45);
		func_189(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1283730[0 /*2*/]), 65, "g_mpShopManagerPlayerData");
		Global_1283730[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/] = { Global_1283795 };
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1283730, 65, 45);
		func_189(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1283730[0 /*2*/]), 65, "g_mpShopManagerPlayerData");
	}

	return;
}

void func_195() // Position - 0x5D8E
{
	if (func_21())
	{
		Global_1289641 = Global_1289608[Global_1102813.f_3672];
		func_448(&Global_1289608);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1289608, 33, 4);
		func_189(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1289608[0]), 33, "g_mpPlayerNetHudData");
		Global_1289608[PLAYER::NETWORK_PLAYER_ID_TO_INT()] = Global_1289641;
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1289608, 33, 4);
		func_189(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1289608[0]), 33, "g_mpPlayerNetHudData");
	}

	return;
}

void func_196() // Position - 0x5E09
{
	func_449(&(Global_1107816.f_33));
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&(Global_1107816.f_33), 717, 75);
	func_186(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&(Global_1107816.f_33)), 717, "g_mpHostJobData.sGunForHireMissionData");
	func_450(&(Global_1107816.f_750));
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&(Global_1107816.f_750), 2, 76);
	func_186(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&(Global_1107816.f_750)), 2, "g_mpHostJobData.sGunForHireLocationGiverData");

	if (func_21())
	{
		func_451(&Global_1138673[func_187() /*56*/]);
		func_452(&Global_1138673);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1138673, 1793, 77);
		func_189(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1138673[0 /*56*/]), 1793, "g_mpGunForHireGangPlayerData.sGunForHireGangData");
		func_453(&Global_1140466[func_187() /*8*/]);
		func_454(&Global_1140466);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1140466, 257, 78);
		func_189(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1140466[0 /*8*/]), 257, "g_mpGunForHireCooldownPlayerData.sGunForHireCooldownData");
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1138673, 1793, 77);
		func_189(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1138673[0 /*56*/]), 1793, "g_mpGunForHireGangPlayerData.sGunForHireGangData");
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1140466, 257, 78);
		func_189(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1140466[0 /*8*/]), 257, "g_mpGunForHireCooldownPlayerData.sGunForHireCooldownData");
	}

	func_455(1);
	func_456();
	func_457();
	func_458(4);
	return;
}

void func_197() // Position - 0x5F46
{
	func_459(&(Global_1107816.f_752));
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&(Global_1107816.f_752), 397, 30);
	func_186(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&(Global_1107816.f_752)), 397, "g_mpHostJobData.sPosseVersusData");

	if (func_21())
	{
		Global_1110230.f_6 = { Global_1109780.f_193[func_187() /*8*/] };
		func_460(&(Global_1109780.f_193));
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&(Global_1109780.f_193), 257, 31);
		func_189(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1109780.f_193[0 /*8*/]), 257, "g_mpPlayerJobData.sPosseVersusData");
		Global_1109780.f_193[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/] = { Global_1110230.f_6 };
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&(Global_1109780.f_193), 257, 31);
		func_189(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1109780.f_193[0 /*8*/]), 257, "g_mpPlayerJobData.sPosseVersusData");
	}

	return;
}

void func_198() // Position - 0x6014
{
	func_461(&Global_1295205);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1295205, 27, 68);
	func_186(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Global_1295205), 27, "g_mpStoryCoopTransitionHostData");

	if (func_21())
	{
		Global_1295297 = { Global_1295232[func_187() /*2*/] };
		func_462(&Global_1295232[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/]);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1295232, 65, 69);
		func_189(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1295232[0 /*2*/]), 65, "g_mpStoryCoopTransitionPlayerData");
		Global_1295232[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/] = { Global_1295297 };
	}
	else
	{
		func_463(&Global_1295299);
		func_464(&Global_1295232);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1295232, 65, 69);
		func_189(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1295232[0 /*2*/]), 65, "g_mpStoryCoopTransitionPlayerData");
	}

	return;
}

void func_199() // Position - 0x60D0
{
	func_465();
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1220761, 65, 79);
	func_189(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Global_1220761[0 /*2*/]), 65, "g_mpAbandonedLootPlayerData");
	return;
}

void func_200() // Position - 0x60FD
{
	if (func_21())
	{
		Global_1289418 = { Global_1287273[func_187() /*67*/] };
		func_466(&Global_1287273);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1287273, 2145, 11);
		func_189(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1287273[0 /*67*/]), 2145, "g_mpParleyPlayerData");
		Global_1287273[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*67*/] = { Global_1289418 };
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1287273, 2145, 11);
		func_189(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1287273[0 /*67*/]), 2145, "g_mpParleyPlayerData");
	}

	return;
}

void func_201() // Position - 0x6187
{
	if (func_21())
	{
		func_467(&Global_1222034[func_187() /*9*/]);
		func_468(&Global_1222034);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1222034, 289, 27);
		func_189(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1222034[0 /*9*/]), 289, "g_mpCollectiblePlayerData");
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1222034, 289, 27);
		func_189(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1222034[0 /*9*/]), 289, "g_mpCollectiblePlayerData");
	}

	return;
}

void func_202() // Position - 0x61F7
{
	Global_1072759.f_3 = 1;
	Global_1051645.f_41 = MISC::GET_GAME_TIMER() - Global_1051645.f_40;
	return;
}

void func_203() // Position - 0x6217
{
	Global_1206954[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*12*/] = false;
	Global_1206954[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*12*/].f_2 = 0;
	Global_1207339.f_1 = 0;
	Global_1207339.f_1.f_1 = 1;
	return;
}

void func_204(int iParam0, BOOL bParam1, int iParam2) // Position - 0x6247
{
	int i;
	int num;
	int num2;

	num2 = func_469(iParam0);

	if (num2 != -1)
	{
		for (i = num2; i <= 31; i = i + 1)
		{
			num = (iParam0 * 31) + i;
		
			if (num >= 545)
				break;
		
			if (MISC::IS_BIT_SET(bParam1, i) && !func_470(num))
				MISC::SET_BIT(&Global_1056554[iParam2 /*491*/].f_443[iParam0], i);
		}
	
		Global_1072759.f_19585[iParam0] = Global_1072759.f_19585[iParam0] || Global_1056554[iParam2 /*491*/].f_443[iParam0];
	}

	return;
}

void func_205(int iParam0, int iParam1) // Position - 0x62D9
{
	Global_1072759.f_19585.f_19 = 0;
	Global_1072759.f_19585.f_20 = Global_1056554[iParam0 /*491*/].f_443.f_19[iParam1];
	Global_1072759.f_19585.f_22 = 0;
	Global_1072759.f_19585.f_23 = 0;
	return;
}

void func_206() // Position - 0x631A
{
	Hash relGroup;
	int playerTeam;

	playerTeam = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());

	switch (playerTeam)
	{
		case -1:
			relGroup = func_471(PLAYER::NETWORK_PLAYER_ID_TO_INT());
			break;
	
		case 0:
			relGroup = joaat("rel_gt_team_0");
			break;
	
		case 1:
			relGroup = joaat("rel_gt_team_1");
			break;
	
		case 2:
			relGroup = joaat("rel_gt_team_2");
			break;
	
		case 3:
			relGroup = joaat("rel_gt_team_3");
			break;
	
		case 4:
			relGroup = joaat("rel_gt_team_4");
			break;
	
		case 5:
			relGroup = joaat("rel_gt_team_5");
			break;
	
		case 6:
			relGroup = joaat("rel_gt_team_6");
			break;
	
		case 7:
			relGroup = joaat("rel_gt_team_7");
			break;
	
		case 8:
			relGroup = joaat("rel_player_cop");
			break;
	
		default:
			return;
	}

	PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), relGroup);

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID()), func_472());

	return;
}

void func_207(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x6410
{
	int num;

	if (bParam1 && !func_473(*iParam0))
	{
		*iParam0 = 0;
		return;
	}

	num = func_474(*iParam0);

	if (Global_1951910[num /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*iParam0 = 0;
		return;
	}

	func_475(num);
	*iParam0 = 0;
	return;
}

void func_208(int iParam0) // Position - 0x6464
{
	Global_1295299.f_1 = iParam0;
	return;
}

int func_209(int iParam0) // Position - 0x6474
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case joaat("trade_7"):
			num = 26;
			break;
	
		case joaat("follow_invite"):
			num = 3;
			break;
	
		case joaat("COUPON"):
			num = 29;
			break;
	
		case joaat("random_poker"):
			num = 15;
			break;
	
		case joaat("last_mission"):
			num = 14;
			break;
	
		case -1480790826:
			num = 4;
			break;
	
		case -1369260209:
			num = 28;
			break;
	
		case joaat("last_region"):
			num = 12;
			break;
	
		case joaat("cchar"):
			num = 16;
			break;
	
		case -283069378:
			num = 19;
			break;
	
		case joaat("open_posse"):
			num = 9;
			break;
	
		case joaat("NEW_GAME"):
			num = 1;
			break;
	
		case joaat("last_location"):
			num = 13;
			break;
	
		case joaat("random_region"):
			num = 11;
			break;
	
		case 0:
			num = 0;
			break;
	
		case joaat("trade_1"):
			num = 20;
			break;
	
		case 413241879:
			num = 31;
			break;
	
		case joaat("trade_2"):
			num = 21;
			break;
	
		case joaat("trade_6"):
			num = 25;
			break;
	
		case joaat("bg_custom_3"):
			num = 8;
			break;
	
		case joaat("trade_3"):
			num = 22;
			break;
	
		case 928971890:
			num = 32;
			break;
	
		case joaat("bg_custom_2"):
			num = 7;
			break;
	
		case joaat("trade_4"):
			num = 23;
			break;
	
		case joaat("intro_not_done"):
			num = 2;
			break;
	
		case 1449824096:
			num = 27;
			break;
	
		case joaat("bg_custom_1"):
			num = 6;
			break;
	
		case joaat("shift_f"):
			num = 5;
			break;
	
		case joaat("trade_5"):
			num = 24;
			break;
	
		case 1735278055:
			num = 18;
			break;
	
		case joaat("near_posse"):
			num = 10;
			break;
	
		case joaat("hub"):
			num = 30;
			break;
	
		case joaat("camp"):
			num = 17;
			break;
	}

	return num;
}

BOOL func_210(int iParam0) // Position - 0x662E
{
	return func_476(&(Global_1572887.f_300.f_1), iParam0, 3);
}

BOOL func_211(var uParam0) // Position - 0x6646
{
	BOOL flag;
	int num;
	BOOL flag2;

	switch (*uParam0)
	{
		case 12:
			flag = !func_477(255);
			num = 13;
			break;
	
		case 13:
			flag = !func_131();
			num = 14;
			break;
	
		case 14:
			flag = !func_478();
			num = 12;
			break;
	}

	flag2 = Global_1051645.f_45.f_2[*uParam0] != flag;
	Global_1051645.f_45.f_2[*uParam0] = flag;
	*uParam0 = num;
	return flag2;
}

BOOL func_212(var uParam0) // Position - 0x66BD
{
	BOOL flag;
	int num;
	BOOL flag2;

	switch (*uParam0)
	{
		case 0:
			flag = !(Global_1207339.f_1 & 3 != 0) && func_479();
			num = 4;
			break;
	
		case 1:
			flag = !(Global_1207339.f_1 & 16 != 0) && func_485() || func_486() || !(Global_1207339.f_1 & 512 != 0) && func_215(16);
			num = 10;
			break;
	
		case 2:
			flag = !(Global_1207339.f_1 & 3 != 0) && func_484();
			num = 1;
			break;
	
		case 4:
			flag = NETWORK::NETWORK_IS_IN_MP_CUTSCENE() || func_223();
			num = 6;
			break;
	
		case 6:
			flag = !(Global_1207339.f_1 & 64 != 0) && func_480(PLAYER::NETWORK_PLAYER_ID_TO_INT());
			num = 7;
			break;
	
		case 7:
			flag = func_481(255);
			num = 8;
			break;
	
		case 8:
			flag = func_482() > 0;
			num = 9;
			break;
	
		case 9:
			flag = func_483() != 1;
			num = 2;
			break;
	
		case 10:
			flag = func_487();
			num = 11;
			break;
	
		case 11:
			flag = func_488();
			num = 0;
			break;
	}

	flag2 = Global_1051645.f_45.f_2[*uParam0] != flag;
	Global_1051645.f_45.f_2[*uParam0] = flag;
	*uParam0 = num;
	return flag2;
}

struct<2> func_213(int iParam0) // Position - 0x682C
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

char* func_214(var uParam0, var uParam1) // Position - 0x6840
{
	var pLiteralString;
	var unk16;

	TEXT_LABEL_ASSIGN_STRING(&pLiteralString, "(", 128);
	TEXT_LABEL_APPEND_STRING(&pLiteralString, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(uParam0), 128);
	TEXT_LABEL_APPEND_STRING(&pLiteralString, ",", 128);
	TEXT_LABEL_APPEND_INT(&pLiteralString, uParam0.f_1, 128);
	TEXT_LABEL_APPEND_STRING(&pLiteralString, ")", 128);

	if (func_18(uParam0))
	{
		TEXT_LABEL_APPEND_STRING(&pLiteralString, "|", 128);
		TEXT_LABEL_ASSIGN_STRING(&unk16, "", 128);
		TEXT_LABEL_ASSIGN_INT(&unk16, func_19(uParam0), 128);
		TEXT_LABEL_APPEND_STRING(&pLiteralString, &unk16, 128);
	}

	return HUD::_GET_TEXT_SUBSTRING_2(&pLiteralString, HUD::GET_LENGTH_OF_LITERAL_STRING(&pLiteralString));
}

BOOL func_215(int iParam0) // Position - 0x68AB
{
	return func_243(Global_1297441.f_157, iParam0);
}

int func_216(Player plParam0, BOOL bParam1) // Position - 0x68BF
{
	if (bParam1)
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0))
			return -1;

	return Global_1297600[plParam0 /*87*/].f_5.f_12;
}

const char* func_217(int iParam0) // Position - 0x68E6
{
	return MISC::_GET_STRING_FROM_FLOAT(BUILTIN::TO_FLOAT(iParam0), 0);
}

int func_218() // Position - 0x68F9
{
	return Global_1051645.f_80.f_102;
}

const char* func_219(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x6909
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_220(int iParam0) // Position - 0x691D
{
	if (iParam0 == 255)
		return Global_1102813.f_10;

	return Global_1101558[iParam0 /*38*/].f_10;
}

char* func_221(int iParam0) // Position - 0x693F
{
	if (!func_252(iParam0))
		return "Wilderness";

	switch (iParam0)
	{
		case 0:
			return "CrawdadWillies";
	
		case 1:
			return "MacombsEnd";
	
		case 2:
			return "MerkinsWaller";
	
		case 3:
			return "Lagras";
	
		case 4:
			return "Lakay";
	
		case 5:
			return "SaintDenis";
	
		case 6:
			return "OrangePlantation";
	
		case 7:
			return "SerialKiller";
	
		case 8:
			return "Serendipity";
	
		case 9:
			return "ShadyBelle";
	
		case 10:
			return "SiltwaterStrand";
	
		case 11:
			return "AppleseedTimberCo";
	
		case 12:
			return "BerylsDream";
	
		case 13:
			return "BigValleyTrapper";
	
		case 14:
			return "DakotaRiverTrapper";
	
		case 15:
			return "FortRiggsHoldingCamp";
	
		case 16:
			return "HangingDogRanch";
	
		case 17:
			return "LoneMuleStead";
	
		case 18:
			return "MissingHusband";
	
		case 19:
			return "MontoRest";
	
		case 20:
			return "OwanjilaDam";
	
		case 21:
			return "PaintedSky";
	
		case 22:
			return "PronghornRanch";
	
		case 23:
			return "RiggsStation";
	
		case 24:
			return "BigvalleyShack";
	
		case 25:
			return "ShepherdsRise";
	
		case 26:
			return "Strawberry";
	
		case 27:
			return "ValleyView";
	
		case 28:
			return "WallaceStation";
	
		case 29:
			return "BigValleyOldManJones";
	
		case 30:
			return "WatsonsCabin";
	
		case 31:
			return "Canebreak Manor";
	
		case 32:
			return "Copperhead";
	
		case 33:
			return "SisikaPenitentiary";
	
		case 34:
			return "BluewaterTravelSales";
	
		case 35:
			return "BacchuBridge";
	
		case 36:
			return "DinoLady";
	
		case 37:
			return "OldFortWallace";
	
		case 38:
			return "SixPointCabin";
	
		case 39:
			return "BeechersHope";
	
		case 40:
			return "Blackwater";
	
		case 41:
			return "QuakersCove";
	
		case 42:
			return "AdlerRanch";
	
		case 43:
			return "DeadRival";
	
		case 44:
			return "ChezPorter";
	
		case 45:
			return "Colter";
	
		case 46:
			return "FrozenExplorer";
	
		case 47:
			return "MillesaniClaim";
	
		case 48:
			return "MountainMan";
	
		case 49:
			return "MountHagenPeak";
	
		case 50:
			return "StarvingChildren";
	
		case 51:
			return "TempestRim";
	
		case 52:
			return "WinterMiningTown";
	
		case 53:
			return "CalumetRavine";
	
		case 54:
			return "CivilWarBride";
	
		case 55:
			return "Cohutta";
	
		case 56:
			return "CotorraSprings";
	
		case 57:
			return "GunFight";
	
		case 58:
			return "TheLoft";
	
		case 59:
			return "Veteran";
	
		case 60:
			return "Wapiti";
	
		case 61:
			return "GrizzliesTravelSales";
	
		case 62:
			return "AguasDulces";
	
		case 63:
			return "GuarmaCamp";
	
		case 64:
			return "CincoTorres";
	
		case 65:
			return "LaCapilla";
	
		case 66:
			return "Manicato";
	
		case 67:
			return "Abandoned Mill";
	
		case 68:
			return "BeechersC";
	
		case 69:
			return "CarmodyDell";
	
		case 70:
			return "CornwallKerosene";
	
		case 71:
			return "CropFarm";
	
		case 72:
			return "CumberlandFalls";
	
		case 73:
			return "DownsRanch";
	
		case 74:
			return "EmeraldRanch";
	
		case 75:
			return "GrangersHoggery";
	
		case 76:
			return "HorseshoeOverlook";
	
		case 77:
			return "LarnedSod";
	
		case 78:
			return "LoonyCult";
	
		case 79:
			return "LuckysCabin";
	
		case 80:
			return "SwansonsStation";
	
		case 81:
			return "Valentine";
	
		case 82:
			return "AberdeenPigFarm";
	
		case 83:
			return "Annesburg";
	
		case 84:
			return "BeaverHollow";
	
		case 85:
			return "BlackBalsamRise";
	
		case 86:
			return "BrandywineDrop";
	
		case 87:
			return "ButcherCreek";
	
		case 88:
			return "Doverhill";
	
		case 89:
			return "HappyFamily";
	
		case 90:
			return "Isolationist";
	
		case 91:
			return "MacLeansHouse";
	
		case 92:
			return "MossyFlats";
	
		case 93:
			return "RoanokeValley";
	
		case 94:
			return "RockySeven";
	
		case 95:
			return "RoanokeTrapper";
	
		case 96:
			return "RoanokeOldManJones";
	
		case 97:
			return "VanHornMansion";
	
		case 98:
			return "VanHornTradingPost";
	
		case 99:
			return "BraithewaiteManor";
	
		case 100:
			return "BulgerGlade";
	
		case 101:
			return "CaligaHall";
	
		case 102:
			return "CatfishJacksons";
	
		case 103:
			return "ClemensCove";
	
		case 104:
			return "ClemensPoint";
	
		case 105:
			return "CompsonsStead";
	
		case 106:
			return "Dairy Farm";
	
		case 107:
			return "ScarletMeadowsHorseShop";
	
		case 108:
			return "LonniesShack";
	
		case 109:
			return "LoveTriangle";
	
		case 110:
			return "Radleys Pasture";
	
		case 111:
			return "Rhodes";
	
		case 112:
			return "SlavePen";
	
		case 113:
			return "AuroraBasinShack";
	
		case 114:
			return "DeadSettler";
	
		case 115:
			return "Cochinay";
	
		case 116:
			return "ManzanitaPost";
	
		case 117:
			return "PacificUnionRailroad";
	
		case 118:
			return "TannersReach";
	
		case 119:
			return "TallTreesTrapper";
	
		case 120:
			return "Gaptooth Breach";
	
		case 121:
			return "Tumbleweed";
	
		case 122:
			return "Rathskeller Fork";
	
		case 123:
			return "BenedictPoint";
	
		case 124:
			return "FortMercer";
	
		case 125:
			return "Plainview";
	
		case 126:
			return "RioBravoTravelSales";
	
		case 127:
			return "Armadillo" /*Armadillo Ave*/;
	
		case 128:
			return "CootsChapel";
	
		case 129:
			return "DonJulioHouse";
	
		case 130:
			return "RileysCharge";
	
		case 131:
			return "RidgewoodFarm";
	
		case 132:
			return "TwinRocks";
	
		case 133:
			return "ChollaTravelSales";
	
		case 134:
			return "ChollaTrapper";
	
		case 135:
			return "MacFarlanesRanch";
	
		case 136:
			return "ThievesLanding";
	
		case 137:
			return "HenniganTravelSales";
	
		case 138:
			return "HenniganHarriet";
	
		case 139:
			return "CentralUnionRRCamp";
	
		default:
		
	}

	return "Wilderness";
}

const char* func_222() // Position - 0x7080
{
	if (func_490())
		return HUD::_GET_TEXT_SUBSTRING_2(&Global_26575, HUD::GET_LENGTH_OF_LITERAL_STRING(&Global_26575));

	return "";
}

BOOL func_223() // Position - 0x70A4
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (!func_491(i))
		{
		}
		else if (!func_492(i))
		{
		}
		else if (func_493(&Global_1291943.f_22[i /*11*/]))
		{
			return true;
		}
	}

	return false;
}

var func_224() // Position - 0x70EF
{
	var unk;
	Hash i;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, "[", 128);
	num = 0;

	for (i = 0; i < 10; i = i + 1)
	{
		if (!func_491(i))
		{
		}
		else if (!func_492(i))
		{
		}
		else if (!func_493(&Global_1291943.f_22[i /*11*/]))
		{
		}
		else
		{
			if (num > 0)
				TEXT_LABEL_APPEND_STRING(&unk, ",", 128);
		
			TEXT_LABEL_APPEND_STRING(&unk, "'", 128);
			TEXT_LABEL_APPEND_INT(&unk, Global_1291943.f_22[i /*11*/].f_1, 128);
			TEXT_LABEL_APPEND_STRING(&unk, "'", 128);
			num = num + 1;
		}
	}

	if (num <= 0)
		TEXT_LABEL_ASSIGN_STRING(&unk, "[NONE]", 128);
	else
		TEXT_LABEL_APPEND_STRING(&unk, "]", 128);

	return func_494(&unk);
}

BOOL func_225(int iParam0, Player plParam1) // Position - 0x7197
{
	return NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(plParam1)) && func_495(iParam0, 4, plParam1);
}

char* func_226(int iParam0) // Position - 0x71B7
{
	switch (iParam0)
	{
		case 0:
			return "Primary";
	
		case 1:
			return "Secondary";
	
		case 2:
			return "Trolley";
	
		default:
		
	}

	return "undefined";
}

const char* func_227() // Position - 0x71F2
{
	return HUD::_GET_TEXT_SUBSTRING_2(&(Global_263042[Global_1295666 /*65*/].f_1.f_22), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_263042[Global_1295666 /*65*/].f_1.f_22)));
}

struct<30> func_228(int iParam0) // Position - 0x721E
{
	var unk;

	unk.f_3 = -1;
	unk.f_3.f_1 = -1;
	unk.f_11.f_12 = -1;
	unk.f_11.f_12.f_1 = -1;
	unk.f_11.f_14 = 255;
	unk.f_11.f_15 = 255;

	if (Global_1072759.f_23 > 0)
		return Global_1072759.f_23.f_5[iParam0 /*30*/];

	return unk;
}

BOOL func_229(var uParam0) // Position - 0x7278
{
	if (!*uParam0)
		return false;

	switch (uParam0->f_11.f_4)
	{
		case 68:
		case 72:
		case 74:
		case 75:
			return true;
	
		default:
		
	}

	return false;
}

char* func_230(Player plParam0) // Position - 0x72B4
{
	int num;
	var unk;
	int i;

	num = func_496(plParam0);

	if (!func_497(num))
		return "NoSlot";

	unk = -1;
	unk.f_1 = -1;

	for (i = 0; i < 32; i = i + 1)
	{
		unk = { func_498(i) };
	
		if (func_18(unk))
			break;
	}

	return func_214(unk);
}

Vector3 func_231() // Position - 0x7315
{
	if (Global_1235687.f_9478 == -1)
		return 0f, 0f, 0f;

	return Global_1235687[Global_1235687.f_9478 /*697*/].f_614;
}

const char* func_232() // Position - 0x7341
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "DynamicNearby", 64);
	return func_499(unk);
}

void func_233(Any* panParam0) // Position - 0x735A
{
	*panParam0 = 0;
	panParam0->f_1 = -1;
	panParam0->f_2 = -1;
	return;
}

Hash func_234() // Position - 0x7370
{
	int num;

	if (Global_1295666.f_16 < 79)
		return joaat("SNOWLIGHT");

	num = ((Global_1295666.f_16 % 79) * 100) / 79;

	if (func_236())
	{
		switch (Global_1939596.f_85)
		{
			case joaat("snow"):
				if (num < 10)
					return joaat("BLIZZARD");
				else if (num < 55)
					return joaat("snow");
				else
					return joaat("SNOWLIGHT");
				break;
		
			case joaat("SNOWLIGHT"):
				if (num < 50)
					return joaat("snow");
				else
					return joaat("SNOWLIGHT");
				break;
		
			case joaat("BLIZZARD"):
				if (num < 5)
					return joaat("whiteout");
				else if (num < 25)
					return joaat("BLIZZARD");
				else
					return joaat("snow");
				break;
		
			case joaat("whiteout"):
				if (num < 10)
					return joaat("whiteout");
				else
					return joaat("BLIZZARD");
				break;
		}
	}
	else
	{
		switch (Global_1939596.f_85)
		{
			case joaat("Fog"):
			case joaat("highpressure"):
			case joaat("clouds"):
			case joaat("Misty"):
			case joaat("SUNNY"):
				if (num < 25)
					return joaat("SNOWLIGHT");
				else if (num < 39)
					return joaat("Misty");
				else if (num < 45)
					return joaat("Fog");
				else if (num < 53)
					return joaat("highpressure");
				else if (num < 75)
					return joaat("SUNNY");
				else
					return joaat("clouds");
				break;
		
			case joaat("snow"):
				if (num < 3)
					return joaat("BLIZZARD");
				else if (num < 55)
					return joaat("snow");
				else
					return joaat("SNOWLIGHT");
				break;
		
			case joaat("SNOWLIGHT"):
				if (num < 22)
					return joaat("SNOWLIGHT");
				else if (num < 44)
					return joaat("snow");
				else
					return joaat("clouds");
				break;
		
			case joaat("BLIZZARD"):
				if (num < 2)
					return joaat("whiteout");
				else if (num < 25)
					return joaat("BLIZZARD");
				else
					return joaat("snow");
				break;
		
			case joaat("whiteout"):
				if (num < 10)
					return joaat("whiteout");
				else
					return joaat("BLIZZARD");
				break;
		}
	}

	return joaat("SNOWLIGHT");
}

void func_235(Hash hParam0, BOOL bParam1) // Position - 0x75B4
{
	if (bParam1)
	{
		MISC::SET_WEATHER_TYPE(hParam0, true, true, false, 0, false);
	}
	else
	{
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
		MISC::SET_WEATHER_TYPE(hParam0, true, true, true, 119f, false);
	}

	Global_1939596.f_85 = hParam0;
	return;
}

BOOL func_236() // Position - 0x75EA
{
	if (!func_78())
		return false;

	return func_243(Global_1901671.f_45.f_5, 32);
}

BOOL func_237() // Position - 0x760C
{
	if (!func_78())
		return false;

	return func_243(Global_1901671.f_45.f_5, 2);
}

BOOL func_238() // Position - 0x762D
{
	if (!func_78())
		return false;

	return func_243(Global_1901671.f_45.f_5, 64);
}

BOOL func_239(Hash hParam0) // Position - 0x764F
{
	if (CAM::IS_SCREEN_FADED_OUT())
		return false;

	return STREAMING::_IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS(hParam0, Global_34);
}

void func_240(Hash hParam0) // Position - 0x766D
{
	if (!STREAMING::IS_IPL_ACTIVE_HASH(hParam0))
		func_500(hParam0);

	return;
}

void func_241(Hash hParam0) // Position - 0x7686
{
	if (STREAMING::IS_IPL_ACTIVE_HASH(hParam0))
		func_501(hParam0);

	return;
}

struct<20> func_242(BOOL bParam0) // Position - 0x769E
{
	var unk;
	var guid;
	var unk24;

	unk.f_9 = 1;
	unk.f_11 = -1591664384;
	guid = { func_502(joaat("kit_camp"), func_397(true), 1084182731, true) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return unk;

	unk24.f_9 = -1591664384;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_503(true), &guid, &unk24, 17, 1))
		return unk;

	unk = { func_504(&unk24, bParam0) };
	unk.f_18 = unk24.f_15;
	unk.f_19 = unk24.f_16;
	unk.f_17 = unk24.f_14;
	return unk;
}

BOOL func_243(int iParam0, int iParam1) // Position - 0x773A
{
	return iParam0 && iParam1 != false;
}

struct<2> func_244(Player plParam0) // Position - 0x7749
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle);
	return gamerHandle;
}

BOOL func_245(int iParam0, var uParam1, var uParam2, int iParam3) // Position - 0x775D
{
	if (iParam0 < 4)
		iParam0 = 4;

	if (!func_505(0, 1))
		return false;

	Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33 = { iParam0 };
	Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65536);
	func_506();

	if (iParam3 == 1)
	{
		func_246(2);
	}
	else
	{
		Global_1147183.f_330.f_6 = 1;
		func_507(2);
	}

	if (!func_508(PLAYER::NETWORK_PLAYER_ID_TO_INT()))
	{
		func_507(8);
		func_509();
	}

	if (!func_510(4) && func_510(8) || func_510(16))
		func_246(4);
	else
		func_507(4);

	if (func_243(Global_1147183.f_8, 1))
		func_246(1);
	else
		func_507(1);

	func_511(6);
	return true;
}

void func_246(int iParam0) // Position - 0x782A
{
	func_95(&(Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_4), iParam0);
	return;
}

void func_247(int iParam0, int iParam1) // Position - 0x7846
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

int func_248(Hash hParam0) // Position - 0x7857
{
	switch (hParam0)
	{
		case joaat("riobravo"):
			return 14;
	
		case joaat("GaptoothRidge"):
			return 13;
	
		case joaat("scarlettmeadows"):
			return 11;
	
		case joaat("GuarmaD"):
			return 8;
	
		case joaat("GrizzliesEast"):
			return 6;
	
		case joaat("ChollaSprings"):
			return 15;
	
		case joaat("heartlands"):
			return 9;
	
		case joaat("roanoke"):
			return 10;
	
		case joaat("greatplains"):
			return 4;
	
		case joaat("bigvalley"):
			return 1;
	
		case joaat("HennigansStead"):
			return 16;
	
		case joaat("BluewaterMarsh"):
			return 2;
	
		case joaat("GrizzliesWest"):
			return 7;
	
		case joaat("talltrees"):
			return 12;
	
		case joaat("Cumberland"):
			return 3;
	
		case joaat("bayounwa"):
			return 0;
	
		default:
		
	}

	return -1;
}

int func_249(Hash* phParam0) // Position - 0x7911
{
	Any any;

	any = Global_1072759.f_23824.f_383.f_4085;
	any.f_2 = 1593794963;
	any.f_3 = phParam0;
	return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&any);
}

BOOL func_250(Hash* phParam0, int iParam1, Vector3* pvParam2, float* pfParam3) // Position - 0x793D
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

int func_251() // Position - 0x799F
{
	return Global_1893611.f_2;
}

BOOL func_252(int iParam0) // Position - 0x79AD
{
	return iParam0 >= 0 && iParam0 <= 150;
}

int func_253(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x79C3
{
	int num;
	int num2;
	int num3;
	BOOL flag;
	int num4;

	num = func_512(vParam0);
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

int func_254(int iParam0) // Position - 0x7A7A
{
	if (func_513(&(Global_1102813.f_4), iParam0, 5))
		return 1;

	return 0;
}

int func_255(int iParam0) // Position - 0x7A97
{
	if (func_514(&(Global_1102813.f_4), iParam0, 5))
		return 1;

	return 0;
}

BOOL func_256(int iParam0, var uParam1) // Position - 0x7AB4
{
	var ReturnZ;
	float volumeScale;
	float num;

	if (!func_252(iParam0))
		return false;

	if (!VOLUME::DOES_VOLUME_EXIST(Global_1887363[iParam0 /*36*/].f_4))
		return false;

	uParam1->f_17.f_6 = { VOLUME::GET_VOLUME_COORDS(Global_1887363[iParam0 /*36*/].f_4) };

	if (MISC::GET_GROUND_Z_FOR_3D_COORD(uParam1->f_17.f_6, &ReturnZ, false))
		uParam1->f_17.f_6.f_2 = ReturnZ;

	uParam1->f_17 = Global_1901671.f_51.f_1;
	uParam1->f_17.f_1 = Global_1901671.f_51.f_1;
	uParam1->f_17.f_2 = Global_1901671.f_51.f_1;
	volumeScale = { VOLUME::GET_VOLUME_SCALE(Global_1887363[iParam0 /*36*/].f_4) };
	num = (volumeScale + volumeScale.f_1 + volumeScale.f_2) * 0.3333f;

	if (num < Global_1901671.f_51)
		num = Global_1901671.f_51;

	if (num > Global_1901671.f_51.f_1)
		num = Global_1901671.f_51.f_1;

	uParam1->f_17.f_3 = { 0f, 0f, 0f };
	uParam1->f_17 = num;
	uParam1->f_17.f_1 = num;
	uParam1->f_17.f_2 = num;
	uParam1->f_17.f_9 = joaat("volSphere");
	return true;
}

void func_257(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, int iParam30) // Position - 0x7BB9
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

void func_258(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9) // Position - 0x7C0F
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

void func_259(BOOL bParam0) // Position - 0x7C3C
{
	if (!bParam0)
	{
		func_254(5);
	}
	else
	{
		if (func_152(255) == 4)
			return;
	
		func_255(5);
	}

	return;
}

void func_260(BOOL bParam0, BOOL bParam1) // Position - 0x7C66
{
	if (func_152(255) == 4)
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
			func_515(0, false, 0, true);
	
		func_255(0);
		func_118(&(Global_1102813.f_3839));
		Global_1102813.f_3839 = 0f;
		Global_1102813.f_3839.f_5 = 1;
		Global_1102813.f_3839.f_16 = 0;
		Global_1102813.f_3839.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102813.f_3839.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102813.f_3839.f_17 = { Global_1901671.f_51.f_1, Global_1901671.f_51.f_1, Global_1901671.f_51.f_1 };
		Global_1102813.f_3839.f_17.f_9 = joaat("volSphere");
		func_119(&(Global_1102813.f_3878));
		Global_1102813.f_3878.f_6 = { Global_1102813.f_3839.f_17.f_6 };
		Global_1102813.f_3878 = Global_1102813.f_3839;
		Global_1102813.f_3878.f_5 = 1;
	
		if (bParam1)
		{
			Global_1102813.f_26.f_3341 = 0;
			Global_1102813.f_26.f_3342 = 0;
		}
	}

	func_257(Global_1102813.f_3839, 36);
	func_258(Global_1102813.f_3878, 36);
	return;
}

void func_261(BOOL bParam0) // Position - 0x7DB1
{
	if (!bParam0)
	{
		func_254(6);
	}
	else
	{
		if (func_152(255) == 4)
			return;
	
		func_255(6);
	}

	return;
}

int func_262(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x7DDB
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

void func_263(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, var uParam6, float fParam7, int iParam8, int iParam9, BOOL bParam10, int iParam11, int iParam12, int iParam13) // Position - 0x7E38
{
	if (func_152(255) == 4)
		return;

	if (_IS_NULL_VECTOR(uParam0))
		return;

	if (iParam8 < 0f && iParam9 < 0f)
	{
		iParam8 = Global_1901671.f_51;
		iParam9 = Global_1901671.f_51.f_1;
	}

	if (iParam8 == 0f && iParam9 == 0f)
	{
		iParam8 = Global_1901671.f_51;
		iParam9 = Global_1901671.f_51.f_1;
	}

	if (iParam9 < iParam8)
	{
		iParam8 = Global_1901671.f_51;
		iParam9 = Global_1901671.f_51.f_1;
	}

	if (bParam10)
		func_515(0, false, 0, true);

	func_255(0);
	func_255(3);
	Global_1102813.f_3909 = iParam11;
	Global_1102813.f_3910 = iParam12;
	Global_1102813.f_3911 = iParam13;
	func_118(&(Global_1102813.f_3839));
	Global_1102813.f_3839 = fParam3;
	Global_1102813.f_3839.f_5 = 1;
	Global_1102813.f_3839.f_17.f_6 = { uParam0 };
	Global_1102813.f_3839.f_17.f_3 = { 0f, 0f, 0f };
	Global_1102813.f_3839.f_17 = { iParam9, iParam9, iParam9 };
	Global_1102813.f_3839.f_17.f_9 = joaat("volSphere");

	if (iParam8 > 1f)
	{
		Global_1102813.f_3839.f_16 = 1;
		Global_1102813.f_3839.f_6.f_6 = { Global_1102813.f_3839.f_17.f_6 };
		Global_1102813.f_3839.f_6.f_3 = { 0f, 0f, 0f };
		Global_1102813.f_3839.f_6 = { iParam8, iParam8, iParam8 };
		Global_1102813.f_3839.f_6.f_9 = joaat("volSphere");
	}

	func_119(&(Global_1102813.f_3878));
	Global_1102813.f_3878.f_6 = { uParam4 };
	Global_1102813.f_3878 = fParam7;
	Global_1102813.f_3878.f_5 = 1;
	Global_1102813.f_26.f_3341 = 0;
	Global_1102813.f_26.f_3342 = 0;
	func_257(Global_1102813.f_3839, 36);
	func_258(Global_1102813.f_3878, 36);
	return;
}

Vector3 func_264() // Position - 0x8011
{
	return 0f, 0f, 0f;
}

struct<10> func_265(int iParam0) // Position - 0x801C
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	func_517(func_516(iParam0), &unk);
	return unk;
}

int func_266() // Position - 0x8049
{
	int scheduleLocation;
	int num;

	if (STATS::_0x3AEABAE3F3C7600C() && STATS::_0xA2E2BEA4E83F6270(joaat("FEATURE_PM_DAILY_SALESWOMAN_LOCATIONS")) > 0)
		STATS::_0xB5E2EDA2135E0FA1(joaat("FEATURE_PM_DAILY_SALESWOMAN_LOCATIONS"), 0, &scheduleLocation);
	else
		return -1;

	if (scheduleLocation == 0)
		return -1;

	num = func_518(scheduleLocation);

	if (num < 0 || num >= 12)
		return -1;

	return 135 + num;
}

BOOL func_267(int iParam0, Vector3* pvParam1, var uParam2) // Position - 0x80A9
{
	int num;
	float num2;

	num = Global_1072759.f_28418[48 /*4*/].f_3;
	num.f_2 = -738708473;
	num.f_3 = func_519(iParam0);

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(num.f_1), &num))
		return false;

	num.f_2 = -99852754;
	num.f_3 = MISC::GET_HASH_KEY("vPropPos");
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(pvParam1, &num);
	num2 = 0f;
	num.f_2 = 1059891245;
	num.f_3 = MISC::GET_HASH_KEY("fPropHead");
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&num2, &num);
	uParam2->f_2 = num2;
	return true;
}

BOOL func_268() // Position - 0x812B
{
	int num;

	num = func_520(-2104202019, 120471651);

	if (num > 0)
		return true;

	if (!UNLOCK::UNLOCK_IS_VISIBLE(-1348352077))
		return false;

	return true;
}

void func_269(int iParam0, var uParam1, var uParam2) // Position - 0x815F
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_270(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x817B
{
	if (iParam1 < 0 || iParam1 > 32)
		return false;

	if (func_521(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_522(iParam0))
		return false;

	if (func_523(iParam0))
		return false;

	if (Global_1900460.f_67 && !func_524(iParam0, 1) || func_525(32768))
		if (!func_524(iParam0, 262144) || !Global_1904402.f_8875)
			return false;

	if (!func_526())
		return false;

	return true;
}

void func_271(int iParam0, int iParam1) // Position - 0x821D
{
	int Variable;

	Variable = Global_1904402[iParam0];
	MISC::SET_BIT(&Variable, iParam1);
	Global_1904402[iParam0] = Variable;
	return;
}

BOOL func_272(var uParam0, var uParam1, var uParam2, float fParam3) // Position - 0x8241
{
	if (_IS_NULL_VECTOR(uParam0))
		return false;

	if (func_152(255) == 4)
		return false;

	func_527(4, 255);
	func_255(4);
	func_528(&(Global_1102813.f_3869));
	Global_1102813.f_3869.f_6 = { uParam0 };
	Global_1102813.f_3869 = fParam3;
	Global_1102813.f_3869.f_5 = 1;
	Global_1102813.f_26.f_3341 = 0;
	Global_1102813.f_26.f_3342 = 0;
	func_529(Global_1102813.f_3869, 36);
	return true;
}

void func_273(BOOL bParam0) // Position - 0x82C8
{
	Global_1893611 = Global_1893611 - Global_1893611 && bParam0;
	return;
}

void func_274() // Position - 0x82E0
{
	func_530();
	func_531();
	func_532();
	func_533();
	func_534();
	return;
}

void func_275() // Position - 0x82FC
{
	int i;
	var name;
	int j;

	if (PATHFIND::_NAVMESH_IS_SWAP_ACTIVE("dewclm_nav_camp_00"))
		PATHFIND::_NAVMESH_DEACTIVATE_SWAP("dewclm_nav_camp_00");

	if (PATHFIND::_NAVMESH_IS_SWAP_ACTIVE("shb_nav_camp_00"))
		PATHFIND::_NAVMESH_DEACTIVATE_SWAP("shb_nav_camp_00");

	for (i = 0; i < 9; i = i + 1)
	{
		for (j = 0; j <= 2; j = j + 1)
		{
			if (func_535(i, j))
			{
				name = { func_536(i, j) };
			
				if (PATHFIND::_NAVMESH_IS_SWAP_ACTIVE(&name))
					PATHFIND::_NAVMESH_DEACTIVATE_SWAP(&name);
			}
		}
	}

	return;
}

void func_276() // Position - 0x8379
{
	var unk;
	int i;

	unk = 3;
	unk[0] = 67198036;
	unk[1] = -1656481590;
	unk[2] = -1670262487;

	for (i = 0; i < 3; i = i + 1)
	{
		if (STREAMING::IS_IPL_ACTIVE_HASH(unk[i]))
			func_501(unk[i]);
	}

	return;
}

void func_277() // Position - 0x83CE
{
	int i;

	for (i = 0; i < 9; i = i + 1)
	{
		func_538(i, func_537(i), false, false);
	}

	return;
}

void func_278() // Position - 0x83F7
{
	int i;
	int ptfxId;

	for (i = 0; i < 10; i = i + 1)
	{
		ptfxId = Global_1203871[i /*8*/];
	
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(ptfxId))
			GRAPHICS::REMOVE_PARTICLE_FX(ptfxId, false);
	}

	return;
}

char* func_279(int iParam0) // Position - 0x842C
{
	switch (iParam0)
	{
		case 1:
			return "scr_deadeye";
	
		default:
		
	}

	return "";
}

int func_280() // Position - 0x844D
{
	var unk;
	int year;

	CLOCK::GET_POSIX_TIME(&year, &(year.f_1), &(year.f_2), &(year.f_3), &(year.f_4), &(year.f_5));
	func_539(&unk, year.f_5);
	func_540(&unk, year.f_4);
	func_541(&unk, year.f_3);
	func_542(&unk, year.f_2);
	func_543(&unk, year.f_1 - 1);
	func_544(&unk, year - 100);
	return unk;
}

int func_281() // Position - 0x84B0
{
	int year;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;

	CLOCK::GET_POSIX_TIME(&year, &(year.f_1), &(year.f_2), &(year.f_3), &(year.f_4), &(year.f_5));
	num = year.f_2;
	num2 = year.f_1;
	num3 = year;

	if (num2 <= 2)
	{
		num2 = num2 + 12;
		num3 = num3 - 1;
	}

	num4 = num3 % 100;
	num5 = num3 / 100;
	num6 = num + ((13 * (num2 + 1)) / 5) + num4 + (num4 / 4) + (num5 / 4) + (5 * num5);
	num7 = (num6 + 6) % 7;
	return num7;
}

void func_282(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x852C
{
	int num;
	int i;
	int j;
	int k;
	int l;
	int m;
	int num2;
	int num3;

	num = func_545(*uParam0);
	i = func_546(*uParam0);
	j = func_547(*uParam0);
	k = func_548(*uParam0);
	l = func_549(*uParam0);
	m = func_550(*uParam0);

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
	
		num3 = func_551(num2, num);
	}

	for (i = i - iParam5; i < 0; i = i + 12)
	{
		iParam6 = iParam6 + 1;
	}

	num = num - iParam6;
	func_552(uParam0, m, l, k, j, i, num);
	return;
}

struct<10> func_283(int iParam0, int iParam1, var uParam2) // Position - 0x869F
{
	int num;
	var unk10;
	var unk11;
	var unk12;

	func_553(iParam0, iParam1, &unk10, &unk11, &unk12);
	func_554(uParam2, iParam1, 0, &unk10, &unk11, &unk12);
	func_554(uParam2, iParam1, 1, &unk10, &unk11, &unk12);
	func_554(uParam2, iParam1, 2, &unk10, &unk11, &unk12);
	func_554(uParam2, iParam1, 3, &unk10, &unk11, &unk12);
	func_554(uParam2, iParam1, 4, &unk10, &unk11, &unk12);
	func_554(uParam2, iParam1, 5, &unk10, &unk11, &unk12);
	func_554(uParam2, iParam1, 6, &unk10, &unk11, &unk12);
	func_554(uParam2, iParam1, 7, &unk10, &unk11, &unk12);
	func_554(uParam2, iParam1, 8, &unk10, &unk11, &unk12);
	func_554(uParam2, iParam1, 9, &unk10, &unk11, &unk12);
	num = func_555(uParam2->[iParam1 /*11*/][0]);
	num.f_1 = func_556(uParam2->[iParam1 /*11*/][1]);
	num.f_8 = func_557(uParam2->[iParam1 /*11*/][2]);
	num.f_3 = func_558(uParam2->[iParam1 /*11*/][3]);
	num.f_6 = func_559(uParam2->[iParam1 /*11*/][4]);
	num.f_7 = func_560(uParam2->[iParam1 /*11*/][5]);
	num.f_4 = func_561(uParam2->[iParam1 /*11*/][6]);
	num.f_5 = func_562(uParam2->[iParam1 /*11*/][7]);
	num.f_2 = func_563(uParam2->[iParam1 /*11*/][8]);
	num.f_9 = func_564(uParam2->[iParam1 /*11*/][9]);
	return num;
}

void func_284(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x87FC
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_545(*uParam0);
	i = func_546(*uParam0);
	num2 = func_547(*uParam0);
	j = func_548(*uParam0);
	k = func_549(*uParam0);
	l = func_550(*uParam0);

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

	for (m = func_551(i, num); num2 > m; m = func_551(i, num))
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

	func_552(uParam0, l, k, j, num2, i, num);
	return;
}

BOOL func_285(Player plParam0, BOOL bParam1) // Position - 0x8984
{
	return func_565(plParam0, bParam1) >= 4;
}

BOOL func_286(Player plParam0, BOOL bParam1) // Position - 0x8996
{
	return func_565(plParam0, bParam1) >= 2 && func_565(plParam0, bParam1) < 4;
}

BOOL func_287(int iParam0) // Position - 0x89B7
{
	int num;

	if (Global_1051829.f_1)
		return true;

	if (Global_1901671.f_45.f_1 == 0)
		return false;

	if (Global_1901671.f_45 == 0)
		return false;

	if (Global_1051829 != Global_1901671.f_45)
	{
		num = NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1901671.f_45.f_1;
	
		if (num > 0)
			return true;
	}

	return false;
}

int func_288(const char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x8A11
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

var func_289(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, BOOL bParam10, int iParam11) // Position - 0x8A4C
{
	var value;
	Player bitIndex;
	int i;
	BOOL flag;
	BOOL flag2;
	Player PlayerIndex;
	int num;
	BOOL flag3;
	Volume volume;
	BOOL flag4;
	Player PlayerIndex2;
	Ped playerPed;

	SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&value);

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return value;

	if (func_566() != 0)
	{
		bitIndex = PLAYER::PLAYER_ID();
	
		if (bitIndex >= 0 && bitIndex < 32)
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, bitIndex);
	
		return value;
	}

	i = 0;
	flag = false;
	flag2 = false;
	PlayerIndex = Global_1295666.f_5;
	num = Global_1295666.f_10;
	flag3 = true;
	flag4 = bParam10;

	if (BUILTIN::VMAG2(fParam6) < 1f)
	{
		flag3 = false;
	}
	else
	{
		switch (iParam9)
		{
			case joaat("volBox"):
				volume = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_567());
				break;
		
			case joaat("volSphere"):
				volume = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_567());
				break;
		
			case joaat("volCylinder"):
				volume = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_567());
				break;
		}
	}

	if (flag4 & 8 != 0)
		flag4 = flag4 || func_568(PLAYER::GET_PLAYER_TEAM(PlayerIndex));

	if (flag4 & 8 != 0 && flag4 & 32768 != 0)
	{
		flag4 = flag4 | 65536;
		flag4 = flag4 - flag4 & 40952;
	}

	if (flag4 & 4 != 0)
	{
		if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			flag4 = flag4 - flag4 & 4;
			flag4 = flag4 | false;
		}
	}

	for (i = 0; i < 32; i = i + 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1295666.f_149[i]))
		{
			PlayerIndex2 = Global_1295666.f_149[i];
			flag = false;
			flag2 = false;
		
			if (flag4 & true != 0 && PlayerIndex2 == PlayerIndex)
				flag = true;
		
			if (func_569(i))
				flag = true;
		
			playerPed = PLAYER::GET_PLAYER_PED(PlayerIndex2);
		
			if (!flag)
				if (flag4 & 2 != 0)
					if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
						flag = true;
					else if (Global_1295666.f_83[i])
						flag = true;
		
			if (!flag)
				if (flag4 & 8192 != 0 && func_152(i) != 1)
					flag = true;
		
			if (!flag)
				if (flag4 & 16384 != 0 && PED::IS_PED_INCAPACITATED(playerPed))
					flag = true;
		
			if (!flag)
				if (flag4 & 4 != 0 && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(PlayerIndex2))
					flag = true;
		
			if (!flag)
			{
				if (flag4 & 8176 != 0)
				{
					switch (PLAYER::GET_PLAYER_TEAM(PlayerIndex2))
					{
						case -1:
							if (flag4 & 16 != 0)
								flag2 = true;
							break;
					
						case 0:
							if (flag4 & 32 != 0)
								flag2 = true;
							break;
					
						case 1:
							if (flag4 & 64 != 0)
								flag2 = true;
							break;
					
						case 2:
							if (flag4 & 128 != 0)
								flag2 = true;
							break;
					
						case 3:
							if (flag4 & 256 != 0)
								flag2 = true;
							break;
					
						case 4:
							if (flag4 & 512 != 0)
								flag2 = true;
							break;
					
						case 5:
							if (flag4 & 1024 != 0)
								flag2 = true;
							break;
					
						case 6:
							if (flag4 & 2048 != 0)
								flag2 = true;
							break;
					
						case 8:
							if (flag4 & 4096 != 0)
								flag2 = true;
							break;
					}
				
					if (!flag2)
						flag = true;
				}
			}
		
			if (!flag)
				if (flag4 & 32768 != 0)
					if (GANG::NETWORK_GET_GANG_ID(PlayerIndex2) != num)
						flag = true;
		
			if (!flag)
				if (flag4 & 65536 != 0)
					if (!func_570(PlayerIndex2))
						flag = true;
		
			if (!flag && flag3)
				if (!VOLUME::IS_POINT_IN_VOLUME(volume, ENTITY::GET_ENTITY_COORDS(playerPed, false, false)))
					flag = true;
		
			if (!flag)
				SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, i);
		}
	}

	if (flag3)
		VOLUME::DELETE_VOLUME(volume);

	return value;
}

int func_290(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21) // Position - 0x8DDF
{
	if (!func_571(uParam0))
		return 0;

	uParam0->f_2[*uParam0 /*21*/] = { uParam1 };
	*uParam0 = *uParam0 + 1;
	return 1;
}

void func_291(int iParam0) // Position - 0x8E0F
{
	*iParam0 = -1;
	iParam0->f_1 = -1;
	return;
}

BOOL func_292() // Position - 0x8E20
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1072759.f_3;
}

BOOL func_293(Player plParam0, BOOL bParam1) // Position - 0x8E3C
{
	Player bitIndex;
	int playerTeam;
	int playerTeam2;

	if (plParam0 == 255)
		return false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (plParam0 == Global_1295666.f_5)
		return true;

	bitIndex = plParam0;

	if (!Global_1295666.f_17[bitIndex])
		return false;

	if (bParam1)
	{
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28306), bitIndex) || SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28304), bitIndex))
			return false;
	
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28305), bitIndex))
			return true;
	}

	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), bitIndex))
		return true;

	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28301), bitIndex) || SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28303), bitIndex))
		return false;

	playerTeam = PLAYER::GET_PLAYER_TEAM(Global_1295666.f_5);
	playerTeam2 = PLAYER::GET_PLAYER_TEAM(plParam0);

	if (playerTeam != -1 && playerTeam2 != -1 && playerTeam == playerTeam2)
		return true;
	else if (GANG::_NETWORK_IS_IN_MY_GANG(plParam0))
		return true;

	return false;
}

struct<30> func_294() // Position - 0x8F3E
{
	var unk;
	var unk5;
	int i;

	unk5.f_3 = -1;
	unk5.f_3.f_1 = -1;
	unk5.f_11.f_12 = -1;
	unk5.f_11.f_12.f_1 = -1;
	unk5.f_11.f_14 = 255;
	unk5.f_11.f_15 = 255;
	unk5.f_11.f_1 = 255;
	unk5.f_11.f_2 = unk.f_2;
	func_291(&(unk5.f_3));

	if (Global_1072759.f_23 > 0)
	{
		Global_1072759.f_23 = Global_1072759.f_23 - 1;
	
		if (func_572() == Global_1072759.f_23)
			func_573();
	
		unk5 = { Global_1072759.f_23.f_5[Global_1072759.f_23 /*30*/] };
		Global_1072759.f_23.f_5[Global_1072759.f_23 /*30*/] = 0;
	}

	i = 0;

	for (i = 0; i <= 8; i = i + 1)
	{
		if (func_572() == i + 1)
			func_574(i);
	
		Global_1072759.f_23.f_5[i /*30*/] = { Global_1072759.f_23.f_5[i + 1 /*30*/] };
		Global_1072759.f_23.f_5[i + 1 /*30*/] = 0;
	}

	return unk5;
}

void func_295(var uParam0) // Position - 0x903E
{
	return;
}

void func_296() // Position - 0x9046
{
	BOOL flag;

	flag = { func_228(func_297()) };

	if (!flag)
		return;

	return;
}

int func_297() // Position - 0x9064
{
	return Global_1072759.f_23.f_1;
}

void func_298(int iParam0) // Position - 0x9074
{
	Global_1072759.f_23.f_1 = iParam0;
	return;
}

void func_299() // Position - 0x9086
{
	if (func_572() == -1)
		return;

	if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), Global_1072759.f_23.f_2.f_2) > Global_1901671.f_2.f_25 / 2)
	{
		func_573();
		return;
	}

	return;
}

BOOL func_300() // Position - 0x90BF
{
	return func_58(Global_1572887.f_8, true);
}

void func_301() // Position - 0x90D2
{
	func_575(true);
	func_575(2);
	func_575(4);
	func_575(8);
	func_575(16);
	func_575(256);
	func_575(512);
	func_575(1024);
	func_575(4096);
	func_575(8192);
	return;
}

void func_302() // Position - 0x9118
{
	func_575(true);
	func_575(2);
	func_575(4);
	func_575(8);
	func_575(16);
	func_575(64);
	func_575(128);
	func_575(256);
	func_575(512);
	func_575(1024);
	func_575(4096);
	return;
}

void func_303() // Position - 0x9163
{
	func_575(true);
	func_575(2);
	func_575(8);
	func_575(16);
	func_575(64);
	func_575(128);
	func_575(256);
	func_575(512);
	func_575(1024);
	func_575(2048);
	func_575(4096);
	func_575(8192);
	return;
}

void func_304() // Position - 0x91B7
{
	func_576(true);
	func_576(2);
	func_576(4);
	func_576(8);
	func_576(16);
	func_576(32);
	func_576(64);
	func_576(128);
	func_576(256);
	func_576(512);
	func_576(1024);
	func_576(2048);
	func_576(4096);
	func_576(8192);
	return;
}

void func_305() // Position - 0x9216
{
	int num;

	if (Global_1901671.f_45.f_1 == 0)
		return;

	if (Global_1901671.f_45 == 0)
		return;

	num = NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1901671.f_45.f_1;

	if (num < func_577(1))
		func_578(true, 1022);
	else if (num < func_577(2))
		func_578(2, 1020);
	else if (num < func_577(4))
		func_578(4, 1016);
	else if (num < func_577(8))
		func_578(8, 1008);
	else if (num < func_577(16))
		func_578(16, 992);
	else if (num < func_577(32))
		func_578(32, 960);
	else if (num < func_577(64))
		func_578(64, 896);
	else if (num < func_577(128))
		func_578(128, 768);
	else if (num < func_577(256))
		func_578(256, 512);
	else if (num < func_577(512))
		func_578(512, 512);

	return;
}

void func_306() // Position - 0x932A
{
	func_62();
	return;
}

void func_307() // Position - 0x9336
{
	if (!func_579(1, Global_1295666))
		return;

	if (func_579(2, 255))
	{
		func_580(8);
		func_208(3);
	}
	else
	{
		func_208(2);
	}

	return;
}

void func_308() // Position - 0x936B
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1295205.f_2), Global_1295666))
	{
		func_207(&(Global_1295299.f_25), true, true);
		func_207(&(Global_1295299.f_26), true, true);
		func_208(3);
		return;
	}

	if (!func_579(true, Global_1295666))
	{
		func_208(0);
		return;
	}

	if (func_579(8, 255))
	{
		func_207(&(Global_1295299.f_25), true, true);
	
		if (!func_473(Global_1295299.f_26))
			Global_1295299.f_26 = func_581("STORY_COOP_TRANSITION_CANCEL", joaat("INPUT_CONTEXT_B"), 2, 0, 1, 4, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), 0);
	
		if (func_582(Global_1295299.f_26, true))
			func_583(8);
	
		return;
	}

	func_207(&(Global_1295299.f_26), true, true);

	if (!func_584(Global_1295666))
		return;

	if (!func_473(Global_1295299.f_25))
		Global_1295299.f_25 = func_581("STORY_COOP_TRANSITION_CONFIRM", joaat("INPUT_CONTEXT_X"), 2, 0, 1, 4, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), 0);

	if (func_582(Global_1295299.f_25, true))
		func_580(8);

	return;
}

void func_309() // Position - 0x9485
{
	int i;

	if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1295205.f_2), Global_1295666))
	{
		if (!func_579(true, Global_1295666))
		{
			func_208(0);
			return;
		}
	
		return;
	}

	Global_1295299.f_28 = -1;

	for (i = 0; i < Global_1295205.f_22; i = i + 1)
	{
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1295205.f_3[i /*6*/].f_2), Global_1295666))
		{
			Global_1295299.f_28 = i;
			break;
		}
	}

	if (Global_1295299.f_28 == -1)
		return;

	func_208(4);
	return;
}

void func_310() // Position - 0x9509
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!CAM::IS_SCREEN_FADING_OUT())
			CAM::DO_SCREEN_FADE_OUT(2000);
	
		return;
	}

	func_580(16);
	func_585(0);
	func_208(5);
	return;
}

void func_311() // Position - 0x953B
{
	if (Global_1295205.f_3[Global_1295299.f_28 /*6*/].f_1 >= 2)
	{
		func_208(6);
		return;
	}

	switch (Global_1295299.f_29)
	{
		case 0:
			if (Global_1295205.f_3[Global_1295299.f_28 /*6*/].f_3 != Global_1295666.f_5)
				return;
		
			if (Global_1295299.f_30 >= 15)
			{
				func_580(64);
				return;
			}
		
			if (!NETWORK::NETWORK_AUTO_SESSION_CAN_SPLIT_SESSION(&(Global_1295205.f_3[Global_1295299.f_28 /*6*/].f_2)))
				return;
		
			NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(true);
		
			if (!NETWORK::NETWORK_AUTO_SESSION_SPLIT_SESSION(1, 32, 0, -1))
				return;
		
			func_585(1);
			break;
	
		case 1:
			if (NETWORK::_NETWORK_AUTO_SESSION_IS_PROCESSING_SESSION_SPLIT())
				return;
		
			if (!NETWORK::_NETWORK_AUTO_SESSION_SPLIT_SESSION_SUCCESSFUL())
			{
				Global_1295299.f_30 = Global_1295299.f_30 + 1;
				func_585(0);
				return;
			}
		
			if (!NETWORK::_NETWORK_AUTO_SESSION_IS_INSTANCED_SESSION())
			{
				Global_1295299.f_30 = Global_1295299.f_30 + 1;
				func_585(0);
				return;
			}
		
			if (!NETWORK::_0x0B6B4507AC5EA8B8())
				if (!NETWORK::NETWORK_IS_RESETTING_POPULATION())
					NETWORK::NETWORK_RESET_POPULATION(false, 0);
		
			func_585(2);
			break;
	
		case 2:
			func_580(32);
			break;
	}

	return;
}

void func_312() // Position - 0x9653
{
	int bitIndex;

	bitIndex = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (bitIndex == 255)
		return;

	if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1295205.f_2), bitIndex))
	{
		func_62();
		return;
	}

	func_580(128);
	return;
}

BOOL func_313() // Position - 0x9688
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_1102813.f_26.f_3344))
	{
		ENTITY::SET_ENTITY_COORDS(Global_1102813.f_26.f_3344, Global_1102813.f_26.f_3348, false, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(Global_1102813.f_26.f_3344, Global_1102813.f_26.f_3354, 2, false);
		ENTITY::SET_ENTITY_VISIBLE(Global_1102813.f_26.f_3344, false);
		ENTITY::SET_ENTITY_COLLISION(Global_1102813.f_26.f_3344, false, false);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Global_1102813.f_26.f_3344, false, false);
		ENTITY::SET_ENTITY_INVINCIBLE(Global_1102813.f_26.f_3344, true);
		ENTITY::FREEZE_ENTITY_POSITION(Global_1102813.f_26.f_3344, true);
		NETWORK::SET_NETWORK_ID_STOP_CLONING(NETWORK::PED_TO_NET(Global_1102813.f_26.f_3344), true);
		PED::SET_PED_CONFIG_FLAG(Global_1102813.f_26.f_3344, 301, true);
		PED::SET_PED_CONFIG_FLAG(Global_1102813.f_26.f_3344, 277, true);
		PED::SET_PED_CONFIG_FLAG(Global_1102813.f_26.f_3344, 417, true);
		PED::SET_PED_CONFIG_FLAG(Global_1102813.f_26.f_3344, 394, true);
		PED::SET_PED_CONFIG_FLAG(Global_1102813.f_26.f_3344, 253, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_1102813.f_26.f_3344, true);
		TASK::TASK_PLAY_ANIM(Global_1102813.f_26.f_3344, "CREATURES_BIRD@OWL@NORMAL@DEAD", "Dead_Up", 1090519040, -1056964608, -1, 0, 0, false, 0, false, 0, false);
		Global_1102813.f_26.f_3357 = { Global_1102813.f_26.f_3354 };
		return true;
	}

	STREAMING::REQUEST_MODEL(joaat("a_c_owl_01"), false);

	if (!STREAMING::HAS_MODEL_LOADED(joaat("a_c_owl_01")))
		return false;

	STREAMING::REQUEST_ANIM_DICT("CREATURES_BIRD@OWL@NORMAL@DEAD");

	if (!STREAMING::HAS_ANIM_DICT_LOADED("CREATURES_BIRD@OWL@NORMAL@DEAD"))
		return false;

	if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
		NETWORK::RESERVE_NETWORK_CLIENT_MISSION_PEDS(1 + NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false));
	else
		return false;

	PED::_0xC6136B40FFFB778B(true);
	Global_1102813.f_26.f_3344 = PED::CREATE_PED(joaat("a_c_owl_01"), Global_1102813.f_26.f_3348, 0f, true, false, true, false);
	ENTITY::SET_ENTITY_COORDS(Global_1102813.f_26.f_3344, Global_1102813.f_26.f_3348, false, false, true, true);
	ENTITY::SET_ENTITY_ROTATION(Global_1102813.f_26.f_3344, Global_1102813.f_26.f_3354, 2, false);
	ENTITY::SET_ENTITY_VISIBLE(Global_1102813.f_26.f_3344, false);
	ENTITY::SET_ENTITY_COLLISION(Global_1102813.f_26.f_3344, false, false);
	ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Global_1102813.f_26.f_3344, false, false);
	ENTITY::SET_ENTITY_INVINCIBLE(Global_1102813.f_26.f_3344, true);
	ENTITY::FREEZE_ENTITY_POSITION(Global_1102813.f_26.f_3344, true);
	NETWORK::SET_NETWORK_ID_STOP_CLONING(NETWORK::PED_TO_NET(Global_1102813.f_26.f_3344), true);
	PED::SET_PED_CONFIG_FLAG(Global_1102813.f_26.f_3344, 301, true);
	PED::SET_PED_CONFIG_FLAG(Global_1102813.f_26.f_3344, 277, true);
	PED::SET_PED_CONFIG_FLAG(Global_1102813.f_26.f_3344, 417, true);
	PED::SET_PED_CONFIG_FLAG(Global_1102813.f_26.f_3344, 394, true);
	PED::SET_PED_CONFIG_FLAG(Global_1102813.f_26.f_3344, 253, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_1102813.f_26.f_3344, true);
	TASK::TASK_PLAY_ANIM(Global_1102813.f_26.f_3344, "CREATURES_BIRD@OWL@NORMAL@DEAD", "Dead_Up", 1000f, -1056964608, -1, 1, 0, false, 0, false, 0, false);
	Global_1102813.f_26.f_3357 = { Global_1102813.f_26.f_3354 };
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_c_owl_01"));
	PED::_0xC6136B40FFFB778B(false);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Global_1102813.f_26.f_3344, "Hide_and_Mute_Entity_group", 0);
	AUDIO::START_AUDIO_SCENE("Hide_and_Mute_Entity_Scene");
	return true;
}

BOOL func_314() // Position - 0x99A0
{
	if (Global_1102813.f_26.f_3337 == 9)
		return false;

	if (Global_1102813.f_26.f_3337 == 10)
		return false;

	if (Global_1102813.f_26.f_3337 == 11)
		return false;

	if (func_586(2048))
		return true;

	if (func_587(1))
		return true;

	if (Global_1102813.f_26.f_3337 != 0)
		return true;

	return false;
}

void func_315() // Position - 0x9A0A
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1102813.f_26.f_3344))
		return;

	AUDIO::STOP_AUDIO_SCENE("Hide_and_Mute_Entity_Scene");
	PED::DELETE_PED(&(Global_1102813.f_26.f_3344));
	Global_1102813.f_26.f_3345 = 0;
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_c_owl_01"));
	return;
}

char* func_316(int iParam0) // Position - 0x9A4E
{
	switch (iParam0)
	{
		case 0:
			return "scr_de_slippery_haze_head";
	
		case 1:
			return "scr_de_slippery_haze_torso";
	
		case 2:
			return "scr_de_slippery_haze_limb";
	
		case 3:
			return "scr_de_recuperate_wisps";
	
		case 4:
			return "scr_de_steady_smoke_torso";
	
		default:
		
	}

	return "";
}

void func_317() // Position - 0x9AA3
{
	int num;
	int i;
	int j;
	int num2;

	if (!CAM::IS_SCREEN_FADED_IN() || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		return;

	func_588();
	func_589();

	if (func_590() != 0)
	{
		if (!func_592(func_591()))
		{
			num2 = func_593(func_590());
		
			if (func_594() < num2)
			{
				if (!func_595())
				{
					func_597(func_596());
					return;
				}
			}
			else
			{
				func_598(func_590());
				func_599();
				func_600(0);
			}
		}
		else
		{
			func_600(func_594() + 1);
			func_597(0);
			func_601();
		}
	}
	else
	{
		for (i = 0; i <= 0; i = i + 1)
		{
			if (func_602(i) == 0)
			{
			}
			else
			{
				for (j = 0; j <= 31; j = j + 1)
				{
					num = func_603((i * 32) + j, 1);
				
					if (!func_604(num))
					{
					}
					else
					{
						func_605(num);
						break;
					}
				}
			
				if (func_590() != 0)
					break;
			}
		}
	}

	return;
}

int func_318() // Position - 0x9B95
{
	return Global_1296390;
}

BOOL func_319() // Position - 0x9BA1
{
	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1072759.f_28418[29 /*4*/].f_3))
		return false;

	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1072759.f_28418[29 /*4*/].f_3))
		return false;

	return true;
}

BOOL func_320() // Position - 0x9BDC
{
	int i;
	int num;
	int j;
	int num2;
	BOOL flag;
	var unk;
	int num3;

	num3 = -1;
	num3.f_1 = -1;
	num3.f_2 = -1;
	num3.f_4 = -1;
	num3.f_5 = -1;
	num = func_606();

	for (i = 0; i <= num - 1; i = i + 1)
	{
		num3.f_3 = 1;
		num3 = i;
		flag = func_607(&num3);
		num2 = func_608(i);
	
		for (j = 0; j <= num2 - 1; j = j + 1)
		{
			unk = { func_609(i, j) };
			func_610(&unk, flag);
		}
	}

	return true;
}

void func_321(int iParam0) // Position - 0x9C63
{
	Global_1296390 = iParam0;
	return;
}

BOOL func_322() // Position - 0x9C71
{
	int i;
	var unk;

	for (i = 0; i <= 4; i = i + 1)
	{
		func_611(i, &unk);
	
		if (func_612(&unk))
			return false;
	}

	return true;
}

// Unhandled jump detected. Output should be considered invalid
void func_323() // Position - 0x9CA1
{
	int i;
	int num;
	int j;
	int num2;
	int k;
	int num3;
	int num4;
	int num5;
	int num6;
	BOOL flag;
	BOOL flag2;

	num = func_606();

	for (i = 0; i <= num - 1; i = i + 1)
	{
		num4 = i;
		num2 = func_613(num4);
		flag2 = false;
	
		if (func_614(num4) > 0)
		{
			if (func_615(num4, -1260493738))
			{
			}
			else
			{
				for (j = 0; j <= num2 - 1; j = j + 1)
				{
					num5 = j;
					num3 = func_616(num4, num5);
					flag = false;
				
					for (k = 0; k <= num3 - 1; k = k + 1)
					{
						num6 = k;
					
						if (!func_617(num4, num5, num6, 3))
						{
						}
						else
						{
							func_618(num4, num5, k);
							flag = true;
							break;
						}
					}
				
					if (num3 <= 0)
						func_618(num4, num5, -1);
					else if (!flag)
						func_618(num4, num5, 15);
				
					if (k == 0 && flag && !flag2)
					{
						func_619(num4, j);
						flag2 = true;
					}
				}
			
				if (num2 <= 0)
					func_619(num4, -1);
				else if (!flag2)
					func_619(num4, 15);
			}
		}
	
		j = 0;
	
		if (j <= num2 - 1)
		{
			num5 = j;
			num3 = func_616(num4, num5);
			flag = false;
			k = 0;
		
			if (k <= num3 - 1)
			{
				num6 = k;
			
				if (!func_617(num4, num5, num6, 3))
				{
				}
				else
				{
					func_618(num4, num5, k);
					flag = true;
					goto 0x99;
				}
			
				k = k + 1;
			}
		
			if (num3 <= 0)
				func_618(num4, num5, -1);
			else if (!flag)
				func_618(num4, num5, 15);
		
			if (k == 0 && flag && !flag2)
			{
				func_619(num4, j);
				flag2 = true;
			}
		
			j = j + 1;
		}
	
		if (num2 <= 0)
			func_619(num4, -1);
		else if (!flag2)
			func_619(num4, 15);
	}

	return;
}

void func_324() // Position - 0x9DB0
{
	int i;
	int num;
	int j;
	int num2;
	int num3;
	Hash hash;
	int num4;
	int num5;
	var unk;
	BOOL flag;
	int num6;

	num = func_606();
	func_620(num);

	for (i = 0; i <= num - 1; i = i + 1)
	{
		num4 = i;
		num2 = func_613(num4);
		func_621(num4, num2);
		num3 = func_622(num4);
		func_623(num4, num3);
		unk = { func_624(num4, joaat("cooldown_start")) };
		func_625(num4, unk);
		flag = func_626(num4);
		func_627(num4, flag);
		num6 = func_628(num4, 0);
		func_629(num4, num6);
	
		for (j = 0; j <= num2 - 1; j = j + 1)
		{
			num5 = j;
			hash = func_630(num4, num5);
			func_631(num4, num5, hash);
		}
	}

	return;
}

void func_325() // Position - 0x9E64
{
	int i;
	int num;

	for (i = 0; i <= func_632() - 1; i = i + 1)
	{
		num = num + func_633(i);
	}

	func_634();
	func_326(num);
	return;
}

void func_326(int iParam0) // Position - 0x9E98
{
	int i;
	int numGangMembers;
	Hash missionId;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	BOOL flag;
	Player Plr;
	Player gangLeader;
	Any gangId;
	int replayState;
	int num6;
	var statId;
	Hash category;

	Plr = PLAYER::PLAYER_ID();
	gangId = GANG::NETWORK_GET_GANG_ID(Plr);
	gangLeader = GANG::NETWORK_GET_GANG_LEADER(gangId);
	numGangMembers = GANG::NETWORK_GET_NUM_GANG_MEMBERS(gangId);
	flag = Plr == gangLeader && NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Plr) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Plr);
	num3 = Global_1295666.f_16;

	for (i = 0; i <= iParam0 - 1; i = i + 1)
	{
		num4 = func_635();
	
		if (!func_636(num4))
		{
		}
		else
		{
			num5 = func_637();
			missionId = func_638(num4, num5);
			num = func_639(num4);
			statId = { func_640(num4) };
			STATS::STAT_ID_GET_INT(&statId, &num2);
		
			if (func_636(num4))
			{
				if (MISSIONDATA::MISSIONDATA_IS_VALID(missionId))
				{
					replayState = MISSIONDATA::MISSIONDATA_GET_REPLAY_STATE(missionId);
					num6 = func_641(num4);
					category = func_642(num4);
				
					if (func_341() || Global_1048577 || Global_1048584)
						if (replayState != 2)
							MISSIONDATA::_MISSIONDATA_SET_REPLAY_STATE_LOCKED(missionId, 2);
					else if (flag)
						if (numGangMembers <= 4)
							if (num2 == 0 || num2 + num <= num3)
								if (num6 == 15)
									if (replayState != 0)
										MISSIONDATA::_MISSIONDATA_SET_REPLAY_STATE_LOCKED(missionId, 0);
								else if (num6 > num5)
									if (replayState != 0)
										MISSIONDATA::_MISSIONDATA_SET_REPLAY_STATE_LOCKED(missionId, 0);
								else if (replayState != 3)
									MISSIONDATA::_MISSIONDATA_SET_REPLAY_STATE_LOCKED(missionId, 3);
							else if (replayState != 1)
								MISSIONDATA::_MISSIONDATA_SET_REPLAY_STATE_LOCKED(missionId, 1);
						else if (replayState != 2)
							MISSIONDATA::_MISSIONDATA_SET_REPLAY_STATE_LOCKED(missionId, 2);
					else if (replayState != 6)
						MISSIONDATA::_MISSIONDATA_SET_REPLAY_STATE_LOCKED(missionId, 6);
				}
			
				if (num6 == 15)
					if (MISSIONDATA::_MISSIONDATA_IS_REPLAY_CATEGORY_LOCKED(category))
						MISSIONDATA::MISSIONDATA_SET_REPLAY_LOCKED_FOR_CATEGORY(category, false);
				else if (!MISSIONDATA::_MISSIONDATA_IS_REPLAY_CATEGORY_LOCKED(category))
					MISSIONDATA::MISSIONDATA_SET_REPLAY_LOCKED_FOR_CATEGORY(category, true);
			}
			else
			{
				num5 = func_633(num4) - 1;
			}
		
			num5 = (num5 + 1) % func_633(num4);
			func_643(num5);
		
			if (num5 == 0)
			{
				num4 = (num4 + 1) % func_632();
				func_644(num4);
			}
		}
	}

	return;
}

var func_327() // Position - 0xA07B
{
	return Global_1296390.f_58;
}

BOOL func_328(int iParam0) // Position - 0xA089
{
	if (Global_1048577)
		return false;

	switch (iParam0)
	{
		case 0:
		case 13:
		case 14:
		case 15:
			return false;
	
		default:
		
	}

	return true;
}

void func_329(int iParam0) // Position - 0xA0C1
{
	Global_1296390.f_58 = iParam0;
	return;
}

BOOL func_330(Player plParam0) // Position - 0xA0D1
{
	return Global_1056554[plParam0 /*491*/].f_204.f_9;
}

void func_331(BOOL bParam0) // Position - 0xA0E6
{
	Global_1296390.f_58.f_1 = bParam0;
	return;
}

BOOL func_332(BOOL bParam0) // Position - 0xA0F8
{
	int num;

	num = { func_645(bParam0) };

	if (num.f_3 != 1)
		return false;

	return func_646(num, num.f_1) != 0;
}

void func_333(int iParam0) // Position - 0xA122
{
	Global_1296390.f_58.f_1.f_2 = Global_1296390.f_58.f_1.f_2 || iParam0;
	return;
}

BOOL func_334() // Position - 0xA141
{
	return Global_1296390.f_58.f_1;
}

int func_335(BOOL bParam0) // Position - 0xA151
{
	var unk;
	int num;

	unk = -1;
	unk.f_1 = -1;
	unk.f_3 = -1;
	unk.f_3.f_1 = -1;
	unk.f_3.f_2 = -1;
	unk.f_3.f_4 = -1;
	unk.f_3.f_5 = -1;
	unk.f_9 = -1;
	unk.f_3 = { func_645(bParam0) };
	num = func_646(unk.f_3, unk.f_3.f_1);

	if (num == 0)
		return 0;

	unk = { func_647(num, 7) };
	unk.f_2 = MISC::GET_GAME_TIMER();

	if (!func_18(unk))
		return 0;

	func_648(0, &unk);
	return 1;
}

BOOL func_336(int iParam0) // Position - 0xA1E1
{
	return Global_1296390.f_58.f_1.f_1 && iParam0 != false;
}

void func_337(int iParam0) // Position - 0xA1F8
{
	Global_1296390.f_58.f_1.f_1 = Global_1296390.f_58.f_1.f_1 - Global_1296390.f_58.f_1.f_1 && iParam0;
	return;
}

int func_338(Player plParam0) // Position - 0xA222
{
	if (plParam0 == 255)
		plParam0 = Global_1295666.f_5;

	return Global_263042[plParam0 /*65*/];
}

void func_339(int iParam0) // Position - 0xA241
{
	Global_1296390.f_58.f_1.f_1 = Global_1296390.f_58.f_1.f_1 || iParam0;
	return;
}

void func_340() // Position - 0xA260
{
	BOOL flag;

	flag = func_334();
	func_649(flag);
	return;
}

BOOL func_341() // Position - 0xA274
{
	return Global_1072759.f_28644.f_23.f_3 != 0;
}

struct<2> func_342(int iParam0) // Position - 0xA289
{
	return Global_1296390.f_58.f_4[iParam0 /*10*/];
}

int func_343(var uParam0, var uParam1) // Position - 0xA29F
{
	var unk;

	unk.f_1 = -1;
	unk.f_2 = -1;

	if (func_77(uParam0, &unk))
		return unk.f_1;

	return -1;
}

int func_344(int iParam0) // Position - 0xA2CB
{
	return Global_1296390.f_58.f_4[iParam0 /*10*/].f_3;
}

struct<8> func_345(int iParam0) // Position - 0xA2E1
{
	var unk;
	var unk6;

	if (!func_650(&unk))
		return unk6;

	if (!func_651(&unk, 13, 0, 0, 1))
		return unk6;

	if (!func_651(&unk, 17, 0, 0, 1))
		return unk6;

	if (!func_651(&unk, 19, iParam0, 0, 1))
		return unk6;

	if (!func_651(&unk, 58, 0, 0, 1))
		return unk6;

	if (!func_651(&unk, 59, 0, 0, 1))
		return unk6;

	return func_652(&unk, 67, 1);
}

const char* func_346(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0xA378
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

void func_347(int iParam0) // Position - 0xA38C
{
	func_514(&(Global_1296390.f_50.f_3), func_653(iParam0, 1), 1);
	return;
}

void func_348(BOOL bParam0) // Position - 0xA3A9
{
	func_59(&(Global_1572887.f_72.f_16), bParam0);
	return;
}

int func_349(int iParam0) // Position - 0xA3BF
{
	return Global_1296390.f_58.f_4[iParam0 /*10*/].f_3.f_1;
}

int func_350(int iParam0) // Position - 0xA3D7
{
	return Global_1296390.f_58.f_4[iParam0 /*10*/].f_3.f_2;
}

struct<2> func_351(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0xA3EF
{
	var unk;
	var unk6;
	int num;
	int num2;

	if (!func_650(&unk))
		return unk6;

	if (!func_651(&unk, 13, 0, 0, 1))
		return unk6;

	if (!func_651(&unk, 17, 0, 0, 1))
		return unk6;

	if (!func_651(&unk, 19, iParam0, 0, 1))
		return unk6;

	if (!func_651(&unk, 20, 0, 0, 1))
		return unk6;

	if (!func_651(&unk, 23, iParam1, 0, 1))
		return unk6;

	if (!func_651(&unk, 36, 0, 0, iParam3))
		return unk6;

	if (!func_651(&unk, 37, iParam2, 0, iParam3))
		return unk6;

	num = func_654(&unk);
	num2 = func_655(&unk);
	return func_656(num, num2);
}

void func_352(Any* panParam0) // Position - 0xA4BF
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1296390.f_50.f_5), panParam0, 3);
	return;
}

void func_353() // Position - 0xA4D6
{
	var unk;

	unk = { func_657(0) };

	if (func_658(1))
		return;

	unk.f_2 = MISC::GET_GAME_TIMER();

	if (func_336(8))
		unk.f_9 = 0;
	else
		unk.f_9 = 1;

	func_659(0);
	func_648(1, &unk);
	return;
}

void func_354() // Position - 0xA51D
{
	var SourceStruct;

	MISC::COPY_SCRIPT_STRUCT(&(Global_1296390.f_58.f_1), &SourceStruct, 3);
	return;
}

BOOL func_355() // Position - 0xA534
{
	return Global_1901671.f_1 != -1;
}

BOOL func_356() // Position - 0xA544
{
	if (NETWORK::NETWORK_IS_TUNABLE_CLOUD_REQUEST_PENDING())
	{
		func_660();
		return false;
	}

	return true;
}

void func_357() // Position - 0xA55C
{
	Global_1572887.f_9 = 0;
	func_660();
	return;
}

int func_358() // Position - 0xA56F
{
	return func_661();
}

void func_359() // Position - 0xA57B
{
	func_663(func_662(1));
	func_664(Global_1107816.f_33[func_662(2) /*16*/].f_1, -1);

	if (NETWORK::NETWORK_IS_HOST())
		func_665();

	if (func_666())
	{
		func_667(&(Global_1107816.f_33.f_513), &(Global_1110244.f_10));
		func_668(func_662(0));
		func_669(func_662(3));
		func_670(func_662(0));
		func_671();
	}

	func_672();
	func_673();
	func_674();
	func_675();
	func_676();
	func_677();
	func_678();
	func_679();
	func_680();
	func_681();
	func_682();

	if (Global_1110244.f_15)
	{
		func_683();
		Global_1110244.f_15 = 0;
	}

	func_684();
	return;
}

BOOL func_360() // Position - 0xA629
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_5)
		return true;

	if (Global_2883584)
		return true;

	if (Global_1048577)
		return true;

	if (!func_18(Global_1051268) && Global_1572887.f_8 & true != 0)
		return true;

	return false;
}

void func_361() // Position - 0xA681
{
	BOOL flag;

	Global_1072759.f_19585.f_24 = 1;

	if (Global_1072759.f_19585.f_25 != -1)
		flag = true;

	Global_1072759.f_19585.f_25 = MISC::GET_FRAME_COUNT();

	if (!flag)
		func_685();

	return;
}

BOOL func_362(int iParam0, int iParam1) // Position - 0xA6BA
{
	BOOL num;

	if (!func_686(iParam0))
		return true;

	switch (Global_1072759.f_19585.f_23)
	{
		case 0:
			func_687(iParam0, &num);
			break;
	
		case 1:
			func_688(iParam1, iParam0);
			break;
	
		case 2:
			Global_1072759.f_19585[iParam0] = func_689(Global_1072759.f_19585.f_19, Global_1072759.f_19585.f_20);
			num = 1;
			break;
	}

	return num;
}

void func_363() // Position - 0xA730
{
	if (Global_1072759.f_19585.f_25 == MISC::GET_FRAME_COUNT())
		return;

	if (Global_1072759.f_19585.f_24)
	{
		Global_1072759.f_19585.f_24 = 0;
	}
	else if (Global_1072759.f_19585.f_25 != -1)
	{
		Global_1072759.f_19585.f_25 = -1;
		func_685();
	}

	return;
}

BOOL func_364(int iParam0) // Position - 0xA77F
{
	int i;

	if (!func_690(iParam0))
		return false;

	for (i = 0; i < 40; i = i + 1)
	{
		if (Global_1292143.f_459.f_44[i /*30*/] == iParam0)
			return true;
	}

	return false;
}

void func_365() // Position - 0xA7BF
{
	int gangId;

	gangId = GANG::NETWORK_GET_GANG_ID(Global_1295666.f_5);

	if (Global_1295666.f_10 != gangId)
		Global_1295666.f_10 = gangId;

	if (Global_1072759.f_28295 != Global_1295666.f_10)
		Global_1072759.f_28295 = Global_1295666.f_10;

	return;
}

BOOL func_366(int iParam0, Player plParam1) // Position - 0xA803
{
	if (!func_691(iParam0))
		return false;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam1) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(plParam1))
		return false;

	return MISC::_IS_BIT_FLAG_SET(&(Global_1056554[plParam1 /*491*/].f_15.f_21), iParam0);
}

void func_367() // Position - 0xA847
{
	Global_1960746 = false;
	return;
}

void func_368(int iParam0) // Position - 0xA854
{
	Player playerIndex;

	if (!func_691(iParam0))
		return;

	playerIndex = PLAYER::GET_PLAYER_INDEX();

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(playerIndex) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(playerIndex))
		return;

	if (func_366(iParam0, playerIndex))
		return;

	MISC::_SET_BIT_FLAG(&(Global_1056554[playerIndex /*491*/].f_15.f_21), iParam0);
	return;
}

void func_369(int iParam0) // Position - 0xA8AA
{
	Player playerIndex;

	if (!func_691(iParam0))
		return;

	playerIndex = PLAYER::GET_PLAYER_INDEX();

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(playerIndex) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(playerIndex))
		return;

	if (!func_366(iParam0, playerIndex))
		return;

	MISC::_CLEAR_BIT_FLAG(&(Global_1056554[playerIndex /*491*/].f_15.f_21), iParam0);
	return;
}

int func_370(var uParam0, var uParam1) // Position - 0xA901
{
	int num;

	if (!func_18(uParam0))
		return -1;

	num = func_692(uParam0);

	if (num < 0)
		return 0;

	return Global_1072759.f_19487.f_1[num /*3*/].f_2;
}

void func_371(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5, int iParam6) // Position - 0xA93C
{
	var StringToTest;

	if (!func_693(iParam1))
	{
		iParam1 = func_695(func_694(iParam0));
	
		if (!func_693(iParam1))
			return;
	}

	if (MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*72*/].f_28))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(Global_1835011[iParam0 /*72*/].f_28));
		Global_1835011[iParam0 /*72*/].f_66 = 0;
	}
	else if (bParam2 && !Global_26688)
	{
		func_696(iParam0, iParam5, iParam1);
	}

	if (func_697(iParam1, 48))
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1835011[iParam0 /*72*/].f_13));

	StringToTest = { Global_1835011[iParam0 /*72*/].f_13 };

	if (bParam3 && !MISC::IS_STRING_NULL_OR_EMPTY(&StringToTest) && SCRIPTS::IS_THREAD_ACTIVE(Global_1835011[iParam0 /*72*/].f_17, false))
		SCRIPTS::_REQUEST_THREAD_EXIT(Global_1835011[iParam0 /*72*/].f_17);

	if (bParam4)
		func_698(Global_1835011[iParam0 /*72*/].f_1);
	else
		func_699(iParam1, 3831);

	Global_1835011[iParam0 /*72*/].f_71 = 0;
	return;
}

int func_372(var uParam0, var uParam1) // Position - 0xAA3A
{
	int num;
	int num2;
	var unk;

	if (Global_1900530 == 15)
		return -1;

	if (!func_700(uParam0))
		return -1;

	num2 = func_695(uParam0);

	if (num2 >= 0)
	{
		func_701(uParam0, true);
		return num2;
	}
	else
	{
		num = Global_1900530;
		Global_1900531[num /*2*/] = { uParam0 };
		Global_1900562[num /*2*/] = { unk };
		func_701(uParam0, true);
		Global_1900530 = Global_1900530 + 1;
	
		if (Global_1900530 > 15)
			Global_1900530 = 15;
	
		return num;
	}

	return -1;
}

void func_373() // Position - 0xAACA
{
	int num;
	Blip blipIndex;

	num = func_702();

	if (num == 0)
	{
		func_703();
	}
	else
	{
		if (UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1) == num)
			return;
	
		blipIndex = func_704();
	
		if (MAP::DOES_BLIP_EXIST(blipIndex))
		{
			MAP::REMOVE_BLIP(&blipIndex);
			func_705(0);
		}
	
		func_706(0);
	}

	return;
}

int func_374() // Position - 0xAB11
{
	return Global_1295849.f_492;
}

BOOL func_375(int iParam0) // Position - 0xAB20
{
	return Global_1295849.f_492.f_1 && iParam0 != false;
}

void func_376(int iParam0) // Position - 0xAB36
{
	Global_1295849.f_492 = iParam0;
	return;
}

void func_377(int iParam0) // Position - 0xAB47
{
	Global_1295849.f_492.f_1 = Global_1295849.f_492.f_1 || iParam0;
	return;
}

BOOL func_378() // Position - 0xAB64
{
	return func_707() == PLAYER::PLAYER_ID();
}

BOOL func_379() // Position - 0xAB75
{
	int num;
	int num2;
	Hash unlockHash;
	Hash unlockHash2;

	num = func_387();

	if (num == -1)
		return false;

	if (func_708() == 14)
		return false;

	if (func_415() == 6)
		return false;

	num2 = func_389();

	if (num2 == -1)
		return false;

	unlockHash = func_709(num, num2);

	if (!UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
		return false;

	if (!UNLOCK::UNLOCK_IS_VISIBLE(unlockHash))
		return false;

	unlockHash2 = func_711(func_710(num, num2));

	if (!UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash2))
		return false;

	if (!UNLOCK::UNLOCK_IS_VISIBLE(unlockHash2))
		return false;

	return true;
}

void func_380(int iParam0) // Position - 0xAC07
{
	Player player;

	player = PLAYER::PLAYER_ID();

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player))
		return;

	if (func_707() != player)
		return;

	Global_1056554[PLAYER::PLAYER_ID() /*491*/].f_436 = Global_1056554[PLAYER::PLAYER_ID() /*491*/].f_436 || iParam0;
	return;
}

void func_381() // Position - 0xAC4D
{
	Player player;

	player = PLAYER::PLAYER_ID();

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player))
		return;

	func_712(func_387());
	func_713(func_708());
	func_714(func_415());
	func_715(func_389());
	return;
}

void func_382() // Position - 0xAC88
{
	Player gangLeader;

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(gangLeader))
		return;

	func_717(func_716(gangLeader));
	func_719(func_718(gangLeader));
	func_721(func_720(gangLeader));
	func_723(func_722(gangLeader));
	return;
}

BOOL func_383(Player plParam0, int iParam1) // Position - 0xACD3
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0))
		return false;

	return Global_1056554[plParam0 /*491*/].f_436.f_1 && iParam1 != false;
}

BOOL func_384() // Position - 0xACFC
{
	int num;

	if (!BOUNTY::BOUNTY_GET_COOLDOWN_COLLECTION(&num))
		return true;

	return Global_1295666.f_16 < num;
}

void func_385(BOOL bParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xAD1B
{
	if (bParam0)
	{
		func_724(1);
		Global_1072759.f_28644.f_8 = iParam1;
	}
	else
	{
		func_724(2);
	
		if (bParam2)
			func_724(4);
		else
			func_725(4);
	
		if (bParam3)
			func_724(256);
		else
			func_725(256);
	}

	return;
}

void func_386(int iParam0) // Position - 0xAD68
{
	func_726(0, 0, iParam0, 129, -1, false, -1);
	return;
}

int func_387() // Position - 0xAD7D
{
	return Global_1295849.f_492.f_2;
}

int func_388(int iParam0) // Position - 0xAD8E
{
	return Global_1295849[iParam0 /*37*/].f_8;
}

int func_389() // Position - 0xADA0
{
	return Global_1295849.f_492.f_5;
}

int func_390(int iParam0) // Position - 0xADB1
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 2;
	
		default:
		
	}

	return 0;
}

void func_391(int iParam0) // Position - 0xADD9
{
	Global_1295849.f_492.f_10 = iParam0;
	return;
}

void func_392() // Position - 0xADEC
{
	var SourceStruct;

	func_407(536870912);
	func_407(1073741824);
	func_407(268435456);
	MISC::COPY_SCRIPT_STRUCT(&(Global_1295849.f_492.f_6), &SourceStruct, 4);
	return;
}

BOOL func_393(int iParam0) // Position - 0xAE1F
{
	Player gangLeader;

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(gangLeader))
		return false;

	return Global_1056554[gangLeader /*491*/].f_436 && iParam0 != false;
}

BOOL func_394() // Position - 0xAE54
{
	return Global_1295849.f_492.f_29;
}

int func_395() // Position - 0xAE65
{
	if (func_57() == 0)
		return MONEY::_NETWORK_GET_CASH_BALANCE();

	return MONEY::_MONEY_GET_CASH_BALANCE();
}

void func_396(int iParam0) // Position - 0xAE80
{
	Global_1295849.f_492.f_14 = iParam0;
	return;
}

struct<4> func_397(BOOL bParam0) // Position - 0xAE93
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_503(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_502(joaat("character"), func_727(), -1591664384, bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_502(joaat("character"), func_727(), -1591664384, false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_502(joaat("character"), func_727(), -1591664384, bParam0);
}

Hash func_398(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0xAF33
{
	int inventoryItemCountWithGuid;
	var guid;

	if (!func_728(hParam0, 0))
		return 0;

	if (!bParam7 && func_729(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_502(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_503(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_503(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

void func_399(int iParam0) // Position - 0xAFB2
{
	Global_1295849.f_492.f_15 = iParam0;
	return;
}

Hash func_400(int iParam0) // Position - 0xAFC5
{
	Hash hash;

	if (!func_730(iParam0))
		return 0;

	hash = func_731(iParam0);

	if (hash != -1)
		return hash;
	else
		return func_732(iParam0, false);

	return 0;
}

void func_401(Hash hParam0) // Position - 0xAFFC
{
	Global_1295849.f_492.f_12 = hParam0;
	return;
}

void func_402(Hash hParam0) // Position - 0xB00F
{
	Global_1295849.f_492.f_13 = hParam0;
	return;
}

void func_403() // Position - 0xB022
{
	Global_1913444 = true;
	return;
}

void func_404() // Position - 0xB02F
{
	var SourceStruct;

	SourceStruct.f_1 = 11;
	MISC::COPY_SCRIPT_STRUCT(&(Global_1295849.f_492.f_16), &SourceStruct, 13);
	return;
}

BOOL func_405() // Position - 0xB052
{
	return !Global_1913444;
}

void func_406() // Position - 0xB05F
{
	Global_1913444 = false;
	return;
}

void func_407(int iParam0) // Position - 0xB06C
{
	Global_1295849.f_492.f_1 = Global_1295849.f_492.f_1 - Global_1295849.f_492.f_1 && iParam0;
	return;
}

var func_408() // Position - 0xB093
{
	return Global_1295849.f_492.f_14;
}

int func_409(const char* sParam0, char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0xB0A4
{
	int num;
	var unk13;
	int num2;

	num = -2;
	num.f_1 = sParam5;
	num.f_2 = sParam6;
	num.f_3 = iParam7;
	num = 450;
	unk13.f_1 = sParam0;
	unk13.f_2 = sParam1;
	unk13.f_3 = hParam2;
	unk13.f_4 = iParam3;
	unk13.f_5 = iParam4;
	unk13.f_6 = 0;
	num2 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST_RIGHT(&num, &unk13, bParam8);
	func_733(sParam0, sParam1, hParam2);
	return num2;
}

var func_410() // Position - 0xB107
{
	return Global_1295849.f_492.f_15;
}

int func_411(int iParam0) // Position - 0xB118
{
	return iParam0 / 100;
}

int func_412(int iParam0, BOOL bParam1) // Position - 0xB125
{
	if (bParam1)
		return (iParam0 % 100) / 1;

	return iParam0 / 1;
}

var func_413() // Position - 0xB143
{
	return Global_1295849.f_492.f_12;
}

var func_414() // Position - 0xB154
{
	return Global_1295849.f_492.f_13;
}

int func_415() // Position - 0xB165
{
	return Global_1295849.f_492.f_4;
}

void func_416(int iParam0) // Position - 0xB176
{
	Global_1295849.f_537 = Global_1295849.f_537 || iParam0;
	return;
}

void func_417() // Position - 0xB18F
{
	int num;
	int num2;

	if (func_707() == PLAYER::PLAYER_ID())
		num = 0;
	else
		num = 1;

	num2 = func_389();

	if (num2 == -1)
		return;

	func_734(num, num2, func_387());
	func_735(num, num2, MISC::GET_GAME_TIMER());
	func_736(num, num2, func_415());
	return;
}

void func_418() // Position - 0xB1DE
{
	int SourceStruct;

	SourceStruct.f_2 = -1;
	SourceStruct.f_3 = 14;
	SourceStruct.f_4 = 6;
	SourceStruct.f_5 = -1;
	SourceStruct.f_16.f_1 = 11;
	SourceStruct = func_374();
	MISC::COPY_SCRIPT_STRUCT(&(Global_1295849.f_492), &SourceStruct, 30);
	return;
}

void func_419() // Position - 0xB222
{
	var SourceStruct;

	SourceStruct.f_2 = -1;
	SourceStruct.f_3 = 14;
	SourceStruct.f_4 = 6;
	SourceStruct.f_5 = -1;
	MISC::COPY_SCRIPT_STRUCT(&(Global_1056554[PLAYER::PLAYER_ID() /*491*/].f_436), &SourceStruct, 7);
	return;
}

void func_420() // Position - 0xB25B
{
	Hash hash;
	int num;

	hash = func_737();

	if (hash == 0)
		return;

	num = func_738(hash);

	if (func_739())
		return;

	func_740(Global_265213.f_107995.f_14228[num], 0, 255, 0, false);
	return;
}

void func_421(int iParam0) // Position - 0xB29E
{
	Global_1940252.f_11600 = iParam0;
	return;
}

void func_422(int iParam0) // Position - 0xB2AF
{
	int num;
	int i;

	num = func_738(func_737());

	for (i = 0; i < 31; i = i + 1)
	{
		if (Global_265213.f_107995.f_1028[num /*194*/][i /*6*/] == Global_265213.f_122484.f_80.f_12)
			break;
	}

	switch (iParam0)
	{
		case 0:
			func_740(Global_265213.f_107995.f_1028[num /*194*/][i /*6*/].f_3, 0, 255, 0, false);
			break;
	
		case 1:
			func_740(Global_265213.f_107995.f_1028[num /*194*/][i /*6*/].f_4, 0, 255, 0, false);
			break;
	}

	return;
}

void func_423() // Position - 0xB355
{
	func_421(3);
	return;
}

void func_424() // Position - 0xB362
{
	Global_1207339.f_1 = 0;

	if (Global_1295666.f_17[0])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[0 /*12*/];

	if (Global_1295666.f_17[1])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[1 /*12*/];

	if (Global_1295666.f_17[2])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[2 /*12*/];

	if (Global_1295666.f_17[3])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[3 /*12*/];

	if (Global_1295666.f_17[4])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[4 /*12*/];

	if (Global_1295666.f_17[5])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[5 /*12*/];

	if (Global_1295666.f_17[6])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[6 /*12*/];

	if (Global_1295666.f_17[7])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[7 /*12*/];

	if (Global_1295666.f_17[8])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[8 /*12*/];

	if (Global_1295666.f_17[9])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[9 /*12*/];

	if (Global_1295666.f_17[10])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[10 /*12*/];

	if (Global_1295666.f_17[11])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[11 /*12*/];

	if (Global_1295666.f_17[12])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[12 /*12*/];

	if (Global_1295666.f_17[13])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[13 /*12*/];

	if (Global_1295666.f_17[14])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[14 /*12*/];

	if (Global_1295666.f_17[15])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[15 /*12*/];

	if (Global_1295666.f_17[16])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[16 /*12*/];

	if (Global_1295666.f_17[17])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[17 /*12*/];

	if (Global_1295666.f_17[18])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[18 /*12*/];

	if (Global_1295666.f_17[19])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[19 /*12*/];

	if (Global_1295666.f_17[20])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[20 /*12*/];

	if (Global_1295666.f_17[21])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[21 /*12*/];

	if (Global_1295666.f_17[22])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[22 /*12*/];

	if (Global_1295666.f_17[23])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[23 /*12*/];

	if (Global_1295666.f_17[24])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[24 /*12*/];

	if (Global_1295666.f_17[25])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[25 /*12*/];

	if (Global_1295666.f_17[26])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[26 /*12*/];

	if (Global_1295666.f_17[27])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[27 /*12*/];

	if (Global_1295666.f_17[28])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[28 /*12*/];

	if (Global_1295666.f_17[29])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[29 /*12*/];

	if (Global_1295666.f_17[30])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[30 /*12*/];

	if (Global_1295666.f_17[31])
		Global_1207339.f_1 = Global_1207339.f_1 || Global_1206954[31 /*12*/];

	if (!Global_1207339)
	{
		if (func_741(8192))
			POPULATION::DISABLE_AMBIENT_ROAD_POPULATION(true);
		else
			POPULATION::ENABLE_AMBIENT_ROAD_POPULATION();
	
		Global_1207339 = true;
	}

	return;
}

int func_425() // Position - 0xB7C4
{
	return Global_1300387.f_155;
}

int func_426(int iParam0) // Position - 0xB7D2
{
	return Global_1300387.f_155.f_4[iParam0 /*4*/];
}

void func_427() // Position - 0xB7E6
{
	int Arg;
	Player Plr;
	Ped playerPed;
	Ped playerPed2;
	float num;

	Arg = func_425();
	Plr = PLAYER::INT_TO_PLAYERINDEX(Arg);

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Plr))
		return;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Plr))
		return;

	if (!func_742(Plr, 2))
		return;

	playerPed = PLAYER::GET_PLAYER_PED(Plr);

	if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
		return;

	playerPed2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());

	if (!ENTITY::DOES_ENTITY_EXIST(playerPed2))
		return;

	num = func_743(ENTITY::GET_ENTITY_COORDS(playerPed, true, false), ENTITY::GET_ENTITY_COORDS(playerPed2, true, false));

	if (num > func_744())
	{
		func_745(Arg, 2);
	}
	else
	{
		func_746(Arg, NETWORK::GET_NETWORK_TIME_ACCURATE());
		func_745(Arg, 1);
	}

	return;
}

void func_428() // Position - 0xB88B
{
	int Arg;
	Player Plr;
	Ped playerPed;
	Ped playerPed2;
	float num;

	Arg = func_425();
	Plr = PLAYER::INT_TO_PLAYERINDEX(Arg);

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Plr))
	{
		func_747(Arg);
		func_745(Arg, 0);
		return;
	}

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Plr))
	{
		func_747(Arg);
		func_745(Arg, 0);
		return;
	}

	if (!func_742(Plr, 2))
	{
		func_747(Arg);
		func_745(Arg, 0);
		return;
	}

	playerPed = PLAYER::GET_PLAYER_PED(Plr);

	if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
	{
		func_747(Arg);
		func_745(Arg, 0);
		return;
	}

	playerPed2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());

	if (!ENTITY::DOES_ENTITY_EXIST(playerPed2))
		return;

	num = func_743(ENTITY::GET_ENTITY_COORDS(playerPed, true, false), ENTITY::GET_ENTITY_COORDS(playerPed2, true, false));

	if (num > func_744())
		return;

	func_746(Arg, NETWORK::GET_NETWORK_TIME_ACCURATE());
	func_745(Arg, 1);
	return;
}

void func_429() // Position - 0xB95D
{
	int Arg;
	Player Plr;

	Arg = func_425();
	Plr = PLAYER::INT_TO_PLAYERINDEX(Arg);

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Plr))
	{
		func_747(Arg);
		func_745(Arg, 0);
		return;
	}

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Plr))
	{
		func_747(Arg);
		func_745(Arg, 0);
		return;
	}

	if (!func_742(Plr, 2))
	{
		func_747(Arg);
		func_745(Arg, 0);
		return;
	}

	return;
}

void func_430(int iParam0) // Position - 0xB9C2
{
	Global_1300387.f_155 = iParam0;
	return;
}

void func_431() // Position - 0xB9D2
{
	int Arg;
	int alpha_param;
	int timeDifference;
	int timeDifference2;
	int timeDifference3;
	int value;
	Player Plr;
	int Time1;
	int networkTimeAccurate;
	int Time12;
	Ped playerPed;
	Hash entityModel;
	float num;
	float num2;

	Arg = func_425();
	Plr = PLAYER::INT_TO_PLAYERINDEX(Arg);

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Plr))
	{
		func_747(Arg);
		func_745(Arg, 0);
		func_748(Plr);
		return;
	}

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Plr))
	{
		func_747(Arg);
		func_745(Arg, 0);
		func_748(Plr);
		return;
	}

	if (!func_742(Plr, 2))
	{
		func_747(Arg);
		func_745(Arg, 0);
		func_748(Plr);
		return;
	}

	networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Time1 = func_749(Plr);
	Time12 = func_750(Arg);
	timeDifference = NETWORK::GET_TIME_DIFFERENCE(Time1, networkTimeAccurate);
	timeDifference2 = NETWORK::GET_TIME_DIFFERENCE(Time12, networkTimeAccurate);
	timeDifference3 = NETWORK::GET_TIME_DIFFERENCE(Time1, Time12);
	playerPed = PLAYER::GET_PLAYER_PED(Plr);

	if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
	{
		func_747(Arg);
		func_745(Arg, 0);
		func_748(Plr);
		return;
	}

	entityModel = ENTITY::GET_ENTITY_MODEL(playerPed);

	if (entityModel != joaat("mp_male") && entityModel != joaat("mp_female"))
	{
		value = func_752(func_751() - timeDifference3, 1, func_751());
		num = BUILTIN::TO_FLOAT(timeDifference2) / BUILTIN::TO_FLOAT(value);
		num2 = func_753(num, 0f, 1f);
		alpha_param = BUILTIN::FLOOR(func_754(48f, 255f, 1f - num2));
		ENTITY::SET_ENTITY_ALPHA(playerPed, alpha_param, false);
		func_755(Plr, alpha_param);
		func_756(Plr);
	}

	NETWORK::NETWORK_ALLOW_ENTITY_FADING_FOR_INSTANCES(playerPed, false);

	if (timeDifference > func_751())
	{
		func_745(Arg, 3);
		func_748(Plr);
	}

	return;
}

void func_432(Player plParam0) // Position - 0xBB3F
{
	Player Plr;
	int* p_num;
	int num;

	if (plParam0 == Global_1295666)
		return;

	Plr = PLAYER::INT_TO_PLAYERINDEX(plParam0);

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Plr))
	{
		func_433(plParam0);
		return;
	}

	p_num = Global_1220761[plParam0 /*2*/];
	num = Global_1220761[plParam0 /*2*/].f_1;

	if (p_num == -1 || num == -1)
	{
		func_433(plParam0);
		return;
	}

	if (p_num == Global_1220761[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/] && num == Global_1220761[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/].f_1)
	{
		func_433(plParam0);
		return;
	}

	if (ENTITY::DOES_ENTITY_EXIST(Global_1220826.f_48[p_num /*21*/][num /*4*/]))
	{
		func_433(plParam0);
		return;
	}

	if (BUILTIN::VDIST(Global_34, Global_1220826.f_48[p_num /*21*/][num /*4*/].f_1) > 100f)
	{
		func_433(plParam0);
		return;
	}

	func_757(plParam0, p_num, num);
	return;
}

void func_433(Player plParam0) // Position - 0xBC20
{
	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(Global_1220826.f_1099[plParam0 /*3*/]))
		PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1220826.f_1099[plParam0 /*3*/], false);

	return;
}

void func_434() // Position - 0xBC4A
{
	Global_1102813.f_26.f_3348 = { 0f, 0f, 0f };
	Global_1102813.f_26.f_3354 = { 0f, 0f, 0f };
	Global_1102813.f_26.f_3347 = 1;
	return;
}

void func_435(int iParam0, Player plParam1) // Position - 0xBC78
{
	if (func_758(plParam1, iParam0))
	{
		if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&Global_1295205.f_23[iParam0 /*3*/]))
		{
			Global_1295205.f_23[iParam0 /*3*/].f_1 = Global_1295299;
			Global_1295205.f_23[iParam0 /*3*/].f_2 = 4000;
		}
		else if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&Global_1295205.f_23[iParam0 /*3*/], plParam1))
		{
			Global_1295205.f_23[iParam0 /*3*/].f_1 = Global_1295299;
			Global_1295205.f_23[iParam0 /*3*/].f_2 = Global_1295205.f_23[iParam0 /*3*/].f_2 + 2000;
		
			if (Global_1295205.f_23[iParam0 /*3*/].f_2 > 5000)
				Global_1295205.f_23[iParam0 /*3*/].f_2 = 5000;
		}
	
		SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&Global_1295205.f_23[iParam0 /*3*/], plParam1);
	}
	else
	{
		SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&Global_1295205.f_23[iParam0 /*3*/], plParam1);
	}

	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&Global_1295205.f_23[iParam0 /*3*/]))
		return;

	switch (iParam0)
	{
		case 0:
			if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_1295205.f_23[iParam0 /*3*/].f_1, Global_1295299)) < Global_1295205.f_23[iParam0 /*3*/].f_2)
				return;
			break;
	}

	if (!func_759(Global_1295205.f_23[iParam0 /*3*/], iParam0))
		return;

	SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&Global_1295205.f_23[iParam0 /*3*/]);
	return;
}

void func_436(int iParam0) // Position - 0xBDB7
{
	Player Plr;

	Plr = PLAYER::INT_TO_PLAYERINDEX(Global_1295299.f_34);

	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&(iParam0->f_2)))
	{
		func_760(iParam0, 2);
		return;
	}

	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(iParam0->f_2), Global_1295299.f_34))
		if (!NETWORK::NETWORK_IS_PLAYER_CONNECTED(Plr))
			func_761(iParam0, Plr, Global_1295299.f_34);
		else if (func_579(16, Global_1295299.f_34))
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(iParam0->f_4), Global_1295299.f_34);

	if (SCRIPTS::COUNT_PLAYER_BITS(&(iParam0->f_4)) < SCRIPTS::COUNT_PLAYER_BITS(&(iParam0->f_2)))
		return;

	func_760(iParam0, 1);
	return;
}

void func_437(int iParam0) // Position - 0xBE47
{
	Player i;
	Player Plr;
	Player player;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0->f_3) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(iParam0->f_3))
	{
		iParam0->f_3 = 255;
	
		for (i = 0; i < 32; i = i + 1)
		{
			if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(iParam0->f_2), i))
			{
			}
			else
			{
				Plr = PLAYER::INT_TO_PLAYERINDEX(i);
			
				if (!NETWORK::NETWORK_IS_PLAYER_CONNECTED(Plr))
				{
					func_761(iParam0, Plr, i);
				}
				else if (func_579(64, i))
				{
				}
				else
				{
					iParam0->f_3 = PLAYER::INT_TO_PLAYERINDEX(i);
					break;
				}
			}
		}
	
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0->f_3))
			func_760(iParam0, 2);
	
		return;
	}

	player = iParam0->f_3;

	if (func_579(64, player))
	{
		iParam0->f_3 = 255;
		return;
	}

	if (!func_579(32, player))
		return;

	func_760(iParam0, 2);
	return;
}

void func_438(int iParam0, int iParam1) // Position - 0xBF14
{
	Player Plr;

	Plr = PLAYER::INT_TO_PLAYERINDEX(Global_1295299.f_34);

	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(iParam0->f_2), Global_1295299.f_34))
		if (!NETWORK::NETWORK_IS_PLAYER_CONNECTED(Plr))
			func_761(iParam0, Plr, Global_1295299.f_34);
		else if (func_579(128, Global_1295299.f_34))
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(iParam0->f_5), Global_1295299.f_34);

	if (SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&(iParam0->f_2)))
		if (SCRIPTS::COUNT_PLAYER_BITS(&(iParam0->f_5)) < SCRIPTS::COUNT_PLAYER_BITS(&(iParam0->f_2)))
			return;

	func_762(iParam1);
	return;
}

void func_439(BOOL bParam0) // Position - 0xBF9B
{
	Global_1893611 = Global_1893611 || bParam0;
	return;
}

void func_440(var uParam0) // Position - 0xBFAE
{
	var unk;
	int i;

	unk.f_2 = -1;
	unk.f_2.f_1 = -1;
	unk.f_2.f_5 = 255;
	unk.f_11 = 3;
	unk.f_15 = -1;
	unk.f_15.f_1 = 10;
	unk.f_15.f_13 = 7;
	unk.f_15.f_21 = 2;
	unk.f_42.f_1 = 10;
	unk.f_42.f_1.f_1.f_1 = -1;
	unk.f_42.f_1.f_1.f_2 = -1;
	unk.f_42.f_1.f_1.f_3 = 7;
	unk.f_42.f_1.f_1.f_11 = 2;
	unk.f_42.f_1.f_1.f_16.f_1 = -1;
	unk.f_42.f_1.f_1.f_16.f_2 = -1;
	unk.f_42.f_1.f_1.f_16.f_3 = 7;
	unk.f_42.f_1.f_1.f_16.f_11 = 2;
	unk.f_42.f_1.f_1.f_16.f_16.f_1 = -1;
	unk.f_42.f_1.f_1.f_16.f_16.f_2 = -1;
	unk.f_42.f_1.f_1.f_16.f_16.f_3 = 7;
	unk.f_42.f_1.f_1.f_16.f_16.f_11 = 2;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_1 = -1;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_2 = -1;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_3 = 7;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_11 = 2;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_3 = 7;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_11 = 2;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	unk.f_42.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	unk.f_204.f_1 = -1;
	unk.f_204.f_2 = -1;
	unk.f_204.f_3 = -1;
	unk.f_204.f_3.f_1 = -1;
	unk.f_204.f_11 = 4;
	unk.f_204.f_36 = 32;
	unk.f_204.f_36.f_193 = 2147483647;
	unk.f_436.f_2 = -1;
	unk.f_436.f_3 = 14;
	unk.f_436.f_4 = 6;
	unk.f_436.f_5 = -1;
	unk.f_443 = 18;
	unk.f_443.f_19 = 18;
	unk.f_486 = 4;

	for (i = 0; i < 7; i = i + 1)
	{
		unk.f_15.f_13[i] = 255;
	}

	*uParam0 = { unk };
	func_763(&(uParam0->f_15));
	func_764(&(uParam0->f_42));
	return;
}

void func_441(Any* panParam0) // Position - 0xC1B3
{
	int i;

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		func_765(&panParam0->[i /*38*/]);
	}

	return;
}

void func_442(Any* panParam0) // Position - 0xC1DB
{
	int i;

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		func_766(&panParam0->[i /*30*/]);
	}

	return;
}

void func_443(int* piParam0) // Position - 0xC203
{
	var unk;
	int i;

	unk = 10;
	unk.f_11 = 10;
	unk.f_22 = 10;
	*piParam0 = { unk };

	for (i = 0; i < 10; i = i + 1)
	{
		piParam0->f_11[i] = 0;
		piParam0->[i] = 0;
		piParam0->f_22[i] = 255;
	}

	return;
}

void func_444(Any* panParam0) // Position - 0xC258
{
	int i;

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		func_767(&panParam0->[i /*6*/]);
	}

	return;
}

void func_445(Any* panParam0) // Position - 0xC280
{
	var unk;
	int i;

	unk.f_1 = 1;
	unk.f_2.f_1 = 1;
	unk.f_4 = 7;
	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		panParam0->[i /*12*/] = { unk };
	}

	return;
}

void func_446(int* piParam0) // Position - 0xC2C7
{
	var unk;

	unk = 180;
	*piParam0 = { unk };
	return;
}

void func_447(Any* panParam0) // Position - 0xC2E1
{
	var unk;
	int i;

	unk = -1;

	for (i = 0; i < 32; i = i + 1)
	{
		panParam0->[i /*2*/] = { unk };
	}

	return;
}

void func_448(Any* panParam0) // Position - 0xC30F
{
	int i;

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		func_768(&panParam0->[i]);
	}

	return;
}

void func_449(int* piParam0) // Position - 0xC337
{
	var unk;

	unk = 32;
	unk.f_1.f_1 = -1;
	unk.f_1.f_2 = -1;
	unk.f_1.f_3 = -1;
	unk.f_1.f_3.f_1 = -1;
	unk.f_1.f_3.f_2 = -1;
	unk.f_1.f_3.f_3 = -1;
	unk.f_1.f_3.f_5 = -1;
	unk.f_1.f_3.f_5.f_1 = -1;
	unk.f_1.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_1 = -1;
	unk.f_1.f_16.f_2 = -1;
	unk.f_1.f_16.f_3 = -1;
	unk.f_1.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	unk.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	unk.f_513.f_2 = 5;
	unk.f_513.f_3 = 5;
	unk.f_513.f_3.f_1 = -1;
	unk.f_513.f_3.f_1.f_1 = -1;
	unk.f_513.f_3.f_1.f_2 = -1;
	unk.f_513.f_3.f_1.f_3 = 255;
	unk.f_513.f_3.f_1.f_4 = -1;
	unk.f_513.f_3.f_1.f_5 = -1;
	unk.f_513.f_3.f_1.f_6 = -1;
	unk.f_513.f_3.f_1.f_8 = 2;
	unk.f_513.f_3.f_1.f_8.f_1 = -1;
	unk.f_513.f_3.f_1.f_8.f_5 = -1;
	unk.f_513.f_3.f_1.f_8.f_5.f_1 = -1;
	unk.f_513.f_3.f_1.f_8.f_5.f_3 = -1;
	unk.f_513.f_3.f_1.f_8.f_5.f_4 = -1;
	unk.f_513.f_3.f_1.f_8.f_5.f_5 = -1;
	unk.f_513.f_3.f_1.f_8.f_5.f_6 = -1;
	unk.f_513.f_3.f_1.f_8.f_5.f_6.f_1 = -1;
	unk.f_513.f_3.f_1.f_8.f_5.f_9 = 2;
	unk.f_513.f_3.f_1.f_23.f_1 = 1024;
	unk.f_513.f_3.f_1.f_23.f_4 = -15;
	unk.f_513.f_3.f_1.f_23.f_5 = 255;
	unk.f_513.f_3.f_1.f_23.f_8 = 1;
	unk.f_513.f_3.f_1.f_23.f_8.f_1.f_1 = 2147483647;
	unk.f_513.f_3.f_1.f_23.f_13 = -1;
	unk.f_513.f_3.f_1.f_40 = -1;
	unk.f_513.f_3.f_1.f_40.f_1 = -1;
	unk.f_513.f_3.f_1.f_40.f_2 = -1;
	unk.f_513.f_3.f_1.f_40.f_3 = 255;
	unk.f_513.f_3.f_1.f_40.f_4 = -1;
	unk.f_513.f_3.f_1.f_40.f_5 = -1;
	unk.f_513.f_3.f_1.f_40.f_6 = -1;
	unk.f_513.f_3.f_1.f_40.f_8 = 2;
	unk.f_513.f_3.f_1.f_40.f_8.f_1 = -1;
	unk.f_513.f_3.f_1.f_40.f_8.f_5 = -1;
	unk.f_513.f_3.f_1.f_40.f_8.f_5.f_1 = -1;
	unk.f_513.f_3.f_1.f_40.f_8.f_5.f_3 = -1;
	unk.f_513.f_3.f_1.f_40.f_8.f_5.f_4 = -1;
	unk.f_513.f_3.f_1.f_40.f_8.f_5.f_5 = -1;
	unk.f_513.f_3.f_1.f_40.f_8.f_5.f_6 = -1;
	unk.f_513.f_3.f_1.f_40.f_8.f_5.f_6.f_1 = -1;
	unk.f_513.f_3.f_1.f_40.f_8.f_5.f_9 = 2;
	unk.f_513.f_3.f_1.f_40.f_23.f_1 = 1024;
	unk.f_513.f_3.f_1.f_40.f_23.f_4 = -15;
	unk.f_513.f_3.f_1.f_40.f_23.f_5 = 255;
	unk.f_513.f_3.f_1.f_40.f_23.f_8 = 1;
	unk.f_513.f_3.f_1.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	unk.f_513.f_3.f_1.f_40.f_23.f_13 = -1;
	unk.f_513.f_3.f_1.f_40.f_40 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_1 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_2 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_3 = 255;
	unk.f_513.f_3.f_1.f_40.f_40.f_4 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_5 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_6 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_8 = 2;
	unk.f_513.f_3.f_1.f_40.f_40.f_8.f_1 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_8.f_5 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_8.f_5.f_1 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_8.f_5.f_3 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_8.f_5.f_4 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_8.f_5.f_5 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_8.f_5.f_6 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_8.f_5.f_9 = 2;
	unk.f_513.f_3.f_1.f_40.f_40.f_23.f_1 = 1024;
	unk.f_513.f_3.f_1.f_40.f_40.f_23.f_4 = -15;
	unk.f_513.f_3.f_1.f_40.f_40.f_23.f_5 = 255;
	unk.f_513.f_3.f_1.f_40.f_40.f_23.f_8 = 1;
	unk.f_513.f_3.f_1.f_40.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	unk.f_513.f_3.f_1.f_40.f_40.f_23.f_13 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_1 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_2 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_3 = 255;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_4 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_5 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_6 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_8 = 2;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_8.f_1 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_8.f_5 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_1 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_3 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_4 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_5 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_6 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_9 = 2;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_23.f_1 = 1024;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_23.f_4 = -15;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_23.f_5 = 255;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_23.f_8 = 1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_23.f_13 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_1 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_2 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_3 = 255;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_4 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_5 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_6 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8 = 2;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_1 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_1 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_3 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_4 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_5 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_6 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_9 = 2;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_1 = 1024;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_4 = -15;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_5 = 255;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_8 = 1;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	unk.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_13 = -1;
	*piParam0 = { unk };
	return;
}

void func_450(int iParam0) // Position - 0xCEAA
{
	var unk;

	*iParam0 = { unk };
	return;
}

void func_451(int iParam0) // Position - 0xCEBA
{
	var unk;

	unk = -1;
	unk.f_1 = 32;
	unk.f_35 = 2;
	unk.f_38 = 3;
	unk.f_43 = 2;
	unk.f_49 = 3;
	*iParam0 = { unk };
	return;
}

void func_452(Any* panParam0) // Position - 0xCEFC
{
	int i;

	for (i = 0; i <= 31; i = i + 1)
	{
		func_451(&panParam0->[i /*56*/]);
	}

	return;
}

void func_453(int* piParam0) // Position - 0xCF21
{
	var unk;

	unk = 2;
	unk.f_3 = 4;
	*piParam0 = { unk };
	return;
}

void func_454(Any* panParam0) // Position - 0xCF42
{
	int i;

	for (i = 0; i <= 31; i = i + 1)
	{
		func_453(&panParam0->[i /*8*/]);
	}

	return;
}

void func_455(int iParam0) // Position - 0xCF67
{
	Global_1107816.f_750 = iParam0;
	return;
}

void func_456() // Position - 0xCF78
{
	Global_1107816.f_750.f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	return;
}

void func_457() // Position - 0xCF8D
{
	Global_1138673[PLAYER::PLAYER_ID() /*56*/].f_49.f_4 = 1;
	return;
}

void func_458(int iParam0) // Position - 0xCFA4
{
	Global_1110244.f_4607.f_2 = Global_1110244.f_4607.f_2 || iParam0;
	return;
}

void func_459(int* piParam0) // Position - 0xCFC1
{
	var unk;

	unk = 32;
	unk.f_1 = -1;
	unk.f_1.f_2 = -1;
	unk.f_1.f_2.f_1 = -1;
	unk.f_1.f_2.f_1.f_1 = -1;
	unk.f_1.f_2.f_3 = -1;
	unk.f_1.f_6 = -1;
	unk.f_1.f_6.f_2 = -1;
	unk.f_1.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	unk.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	unk.f_193.f_2 = 5;
	unk.f_193.f_3 = 5;
	unk.f_193.f_3.f_1 = -1;
	unk.f_193.f_3.f_1.f_1 = -1;
	unk.f_193.f_3.f_1.f_2 = -1;
	unk.f_193.f_3.f_1.f_3 = 255;
	unk.f_193.f_3.f_1.f_4 = -1;
	unk.f_193.f_3.f_1.f_5 = -1;
	unk.f_193.f_3.f_1.f_6 = -1;
	unk.f_193.f_3.f_1.f_8 = 2;
	unk.f_193.f_3.f_1.f_8.f_1 = -1;
	unk.f_193.f_3.f_1.f_8.f_5 = -1;
	unk.f_193.f_3.f_1.f_8.f_5.f_1 = -1;
	unk.f_193.f_3.f_1.f_8.f_5.f_3 = -1;
	unk.f_193.f_3.f_1.f_8.f_5.f_4 = -1;
	unk.f_193.f_3.f_1.f_8.f_5.f_5 = -1;
	unk.f_193.f_3.f_1.f_8.f_5.f_6 = -1;
	unk.f_193.f_3.f_1.f_8.f_5.f_6.f_1 = -1;
	unk.f_193.f_3.f_1.f_8.f_5.f_9 = 2;
	unk.f_193.f_3.f_1.f_23.f_1 = 1024;
	unk.f_193.f_3.f_1.f_23.f_4 = -15;
	unk.f_193.f_3.f_1.f_23.f_5 = 255;
	unk.f_193.f_3.f_1.f_23.f_8 = 1;
	unk.f_193.f_3.f_1.f_23.f_8.f_1.f_1 = 2147483647;
	unk.f_193.f_3.f_1.f_23.f_13 = -1;
	unk.f_193.f_3.f_1.f_40 = -1;
	unk.f_193.f_3.f_1.f_40.f_1 = -1;
	unk.f_193.f_3.f_1.f_40.f_2 = -1;
	unk.f_193.f_3.f_1.f_40.f_3 = 255;
	unk.f_193.f_3.f_1.f_40.f_4 = -1;
	unk.f_193.f_3.f_1.f_40.f_5 = -1;
	unk.f_193.f_3.f_1.f_40.f_6 = -1;
	unk.f_193.f_3.f_1.f_40.f_8 = 2;
	unk.f_193.f_3.f_1.f_40.f_8.f_1 = -1;
	unk.f_193.f_3.f_1.f_40.f_8.f_5 = -1;
	unk.f_193.f_3.f_1.f_40.f_8.f_5.f_1 = -1;
	unk.f_193.f_3.f_1.f_40.f_8.f_5.f_3 = -1;
	unk.f_193.f_3.f_1.f_40.f_8.f_5.f_4 = -1;
	unk.f_193.f_3.f_1.f_40.f_8.f_5.f_5 = -1;
	unk.f_193.f_3.f_1.f_40.f_8.f_5.f_6 = -1;
	unk.f_193.f_3.f_1.f_40.f_8.f_5.f_6.f_1 = -1;
	unk.f_193.f_3.f_1.f_40.f_8.f_5.f_9 = 2;
	unk.f_193.f_3.f_1.f_40.f_23.f_1 = 1024;
	unk.f_193.f_3.f_1.f_40.f_23.f_4 = -15;
	unk.f_193.f_3.f_1.f_40.f_23.f_5 = 255;
	unk.f_193.f_3.f_1.f_40.f_23.f_8 = 1;
	unk.f_193.f_3.f_1.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	unk.f_193.f_3.f_1.f_40.f_23.f_13 = -1;
	unk.f_193.f_3.f_1.f_40.f_40 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_1 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_2 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_3 = 255;
	unk.f_193.f_3.f_1.f_40.f_40.f_4 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_5 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_6 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_8 = 2;
	unk.f_193.f_3.f_1.f_40.f_40.f_8.f_1 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_8.f_5 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_8.f_5.f_1 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_8.f_5.f_3 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_8.f_5.f_4 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_8.f_5.f_5 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_8.f_5.f_6 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_8.f_5.f_9 = 2;
	unk.f_193.f_3.f_1.f_40.f_40.f_23.f_1 = 1024;
	unk.f_193.f_3.f_1.f_40.f_40.f_23.f_4 = -15;
	unk.f_193.f_3.f_1.f_40.f_40.f_23.f_5 = 255;
	unk.f_193.f_3.f_1.f_40.f_40.f_23.f_8 = 1;
	unk.f_193.f_3.f_1.f_40.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	unk.f_193.f_3.f_1.f_40.f_40.f_23.f_13 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_1 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_2 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_3 = 255;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_4 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_5 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_6 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_8 = 2;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_8.f_1 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_8.f_5 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_1 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_3 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_4 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_5 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_6 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_9 = 2;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_23.f_1 = 1024;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_23.f_4 = -15;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_23.f_5 = 255;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_23.f_8 = 1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_23.f_13 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_1 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_2 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_3 = 255;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_4 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_5 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_6 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8 = 2;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_1 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_1 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_3 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_4 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_5 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_6 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_9 = 2;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_1 = 1024;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_4 = -15;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_5 = 255;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_8 = 1;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	unk.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_13 = -1;
	*piParam0 = { unk };
	return;
}

void func_460(Any* panParam0) // Position - 0xD773
{
	int i;

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		func_769(&panParam0->[i /*8*/]);
	}

	return;
}

void func_461(int* piParam0) // Position - 0xD79B
{
	var unk;

	unk.f_3 = 3;
	unk.f_3.f_1 = -1;
	unk.f_3.f_1.f_3 = 255;
	unk.f_3.f_1.f_6 = -1;
	unk.f_3.f_1.f_6.f_3 = 255;
	unk.f_3.f_1.f_6.f_6 = -1;
	unk.f_3.f_1.f_6.f_6.f_3 = 255;
	unk.f_23 = 1;
	*piParam0 = { unk };
	return;
}

void func_462(BOOL bParam0) // Position - 0xD7E7
{
	var unk;

	unk.f_1 = -1;
	*bParam0 = { unk };
	return;
}

void func_463(int iParam0) // Position - 0xD800
{
	var unk;

	unk.f_3.f_3 = -1;
	unk.f_3.f_3.f_1 = -1;
	unk.f_3.f_5 = 1;
	unk.f_3.f_6 = 7;
	unk.f_28 = -1;
	*iParam0 = { unk };
	return;
}

void func_464(Any* panParam0) // Position - 0xD839
{
	int i;

	for (i = 0; i < *panParam0; i = i + 1)
	{
		func_462(&panParam0->[i /*2*/]);
	}

	return;
}

void func_465() // Position - 0xD85F
{
	func_770(&Global_1220761);
	return;
}

void func_466(Any* panParam0) // Position - 0xD86F
{
	int i;

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		func_771(&panParam0->[i /*67*/]);
	}

	return;
}

void func_467(int iParam0) // Position - 0xD897
{
	var SourceStruct;

	SourceStruct = -1;
	SourceStruct.f_1 = -1;
	SourceStruct.f_2 = -1;
	SourceStruct.f_8 = -1082130432;
	MISC::COPY_SCRIPT_STRUCT(iParam0, &SourceStruct, 9);
	return;
}

void func_468(Any* panParam0) // Position - 0xD8C6
{
	int i;

	for (i = 0; i <= 31; i = i + 1)
	{
		func_467(&panParam0->[i /*9*/]);
	}

	return;
}

int func_469(int iParam0) // Position - 0xD8EB
{
	if (!func_686(iParam0))
		return -1;

	if (func_772(iParam0) >= 336)
		return 0;

	return 30 - func_773(iParam0) - 336;
}

BOOL func_470(int iParam0) // Position - 0xD91E
{
	int num;
	Hash hash;

	num = func_774(iParam0, 1);

	if (num == -1)
		return true;

	if (Global_1072759.f_19585.f_24 && !func_775(num))
		return true;

	switch (num)
	{
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_01"):
		case -2141419899:
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_02"):
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_04"):
		case -1939389836:
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_04"):
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_03"):
		case joaat("WS_MP_TREASURE_MAP_INTRO_VALENTINE_02"):
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_03"):
		case joaat("WS_MP_TREASURE_MAP_INTRO_RHODES_03"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_04"):
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_02"):
		case -1808329564:
		case -1753769127:
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_03"):
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_04"):
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_03"):
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_01"):
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_02"):
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_03"):
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_02"):
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_02"):
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_02"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_03"):
		case -1556041029:
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_02"):
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_03"):
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_02"):
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_04"):
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_01"):
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_04"):
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_02"):
		case -1387772214:
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_03"):
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_03"):
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_04"):
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_04"):
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_01"):
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_01"):
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_02"):
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_03"):
		case -1181950077:
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_03"):
		case -1095341658:
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_03"):
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_04"):
		case -947815572:
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_03"):
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_04"):
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_04"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_01"):
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_04"):
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_03"):
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_01"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_02"):
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_02"):
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_02"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_04"):
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_02"):
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_03"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_02"):
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_04"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_03"):
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_02"):
		case -489737721:
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_03"):
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_03"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_03"):
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_01"):
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_03"):
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_01"):
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_01"):
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_02"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_04"):
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_02"):
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_02"):
		case -102827640:
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_02"):
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_02"):
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_02"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_04"):
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_04"):
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_04"):
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_03"):
		case 16844748:
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_01"):
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_01"):
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_01"):
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_01"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_01"):
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_04"):
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_03"):
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_03"):
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_01"):
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_01"):
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_03"):
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_03"):
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_02"):
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_02"):
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_04"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_02"):
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_01"):
		case 831940854:
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_02"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_02"):
		case 943561238:
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_02"):
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_01"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_01"):
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_01"):
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_03"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_01"):
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_04"):
		case 1248935549:
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_04"):
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_01"):
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_04"):
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_01"):
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_04"):
		case 1421300489:
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_01"):
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_01"):
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_03"):
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_01"):
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_04"):
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_02"):
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_04"):
		case joaat("WS_MP_TREASURE_MAP_INTRO_TUMBLEWEED_01"):
		case joaat("WS_MP_TREASURE_MAP_INTRO_BLACKWATER_01"):
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_04"):
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_04"):
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_01"):
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_03"):
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_01"):
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_04"):
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_03"):
			hash = func_780(num);
		
			if (hash != -1554566073)
				if (!func_778(hash, 1120403456, 1133084672))
					return false;
			else
				return BUILTIN::VDIST(Global_34, func_781(num)) > 100f;
			break;
	
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
			if (!func_778(joaat("mp001_reg_bgv0_mp_thehunt_clue01"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_JAIL_DOORS_BLACKWATER_UNLOCK"):
			if (!func_776(joaat("WS_MP_JAIL_DOORS_BLACKWATER_LOCK")) && func_777(-763.5972f, -1263.0526f, 43.02452f, 100f))
				return false;
			break;
	
		case joaat("ws_mp_camp_defend_radleys_pasture"):
			if (!func_778(joaat("mp004_campdef_radleys"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			if (!func_778(568096966, 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_CUMBERLAND_FALLS"):
			if (!func_778(406701199, 1120403456, 1133084672))
				return false;
			break;
	
		case -1608141409:
			if (!func_778(joaat("gang_lemoyne_scm010"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK"):
		case joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK_HOLD_OPEN"):
			if (func_777(347.239f, 1490.71f, 178.557f, 100f))
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_SEA_OF_CORONADO"):
			if (!func_778(967935536, 1120403456, 1133084672))
				return false;
			break;
	
		case -1344601768:
			if (!func_778(728379187, 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_ROCKY_SEVEN"):
			if (!func_778(joaat("mp001_mp_hid_rocky_seven"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_QUAKERS_COVE"):
			if (!func_778(-1974746920, 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_THE_LOFT"):
			if (!func_778(1171226610, 1120403456, 1133084672))
				return false;
			break;
	
		case -1209597203:
			if (!func_778(895825612, 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("ws_mp_camp_defend_bluewater_marsh"):
			if (!func_778(joaat("mp004_campdef_bluewater"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_JAIL_DOORS_BLACKWATER_LOCK"):
			if (!func_776(joaat("WS_MP_JAIL_DOORS_BLACKWATER_UNLOCK")) && func_777(-763.5972f, -1263.0526f, 43.02452f, 100f))
				return false;
			break;
	
		case joaat("ws_mp_camp_defend_gaptooth_ridge"):
			if (!func_778(joaat("mp004_campdef_gap_ridge"), 1120403456, 1133084672))
				return false;
			break;
	
		case -925071604:
			if (!func_778(joaat("gang_lemoyne_scm017"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_RATTLESNAKE_HOLLOW"):
			if (!func_778(joaat("mp001_min_hid_rattlesnakehollow"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_CUERA_SECO"):
			if (!func_778(1256749990, 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_FETCH_OTH_SHEPHERDS_RISE"):
			if (!func_778(-1226747327, 1120403456, 1133084672) || !func_778(-141795616, 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("ws_mp_camp_defend_tall_trees"):
			if (!func_778(18369533, 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_CHOLLA_SPRINGS"):
			if (!func_778(-773956478, 1120403456, 1133084672))
				return false;
			break;
	
		case -812641169:
			if (!func_778(joaat("gang_lemoyne_scm003"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_INTRO_HIDEOUT_RHODES"):
			if (!func_778(joaat("mp001_mp_intro_gang_rhodes4"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_OLD_BACCHUS_PLACE"):
			if (!func_778(-1615749463, 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_FORT_RIGGS"):
			if (!func_778(joaat("mp001_mp_hid_fortriggs"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_JAIL_DOORS_STRAWBERRY_UNLOCK"):
			if (!func_776(joaat("WS_MP_JAIL_DOORS_STRAWBERRY_LOCK")) && func_777(-1811.4957f, -352.16083f, 160.48477f, 100f))
				return false;
			break;
	
		case joaat("ws_mp_camp_defend_gaptooth_breach"):
			if (!func_778(joaat("mp004_campdef_gap_breach"), 1120403456, 1133084672))
				return false;
			break;
	
		case -554519756:
			if (!func_778(joaat("gang_lemoyne_scm005"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE"):
			if (!func_778(joaat("mp004_campdef_grt_plains"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_INTRO_JESSICA_CAMP_BLACKWATER"):
			if (!func_778(joaat("mp001_mp_jessicacamp_blackwater"), 1120403456, 1133084672))
				return false;
			break;
	
		case -460024530:
			if (!func_778(1092530042, 1120403456, 1133084672))
				return false;
			break;
	
		case -396624371:
			if (!func_778(-361709910, 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("ws_mp_camp_defend_hennigans_stead"):
			if (!func_778(joaat("mp004_campdef_hennigans"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_REPENTANCE"):
			if (!func_778(joaat("mp001_min_hid_repentance"), 1120403456, 1133084672))
				return false;
			break;
	
		case -311373772:
			if (!func_778(joaat("gang_lemoyne_scm013"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_JAIL_DOORS_VALENTINE_LOCK"):
			if (!func_776(joaat("WS_MP_JAIL_DOORS_VALENTINE_UNLOCK")) && func_777(-272.96442f, 810.0542f, 118.38353f, 100f))
				return false;
			break;
	
		case joaat("WS_MP_JAIL_DOORS_VALENTINE_UNLOCK"):
			if (!func_776(joaat("WS_MP_JAIL_DOORS_VALENTINE_LOCK")) && func_777(-272.96442f, 810.0542f, 118.38353f, 100f))
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_FARMHOUSE"):
			if (!func_778(joaat("mp001_mp_hid_farmhouse"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_COLTER"):
			if (!func_778(1975720265, 1120403456, 1133084672))
				return false;
			break;
	
		case 61537448:
			if (!func_778(joaat("gang_lemoyne_scm015"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("ws_mp_camp_defend_new_hanover"):
			if (!func_778(joaat("mp004_campdef_new_hanover"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_INTRO_HIDEOUT_TUMBLEWEED"):
			if (!func_778(joaat("mp001_mp_intro_gang_tumbleweed1"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_FETCH_OTH_CASTORS"):
			if (!func_778(joaat("dis_hrt_animaldig"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_INTRO_JESSICA_CAMP_TUMBLEWEED"):
			if (!func_778(joaat("mp001_mp_jessicacamp_tumbleweed"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_LOCK"):
			if (!func_776(joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_UNLOCK")) && func_777(2499.0457f, -1307.856f, 47.95675f, 100f))
				return false;
			break;
	
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_CIRCLE"):
			if (!func_778(joaat("mp004_campdef_heartlands"), 1120403456, 1133084672))
				return false;
			break;
	
		case 526003171:
			if (!func_778(-2074957003, 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_ABANDONED_MINING_STATION"):
			if (!func_778(508578717, 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_UNLOCK"):
			if (!func_776(joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_LOCK")) && func_777(2499.0457f, -1307.856f, 47.95675f, 100f))
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_GAPTOOTH"):
			if (!func_778(joaat("mp001_min_hid_gaptooth"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("ws_mp_camp_defend_two_rocks"):
			if (!func_778(joaat("mp004_campdef_bgv_two_rocks"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_SHIP_ROCK"):
			if (!func_778(-522767301, 1120403456, 1133084672))
				return false;
			break;
	
		case 865557632:
			if (!func_778(joaat("gang_lemoyne_scm006"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("ws_mp_camp_defend_cholla_springs"):
			if (!func_778(-1207218596, 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_CAMP_DEFEND_GRIZZLIES_CIRCLE"):
			if (!func_778(476687617, 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_CAMP_PIKES"):
			if (!func_778(-1323334072, 1120403456, 1133084672))
				return false;
			break;
	
		case 929582877:
			if (!func_778(joaat("mp001_min_hid_mantecafalls"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_JAIL_DOORS_STRAWBERRY_LOCK"):
			if (!func_776(joaat("WS_MP_JAIL_DOORS_STRAWBERRY_UNLOCK")) && func_777(-1811.4957f, -352.16083f, 160.48477f, 100f))
				return false;
			break;
	
		case 1112996351:
			if (!func_778(joaat("gang_lemoyne_scm007"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_TALL_TREES"):
			if (!func_778(joaat("mp001_mp_hid_talltrees"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_INTRO_HIDEOUT_BLACKWATER"):
			if (!func_778(joaat("mp001_mp_intro_gang_blackwater3"), 1120403456, 1133084672))
				return false;
			break;
	
		case 1195508693:
			if (!func_778(joaat("gang_lemoyne_scm019"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_LAKAY"):
			if (!func_778(joaat("mp001_mp_hid_lakay"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("ws_mp_camp_defend_little_creek"):
			if (!func_778(joaat("mp004_campdef_little_creek"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_BEAVER_HOLLOW"):
			if (!func_778(joaat("mp001_mp_hid_beaverhollow"), 1120403456, 1133084672))
				return false;
			else if (func_779())
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_STILLWATER_STRANDS"):
			if (!func_778(-1151968796, 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_INTRO_JESSICA_CAMP_VALENTINE"):
			if (!func_778(joaat("mp001_mp_jessicacamp_val"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("ws_mp_camp_defend_rio_bravo"):
			if (!func_778(-116967529, 1120403456, 1133084672))
				return false;
			break;
	
		case 1698972798:
			if (!func_778(joaat("mp001_mp_hid_mossyflats"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_SOLOMONS_FOLLY"):
			if (!func_778(771896020, 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_INTRO_HIDEOUT_VALENTINE"):
			if (!func_778(joaat("mp001_mp_intro_gang_valentine2"), 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_HILLTOP"):
			if (!func_778(joaat("mp004_campdef_hrt_hilltop"), 1120403456, 1133084672))
				return false;
			break;
	
		case 1881028477:
			if (!func_778(-2103414139, 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_HIDEOUT_CLEMENS_COVE"):
			if (!func_778(-848533860, 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_ASSASSINATION_TRK_GRZ_CAMP"):
			if (!func_778(1883767827, 1120403456, 1133084672))
				return false;
			break;
	
		case joaat("WS_MP_INTRO_JESSICA_CAMP_RHODES"):
			if (!func_778(joaat("mp001_mp_jessicacamp_rhodes"), 1120403456, 1133084672))
				return false;
			break;
	}

	return true;
}

Hash func_471(int iParam0) // Position - 0xE874
{
	if (iParam0 == 255)
		iParam0 = func_187();

	if (iParam0 < 0 || iParam0 >= 32)
		return joaat("REL_NO_RELATIONSHIP");

	return func_782(NETWORK::GET_UNIQUE_INT_FOR_PLAYER(Global_1295666.f_149[iParam0]));
}

Hash func_472() // Position - 0xE8B5
{
	return PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
}

BOOL func_473(int iParam0) // Position - 0xE8C5
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 60)
		return false;

	if (Global_1951910[iParam0 /*23*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3);
}

int func_474(int iParam0) // Position - 0xE904
{
	return iParam0;
}

void func_475(int iParam0) // Position - 0xE90E
{
	if (!func_783(iParam0))
		return;

	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		HUD::_UI_PROMPT_DELETE(Global_1951910[iParam0 /*23*/].f_3);

	Global_1951910[iParam0 /*23*/].f_4 = 0;
	Global_1951910[iParam0 /*23*/] = 1;
	Global_1951910[iParam0 /*23*/].f_16 = 0;
	Global_1951910[iParam0 /*23*/].f_1 = 0;
	Global_1951910[iParam0 /*23*/].f_6 = { 0f, 0f, 0f };
	Global_1951910[iParam0 /*23*/].f_12 = { 0f, 0f, 0f };
	Global_1951910[iParam0 /*23*/].f_9 = 0f;
	Global_1951910[iParam0 /*23*/].f_10 = 0;
	Global_1951910[iParam0 /*23*/].f_11 = 0;
	Global_1951910[iParam0 /*23*/].f_2 = 1;
	Global_1951910[iParam0 /*23*/].f_15 = -1f;
	return;
}

BOOL func_476(int* piParam0, int iParam1, int iParam2) // Position - 0xE9C1
{
	return MISC::IS_BIT_SET(piParam0->[iParam1 / 31], iParam1 % 31);
}

BOOL func_477(int iParam0) // Position - 0xE9F8
{
	if (iParam0 == 255)
		return Global_1102813.f_16;

	if (iParam0 < 0 || iParam0 >= 32)
		return false;

	return Global_1101558[iParam0 /*38*/].f_16;
}

BOOL func_478() // Position - 0xEA30
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1072759.f_5;
}

BOOL func_479() // Position - 0xEA4C
{
	return Global_1900460.f_67;
}

BOOL func_480(int iParam0) // Position - 0xEA5A
{
	return func_225(0, iParam0) || func_225(1, iParam0) || func_225(2, iParam0);
}

BOOL func_481(Player plParam0) // Position - 0xEA83
{
	Player player;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0))
		plParam0 = PLAYER::PLAYER_ID();

	player = plParam0;

	if (func_338(plParam0) > 2)
		return 1;

	if (Global_263042[player /*65*/].f_1.f_11 != 0)
		return 1;

	if (Global_263042[player /*65*/].f_1 != 255)
		return 1;

	if (Global_263042[player /*65*/].f_1.f_13 != 2147483647)
		return 1;

	return 0;
}

int func_482() // Position - 0xEAED
{
	int num;
	int i;
	var unk;

	num = 0;
	unk.f_3 = -1;
	unk.f_3.f_1 = -1;
	unk.f_11.f_12 = -1;
	unk.f_11.f_12.f_1 = -1;
	unk.f_11.f_14 = 255;
	unk.f_11.f_15 = 255;

	for (i = 0; i < Global_1072759.f_23; i = i + 1)
	{
		unk = { func_228(i) };
	
		if (!func_229(&unk))
		{
		}
		else
		{
			num = num + 1;
		}
	}

	return num;
}

int func_483() // Position - 0xEB60
{
	return Global_1572887.f_72.f_40;
}

BOOL func_484() // Position - 0xEB70
{
	return Global_1051645.f_80.f_102 > 0;
}

BOOL func_485() // Position - 0xEB82
{
	return Global_1142424.f_2042 > 0;
}

BOOL func_486() // Position - 0xEB93
{
	int i;

	for (i = 0; i < Global_1148185; i = i + 1)
	{
		if (Global_1148185[i /*10*/].f_4 && !_IS_NULL_VECTOR(Global_1148185[i /*10*/]) && BUILTIN::VDIST(Global_1148185[i /*10*/], Global_34) <= 30f)
			return 1;
	}

	return 0;
}

BOOL func_487() // Position - 0xEBF4
{
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		if (Global_1107816.f_33[i /*16*/] != 0)
			if (GANG::NETWORK_IS_GANG_IN_SESSION(Global_1107816.f_33[i /*16*/]))
				if (Global_1107816.f_33[i /*16*/] == Global_1295666.f_10)
					if (func_18(Global_1107816.f_33[i /*16*/].f_3.f_5))
						return 1;
	}

	return 0;
}

BOOL func_488() // Position - 0xEC5D
{
	return Global_1235687.f_9478 != -1;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0xEC6E
{
	switch (iParam0)
	{
		case 2:
			return "Stry";
	
		case 3:
			return "Proc";
	
		case 4:
			return "Fetch";
	
		case 5:
			return "Mini";
	
		case 6:
			return "FMA";
	
		case 7:
			return "UGC";
	
		case 8:
			return "Beat";
	
		default:
		
	}

	return "Unknown";
}

BOOL func_490() // Position - 0xECDD
{
	return ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_26573) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_26573, false);
}

BOOL func_491(Hash hParam0) // Position - 0xECF9
{
	if (hParam0 <= 0 || hParam0 >= 10)
		return false;

	return true;
}

BOOL func_492(Hash hParam0) // Position - 0xED18
{
	if (hParam0 == 0)
		return false;

	return Global_1291943[hParam0] == hParam0;
}

BOOL func_493(var uParam0) // Position - 0xED35
{
	if (SCRIPTS::DOES_THREAD_EXIST(uParam0->f_3))
		if (SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_3, false))
			return true;

	return false;
}

char* func_494(char* sParam0) // Position - 0xED59
{
	return sParam0;
}

BOOL func_495(int iParam0, int iParam1, int iParam2) // Position - 0xED63
{
	if (iParam2 < 0 || iParam2 >= 32)
		return false;

	return func_243(Global_1148618[iParam2 /*13*/][iParam0 /*4*/], iParam1);
}

int func_496(Player plParam0) // Position - 0xED93
{
	return Global_1138673[plParam0 /*56*/];
}

BOOL func_497(int iParam0) // Position - 0xEDA3
{
	return iParam0 >= 0 && iParam0 < 32;
}

struct<2> func_498(int iParam0) // Position - 0xEDB9
{
	return Global_1107816.f_33[iParam0 /*16*/].f_3.f_5;
}

const char* func_499(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0xEDD1
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_500(Hash hParam0) // Position - 0xEDE5
{
	if (STREAMING::IS_IPL_ACTIVE_HASH(hParam0))
		return 1;

	if (func_784())
		return 0;

	STREAMING::REQUEST_IPL_HASH(hParam0);
	return 0;
}

int func_501(Hash hParam0) // Position - 0xEE0C
{
	if (!STREAMING::IS_IPL_ACTIVE_HASH(hParam0))
		return 1;

	if (func_784())
		return 0;

	STREAMING::REMOVE_IPL_HASH(hParam0);
	return 0;
}

struct<4> func_502(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0xEE34
{
	var outGuid;

	if (!func_728(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_503(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

int func_503(BOOL bParam0) // Position - 0xEE65
{
	if (func_57() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

struct<17> func_504(var uParam0, BOOL bParam1) // Position - 0xEEA6
{
	var unk;

	unk.f_9 = 1;
	unk.f_11 = -1591664384;
	unk = { *uParam0 };
	unk.f_4 = { uParam0->f_5 };
	unk.f_8 = uParam0->f_4;
	unk.f_9 = uParam0->f_11;
	unk.f_11 = uParam0->f_9;
	unk.f_10 = uParam0->f_10;

	if (bParam1)
	{
		unk.f_15 = func_729(uParam0->f_4, joaat("DEFAULT"));
	
		if (unk.f_15 != 0)
		{
			unk.f_4 = { func_727() };
			unk.f_11 = 0;
		}
	}

	return unk;
}

BOOL func_505(int iParam0, int iParam1) // Position - 0xEF27
{
	Any gangId;

	if (!func_292() || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !NETWORK::NETWORK_IS_SESSION_ACTIVE())
		return false;

	if (!func_90(16))
		return false;

	if (func_26())
		if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("FEATURE_POSSE_CAMP")))
			return false;

	if (!func_785())
		return false;

	if (func_741(16))
		return false;

	gangId = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());

	if (iParam1 == 1 && !GANG::NETWORK_IS_GANG_ID_VALID(gangId) || !GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
		return false;

	if (iParam0 == 1 && func_243(Global_1147183.f_8, 1))
		return false;

	if (func_786())
		return false;

	return true;
}

void func_506() // Position - 0xEFE7
{
	Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_4 = 0;
	return;
}

void func_507(int iParam0) // Position - 0xEFFE
{
	func_787(&(Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_4), iParam0);
	return;
}

BOOL func_508(int iParam0) // Position - 0xF01A
{
	Player player;
	int i;

	if (iParam0 < 0 || iParam0 >= 32)
		return false;

	player = PLAYER::INT_TO_PLAYERINDEX(iParam0);

	for (i = 0; i <= 31; i = i + 1)
	{
		if (Global_1141332[i /*27*/].f_9 == player)
			return Global_1141332[i /*27*/].f_1.f_1 == Global_1144526[iParam0 /*83*/].f_33.f_1;
	}

	return false;
}

void func_509() // Position - 0xF07F
{
	Player player;
	var unk;

	player = PLAYER::PLAYER_ID();

	if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1144526[player /*83*/].f_38.f_23.f_1))
		VOLUME::_RELEASE_LOCK_VOLUME(Global_1144526[player /*83*/].f_38.f_23.f_1);

	if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1144526[player /*83*/].f_38.f_23))
		VOLUME::_RELEASE_LOCK_VOLUME(Global_1144526[player /*83*/].f_38.f_23);

	Global_1144526[player /*83*/].f_38.f_23.f_1 = unk;
	Global_1144526[player /*83*/].f_38.f_23 = unk;
	return;
}

BOOL func_510(int iParam0) // Position - 0xF0F5
{
	return func_243(Global_1147183.f_8, iParam0);
}

void func_511(int iParam0) // Position - 0xF109
{
	Global_1142424.f_2019 = iParam0;
	return;
}

int func_512(var uParam0, var uParam1, var uParam2) // Position - 0xF11A
{
	int num;

	num = func_788(uParam0, 0f, 0f, 0, 2);
	return func_788(uParam0, Global_1892764[num /*3*/].f_1, Global_1892764[num /*3*/].f_2, Global_1892764[num /*3*/], 4);
}

BOOL func_513(int* piParam0, int iParam1, int iParam2) // Position - 0xF155
{
	int num;
	int offset;
	BOOL isBitSet;

	num = iParam1 / 31;
	offset = iParam1 % 31;
	isBitSet = MISC::IS_BIT_SET(piParam0->[num], offset);
	MISC::CLEAR_BIT(&piParam0->[num], offset);
	return isBitSet;
}

BOOL func_514(int* piParam0, int iParam1, int iParam2) // Position - 0xF187
{
	int num;
	int offset;
	BOOL isBitSet;

	num = iParam1 / 31;
	offset = iParam1 % 31;
	isBitSet = MISC::IS_BIT_SET(piParam0->[num], offset);
	MISC::SET_BIT(&piParam0->[num], offset);
	return !isBitSet;
}

void func_515(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0xF1BA
{
	func_789(iParam0);

	if (!func_587(1))
		return;

	if (bParam1)
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	else if (!func_586(128) && !func_790(19))
		CAM::DO_SCREEN_FADE_OUT(iParam2);

	if (bParam3 && func_791() == 4)
		func_254(18);

	func_792(1024);
	return;
}

int func_516(int iParam0) // Position - 0xF21C
{
	switch (iParam0)
	{
		case 0:
			return 9;
	
		case 1:
			return 10;
	
		case 2:
			return 11;
	
		case 3:
			return 12;
	
		case 4:
			return 13;
	
		default:
		
	}

	return -1;
}

int func_517(int iParam0, var uParam1) // Position - 0xF264
{
	*uParam1 = iParam0;

	switch (iParam0)
	{
		case 0:
			uParam1->f_1 = 0;
			uParam1->f_2 = 40;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2971f, -1324.2848f, 46.89f };
			uParam1->f_8 = 0.29f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 1:
			uParam1->f_1 = 0;
			uParam1->f_2 = 111;
			uParam1->f_3 = 0;
			uParam1->f_4 = 400f;
			uParam1->f_5 = { 1339.5615f, -1372.1733f, 83.2967f };
			uParam1->f_8 = 80f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 2:
			uParam1->f_1 = 0;
			uParam1->f_2 = 98;
			uParam1->f_3 = 0;
			uParam1->f_4 = 300f;
			uParam1->f_5 = { 2938.5818f, 520.6577f, 44.3412f };
			uParam1->f_8 = 126.9f;
			uParam1->f_9 = 2f;
			return 1;
	
		case 3:
			uParam1->f_1 = 1;
			uParam1->f_2 = 40;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -936.9756f, -1390.0842f, 49.5777f };
			uParam1->f_8 = -174.39f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 4:
			uParam1->f_1 = 1;
			uParam1->f_2 = 74;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100f;
			uParam1->f_5 = { 1522.0048f, 431.2095f, 89.679f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 5:
			uParam1->f_1 = 1;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 150f;
			uParam1->f_5 = { 2515.659f, -1245.7432f, 49.5757f };
			uParam1->f_8 = -45f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 6:
			uParam1->f_1 = 3;
			uParam1->f_2 = 26;
			uParam1->f_3 = 0;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -1826.2151f, -433.9676f, 159.73857f };
			uParam1->f_8 = 157.4f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 7:
			uParam1->f_1 = 3;
			uParam1->f_2 = 81;
			uParam1->f_3 = 0;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -243.7256f, 771.2707f, 117.884895f };
			uParam1->f_8 = -69.92f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 8:
			uParam1->f_1 = 3;
			uParam1->f_2 = 98;
			uParam1->f_3 = 0;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { 2946.4443f, 500.1154f, 45.539986f };
			uParam1->f_8 = -84.13f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 9:
			uParam1->f_1 = 2;
			uParam1->f_2 = 40;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2148f, -1316.5474f, 42.6787f };
			uParam1->f_8 = 60f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 10:
			uParam1->f_1 = 2;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { 2630.74f, -1226.2505f, 52.3794f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 11:
			uParam1->f_1 = 2;
			uParam1->f_2 = 80;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -327.6681f, -357.796f, 87.055f };
			uParam1->f_8 = -63f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 12:
			uParam1->f_1 = 2;
			uParam1->f_2 = 121;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -5510.3945f, -2913.7637f, 0.6353f };
			uParam1->f_8 = 90f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 13:
			uParam1->f_1 = 2;
			uParam1->f_2 = 81;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -304.5352f, 801.1352f, 117.9785f };
			uParam1->f_8 = 135f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		default:
		
	}

	return 0;
}

int func_518(int iParam0) // Position - 0xF66C
{
	switch (iParam0)
	{
		case joaat("MPSW_LOCATION_09"):
			return 9;
	
		case joaat("MPSW_LOCATION_04"):
			return 4;
	
		case joaat("MPSW_LOCATION_03"):
			return 3;
	
		case joaat("MPSW_LOCATION_06"):
			return 6;
	
		case joaat("MPSW_LOCATION_02"):
			return 2;
	
		case joaat("MPSW_LOCATION_08"):
			return 8;
	
		case joaat("MPSW_LOCATION_01"):
			return 1;
	
		case joaat("MPSW_LOCATION_07"):
			return 7;
	
		case joaat("MPSW_LOCATION_11"):
			return 11;
	
		case joaat("MPSW_LOCATION_10"):
			return 10;
	
		case joaat("MPSW_LOCATION_00"):
			return 0;
	
		case joaat("MPSW_LOCATION_05"):
			return 5;
	
		default:
		
	}

	return 0;
}

int func_519(int iParam0) // Position - 0xF6F9
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

int func_520(int iParam0, int iParam1) // Position - 0x100E4
{
	var unk;
	var statId;

	statId = { func_656(iParam0, iParam1) };
	STATS::STAT_ID_GET_INT(&statId, &unk);
	return unk;
}

BOOL func_521(int iParam0, int iParam1) // Position - 0x10103
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

BOOL func_522(int iParam0) // Position - 0x1011B
{
	if (func_524(iParam0, 4))
		return false;

	return true;
}

BOOL func_523(int iParam0) // Position - 0x10132
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

BOOL func_524(int iParam0, int iParam1) // Position - 0x101FE
{
	return Global_1904402.f_33[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_525(int iParam0) // Position - 0x10217
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_526() // Position - 0x1022A
{
	if (!func_26())
		return false;

	return Global_1904402.f_8873;
}

BOOL func_527(int iParam0, int iParam1) // Position - 0x10245
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_476(&(Global_1102813.f_4), num, 5);

	if (iParam1 == func_187())
		return func_476(&(Global_1102813.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1295666.f_17[iParam1])
		return func_476(&(Global_1101558[iParam1 /*38*/].f_4), num, 5);

	return false;
}

void func_528(var uParam0) // Position - 0x102B9
{
	var unk;

	*uParam0 = { unk };
	return;
}

void func_529(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9) // Position - 0x102CB
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

void func_530() // Position - 0x102F8
{
	func_793(-1687561002);
	func_793(1957225320);
	func_793(-860696938);
	func_793(-1971474291);
	func_793(-1425946870);
	func_793(-1114426126);
	func_793(-316909020);
	func_793(-1962893335);
	func_793(1351589798);
	func_793(300868838);
	func_793(-1788578071);
	func_793(1157066259);
	func_793(1475953931);
	func_793(2022451711);
	func_793(joaat("hso_p_camp_02"));
	func_793(-1177590512);
	func_793(-1611076340);
	func_794(joaat("vegmods_hso_pearson_wagon"));
	return;
}

void func_531() // Position - 0x103A2
{
	func_793(1209017192);
	func_793(-2143243848);
	func_793(510052409);
	func_793(-644575724);
	func_793(291770965);
	func_793(1700661865);
	func_793(1070723367);
	func_793(1261237250);
	func_793(-109425099);
	func_793(1402472902);
	func_793(joaat("dewclm_p_camp_02"));
	func_793(-1458944281);
	func_793(2108368013);
	func_794(joaat("dewclm_p_camp_02"));
	func_794(joaat("cle_upg_campfire_rug_cow"));
	return;
}

void func_532() // Position - 0x10431
{
	func_793(-1232260252);
	func_793(1404611977);
	func_793(-1395712024);
	return;
}

void func_533() // Position - 0x10454
{
	func_793(joaat("shb_p_camp_02"));
	func_793(557551306);
	func_793(-412827149);
	func_794(joaat("dewclm_p_camp_02"));
	func_794(joaat("shb_p_camp_02"));
	return;
}

void func_534() // Position - 0x10489
{
	func_793(531106429);
	func_793(1069611813);
	func_793(1102643191);
	func_793(44502487);
	func_793(-1869016398);
	func_793(806681228);
	func_793(1311984381);
	func_793(-1162254606);
	return;
}

BOOL func_535(int iParam0, int iParam1) // Position - 0x104D9
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 7:
		case 8:
			return false;
	
		case 3:
		case 5:
			switch (iParam1)
			{
				case 0:
					return false;
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case 0:
					return false;
			}
			break;
	}

	return true;
}

struct<8> func_536(int iParam0, int iParam1) // Position - 0x1054B
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, func_795(iParam0), 64);
	TEXT_LABEL_APPEND_STRING(&unk, "_nav_camp_", 64);
	TEXT_LABEL_APPEND_STRING(&unk, func_796(iParam1), 64);
	return unk;
}

int func_537(int iParam0) // Position - 0x10574
{
	switch (iParam0)
	{
		case -1:
			return -1;
	
		case 0:
			return 45;
	
		case 1:
			return 76;
	
		case 2:
			return 104;
	
		case 3:
			return 9;
	
		case 4:
			return 63;
	
		case 5:
			return 4;
	
		case 6:
			return 84;
	
		case 7:
			return 22;
	
		case 8:
			return 39;
	
		default:
		
	}

	iParam0 != -1;
	return -1;
}

void func_538(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x105F7
{
	int i;
	int j;

	for (i = 0; i < 27; i = i + 1)
	{
		for (j = 0; j < 6; j = j + 1)
		{
			func_797(iParam1, i, j, bParam2, bParam3);
		}
	}

	return;
}

void func_539(var uParam0, int iParam1) // Position - 0x10632
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

void func_540(var uParam0, int iParam1) // Position - 0x1066A
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_541(var uParam0, int iParam1) // Position - 0x106A3
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_542(var uParam0, int iParam1) // Position - 0x106DE
{
	int num;
	int num2;

	num = func_546(*uParam0);
	num2 = func_545(*uParam0);

	if (iParam1 < 1 || iParam1 > func_551(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_543(var uParam0, int iParam1) // Position - 0x10731
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_544(var uParam0, int iParam1) // Position - 0x1076D
{
	if (iParam1 < 0)
		return;

	if (iParam1 > 1930 || iParam1 < 1866)
		return;

	*uParam0 = *uParam0 - *uParam0 & 2080374784;

	if (iParam1 < 1898)
	{
		*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(1898 - iParam1, 26);
		*uParam0 = *uParam0 | -2147483648;
	}
	else
	{
		*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1 - 1898, 26);
		*uParam0 = *uParam0 - *uParam0 & -2147483648;
	}

	return;
}

int func_545(int iParam0) // Position - 0x107F3
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_546(int iParam0) // Position - 0x10818
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_547(int iParam0) // Position - 0x1082B
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_548(int iParam0) // Position - 0x1083E
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_549(int iParam0) // Position - 0x10851
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_550(int iParam0) // Position - 0x10863
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_551(int iParam0, int iParam1) // Position - 0x10875
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

void func_552(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x1090F
{
	func_544(uParam0, iParam6);
	func_543(uParam0, iParam5);
	func_542(uParam0, iParam4);
	func_541(uParam0, iParam3);
	func_540(uParam0, iParam2);
	func_539(uParam0, iParam1);
	return;
}

void func_553(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4) // Position - 0x10947
{
	*uParam2 = func_545(iParam0) + func_546(iParam0) + func_547(iParam0);
	*uParam3 = iParam1;
	*uParam4 = func_547(iParam0);
	return;
}

void func_554(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5) // Position - 0x10974
{
	int num;

	num = func_799(uParam3, uParam4, uParam5) % 6;

	if (0 == iParam1)
	{
		num = num % 3;
	}
	else
	{
		if (6 == iParam1)
			num = (num % 3) + 3;
	
		if (num == uParam0->[iParam1 - 1 /*11*/][iParam2])
		{
			num = (num + 1) % 6;
		
			if (6 == iParam1 && num < 3)
				num = 3;
		}
	}

	uParam0->[iParam1 /*11*/][iParam2] = num;
	return;
}

int func_555(int iParam0) // Position - 0x109DF
{
	switch (iParam0)
	{
		case 0:
			return 262189671;
	
		case 1:
			return -1865796416;
	
		case 2:
			return -2102912900;
	
		case 3:
			return -1471781960;
	
		case 4:
			return -1711487195;
	
		case 5:
			return 1532840411;
	
		default:
		
	}

	return 262189671;
}

int func_556(int iParam0) // Position - 0x10A48
{
	switch (iParam0)
	{
		case 0:
			return -1859451998;
	
		case 1:
			return 467802382;
	
		case 2:
			return 212892331;
	
		case 3:
			return -137539355;
	
		case 4:
			return -366824048;
	
		case 5:
			return -1952384882;
	
		default:
		
	}

	return -1859451998;
}

int func_557(int iParam0) // Position - 0x10AB1
{
	switch (iParam0)
	{
		case 0:
			return 1381272898;
	
		case 1:
			return 1539809320;
	
		case 2:
			return -2102137352;
	
		case 3:
			return 199098446;
	
		case 4:
			return 1462376165;
	
		case 5:
			return 1885620569;
	
		default:
		
	}

	return 1381272898;
}

int func_558(int iParam0) // Position - 0x10B1A
{
	switch (iParam0)
	{
		case 0:
			return -1285238734;
	
		case 1:
			return -888012916;
	
		case 2:
			return -1211213567;
	
		case 3:
			return -1116052391;
	
		case 4:
			return 1314063884;
	
		case 5:
			return 1644572018;
	
		default:
		
	}

	return -1285238734;
}

int func_559(int iParam0) // Position - 0x10B83
{
	switch (iParam0)
	{
		case 0:
			return 1561655701;
	
		case 1:
			return 1218924734;
	
		case 2:
			return 1516368947;
	
		case 3:
			return 1984048115;
	
		case 4:
			return -2013016202;
	
		case 5:
			return -1745916083;
	
		default:
		
	}

	return 1561655701;
}

int func_560(int iParam0) // Position - 0x10BEC
{
	switch (iParam0)
	{
		case 0:
			return 40018245;
	
		case 1:
			return -1586372771;
	
		case 2:
			return -1356105008;
	
		case 3:
			return -1175547818;
	
		case 4:
			return -877579301;
	
		case 5:
			return 1138992134;
	
		default:
		
	}

	return 40018245;
}

int func_561(int iParam0) // Position - 0x10C55
{
	switch (iParam0)
	{
		case 0:
			return -158969429;
	
		case 1:
			return 147060262;
	
		case 2:
			return -486692198;
	
		case 3:
			return 886099519;
	
		case 4:
			return -1789128804;
	
		case 5:
			return -1617026016;
	
		default:
		
	}

	return -158969429;
}

int func_562(int iParam0) // Position - 0x10CBE
{
	switch (iParam0)
	{
		case 0:
			return -1414390857;
	
		case 1:
			return -490927668;
	
		case 2:
			return 345304443;
	
		case 3:
			return -564887297;
	
		case 4:
			return 267084844;
	
		case 5:
			return 1120782832;
	
		default:
		
	}

	return -1414390857;
}

int func_563(int iParam0) // Position - 0x10D27
{
	switch (iParam0)
	{
		case 0:
			return -112719434;
	
		case 1:
			return 1796697427;
	
		case 2:
			return -1827848894;
	
		case 3:
			return 1960444124;
	
		case 4:
			return -1311048995;
	
		case 5:
			return -1542168752;
	
		default:
		
	}

	return -112719434;
}

int func_564(int iParam0) // Position - 0x10D90
{
	switch (iParam0)
	{
		case 0:
			return 346286482;
	
		case 1:
			return 82987567;
	
		case 2:
			return -145707284;
	
		case 3:
			return 1940236180;
	
		case 4:
			return 1558018564;
	
		case 5:
			return 1310186617;
	
		default:
		
	}

	return 346286482;
}

int func_565(Player plParam0, BOOL bParam1) // Position - 0x10DF9
{
	int num;
	int num2;
	int num3;
	Player player;

	num = BUILTIN::FLOOR(func_800(plParam0, bParam1));

	if (bParam1)
	{
		player = plParam0;
	
		if (player < 0 || player >= 32)
			num3 = 0;
		else
			num3 = BUILTIN::FLOOR(Global_1101558[player /*38*/].f_18);
	
		if (num3 > num)
			num2 = num3;
		else
			num2 = num;
	}
	else
	{
		num2 = num;
	}

	if (num2 < Global_1901671.f_740.f_31)
		return 0;

	if (num2 < Global_1901671.f_740.f_32)
		return 1;

	if (num2 < Global_1901671.f_740.f_33)
		return 2;

	if (num2 < Global_1901671.f_740.f_34)
		return 3;

	if (num2 < Global_1901671.f_740.f_35)
		return 4;

	if (num2 < Global_1901671.f_740.f_36)
		return 5;

	return 6;
}

int func_566() // Position - 0x10EC6
{
	return Global_1051645.f_12;
}

char* func_567() // Position - 0x10ED4
{
	return "unnamed";
}

BOOL func_568(int iParam0) // Position - 0x10EE0
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case -1:
			num = 16;
			break;
	
		case 0:
			num = 32;
			break;
	
		case 1:
			num = 64;
			break;
	
		case 2:
			num = 128;
			break;
	
		case 3:
			num = 256;
			break;
	
		case 4:
			num = 512;
			break;
	
		case 5:
			num = 1024;
			break;
	
		case 6:
			num = 2048;
			break;
	
		case 8:
			num = 4096;
			break;
	}

	return num;
}

BOOL func_569(int iParam0) // Position - 0x10F6F
{
	if (Global_1572887.f_14 == -1)
		return false;

	return func_527(36, iParam0);
}

BOOL func_570(Player plParam0) // Position - 0x10F8D
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (func_801(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) != 1)
			func_802(plParam0);
	
		return true;
	}

	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) == 1;
}

BOOL func_571(var uParam0) // Position - 0x10FD2
{
	if (*uParam0 >= 40)
		return false;

	return true;
}

int func_572() // Position - 0x10FE7
{
	return Global_1072759.f_23.f_2;
}

void func_573() // Position - 0x10FF7
{
	var unk;

	if (func_572() == -1)
		return;

	func_803(Global_1072759.f_23.f_2.f_1);
	unk = -1;
	Global_1072759.f_23.f_2 = { unk };
	return;
}

void func_574(int iParam0) // Position - 0x1102D
{
	Global_1072759.f_23.f_2 = iParam0;
	return;
}

void func_575(BOOL bParam0) // Position - 0x1103F
{
	if (!Global_1072759.f_3)
		return;

	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return;

	if (!func_58(Global_1206954[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*12*/], bParam0))
	{
		func_59(&Global_1206954[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*12*/], bParam0);
		Global_1051645.f_45.f_1 = 1;
	}

	return;
}

void func_576(BOOL bParam0) // Position - 0x1108C
{
	if (!Global_1072759.f_3)
		return;

	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return;

	if (func_58(Global_1206954[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*12*/], bParam0))
	{
		func_56(&Global_1206954[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*12*/], bParam0);
		Global_1051645.f_45.f_1 = 1;
	}

	return;
}

int func_577(int iParam0) // Position - 0x110D8
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 60;
	
		case 2:
			return 300;
	
		case 4:
			return 600;
	
		case 8:
			return 1800;
	
		case 16:
			return 3600;
	
		case 32:
			return 7200;
	
		case 64:
			return 10800;
	
		case 128:
			return 14400;
	
		case 256:
			return 18000;
	
		case 512:
			return 21600;
	
		default:
		
	}

	return 0;
}

void func_578(BOOL bParam0, BOOL bParam1) // Position - 0x1116A
{
	if (func_58(Global_1051829.f_2, bParam0))
		return;

	func_59(&(Global_1051829.f_2), bParam0 || bParam1);
	return;
}

BOOL func_579(BOOL bParam0, Player plParam1) // Position - 0x11193
{
	if (plParam1 == 255)
		plParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (plParam1 < 0 || plParam1 >= 32)
		return false;

	return Global_1295232[plParam1 /*2*/] && bParam0 != false;
}

void func_580(BOOL bParam0) // Position - 0x111CB
{
	int num;

	num = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (num == 255)
		return;

	Global_1295232[num /*2*/] = Global_1295232[num /*2*/] || bParam0;
	return;
}

int func_581(char* sParam0, Hash hParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, Hash hParam10, int iParam11) // Position - 0x111F6
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	for (i = 0; i < 60; i = i + 1)
	{
		if (func_804(i, 2))
		{
		}
		else if (num == 0)
		{
			num = i;
		}
	}

	if (num != 0)
	{
		func_805(num, hParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216, false, false, 0, hParam10, iParam11);
		return num;
	}

	return 0;
}

BOOL func_582(int iParam0, BOOL bParam1) // Position - 0x1127F
{
	int num;
	int gameTimer;
	float progress;
	int num2;
	int num3;

	if (bParam1 && !func_473(iParam0))
		return false;

	num = func_474(iParam0);

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

void func_583(BOOL bParam0) // Position - 0x11379
{
	int num;

	num = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (num == 255)
		return;

	Global_1295232[num /*2*/] = Global_1295232[num /*2*/] - Global_1295232[num /*2*/] && bParam0;
	return;
}

BOOL func_584(Player plParam0) // Position - 0x113AD
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1295205.f_2), plParam0))
		return false;

	return true;
}

void func_585(int iParam0) // Position - 0x113C9
{
	Global_1295299.f_29 = iParam0;
	return;
}

BOOL func_586(BOOL bParam0) // Position - 0x113D9
{
	return Global_1102813.f_26.f_9 && bParam0 != false;
}

BOOL func_587(int iParam0) // Position - 0x113EE
{
	return Global_1102813.f_26.f_7 && iParam0 != false;
}

void func_588() // Position - 0x11403
{
	int num;

	if (!func_806(2))
		return;

	if (func_807())
		return;

	if (func_344(0) != -1)
		return;

	num = func_344(1);

	if (num != -1 && !func_808(num))
	{
		func_809(2);
		func_347(joaat("HELP_TEXT_COOP_COOLDOWN_DONE"));
	}

	return;
}

void func_589() // Position - 0x11455
{
	int num;

	if (!func_604(1209208750) && !func_604(1057717540))
		return;

	num = -1;
	num.f_1 = -1;
	num.f_2 = -1;
	func_810(&num);

	if (num == -1)
	{
		func_598(1209208750);
		func_598(1057717540);
		func_601();
		return;
	}

	if (num.f_1 == -1)
	{
		func_598(1209208750);
		func_598(1057717540);
		func_601();
		return;
	}

	if (func_604(1209208750))
		if (!func_811(1209208750))
			func_598(1209208750);

	if (func_604(1057717540))
		if (!func_811(1057717540))
			func_598(1057717540);

	if (!func_604(1209208750) && !func_604(1057717540))
		func_601();

	return;
}

int func_590() // Position - 0x11539
{
	return Global_1296390.f_50;
}

var func_591() // Position - 0x11547
{
	return Global_1296390.f_50.f_1;
}

BOOL func_592(int iParam0) // Position - 0x11557
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);

	if (currentMessage == 0)
		return false;

	return currentMessage == iParam0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(currentMessage) <= 4;
}

int func_593(int iParam0) // Position - 0x11582
{
	var unk;

	if (!func_650(&unk))
		return 0;

	if (!func_651(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 16, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 43, iParam0, 0, 1))
		return 0;

	return func_812(&unk, 7);
}

int func_594() // Position - 0x115D9
{
	return Global_1296390.f_50.f_2;
}

BOOL func_595() // Position - 0x115E9
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return currentMessage != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(currentMessage) <= 4;
}

int func_596() // Position - 0x11609
{
	 Var0;
	int num;
	Hash hash;
	const char* str;
	int num2;
	var statId;
	int num3;

	num2 = -1;
	num2.f_1 = -1;
	num2.f_2 = -1;
	Var0 = func_813(func_590(), func_594());

	switch (func_590())
	{
		case 1057717540:
			func_810(&num2);
		
			if (num2.f_1 == -1)
				return 0;
		
			if (num2 == -1)
				return 0;
		
			num = func_814(func_630(num2, num2.f_1));
		
			if (num == -1)
				return 0;
		
			hash = func_815(num2, num2.f_1, joaat("Help"));
			str = MISC::VAR_STRING(8, Var0, MISC::VAR_STRING(0, func_816(hash, false)));
			break;
	
		case 1209208750:
			func_810(&num2);
		
			if (num2.f_1 == -1)
				return 0;
		
			if (num2 == -1)
				return 0;
		
			num = func_814(func_630(num2, num2.f_1));
		
			if (num == -1)
				return 0;
		
			hash = func_815(num2, num2.f_1, joaat("Help"));
			str = MISC::VAR_STRING(168, Var0, func_817(&(Global_265213.f_4[num /*46*/].f_7), joaat("COLOR_PURE_WHITE")), MISC::VAR_STRING(0, -494160487), MISC::VAR_STRING(0, func_816(hash, false)));
			break;
	
		default:
			str = MISC::VAR_STRING(0, Var0);
			break;
	}

	num3 = func_288(str, 10000, 0, 0, 0, true);

	if (num3 != 0)
	{
		switch (func_590())
		{
			case 1057717540:
				func_810(&num2);
				statId = { func_351(num2, num2.f_1, 2006315537, 1) };
				STATS::_STAT_ID_INCREMENT_INT(&statId, 1);
				break;
		}
	}

	return num3;
}

void func_597(int iParam0) // Position - 0x1177E
{
	Global_1296390.f_50.f_1 = iParam0;
	return;
}

void func_598(int iParam0) // Position - 0x11790
{
	func_513(&(Global_1296390.f_50.f_3), func_653(iParam0, 1), 1);
	return;
}

void func_599() // Position - 0x117AD
{
	var unk;

	Global_1296390.f_50 = unk;
	return;
}

void func_600(int iParam0) // Position - 0x117BD
{
	Global_1296390.f_50.f_2 = iParam0;
	return;
}

void func_601() // Position - 0x117CF
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	func_352(&unk);
	return;
}

int func_602(int iParam0) // Position - 0x117F0
{
	return Global_1296390.f_50.f_3[iParam0];
}

int func_603(int iParam0, int iParam1) // Position - 0x11804
{
	switch (iParam0)
	{
		case 0:
			return joaat("HELP_TEXT_WAIT_FOR_POSSE_LEADER");
	
		case 1:
			return joaat("HELP_TEXT_POST_COOP_MISSION_1");
	
		case 2:
			return joaat("HELP_TEXT_POST_COOP_MISSION_5");
	
		case 3:
			return joaat("HELP_TEXT_POST_EXT_NO_GATING_ITEM");
	
		case 4:
			return joaat("HELP_TEXT_POST_EXT_HAS_SETUP_MOON");
	
		case 5:
			return joaat("HELP_TEXT_BLOCK_ACCEPT_POSSE_TOO_LARGE");
	
		case 6:
			return joaat("HELP_TEXT_COOP_COOLDOWN_DONE");
	
		case 7:
			return 1057717540;
	
		case 8:
			return 1209208750;
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

BOOL func_604(int iParam0) // Position - 0x118A1
{
	return func_476(&(Global_1296390.f_50.f_3), func_653(iParam0, 1), 1);
}

void func_605(int iParam0) // Position - 0x118BD
{
	Global_1296390.f_50 = iParam0;
	return;
}

int func_606() // Position - 0x118CD
{
	var unk;

	if (!func_650(&unk))
		return 0;

	if (!func_651(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 17, 0, 0, 1))
		return 0;

	return func_812(&unk, 0);
}

BOOL func_607(var uParam0) // Position - 0x11910
{
	int i;
	BOOL value;
	int bitShift;
	int num;
	int bitShift2;
	BOOL value2;
	int num2;

	bitShift2 = 32 - func_818();

	for (i = 5 - 1; i >= 0; i = i + -1)
	{
		num2 = i;
		bitShift = func_819(uParam0->f_3, num2, true);
	
		if (bitShift == -1)
		{
		}
		else
		{
			if (i != 5 - 1)
			{
				value = BUILTIN::SHIFT_LEFT(value, bitShift);
				num = num + bitShift;
			
				if (num > 32)
					return false;
			}
		
			value = value || func_820(uParam0->f_3, num2, uParam0);
		}
	}

	if (uParam0->f_3 == 0)
		return false;

	value2 = uParam0->f_3;
	value2 = BUILTIN::SHIFT_LEFT(value2, bitShift2);
	value = value || value2;
	return value;
}

int func_608(int iParam0) // Position - 0x119A9
{
	var unk;

	if (!func_650(&unk))
		return 0;

	if (!func_651(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 17, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 19, iParam0, 0, 1))
		return 0;

	if (!func_651(&unk, 38, 0, 0, 0))
		return 0;

	return func_812(&unk, 8);
}

struct<4> func_609(int iParam0, int iParam1) // Position - 0x11A14
{
	var unk;
	var unk6;
	int num;

	if (!func_650(&unk))
		return unk6;

	if (!func_651(&unk, 13, 0, 0, 1))
		return unk6;

	if (!func_651(&unk, 17, 0, 0, 1))
		return unk6;

	if (!func_651(&unk, 19, iParam0, 0, 1))
		return unk6;

	if (!func_651(&unk, 38, 0, 0, 0))
		return unk6;

	if (!func_651(&unk, 39, iParam1, 0, 1))
		return unk6;

	num = func_821(&unk);
	return func_822(num);
}

void func_610(var uParam0, BOOL bParam1) // Position - 0x11AAB
{
	int num;
	var unk;

	if (!func_823(uParam0, bParam1))
		return;

	num = func_824();

	if (num == -1)
		return;

	if (!func_825(*uParam0, &unk, 1, 255, 0, false))
		return;

	func_826(num, &unk, bParam1, uParam0->f_3);
	return;
}

void func_611(int iParam0, Any* panParam1) // Position - 0x11AF4
{
	MISC::COPY_SCRIPT_STRUCT(panParam1, &Global_1296390.f_118[iParam0 /*6*/], 4);
	return;
}

BOOL func_612(Any anParam0) // Position - 0x11B0D
{
	if (*anParam0 == 0 && anParam0->f_1 == 0 || anParam0->f_1 == -889271554 && anParam0->f_2 == 0 && anParam0->f_3 == 0)
		return false;

	return true;
}

int func_613(int iParam0) // Position - 0x11B53
{
	var unk;

	if (!func_650(&unk))
		return 0;

	if (!func_651(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 17, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 19, iParam0, 0, 1))
		return 0;

	if (!func_651(&unk, 20, 0, 0, 1))
		return 0;

	return func_812(&unk, 1);
}

int func_614(int iParam0) // Position - 0x11BBD
{
	var unk;

	if (!func_650(&unk))
		return 0;

	if (!func_651(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 17, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 19, iParam0, 0, 1))
		return 0;

	if (!func_651(&unk, 31, 0, 0, 0))
		return 0;

	return func_812(&unk, 5);
}

BOOL func_615(int iParam0, int iParam1) // Position - 0x11C27
{
	var unk;

	if (!func_650(&unk))
		return false;

	if (!func_651(&unk, 13, 0, 0, 1))
		return false;

	if (!func_651(&unk, 17, 0, 0, 1))
		return false;

	if (!func_651(&unk, 19, iParam0, 0, 1))
		return false;

	if (!func_651(&unk, 31, 0, 0, 1))
		return false;

	if (!func_651(&unk, 35, iParam1, 0, 0))
		return false;

	return true;
}

int func_616(int iParam0, int iParam1) // Position - 0x11C9F
{
	var unk;

	if (!func_650(&unk))
		return 0;

	if (!func_651(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 17, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 19, iParam0, 0, 1))
		return 0;

	if (!func_651(&unk, 20, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 23, iParam1, 0, 1))
		return 0;

	if (!func_651(&unk, 24, 0, 0, 0))
		return 0;

	return func_812(&unk, 2);
}

BOOL func_617(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x11D30
{
	var unk;
	var unk8;
	var unk13;
	int i;
	int num;

	if (!func_650(&unk8))
		return false;

	if (!func_651(&unk8, 13, 0, 0, 1))
		return false;

	if (!func_651(&unk8, 17, 0, 0, 1))
		return false;

	if (!func_651(&unk8, 19, iParam0, 0, 1))
		return false;

	if (!func_651(&unk8, 20, 0, 0, 1))
		return false;

	if (!func_651(&unk8, 23, iParam1, 0, 1))
		return false;

	if (!func_651(&unk8, 45, 0, 0, 0))
	{
		if (func_651(&unk8, 24, 0, 0, 0))
		{
			if (!func_651(&unk8, 25, iParam2, 0, 1))
				return false;
		
			if (!func_651(&unk8, 45, 0, 0, 1))
				return false;
		}
		else
		{
			return false;
		}
	}

	unk13 = unk8.f_1;
	num = func_812(&unk8, 9);

	for (i = 0; i <= num - 1; i = i + 1)
	{
		unk8.f_1 = unk13;
	
		if (!func_651(&unk8, 46, i, 0, 1))
			return false;
	
		unk = { func_827(unk8) };
	
		if (!func_828(&unk, iParam3))
			return false;
	}

	return true;
}

void func_618(int iParam0, int iParam1, int iParam2) // Position - 0x11E4E
{
	Global_1296390.f_83[iParam0 /*17*/].f_1[iParam1] = iParam2;
	return;
}

void func_619(int iParam0, int iParam1) // Position - 0x11E68
{
	Global_1296390.f_83[iParam0 /*17*/] = iParam1;
	return;
}

void func_620(int iParam0) // Position - 0x11E7C
{
	Global_1296390.f_2.f_45 = iParam0;
	return;
}

void func_621(int iParam0, int iParam1) // Position - 0x11E8E
{
	Global_1296390.f_2[iParam0 /*22*/].f_16 = iParam1;
	return;
}

int func_622(int iParam0) // Position - 0x11EA4
{
	var unk;

	if (!func_829(&unk, iParam0, joaat("COOLDOWN_DURATION")))
		return 0;

	return func_830(&unk);
}

void func_623(int iParam0, int iParam1) // Position - 0x11EC7
{
	Global_1296390.f_2[iParam0 /*22*/].f_17 = iParam1;
	return;
}

struct<2> func_624(int iParam0, int iParam1) // Position - 0x11EDD
{
	var unk;
	var unk6;
	int num;
	int num2;

	if (!func_650(&unk))
		return unk6;

	if (!func_651(&unk, 13, 0, 0, 1))
		return unk6;

	if (!func_651(&unk, 17, 0, 0, 1))
		return unk6;

	if (!func_651(&unk, 19, iParam0, 0, 1))
		return unk6;

	if (!func_651(&unk, 36, 0, 0, 0))
		return unk6;

	if (!func_651(&unk, 37, iParam1, 0, 0))
		return unk6;

	num = func_654(&unk);
	num2 = func_655(&unk);
	return func_656(num, num2);
}

void func_625(int iParam0, var uParam1, var uParam2) // Position - 0x11F7E
{
	Global_1296390.f_2[iParam0 /*22*/].f_18 = { uParam1 };
	return;
}

BOOL func_626(int iParam0) // Position - 0x11F98
{
	return func_628(iParam0, 0) != 0;
}

void func_627(int iParam0, BOOL bParam1) // Position - 0x11FA9
{
	Global_1296390.f_2[iParam0 /*22*/].f_20 = bParam1;
	return;
}

int func_628(int iParam0, int iParam1) // Position - 0x11FBF
{
	var unk;

	if (!func_650(&unk))
		return 0;

	if (!func_651(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 17, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 19, iParam0, 0, 1))
		return 0;

	return func_831(&unk, iParam1);
}

void func_629(int iParam0, int iParam1) // Position - 0x12017
{
	Global_1296390.f_2[iParam0 /*22*/].f_21 = iParam1;
	return;
}

Hash func_630(int iParam0, int iParam1) // Position - 0x1202D
{
	var unk;

	if (!func_650(&unk))
		return 0;

	if (!func_651(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 17, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 19, iParam0, 0, 1))
		return 0;

	if (!func_651(&unk, 20, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 23, iParam1, 0, 1))
		return 0;

	return func_832(&unk);
}

void func_631(int iParam0, int iParam1, Hash hParam2) // Position - 0x120AA
{
	Global_1296390.f_2[iParam0 /*22*/][iParam1] = hParam2;
	return;
}

int func_632() // Position - 0x120C2
{
	return Global_1296390.f_2.f_45;
}

int func_633(int iParam0) // Position - 0x120D2
{
	return Global_1296390.f_2[iParam0 /*22*/].f_16;
}

void func_634() // Position - 0x120E6
{
	int i;
	int num;
	int j;
	int num2;
	Hash missionId;
	int num3;
	int num4;
	int num5;
	int rating;

	num = func_606();

	for (i = 0; i <= num - 1; i = i + 1)
	{
		num3 = i;
		num2 = func_613(num3);
	
		for (j = 0; j <= num2 - 1; j = j + 1)
		{
			num4 = j;
			num5 = func_833(num3, num4);
		
			switch (num5)
			{
				case -1:
					rating = 0;
					break;
			
				case 0:
					rating = 0;
					break;
			
				case 15:
					rating = 5;
					break;
			
				default:
					switch (num5)
					{
						case 1:
							rating = 3;
							break;
					
						case 2:
							rating = 4;
							break;
					
						default:
							rating = 0;
							break;
					}
					break;
			}
		
			if (rating == 0)
			{
			}
			else
			{
				missionId = func_630(num3, num4);
				MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(missionId, rating);
			}
		}
	}

	return;
}

int func_635() // Position - 0x121A8
{
	return Global_1296390.f_48;
}

BOOL func_636(int iParam0) // Position - 0x121B6
{
	return Global_1296390.f_2[iParam0 /*22*/].f_20;
}

int func_637() // Position - 0x121CA
{
	return Global_1296390.f_48.f_1;
}

Hash func_638(int iParam0, int iParam1) // Position - 0x121DA
{
	return Global_1296390.f_2[iParam0 /*22*/][iParam1];
}

int func_639(int iParam0) // Position - 0x121F0
{
	return Global_1296390.f_2[iParam0 /*22*/].f_17 * 60;
}

struct<2> func_640(int iParam0) // Position - 0x12206
{
	return Global_1296390.f_2[iParam0 /*22*/].f_18;
}

int func_641(int iParam0) // Position - 0x1221C
{
	return Global_1296390.f_83[iParam0 /*17*/];
}

Hash func_642(int iParam0) // Position - 0x1222E
{
	return Global_1296390.f_2[iParam0 /*22*/].f_21;
}

void func_643(int iParam0) // Position - 0x12242
{
	Global_1296390.f_48.f_1 = iParam0;
	return;
}

void func_644(int iParam0) // Position - 0x12254
{
	Global_1296390.f_48 = iParam0;
	return;
}

struct<6> func_645(BOOL bParam0) // Position - 0x12264
{
	var unk;
	int i;
	int bitShift;
	BOOL value;
	int num;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_3 = func_834(bParam0);

	if (unk.f_3 == 0)
		return unk;

	value = bParam0;

	for (i = 0; i <= 5 - 1; i = i + 1)
	{
		num = i;
		bitShift = func_819(unk.f_3, num, true);
	
		if (bitShift == -1)
		{
		}
		else
		{
			func_835(unk.f_3, num, &unk, value);
			value = BUILTIN::SHIFT_RIGHT(value, bitShift);
		}
	}

	return unk;
}

int func_646(int iParam0, int iParam1) // Position - 0x122F4
{
	var unk;

	if (!func_650(&unk))
		return 0;

	if (!func_651(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 17, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 19, iParam0, 0, 1))
		return 0;

	if (!func_651(&unk, 20, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 23, iParam1, 0, 1))
		return 0;

	return func_836(&unk);
}

struct<2> func_647(Hash hParam0, int iParam1) // Position - 0x12371
{
	int num;

	num = -1;
	num.f_1 = -1;
	num = iParam1;

	switch (iParam1)
	{
		case 2:
			num.f_1 = func_837(hParam0, &(Global_1072759.f_573), func_76(iParam1));
			break;
	
		case 3:
			num.f_1 = func_837(hParam0, &(Global_1072759.f_573.f_602), func_76(iParam1));
			break;
	
		case 4:
			num.f_1 = func_837(hParam0, &(Global_1072759.f_573.f_2104), func_76(iParam1));
			break;
	
		case 5:
			num.f_1 = func_837(hParam0, &(Global_1072759.f_573.f_12606), func_76(iParam1));
			break;
	
		case 6:
			num.f_1 = func_837(hParam0, &(Global_1072759.f_573.f_12908), func_76(iParam1));
			break;
	
		case 7:
			num.f_1 = func_837(hParam0, &(Global_1072759.f_573.f_15910), func_76(iParam1));
			break;
	
		case 8:
			num.f_1 = func_837(hParam0, &(Global_1072759.f_573.f_16512), func_76(iParam1));
			break;
	}

	if (num.f_1 < 0)
		return func_838();

	return num;
}

void func_648(int iParam0, var uParam1) // Position - 0x12497
{
	func_839(iParam0, uParam1->f_3.f_2);
	func_840(iParam0, uParam1->f_3.f_4);
	func_841(iParam0, uParam1->f_3.f_5);
	func_842(iParam0, uParam1->f_3);
	func_843(iParam0, uParam1->f_3.f_1);
	func_844(iParam0, *uParam1);
	func_845(iParam0, uParam1->f_2);
	func_846(iParam0, uParam1->f_9);
	return;
}

void func_649(BOOL bParam0) // Position - 0x124F7
{
	int i;
	int num;
	var unk;
	var unk5;
	var unk11;
	var unk16;

	unk16 = -1;
	unk16.f_1 = -1;
	unk16.f_3 = -1;
	unk16.f_3.f_1 = -1;
	unk16.f_3.f_2 = -1;
	unk16.f_3.f_4 = -1;
	unk16.f_3.f_5 = -1;
	unk16.f_9 = -1;
	unk16.f_3 = { func_645(bParam0) };
	num = func_847(unk16.f_3, unk16.f_3.f_1, unk16.f_3.f_2);

	for (i = 0; i <= num - 1; i = i + 1)
	{
		unk5 = { func_848(unk16, i) };
		func_849(&unk5, bParam0);
	}

	num = func_850(unk16.f_3, unk16.f_3.f_1, unk16.f_3.f_2);

	for (i = 0; i <= num - 1; i = i + 1)
	{
		unk11 = { func_851(&unk16, i) };
		func_852(&unk11, bParam0);
	}

	num = func_853(unk16.f_3, unk16.f_3.f_1, unk16.f_3.f_2);

	for (i = 0; i <= num - 1; i = i + 1)
	{
		unk = { func_854(unk16, i) };
		func_610(&unk, bParam0);
	}

	return;
}

BOOL func_650(Any* panParam0) // Position - 0x12605
{
	int fileHandle;
	var SourceStruct;

	fileHandle = Global_1072759.f_28418[29 /*4*/].f_3;

	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(fileHandle))
		return false;

	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(fileHandle))
		return false;

	MISC::COPY_SCRIPT_STRUCT(panParam0, &SourceStruct, 5);
	*panParam0 = fileHandle;
	return true;
}

BOOL func_651(Any* panParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x12647
{
	var unk;

	unk = panParam0->f_1;
	panParam0->f_2 = iParam1;
	panParam0->f_3 = iParam2;
	panParam0->f_4 = iParam3;

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0))
	{
		panParam0->f_1 = unk;
		return false;
	}

	return true;
}

struct<8> func_652(Any* panParam0, int iParam1, int iParam2) // Position - 0x12680
{
	var unk;

	panParam0->f_2 = iParam1;
	!DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&unk, panParam0);
	return unk;
}

int func_653(int iParam0, int iParam1) // Position - 0x1269F
{
	switch (iParam0)
	{
		case joaat("HELP_TEXT_POST_COOP_MISSION_1"):
			return 1;
	
		case joaat("HELP_TEXT_POST_EXT_NO_GATING_ITEM"):
			return 3;
	
		case joaat("HELP_TEXT_POST_EXT_HAS_SETUP_MOON"):
			return 4;
	
		case joaat("HELP_TEXT_POST_COOP_MISSION_5"):
			return 2;
	
		case joaat("HELP_TEXT_WAIT_FOR_POSSE_LEADER"):
			return 0;
	
		case joaat("HELP_TEXT_BLOCK_ACCEPT_POSSE_TOO_LARGE"):
			return 5;
	
		case joaat("HELP_TEXT_COOP_COOLDOWN_DONE"):
			return 6;
	
		case 1057717540:
			return 7;
	
		case 1209208750:
			return 8;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

int func_654(Any* panParam0) // Position - 0x1271B
{
	return func_855(panParam0, 77, 1);
}

int func_655(Any* panParam0) // Position - 0x1272C
{
	return func_855(panParam0, 78, 1);
}

struct<2> func_656(int iParam0, int iParam1) // Position - 0x1273D
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

struct<10> func_657(int iParam0) // Position - 0x12753
{
	var DestStruct;

	DestStruct = -1;
	DestStruct.f_1 = -1;
	DestStruct.f_3 = -1;
	DestStruct.f_3.f_1 = -1;
	DestStruct.f_3.f_2 = -1;
	DestStruct.f_3.f_4 = -1;
	DestStruct.f_3.f_5 = -1;
	DestStruct.f_9 = -1;
	MISC::COPY_SCRIPT_STRUCT(&DestStruct, &Global_1296390.f_58.f_4[iParam0 /*10*/], 10);
	return DestStruct;
}

BOOL func_658(int iParam0) // Position - 0x127AB
{
	return Global_1296390.f_58.f_1.f_2 && iParam0 != false;
}

void func_659(int iParam0) // Position - 0x127C2
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk.f_3 = -1;
	unk.f_3.f_1 = -1;
	unk.f_3.f_2 = -1;
	unk.f_3.f_4 = -1;
	unk.f_3.f_5 = -1;
	unk.f_9 = -1;
	func_648(iParam0, &unk);
	return;
}

void func_660() // Position - 0x12809
{
	if (Global_1901671.f_1 == 0)
		return;

	Global_1901671.f_1 = 0;
	return;
}

int func_661() // Position - 0x12825
{
	return Global_1110244.f_21;
}

int func_662(int iParam0) // Position - 0x12833
{
	return Global_1110244[iParam0];
}

void func_663(int iParam0) // Position - 0x12843
{
	if (Global_1110244.f_17)
		func_856(iParam0);
	else
		func_857(iParam0);

	return;
}

void func_664(int iParam0, int iParam1) // Position - 0x12863
{
	BOOL flag;
	int num;

	if (iParam0 == -1)
		return;

	if (!func_858(iParam0, 1))
		return;

	flag = func_859();
	func_860(iParam0);

	if (iParam1 == -1)
	{
		num = Global_1207480.f_231.f_1066[iParam0 /*17*/].f_7;
	
		if (num > 1)
			num = 1;
	
		for (iParam1 = 0; iParam1 < num; iParam1 = iParam1 + 1)
		{
			func_861(iParam0, iParam1, flag);
		}
	}
	else
	{
		func_861(iParam0, iParam1, flag);
	}

	if (flag)
		func_862(iParam0);

	return;
}

void func_665() // Position - 0x128E3
{
	int sessionFlags;
	int num;
	int gangId;
	int i;
	Player Plr;
	int gangId2;

	if (!NETWORK::NETWORK_IS_HOST())
		return;

	if (Global_1140723.f_44)
	{
		sessionFlags = NETWORK::NETWORK_SESSION_GET_SESSION_FLAGS();
		num = 9;
		gangId = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	
		if (sessionFlags && num != false && !func_863())
		{
			for (i = 0; i <= 31; i = i + 1)
			{
				Plr = PLAYER::INT_TO_PLAYERINDEX(i);
			
				if (Plr == PLAYER::PLAYER_ID() || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Plr) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Plr))
				{
				}
				else
				{
					gangId2 = GANG::NETWORK_GET_GANG_ID(Plr);
				
					if (gangId2 != gangId || gangId2 == 0 && gangId == 0)
					{
						func_864();
						return;
					}
				}
			}
		}
	}

	return;
}

BOOL func_666() // Position - 0x12993
{
	return func_865();
}

void func_667(var uParam0, var uParam1) // Position - 0x1299F
{
	int num;
	var unk;

	if (*uParam0 == 0)
		return;

	*uParam1 = *uParam1 + 1;

	if (*uParam1 >= *uParam0)
		*uParam1 = 0;

	num = (uParam0->f_1 + *uParam1) % uParam0->f_2;
	unk = -1;
	unk.f_2 = -1;
	unk.f_3 = 255;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_8 = 2;
	unk.f_8.f_1 = -1;
	unk.f_8.f_5 = -1;
	unk.f_8.f_5.f_1 = -1;
	unk.f_8.f_5.f_3 = -1;
	unk.f_8.f_5.f_4 = -1;
	unk.f_8.f_5.f_5 = -1;
	unk.f_8.f_5.f_6 = -1;
	unk.f_8.f_5.f_6.f_1 = -1;
	unk.f_8.f_5.f_9 = 2;
	unk.f_23.f_1 = 1024;
	unk.f_23.f_4 = -15;
	unk.f_23.f_5 = 255;
	unk.f_23.f_8 = 1;
	unk.f_23.f_8.f_1.f_1 = 2147483647;
	unk.f_23.f_13 = -1;

	if (uParam0->f_3[num /*40*/].f_2 != -1)
	{
		unk = { func_866(&(Global_1207480.f_28), uParam0->f_3[num /*40*/]) };
		func_867(unk, uParam0, &uParam0->f_3[num /*40*/]);
	}

	return;
}

void func_668(int iParam0) // Position - 0x12AB1
{
	int gangId;
	var unk;
	int num;

	gangId = func_868(iParam0);

	if (gangId == 0)
		return;

	if (!GANG::NETWORK_IS_GANG_IN_SESSION(gangId))
	{
		unk = -1;
		unk.f_1 = -1;
		unk.f_3 = -1;
		unk.f_4 = -1;
		unk.f_5 = -1;
		unk.f_6 = -1;
		unk.f_6.f_1 = -1;
		unk.f_9 = 2;
		unk = { func_498(iParam0) };
	
		if (func_18(unk))
		{
			num = func_869(&unk);
		
			if (num != func_870(iParam0))
				if (func_871(num))
					func_872(iParam0, num);
		}
	
		func_873(iParam0);
	}

	return;
}

void func_669(int iParam0) // Position - 0x12B48
{
	Player Plr;
	int num;
	int i;
	int num2;
	int gangId;
	int gangId2;

	Plr = PLAYER::INT_TO_PLAYERINDEX(iParam0);

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Plr))
		return;

	num = func_874(Plr, -1);
	gangId = GANG::NETWORK_GET_GANG_ID(Plr);

	if (func_497(num))
		if (func_868(num) == gangId)
			return;

	num2 = -1;

	for (i = 0; i <= 31; i = i + 1)
	{
		gangId2 = func_868(i);
	
		if (func_875(i) != -1)
		{
		}
		else
		{
			if (gangId2 == 0)
			{
				num2 = i;
				break;
			}
		
			if (!GANG::NETWORK_IS_GANG_IN_SESSION(gangId2))
			{
				num2 = i;
				break;
			}
		
			if (gangId2 == gangId)
				return;
		}
	}

	if (num2 == -1)
		return;

	func_876(num2, gangId);
	return;
}

void func_670(int iParam0) // Position - 0x12BF1
{
	var unk;
	BOOL flag;

	switch (func_875(iParam0))
	{
		case -1:
			flag = func_877(iParam0, &unk);
			break;
	
		case 0:
			flag = func_878(iParam0, &unk);
			break;
	
		case 1:
			flag = func_879(iParam0, &unk);
			break;
	
		case 2:
			flag = func_880(iParam0, &unk);
			break;
	
		case 3:
			flag = func_881(iParam0, &unk);
			break;
	
		case 4:
			flag = func_882(iParam0, &unk);
			break;
	
		case 5:
			flag = func_883(iParam0, &unk);
			break;
	
		case 6:
			flag = func_884(iParam0, &unk);
			break;
	
		case 7:
			flag = func_885(iParam0, &unk);
			break;
	
		case 8:
			flag = func_887(iParam0, &unk);
			break;
	
		case 9:
			flag = func_886(iParam0, &unk);
			break;
	
		default:
			break;
	}

	if (flag)
		func_889(iParam0, unk, func_888(iParam0));

	return;
}

void func_671() // Position - 0x12CEC
{
	func_890(3, (func_662(3) + 1) % 32);
	func_890(0, (func_662(0) + 1) % 32);
	return;
}

void func_672() // Position - 0x12D12
{
	int num;
	var unk;
	var unk14;

	num = func_874(PLAYER::PLAYER_ID(), -1);

	if (!func_497(num))
		return;

	unk = { func_891(num) };

	if (!func_892(unk.f_5, unk.f_3))
		return;

	unk14 = -1;
	unk14.f_1 = -1;
	unk14.f_3 = -1;
	unk14 = { unk.f_5 };

	if (func_18(unk.f_5))
	{
		unk14.f_3 = unk.f_3;
		unk14.f_2 = func_19(unk.f_5);
	}
	else
	{
		unk14.f_3 = -1;
		unk14.f_2 = 0;
	}

	func_893(&unk14);
	return;
}

void func_673() // Position - 0x12DA7
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;
	BOOL flag7;
	BOOL flag8;
	Player player;
	int num;

	player = PLAYER::PLAYER_ID();
	flag3 = func_894(player, 1);
	flag4 = func_894(player, 2);
	flag = func_894(player, 4);
	flag2 = func_894(player, 8);
	flag5 = func_894(player, 32);
	flag6 = func_18(func_895()) && !func_18(func_896());
	flag8 = func_897() == 1;
	flag7 = func_898() >= 24 || func_898() == 0;

	if (func_899() != GANG::NETWORK_GET_GANG_ID(player) && func_900() == 4 || flag5 && !func_901(255))
	{
		if (flag5)
			if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
				CAM::DO_SCREEN_FADE_IN(2000);
	
		func_902();
		return;
	}

	if (flag5)
	{
		if (func_903() == 0 && !flag || flag2)
		{
			if (CAM::IS_SCREEN_FADED_IN() && !func_901(255))
			{
				func_904(4);
				func_904(8);
				func_904(32);
				func_905(0);
				func_906(func_838());
			}
		}
	}

	if (func_907() == -1 && !flag6 && flag8 && flag7 || !flag8)
	{
		if (flag3)
			func_902();
	
		return;
	}

	num = func_874(player, -1);

	if (!func_497(num))
		return;

	if (!flag6 && flag8 && flag7 || !flag8 && func_899() != GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()) && flag4 && !flag && func_900() != 2)
	{
		func_902();
		return;
	}

	if (!flag3)
		return;

	if (!flag6 && func_900() != 4)
		if (func_907() != 4)
			return;

	if (!flag4)
	{
		switch (func_907())
		{
			case 4:
				!AUDIO::_IS_ANY_CONVERSATION_PLAYING(false);
				break;
		
			default:
				func_908(2);
				break;
		}
	
		return;
	}

	if (!flag2)
		return;

	func_902();
	return;
}

void func_674() // Position - 0x12FB5
{
	int num;

	num = func_662(4);

	if (func_909(num))
		func_910(num);
	else
		func_911(num);

	return;
}

void func_675() // Position - 0x12FDC
{
	int num;
	int num2;

	num = func_662(5);
	num2 = num;

	if (func_912(num2))
		func_913(num2);
	else
		func_914(num2);

	return;
}

void func_676() // Position - 0x13007
{
	if (func_915(255))
		func_916(1);
	else
		func_916(2);

	return;
}

void func_677() // Position - 0x13025
{
	Player gangLeader;
	int gameTimer;

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(gangLeader))
		return;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(gangLeader))
		return;

	if (!func_917(gangLeader, 1024))
		return;

	if (func_18(func_895()))
		return;

	gameTimer = MISC::GET_GAME_TIMER();

	if (func_918(131072))
		if (gameTimer - func_919() < Global_1901671.f_319.f_40)
			return;

	func_920(gangLeader);
	func_921(gameTimer);
	func_922(131072);
	return;
}

void func_678() // Position - 0x130AE
{
	int num;
	var unk;

	if (!func_923())
		return;

	if (GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()) != func_924())
	{
		func_925();
		return;
	}

	num = func_926(func_924());

	if (num == -1)
		return;

	if (!func_927(num))
		return;

	if (func_875(num) != 0)
		return;

	if (!func_929(func_928(), func_498(num)) && func_18(func_498(num)))
	{
		func_925();
		return;
	}

	if (func_930(num, 2))
	{
		func_925();
		return;
	}

	unk.f_1 = -1;
	func_931(&unk);
	func_936(func_932(), func_933(), func_934(), func_935(), func_928(), unk, 1);
	func_925();
	return;
}

void func_679() // Position - 0x1316D
{
	var unk;
	Player gangLeader;

	unk = 3;
	gangLeader = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));

	if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(gangLeader) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(gangLeader))
	{
		func_937(gangLeader, &unk);
	
		if (unk.f_4)
			func_938(&unk);
	}

	if (func_939(2))
	{
		func_940(&unk);
		func_941(&unk);
		func_942(2);
	}

	return;
}

void func_680() // Position - 0x131D2
{
	var unk;
	Player gangLeader;

	unk = 2;
	gangLeader = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));

	if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(gangLeader) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(gangLeader))
	{
		func_943(gangLeader, &unk);
	
		if (unk.f_3)
			func_944(&unk);
	}

	if (func_939(4))
	{
		func_945(&unk);
		func_946(&unk);
		func_942(4);
	}

	return;
}

void func_681() // Position - 0x13237
{
	var unk;
	var unk6;
	int i;
	int j;

	unk = 3;
	unk6 = 3;

	if (PLAYER::PLAYER_ID() == Global_1102813.f_3674)
	{
		for (i = 0; i <= 6; i = i + 1)
		{
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1102813.f_3675[i]))
			{
			}
			else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1102813.f_3675[i]))
			{
			}
			else
			{
				func_947(Global_1102813.f_3675[i], &unk6);
			
				if (!unk6.f_4)
				{
				}
				else
				{
					for (j = 0; j <= 2; j = j + 1)
					{
						unk[j] = unk[j] || unk6[j];
					}
				}
			}
		}
	
		unk.f_4 = 1;
	}

	func_948(&unk);
	return;
}

void func_682() // Position - 0x132E5
{
	int num;
	int i;
	BOOL flag;
	Player player;

	num = func_662(6);
	player = PLAYER::PLAYER_ID();

	for (i = 0; i <= 3; i = i + 1)
	{
		if (num == func_949(i))
		{
			if (func_950(i) != 0)
				flag = true;
		}
		else
		{
		}
	}

	if (!flag)
	{
		if (func_951(player, num))
		{
			func_952(num);
			return;
		}
	}

	return;
}

int func_683() // Position - 0x13344
{
	if (!func_953())
		return 0;

	Global_1203952.f_399.f_4 = 0;
	return 1;
}

void func_684() // Position - 0x13363
{
	func_890(1, (func_662(1) + 1) % 32);
	func_890(2, (func_662(2) + 1) % 32);
	func_890(4, (func_662(4) + 1) % 36);
	func_890(5, (func_662(5) + 1) % 104);
	func_890(6, (func_662(6) + 1) % 62);
	return;
}

void func_685() // Position - 0x133B6
{
	Global_1939596 = 3;
	Global_1939596.f_289 = 1;
	return;
}

BOOL func_686(int iParam0) // Position - 0x133CB
{
	int num;

	num = func_773(iParam0);

	if (num < 336)
		return false;

	return true;
}

void func_687(int iParam0, var uParam1) // Position - 0x133E8
{
	int num;
	int i;
	Player Plr;

	num = Global_1072759.f_19585.f_20;

	for (i = 0; i <= 31; i = i + 1)
	{
		Plr = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Plr))
		{
		}
		else if (func_11(Plr) != 9)
		{
		}
		else
		{
			Global_1072759.f_19585.f_19 = Global_1072759.f_19585.f_19 || Global_1056554[i /*491*/].f_443[iParam0];
			Global_1072759.f_19585.f_20 = Global_1072759.f_19585.f_20 && Global_1056554[i /*491*/].f_443.f_19[iParam0];
		}
	}

	func_954(iParam0);

	if (Global_1072759.f_19585.f_19 == Global_1072759.f_19585[iParam0] && num == Global_1072759.f_19585.f_20)
		*uParam1 = 1;
	else
		Global_1072759.f_19585.f_23 = 1;

	return;
}

void func_688(int iParam0, int iParam1) // Position - 0x134B9
{
	BOOL flag;
	int i;
	int offset;
	int num;

	for (i = 0; i <= 31; i = i + 1)
	{
		offset = Global_1072759.f_19585.f_22 + i;
	
		if (offset > 31)
		{
			flag = true;
			break;
		}
	
		if (MISC::IS_BIT_SET(Global_1056554[iParam0 /*491*/].f_443[iParam1], offset))
		{
			MISC::CLEAR_BIT(&Global_1056554[iParam0 /*491*/].f_443.f_19[iParam1], offset);
		}
		else if (!MISC::IS_BIT_SET(Global_1072759.f_19585[iParam1], offset))
		{
			MISC::SET_BIT(&Global_1056554[iParam0 /*491*/].f_443.f_19[iParam1], offset);
		}
		else
		{
			num = (iParam1 * 31) + offset;
		
			if (num > 544)
			{
				flag = true;
				break;
			}
		
			if (func_470(num))
				MISC::SET_BIT(&Global_1056554[iParam0 /*491*/].f_443.f_19[iParam1], offset);
			else
				MISC::CLEAR_BIT(&Global_1056554[iParam0 /*491*/].f_443.f_19[iParam1], offset);
		}
	}

	Global_1072759.f_19585.f_22 = offset + 1;

	if (flag || offset == 31)
	{
		if (Global_1072759.f_19585.f_20 != Global_1056554[iParam0 /*491*/].f_443.f_19[iParam1])
			Global_1072759.f_19585.f_20 = Global_1072759.f_19585.f_20 && Global_1056554[iParam0 /*491*/].f_443.f_19[iParam1];
	
		Global_1072759.f_19585.f_23 = 2;
	}

	return;
}

BOOL func_689(BOOL bParam0, int iParam1) // Position - 0x13610
{
	var Variable;
	int i;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (MISC::IS_BIT_SET(bParam0, i))
			MISC::SET_BIT(&Variable, i);
		else if (!MISC::IS_BIT_SET(iParam1, i))
			MISC::SET_BIT(&Variable, i);
	}

	return Variable;
}

BOOL func_690(int iParam0) // Position - 0x13657
{
	if (iParam0 <= -1 || iParam0 >= 2147483647)
		return false;

	return true;
}

BOOL func_691(int iParam0) // Position - 0x13679
{
	int num;

	num = iParam0;
	return num >= 0 && num < 64;
}

int func_692(var uParam0, var uParam1) // Position - 0x13693
{
	var unk;
	var unk4;
	int num;
	int num2;
	int num3;

	if (Global_1072759.f_19487 <= 0)
		return -1;

	unk.f_1 = -1;
	unk.f_2 = -1;
	unk4.f_1 = -1;
	unk4.f_2 = -1;

	if (!func_77(uParam0, &unk))
		return -1;

	num = 0;
	num2 = Global_1072759.f_19487 - 1;

	while (num <= num2)
	{
		num3 = num + ((num2 - num) / 2);
		func_77(Global_1072759.f_19487.f_1[num3 /*3*/], &unk4);
	
		if (unk4 > unk)
			num2 = num3 - 1;
		else if (unk4 < unk)
			num = num3 + 1;
		else
			return num3;
	}

	return -1;
}

BOOL func_693(int iParam0) // Position - 0x1373A
{
	if (iParam0 < 0 || iParam0 >= 15)
		return false;

	return true;
}

struct<2> func_694(int iParam0) // Position - 0x13759
{
	if (!func_955(iParam0))
		return func_838();

	return Global_1835011[iParam0 /*72*/].f_1;
}

int func_695(var uParam0, var uParam1) // Position - 0x1377E
{
	int i;

	if (Global_1900530 <= 0)
		return -1;

	i = 0;

	for (i = 0; i <= Global_1900530 - 1; i = i + 1)
	{
		if (func_929(Global_1900531[i /*2*/], uParam0))
			return i;
	}

	return -1;
}

int func_696(int iParam0, int iParam1, int iParam2) // Position - 0x137C7
{
	int num;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	Vector3 vector;

	if (func_525(32768))
		return 0;

	num = func_57();

	if (func_956(&(Global_1835011[iParam0 /*72*/].f_30), 512) && !func_956(&(Global_1835011[iParam0 /*72*/].f_30), 1024))
		if (func_957())
			return 0;

	if (Global_1835011[iParam0 /*72*/].f_67)
		return 0;

	if (!MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*72*/].f_28))
	{
		flag3 = Global_1835011[iParam0 /*72*/].f_66;
	
		if (func_958(iParam0, num))
		{
			vector = { func_959(iParam0) };
			Global_1835011[iParam0 /*72*/].f_65 = VOLUME::CREATE_VOLUME_SPHERE(vector, 0f, 0f, 0f, 19f, 19f, 19f);
		
			if (VOLUME::DOES_VOLUME_EXIST(Global_1835011[iParam0 /*72*/].f_65))
				Global_1835011[iParam0 /*72*/].f_28 = MAP::_BLIP_ADD_FOR_VOLUME(1673015813, Global_1835011[iParam0 /*72*/].f_65);
		}
		else if (flag3)
		{
			Global_1835011[iParam0 /*72*/].f_28 = MAP::BLIP_ADD_FOR_COORDS(1673015813, func_960(iParam0));
		}
		else
		{
			Global_1835011[iParam0 /*72*/].f_28 = MAP::BLIP_ADD_FOR_COORDS(1673015813, func_961(iParam0));
		}
	
		Global_1835011[iParam0 /*72*/].f_29 = 1673015813;
		flag = true;
	
		if (iParam2 != -1)
			if (flag2)
				func_962(iParam2, 4194304);
			else
				func_699(iParam2, 4194304);
	
		MAP::SET_BLIP_FLASH_TIMER(Global_1835011[iParam0 /*72*/].f_28, 72, Global_1835011[iParam0 /*72*/].f_3);
	}

	if (!MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*72*/].f_28))
		return 0;

	func_963(iParam0);

	if (flag)
	{
		MAP::SET_BLIP_SPRITE(Global_1835011[iParam0 /*72*/].f_28, Global_1835011[iParam0 /*72*/].f_27, true);
	
		if (num != -1)
			MAP::_SET_BLIP_NAME(Global_1835011[iParam0 /*72*/].f_28, &(Global_1835011[iParam0 /*72*/].f_42));
	
		if (!func_956(&(Global_1835011[iParam0 /*72*/].f_30), 1024))
		{
			MAP::BLIP_ADD_MODIFIER(Global_1835011[iParam0 /*72*/].f_28, 580546400);
			func_964(&(Global_1835011[iParam0 /*72*/].f_30), 1024);
		}
	
		if (func_956(&(Global_1835011[iParam0 /*72*/].f_30), 524288))
			MAP::BLIP_ADD_MODIFIER(Global_1835011[iParam0 /*72*/].f_28, -401963276);
	
		if (func_956(&(Global_1835011[iParam0 /*72*/].f_30), 1048576))
		{
			MAP::BLIP_ADD_MODIFIER(Global_1835011[iParam0 /*72*/].f_28, -1878373110);
			MAP::BLIP_ADD_MODIFIER(Global_1835011[iParam0 /*72*/].f_28, 231194138);
		}
	}

	return 1;
}

BOOL func_697(int iParam0, int iParam1) // Position - 0x13A37
{
	return func_693(iParam0) && Global_1900562[iParam0 /*2*/].f_1 && iParam1 != false;
}

void func_698(var uParam0, var uParam1) // Position - 0x13A59
{
	int num;
	int num2;
	var unk;

	if (Global_1900530 <= 0)
		return;

	if (!func_18(uParam0))
		return;

	if (func_965(uParam0))
		func_966(uParam0, false, -1, 0, false);

	num = func_695(uParam0);

	if (num < 0)
		return;

	num2 = num;

	if (Global_1900530 > 1)
	{
		Global_1900531[num2 /*2*/] = { Global_1900531[Global_1900530 - 1 /*2*/] };
		Global_1900562[num2 /*2*/] = { Global_1900562[Global_1900530 - 1 /*2*/] };
		func_291(&Global_1900531[Global_1900530 - 1 /*2*/]);
		Global_1900562[Global_1900530 - 1 /*2*/] = { unk };
	}
	else
	{
		func_291(&Global_1900531[num2 /*2*/]);
		Global_1900562[num2 /*2*/] = { unk };
	}

	Global_1900530 = Global_1900530 - 1;

	if (Global_1900530 < 0)
		Global_1900530 = 0;

	return;
}

void func_699(int iParam0, int iParam1) // Position - 0x13B37
{
	if (!func_693(iParam0))
		return;

	Global_1900562[iParam0 /*2*/].f_1 = Global_1900562[iParam0 /*2*/].f_1 - Global_1900562[iParam0 /*2*/].f_1 && iParam1;
	return;
}

BOOL func_700(var uParam0, var uParam1) // Position - 0x13B6E
{
	return func_370(uParam0) == 0;
}

void func_701(var uParam0, var uParam1, BOOL bParam2) // Position - 0x13B80
{
	if (!func_18(uParam0))
		return;

	if (!func_700(uParam0))
		return;

	if (bParam2)
		func_967(uParam0);

	func_968(uParam0, 1);
	bParam2 = bParam2;
	return;
}

int func_702() // Position - 0x13BC0
{
	return Global_1295849.f_537.f_1;
}

void func_703() // Position - 0x13BD1
{
	int i;
	int num;
	int num2;

	if (!func_969())
		return;

	if (!func_970())
		return;

	for (i = 0; i <= 31; i = i + 1)
	{
		num = BUILTIN::SHIFT_LEFT(1, i);
		num2 = num;
	
		if (!func_971(num2))
		{
		}
		else if (!func_972(num2))
		{
		}
		else
		{
			func_973(num2);
			break;
		}
	}

	return;
}

Blip func_704() // Position - 0x13C32
{
	return Global_1295849.f_537.f_2;
}

void func_705(Blip blParam0) // Position - 0x13C43
{
	Global_1295849.f_537.f_2 = blParam0;
	return;
}

void func_706(int iParam0) // Position - 0x13C56
{
	Global_1295849.f_537.f_1 = iParam0;
	return;
}

Player func_707() // Position - 0x13C69
{
	return Global_1102813.f_3674;
}

int func_708() // Position - 0x13C78
{
	return Global_1295849.f_492.f_3;
}

Hash func_709(int iParam0, int iParam1) // Position - 0x13C89
{
	return Global_1295849[iParam0 /*37*/][iParam1];
}

int func_710(int iParam0, int iParam1) // Position - 0x13C9D
{
	return Global_1295849[iParam0 /*37*/].f_3[iParam1];
}

Hash func_711(int iParam0) // Position - 0x13CB3
{
	return Global_1295849.f_482[iParam0];
}

void func_712(int iParam0) // Position - 0x13CC6
{
	var unk;

	unk = { func_645(Global_1056554[Global_1295666 /*491*/].f_204.f_9) };
	unk.f_1 = iParam0;
	func_607(&unk);
	return;
}

void func_713(int iParam0) // Position - 0x13CF2
{
	var unk;

	unk = { func_645(Global_1056554[Global_1295666 /*491*/].f_204.f_9) };
	unk.f_4 = iParam0;
	func_607(&unk);
	return;
}

void func_714(int iParam0) // Position - 0x13D1E
{
	var unk;

	unk = { func_645(Global_1056554[Global_1295666 /*491*/].f_204.f_9) };
	unk.f_2 = iParam0;
	func_607(&unk);
	return;
}

void func_715(int iParam0) // Position - 0x13D4A
{
	var unk;

	unk = { func_645(Global_1056554[Global_1295666 /*491*/].f_204.f_9) };
	unk.f_5 = iParam0;
	func_607(&unk);
	return;
}

var func_716(Player plParam0) // Position - 0x13D76
{
	var unk;

	unk = { func_645(Global_1056554[plParam0 /*491*/].f_204.f_9) };
	return unk.f_1;
}

void func_717(var uParam0) // Position - 0x13D97
{
	Global_1295849.f_492.f_2 = uParam0;
	return;
}

var func_718(Player plParam0) // Position - 0x13DAA
{
	var unk;

	unk = { func_645(Global_1056554[plParam0 /*491*/].f_204.f_9) };
	return unk.f_4;
}

void func_719(var uParam0) // Position - 0x13DCB
{
	Global_1295849.f_492.f_3 = uParam0;
	return;
}

var func_720(Player plParam0) // Position - 0x13DDE
{
	var unk;

	unk = { func_645(Global_1056554[plParam0 /*491*/].f_204.f_9) };
	return unk.f_2;
}

void func_721(var uParam0) // Position - 0x13DFF
{
	Global_1295849.f_492.f_4 = uParam0;
	return;
}

var func_722(Player plParam0) // Position - 0x13E12
{
	var unk;

	unk = { func_645(Global_1056554[plParam0 /*491*/].f_204.f_9) };
	return unk.f_5;
}

void func_723(var uParam0) // Position - 0x13E33
{
	Global_1295849.f_492.f_5 = uParam0;
	return;
}

void func_724(int iParam0) // Position - 0x13E46
{
	func_95(&(Global_1072759.f_28644.f_8.f_1), iParam0);
	return;
}

void func_725(int iParam0) // Position - 0x13E5F
{
	if (func_974(iParam0))
		func_787(&(Global_1072759.f_28644.f_8.f_1), iParam0);

	return;
}

void func_726(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5, Hash hParam6) // Position - 0x13E81
{
	Hash hashOfThisScriptName;

	if (Global_1051194)
		return;

	Global_1051194.f_2 = iParam0;
	Global_1051194.f_3 = iParam1;
	Global_1051194.f_4 = iParam2;
	Global_1051194.f_6 = iParam3;
	Global_1051194.f_5 = iParam4;

	if (!bParam5)
		hashOfThisScriptName = SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME();
	else
		hashOfThisScriptName = hParam6;

	Global_1051194.f_1 = hashOfThisScriptName;
	Global_1051194 = true;
	return;
}

struct<4> func_727() // Position - 0x13EDB
{
	var unk;

	return unk;
}

BOOL func_728(Hash hParam0, int iParam1) // Position - 0x13EE7
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

int func_729(Hash hParam0, int iParam1) // Position - 0x13F01
{
	if (iParam1 == 0)
		return 0;

	if (func_976(func_975(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, iParam1);
}

BOOL func_730(int iParam0) // Position - 0x13F2D
{
	if (iParam0 < 0 || iParam0 > 36)
		return false;

	return true;
}

Hash func_731(int iParam0) // Position - 0x13F4C
{
	if (!func_730(iParam0))
		return 0;

	return Global_1292143.f_2986[iParam0];
}

Hash func_732(int iParam0, BOOL bParam1) // Position - 0x13F6D
{
	Hash hash;
	Hash xp;

	if (!func_730(iParam0))
		return 0;

	if (bParam1)
	{
		hash = func_977(iParam0);
	
		if (func_728(hash, 0))
		{
			if (iParam0 == 0)
				xp = func_978(255);
			else
				xp = func_398(hash, func_397(true), joaat("SLOTID_PROGRESSION"), true, false, false);
		
			Global_1292143.f_3024[iParam0] = xp;
			return xp;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		hash = func_979(iParam0);
	
		if (func_728(hash, 0))
		{
			if (iParam0 == 0)
				xp = NETWORK::_NETWORK_GET_XP();
			else
				xp = func_398(hash, func_397(true), joaat("SLOTID_PROGRESSION"), true, false, false);
		
			Global_1292143.f_2986[iParam0] = xp;
			return xp;
		}
		else
		{
			return 0;
		}
	}

	return 0;
}

void func_733(const char* sParam0, char* sParam1, Hash hParam2) // Position - 0x1402F
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

void func_734(int iParam0, int iParam1, int iParam2) // Position - 0x14060
{
	Global_1295849.f_522[iParam0 /*7*/][iParam1 /*3*/].f_1 = iParam2;
	return;
}

void func_735(int iParam0, int iParam1, int iParam2) // Position - 0x1407B
{
	Global_1295849.f_522[iParam0 /*7*/][iParam1 /*3*/] = iParam2;
	return;
}

void func_736(int iParam0, int iParam1, int iParam2) // Position - 0x14094
{
	Global_1295849.f_522[iParam0 /*7*/][iParam1 /*3*/].f_2 = iParam2;
	return;
}

Hash func_737() // Position - 0x140AF
{
	return Global_1940252.f_11605;
}

int func_738(Hash hParam0) // Position - 0x140BE
{
	int i;

	for (i = 0; i < 64; i = i + 1)
	{
		if (hParam0 == Global_265213.f_107995.f_13575[i])
			return i;
	}

	return -1;
}

BOOL func_739() // Position - 0x140F4
{
	Hash currency;
	var unk3;
	int num;

	num = func_738(func_737());
	!ITEMDATABASE::_ITEMDATABASE_FILLOUT_AWARD_ITEM_INFO(Global_265213.f_107995.f_14228[num], 0, &currency);
	unk3 = { func_980(currency, true) };

	if (func_981(currency, false, true, false) > 0 && func_982(unk3) - Global_1295666.f_16 > 0)
		return true;

	return false;
}

BOOL func_740(Hash hParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x14155
{
	var unk;
	var unk13;
	var unk26;

	unk.f_1 = 10;
	unk13.f_1 = 11;
	return func_983(hParam0, &unk26, &unk13, &unk, iParam1, iParam2, iParam3, bParam4);
}

BOOL func_741(BOOL bParam0) // Position - 0x14185
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1207339.f_1 && bParam0 != false;
}

BOOL func_742(Player plParam0, int iParam1) // Position - 0x141A6
{
	return Global_1101558[plParam0 /*38*/].f_36.f_1 && iParam1 != false;
}

float func_743(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x141BF
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_744() // Position - 0x141DD
{
	return 100f;
}

void func_745(int iParam0, int iParam1) // Position - 0x141EA
{
	Global_1300387.f_155.f_4[iParam0 /*4*/] = iParam1;
	return;
}

void func_746(int iParam0, int iParam1) // Position - 0x14200
{
	Global_1300387.f_155.f_4[iParam0 /*4*/].f_3 = iParam1;
	return;
}

void func_747(int iParam0) // Position - 0x14218
{
	func_984(iParam0);
	func_985(iParam0);
	func_746(iParam0, 0);
	return;
}

void func_748(Player plParam0) // Position - 0x14233
{
	Hash i;
	Player player;
	int num;
	Hash entityModel;
	Ped playerPed;
	var unk;

	unk = -1;
	unk.f_9 = -1082130432;
	func_986(plParam0);
	playerPed = PLAYER::GET_PLAYER_PED(plParam0);
	entityModel = ENTITY::GET_ENTITY_MODEL(playerPed);
	num = func_987(entityModel);
	player = plParam0;

	if (func_988() <= 0)
	{
		if (func_989(1))
		{
			GRAPHICS::DISABLE_ENTITYMASK();
			func_990(1);
		}
	
		if (func_989(2))
		{
			for (i = 0; i <= num - 1; i = i + 1)
			{
				if (func_991(player, i))
				{
				}
				else if (!func_992(entityModel, i, &unk))
				{
				}
				else
				{
					GRAPHICS::ANIMPOSTFX_STOP(&(unk.f_1));
				}
			}
		
			func_990(2);
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(playerPed))
		GRAPHICS::_REMOVE_ENTITY_FROM_ENTITY_MASK(playerPed);

	return;
}

int func_749(Player plParam0) // Position - 0x142DF
{
	return Global_1101558[plParam0 /*38*/].f_36;
}

int func_750(int iParam0) // Position - 0x142F1
{
	return Global_1300387.f_155.f_4[iParam0 /*4*/].f_3;
}

int func_751() // Position - 0x14307
{
	return 3000;
}

int func_752(int iParam0, int iParam1, int iParam2) // Position - 0x14312
{
	if (iParam0 > iParam2)
		return iParam2;
	else if (iParam0 < iParam1)
		return iParam1;

	return iParam0;
}

float func_753(float fParam0, float fParam1, float fParam2) // Position - 0x14337
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

float func_754(float fParam0, float fParam1, float fParam2) // Position - 0x1435E
{
	return ((1f - fParam2) * fParam0) + (fParam2 * fParam1);
}

void func_755(Player plParam0, int iParam1) // Position - 0x14373
{
	Hash i;
	Player player;
	int num;
	Hash entityModel;
	Ped playerPed;
	var effectName;

	effectName.f_26 = -1;
	effectName.f_27 = -1082130432;
	effectName.f_28 = -1;
	effectName.f_29 = -1;
	effectName.f_30 = -1;
	effectName.f_31 = -1;
	effectName.f_32 = -1;
	player = plParam0;
	playerPed = PLAYER::GET_PLAYER_PED(plParam0);
	entityModel = ENTITY::GET_ENTITY_MODEL(playerPed);
	num = func_993(entityModel);

	for (i = 0; i <= num - 1; i = i + 1)
	{
		if (func_994(player, i))
		{
		}
		else if (!func_995(entityModel, i, &effectName))
		{
		}
		else
		{
			if (effectName.f_33 & 64 != 0)
			{
				if (iParam1 > effectName.f_32)
				{
				}
				else
				{
					STREAMING::REQUEST_NAMED_PTFX_ASSET(effectName.f_16);
				
					if (!STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(effectName.f_16))
					{
					}
					else
					{
						GRAPHICS::USE_PARTICLE_FX_ASSET(&(effectName.f_8));
					
						if (effectName.f_33 & 8 != 0)
							GRAPHICS::SET_PARTICLE_FX_NON_LOOPED_COLOUR(BUILTIN::TO_FLOAT(effectName.f_28), BUILTIN::TO_FLOAT(effectName.f_30), BUILTIN::TO_FLOAT(effectName.f_29));
					
						if (effectName.f_33 & 16 != 0)
							GRAPHICS::SET_PARTICLE_FX_NON_LOOPED_ALPHA(BUILTIN::TO_FLOAT(effectName.f_31));
					
						if (effectName.f_33 & 32 != 0)
							GRAPHICS::_SET_PARTICLE_FX_NON_LOOPED_EMITTER_SCALE(effectName.f_23);
					
						GRAPHICS::_START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE_2(&effectName, playerPed, effectName.f_17, effectName.f_20, effectName.f_26, effectName.f_27, effectName.f_33 & 1 != 0, effectName.f_33 & 2 != 0, effectName.f_33 & 4 != 0);
						func_996(player, i);
					}
				}
			}
		
			STREAMING::REQUEST_NAMED_PTFX_ASSET(effectName.f_16);
		
			if (!STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(effectName.f_16))
			{
			}
			else
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET(&(effectName.f_8));
			
				if (effectName.f_33 & 8 != 0)
					GRAPHICS::SET_PARTICLE_FX_NON_LOOPED_COLOUR(BUILTIN::TO_FLOAT(effectName.f_28), BUILTIN::TO_FLOAT(effectName.f_30), BUILTIN::TO_FLOAT(effectName.f_29));
			
				if (effectName.f_33 & 16 != 0)
					GRAPHICS::SET_PARTICLE_FX_NON_LOOPED_ALPHA(BUILTIN::TO_FLOAT(effectName.f_31));
			
				if (effectName.f_33 & 32 != 0)
					GRAPHICS::_SET_PARTICLE_FX_NON_LOOPED_EMITTER_SCALE(effectName.f_23);
			
				GRAPHICS::_START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE_2(&effectName, playerPed, effectName.f_17, effectName.f_20, effectName.f_26, effectName.f_27, effectName.f_33 & 1 != 0, effectName.f_33 & 2 != 0, effectName.f_33 & 4 != 0);
				func_996(player, i);
			}
		}
	}

	return;
}

void func_756(Player plParam0) // Position - 0x144C2
{
	Hash i;
	Player player;
	int num;
	Hash entityModel;
	Ped playerPed;
	int mask;

	mask = -1;
	mask.f_9 = -1082130432;
	func_997(plParam0);

	if (!func_989(1))
	{
		GRAPHICS::ENABLE_ENTITYMASK();
		func_998(1);
	}

	playerPed = PLAYER::GET_PLAYER_PED(plParam0);
	entityModel = ENTITY::GET_ENTITY_MODEL(playerPed);
	num = func_987(entityModel);
	player = plParam0;

	for (i = 0; i <= num - 1; i = i + 1)
	{
		if (func_991(player, i))
		{
		}
		else if (!func_992(entityModel, i, &mask))
		{
		}
		else
		{
			GRAPHICS::ANIMPOSTFX_PLAY(&(mask.f_1));
			GRAPHICS::_ADD_ENTITY_TO_ENTITY_MASK_WITH_INTENSITY(playerPed, mask, mask.f_9);
			func_999(player, i);
			func_998(2);
		}
	}

	return;
}

void func_757(Player plParam0, int* piParam1, int iParam2) // Position - 0x14564
{
	float num;
	var unk3;

	if (!PED::_IS_SCENARIO_BLOCKING_AREA_VALID(Global_1220826.f_1099[plParam0 /*3*/]) || Global_1220826.f_1099[plParam0 /*3*/].f_1 != piParam1 || Global_1220826.f_1099[plParam0 /*3*/].f_2 != iParam2)
	{
		func_433(plParam0);
		num = { Global_1220826.f_48[piParam1 /*21*/][iParam2 /*4*/].f_1 };
		unk3 = { 2f, 2f, 2f };
		Global_1220826.f_1099[plParam0 /*3*/] = PED::ADD_SCENARIO_BLOCKING_AREA(num - unk3, num.f_1 - unk3.f_1, num.f_2 - unk3.f_2, num + unk3, num.f_1 + unk3.f_1, num.f_2 + unk3.f_2, false, 16);
		Global_1220826.f_1099[plParam0 /*3*/].f_1 = piParam1;
		Global_1220826.f_1099[plParam0 /*3*/].f_2 = iParam2;
	}

	return;
}

BOOL func_758(Player plParam0, int iParam1) // Position - 0x1462C
{
	if (plParam0 < 0 || plParam0 >= 32)
		return false;

	if (Global_1295232[plParam0 /*2*/].f_1 != iParam1)
		return false;

	if (!func_579(true, plParam0))
		return false;

	if (!func_579(8, plParam0))
		return false;

	if (!func_579(4, plParam0))
		return false;

	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1295205.f_2), plParam0))
		return false;

	return true;
}

BOOL func_759(int* piParam0, int iParam1) // Position - 0x1469F
{
	Player i;
	var unk;

	if (Global_1295205.f_22 >= 3)
		return false;

	for (i = 0; i < 32; i = i + 1)
	{
		if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&piParam0, i))
		{
		}
		else if (!func_758(i, iParam1))
		{
			SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&piParam0, i);
		}
	}

	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&piParam0))
		return true;

	func_1000(&Global_1295205.f_3[Global_1295205.f_22 /*6*/]);
	Global_1295205.f_3[Global_1295205.f_22 /*6*/] = iParam1;
	Global_1295205.f_3[Global_1295205.f_22 /*6*/].f_2 = piParam0;
	SCRIPTS::_0xFFDDF802279BE128(&(Global_1295205.f_2), &(Global_1295205.f_3[Global_1295205.f_22 /*6*/].f_2), &unk);
	Global_1295205.f_2 = unk;
	Global_1295205.f_22 = Global_1295205.f_22 + 1;
	return true;
}

void func_760(int iParam0, int iParam1) // Position - 0x14760
{
	iParam0->f_1 = iParam1;
	return;
}

void func_761(int iParam0, Player plParam1, Player plParam2) // Position - 0x1476E
{
	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1295205.f_2), plParam2);
	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(iParam0->f_2), plParam2);
	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(iParam0->f_4), plParam2);
	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(iParam0->f_5), plParam2);

	if (iParam0->f_3 == plParam1)
		iParam0->f_3 = 255;

	return;
}

void func_762(int iParam0) // Position - 0x147AF
{
	int blockOfPlayerBits;
	int blockOfPlayerBits2;
	int blockOfPlayerBits3;
	int blockOfPlayerBits4;

	if (iParam0 < 0 || iParam0 >= 3)
		return;

	if (Global_1295205.f_22 <= 0)
		return;

	blockOfPlayerBits = SCRIPTS::GET_BLOCK_OF_PLAYER_BITS(&(Global_1295205.f_2), 0);
	blockOfPlayerBits2 = SCRIPTS::GET_BLOCK_OF_PLAYER_BITS(&(Global_1295205.f_2), 1);
	blockOfPlayerBits3 = SCRIPTS::GET_BLOCK_OF_PLAYER_BITS(&(Global_1295205.f_3[iParam0 /*6*/].f_2), 0);
	blockOfPlayerBits4 = SCRIPTS::GET_BLOCK_OF_PLAYER_BITS(&(Global_1295205.f_3[iParam0 /*6*/].f_2), 1);
	SCRIPTS::SET_BLOCK_OF_PLAYER_BITS(&(Global_1295205.f_2), 0, blockOfPlayerBits - blockOfPlayerBits3);
	SCRIPTS::SET_BLOCK_OF_PLAYER_BITS(&(Global_1295205.f_2), 1, blockOfPlayerBits2 - blockOfPlayerBits4);
	Global_1295205.f_22 = Global_1295205.f_22 - 1;
	Global_1295205.f_3[iParam0 /*6*/] = { Global_1295205.f_3[Global_1295205.f_22 /*6*/] };
	func_1000(&Global_1295205.f_3[Global_1295205.f_22 /*6*/]);
	return;
}

void func_763(var uParam0) // Position - 0x14874
{
	var unk;
	int i;

	unk = -1;
	unk.f_1 = 10;
	unk.f_13 = 7;
	unk.f_21 = 2;
	*uParam0 = { unk };

	for (i = 0; i <= 6; i = i + 1)
	{
		uParam0->f_13[i] = 255;
	}

	return;
}

void func_764(var uParam0) // Position - 0x148BC
{
	var unk;
	int i;
	int j;

	unk.f_1 = 10;
	unk.f_1.f_1.f_1 = -1;
	unk.f_1.f_1.f_2 = -1;
	unk.f_1.f_1.f_3 = 7;
	unk.f_1.f_1.f_11 = 2;
	unk.f_1.f_1.f_16.f_1 = -1;
	unk.f_1.f_1.f_16.f_2 = -1;
	unk.f_1.f_1.f_16.f_3 = 7;
	unk.f_1.f_1.f_16.f_11 = 2;
	unk.f_1.f_1.f_16.f_16.f_1 = -1;
	unk.f_1.f_1.f_16.f_16.f_2 = -1;
	unk.f_1.f_1.f_16.f_16.f_3 = 7;
	unk.f_1.f_1.f_16.f_16.f_11 = 2;
	unk.f_1.f_1.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_1.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_1.f_16.f_16.f_16.f_3 = 7;
	unk.f_1.f_1.f_16.f_16.f_16.f_11 = 2;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_3 = 7;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_11 = 2;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	unk.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	*uParam0 = { unk };

	for (j = 0; j < 10; j = j + 1)
	{
		for (i = 0; i <= 6; i = i + 1)
		{
			uParam0->f_1[j /*16*/].f_3[i] = 255;
		}
	}

	return;
}

void func_765(var uParam0) // Position - 0x14A15
{
	var unk;

	unk.f_4 = 5;
	unk.f_19 = 255;
	*uParam0 = { unk };
	return;
}

void func_766(var uParam0) // Position - 0x14A39
{
	var unk;

	unk.f_3 = -1;
	unk.f_3.f_1 = -1;
	unk.f_5 = 4;
	unk.f_5.f_1.f_1 = -1;
	unk.f_5.f_1.f_3.f_1 = -1;
	unk.f_5.f_1.f_3.f_3.f_1 = -1;
	unk.f_5.f_1.f_3.f_3.f_3.f_1 = -1;
	*uParam0 = { unk };
	return;
}

void func_767(var uParam0) // Position - 0x14A88
{
	var unk;

	unk.f_1 = -1;
	unk.f_2 = 255;
	*uParam0 = { unk };
	return;
}

void func_768(var uParam0) // Position - 0x14AA8
{
	var unk;

	*uParam0 = unk;
	return;
}

void func_769(var uParam0) // Position - 0x14AB5
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_2.f_1 = -1;
	unk.f_2.f_1.f_1 = -1;
	unk.f_2.f_3 = -1;
	unk.f_6 = -1;
	*uParam0 = { unk };
	return;
}

void func_770(Any* panParam0) // Position - 0x14AF6
{
	var unk;
	int i;

	unk = -1;
	unk.f_1 = -1;

	for (i = 0; i <= 31; i = i + 1)
	{
		panParam0->[i /*2*/] = { unk };
	}

	return;
}

void func_771(var uParam0) // Position - 0x14B2A
{
	var unk;

	unk = 32;
	unk.f_1 = 255;
	unk.f_1.f_2 = 255;
	unk.f_1.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	unk.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	*uParam0 = { unk };
	return;
}

int func_772(int iParam0) // Position - 0x14C28
{
	return iParam0 * 31;
}

int func_773(int iParam0) // Position - 0x14C34
{
	return func_772(iParam0) + 30;
}

int func_774(int iParam0, int iParam1) // Position - 0x14C44
{
	switch (iParam0)
	{
		case 0:
			return -1;
	
		case 1:
			return 0;
	
		case 2:
			return 473295046;
	
		case 3:
			return -1738165526;
	
		case 4:
			return -699277634;
	
		case 5:
			return 1497516462;
	
		case 6:
			return 2016141805;
	
		case 7:
			return 1010885152;
	
		case 8:
			return -502324015;
	
		case 9:
			return 1607768502;
	
		case 10:
			return -1852605133;
	
		case 11:
			return -129643890;
	
		case 12:
			return -1433686245;
	
		case 13:
			return -1711895055;
	
		case 14:
			return 192515737;
	
		case 15:
			return 426191476;
	
		case 16:
			return 187862543;
	
		case 17:
			return 417081698;
	
		case 18:
			return 791041526;
	
		case 19:
			return 965986934;
	
		case 20:
			return 1350371763;
	
		case 21:
			return -1257057567;
	
		case 22:
			return -1419919497;
	
		case 23:
			return -1718674470;
	
		case 24:
			return -35658630;
	
		case 25:
			return -2069570138;
	
		case 26:
			return -1838712533;
	
		case 27:
			return 1140218954;
	
		case 28:
			return -108307814;
	
		case 29:
			return -1123615607;
	
		case 30:
			return -261141318;
	
		case 31:
			return 440043364;
	
		case 32:
			return -1425209566;
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

BOOL func_775(int iParam0) // Position - 0x16A27
{
	if (iParam0 == joaat("WS_MP_HIDEOUT_CLEMENS_COVE"))
		return true;

	return false;
}

BOOL func_776(int iParam0) // Position - 0x16A3E
{
	int num;
	int num2;
	int offset;

	num = func_1001(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (func_686(num2))
	{
		if (Global_1072759.f_19585.f_24 && !func_775(iParam0))
			return false;
	
		return MISC::IS_BIT_SET(Global_1072759.f_19585[num2], offset) || MISC::IS_BIT_SET(Global_38.f_118[num2], offset);
	}

	return MISC::IS_BIT_SET(Global_38.f_118[num2], offset);
}

BOOL func_777(float fParam0, float fParam1, float fParam2, float fParam3) // Position - 0x16ABD
{
	return BUILTIN::VDIST(Global_34, fParam0) < fParam3;
}

BOOL func_778(Hash hParam0, int iParam1, int iParam2) // Position - 0x16AD5
{
	Vector3 position;
	float radius;
	float num;

	if (!STREAMING::IS_IPL_ACTIVE_HASH(hParam0))
		return true;

	if (!STREAMING::_GET_IPL_BOUNDING_SPHERE(hParam0, &position, &radius))
		return false;

	num = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_33, true, false), position);

	if (num <= iParam1)
		return false;

	if (num > iParam2)
		return true;

	if (CAM::IS_SPHERE_VISIBLE(position, radius))
		return false;

	return true;
}

BOOL func_779() // Position - 0x16B3A
{
	Interior interiorFromEntity;

	if (ENTITY::DOES_ENTITY_EXIST(Global_33) && !ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		interiorFromEntity = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_33);
	
		if (interiorFromEntity != 0 && INTERIOR::_GET_INTERIOR_MINIMAP_HASH(interiorFromEntity) == joaat("bea_01_int"))
			return true;
	}

	return false;
}

Hash func_780(int iParam0) // Position - 0x16B7F
{
	switch (iParam0)
	{
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_01"):
			return 696753474;
	
		case -2141419899:
			return 87946549;
	
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_02"):
			return 1106131202;
	
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_04"):
			return 806606916;
	
		case -1939389836:
			return 1916363327;
	
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_04"):
			return -270131786;
	
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_03"):
			return 1657354548;
	
		case joaat("WS_MP_TREASURE_MAP_INTRO_VALENTINE_02"):
			return 1497923922;
	
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_03"):
			return -199228359;
	
		case joaat("WS_MP_TREASURE_MAP_INTRO_RHODES_03"):
			return 879263546;
	
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_04"):
			return -590242693;
	
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_02"):
			return -1954638951;
	
		case -1808329564:
			return -864071044;
	
		case -1753769127:
			return -1423344014;
	
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_03"):
			return 474786474;
	
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_04"):
			return -894288155;
	
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_03"):
			return 2001473838;
	
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_01"):
			return 1303507358;
	
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_02"):
			return -476328287;
	
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_03"):
			return -394475958;
	
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_02"):
			return -1939338394;
	
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_02"):
			return 908136834;
	
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_02"):
			return 1364667248;
	
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_03"):
			return -1871896679;
	
		case -1556041029:
			return -751879320;
	
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_02"):
			return -387074757;
	
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_03"):
			return 54505570;
	
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_02"):
			return -2144326250;
	
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_04"):
			return 1277031798;
	
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_01"):
			return 2137579614;
	
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_04"):
			return 1307857318;
	
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_02"):
			return 1812712970;
	
		case -1387772214:
			return 42616763;
	
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_03"):
			return -1815797865;
	
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_03"):
			return -860360254;
	
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_04"):
			return 1673216541;
	
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_04"):
			return -378666035;
	
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_01"):
			return -657334314;
	
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_02"):
			return -583431154;
	
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_03"):
			return 120604643;
	
		case -1181950077:
			return -1862782800;
	
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_03"):
			return -1279448947;
	
		case -1095341658:
			return -948864541;
	
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_03"):
			return 2127497940;
	
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_04"):
			return -1818498296;
	
		case -947815572:
			return 1437809535;
	
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_03"):
			return -216811017;
	
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_04"):
			return -1819679999;
	
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_04"):
			return 1551178888;
	
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_01"):
			return 30280292;
	
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_04"):
			return -1643311717;
	
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_03"):
			return 999671710;
	
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_01"):
			return 1199250380;
	
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_02"):
			return -1645569664;
	
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_02"):
			return 834697453;
	
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_02"):
			return -25254585;
	
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_04"):
			return -1431123016;
	
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_02"):
			return 1303859698;
	
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_03"):
			return -1428524966;
	
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_02"):
			return -1211924901;
	
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_04"):
			return -1754697240;
	
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_03"):
			return -2122265662;
	
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_02"):
			return -1774606389;
	
		case -489737721:
			return 1748373207;
	
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_03"):
			return 1419259602;
	
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_03"):
			return -1058872649;
	
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_03"):
			return 2088585697;
	
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_01"):
			return 242017654;
	
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_03"):
			return 405359977;
	
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_01"):
			return -1765524972;
	
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_01"):
			return -536919806;
	
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_02"):
			return 584821987;
	
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_04"):
			return -510114122;
	
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_02"):
			return -313167137;
	
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_02"):
			return 120283199;
	
		case -102827640:
			return -736226816;
	
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_02"):
			return 1216579993;
	
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_02"):
			return 11141848;
	
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_02"):
			return -519371139;
	
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_04"):
			return -14824697;
	
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_04"):
			return -2001856298;
	
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_04"):
			return 1991561012;
	
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_03"):
			return -2025289364;
	
		case 16844748:
			return 104172940;
	
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_01"):
			return 1292550073;
	
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_01"):
			return -1244697162;
	
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_01"):
			return -1353663029;
	
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_01"):
			return 1857676106;
	
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_01"):
			return -46828581;
	
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_04"):
			return 568859874;
	
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_03"):
			return -284530484;
	
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_03"):
			return 574916087;
	
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_01"):
			return 1951742298;
	
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_03"):
			return -1508001532;
	
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_03"):
			return 1673463331;
	
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_02"):
			return 1628921491;
	
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_02"):
			return -233702408;
	
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_04"):
			return 536560689;
	
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_02"):
			return 1098358070;
	
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_01"):
			return 1117275649;
	
		case 831940854:
			return -2054468361;
	
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_02"):
			return -946682429;
	
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_02"):
			return -1858229297;
	
		case 943561238:
			return 1532789536;
	
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_02"):
			return 1665904081;
	
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_01"):
			return -1279389329;
	
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_01"):
			return 743168245;
	
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_01"):
			return -1623539657;
	
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_03"):
			return 67603480;
	
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_01"):
			return -1448418975;
	
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_04"):
			return 492662035;
	
		case 1248935549:
			return 815958096;
	
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_04"):
			return 1793712122;
	
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_01"):
			return 1108419054;
	
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_04"):
			return -1051551519;
	
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_01"):
			return 353008762;
	
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_04"):
			return -1358954864;
	
		case 1421300489:
			return 1083754485;
	
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_01"):
			return -847027479;
	
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_01"):
			return -2145807603;
	
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_03"):
			return -680105331;
	
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_01"):
			return 616635225;
	
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_04"):
			return 1283630779;
	
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_02"):
			return -973153750;
	
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_04"):
			return -2143372379;
	
		case joaat("WS_MP_TREASURE_MAP_INTRO_TUMBLEWEED_01"):
			return 1093030199;
	
		case joaat("WS_MP_TREASURE_MAP_INTRO_BLACKWATER_01"):
			return 1779169712;
	
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_04"):
			return -252982535;
	
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_04"):
			return -409479737;
	
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_01"):
			return 1425800019;
	
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_03"):
			return 1096335200;
	
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_01"):
			return 1803637785;
	
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_04"):
			return 1510796294;
	
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_03"):
			return 131702782;
	
		default:
		
	}

	return -1554566073;
}

Vector3 func_781(int iParam0) // Position - 0x172E7
{
	switch (iParam0)
	{
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_01"):
			return -329.744f, -151.659f, 50.562f;
	
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_01"):
			return -1519.495f, 740.865f, 124.87f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

int func_782(int iParam0) // Position - 0x1732A
{
	switch (iParam0)
	{
		case 0:
			return joaat("rel_player_0");
	
		case 1:
			return joaat("rel_player_1");
	
		case 2:
			return joaat("rel_player_2");
	
		case 3:
			return joaat("rel_player_3");
	
		case 4:
			return joaat("rel_player_4");
	
		case 5:
			return joaat("rel_player_5");
	
		case 6:
			return joaat("rel_player_6");
	
		case 7:
			return joaat("rel_player_7");
	
		case 8:
			return joaat("rel_player_8");
	
		case 9:
			return joaat("rel_player_9");
	
		case 10:
			return joaat("rel_player_10");
	
		case 11:
			return joaat("rel_player_11");
	
		case 12:
			return joaat("rel_player_12");
	
		case 13:
			return joaat("rel_player_13");
	
		case 14:
			return joaat("rel_player_14");
	
		case 15:
			return joaat("rel_player_15");
	
		case 16:
			return joaat("rel_player_16");
	
		case 17:
			return joaat("rel_player_17");
	
		case 18:
			return joaat("rel_player_18");
	
		case 19:
			return joaat("rel_player_19");
	
		case 20:
			return joaat("rel_player_20");
	
		case 21:
			return joaat("rel_player_21");
	
		case 22:
			return joaat("rel_player_22");
	
		case 23:
			return joaat("rel_player_23");
	
		case 24:
			return joaat("rel_player_24");
	
		case 25:
			return joaat("rel_player_25");
	
		case 26:
			return joaat("rel_player_26");
	
		case 27:
			return joaat("rel_player_27");
	
		case 28:
			return joaat("rel_player_28");
	
		case 29:
			return joaat("rel_player_29");
	
		case 30:
			return joaat("rel_player_30");
	
		case 31:
			return joaat("rel_player_31");
	
		default:
		
	}

	return joaat("REL_NO_RELATIONSHIP");
}

BOOL func_783(int iParam0) // Position - 0x174FF
{
	return func_804(iParam0, 2);
}

BOOL func_784() // Position - 0x1750E
{
	return func_791() == 4;
}

BOOL func_785() // Position - 0x1751C
{
	return !func_90(2);
}

BOOL func_786() // Position - 0x1752A
{
	int num;

	num = func_1002(PLAYER::PLAYER_ID());

	if (num != -1)
		if (Global_1141332[num /*27*/].f_18.f_1 != 0 && func_243(Global_1141332[num /*27*/].f_18, 1))
			return true;

	return false;
}

void func_787(int iParam0, int iParam1) // Position - 0x1756C
{
	func_1003(iParam0, iParam1);
	return;
}

int func_788(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5, int iParam6) // Position - 0x1757C
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

void func_789(int iParam0) // Position - 0x175C4
{
	Global_1102813.f_26.f_12 = iParam0;
	return;
}

BOOL func_790(int iParam0) // Position - 0x175D6
{
	return Global_1102813.f_4[Global_1106895[iParam0 /*2*/]] && Global_1106895[iParam0 /*2*/].f_1 == Global_1106895[iParam0 /*2*/].f_1;
}

int func_791() // Position - 0x17604
{
	if (Global_1102813 <= 5)
		return Global_1102813;

	if (Global_1102813 <= 22)
		return 4;

	if (Global_1102813 <= 25)
		return 3;

	return 26;
}

void func_792(BOOL bParam0) // Position - 0x17637
{
	if (func_1004(bParam0))
		return;

	Global_1102813.f_26.f_9 = Global_1102813.f_26.f_9 || bParam0;
	return;
}

void func_793(Hash hParam0) // Position - 0x1765E
{
	if (STREAMING::IS_IPL_ACTIVE_HASH(hParam0))
		func_501(hParam0);

	return;
}

void func_794(Hash hParam0) // Position - 0x17676
{
	if (GRAPHICS::_IS_STATIC_VEG_MODIFIER_ENABLED(hParam0))
		GRAPHICS::_DISABLE_STATIC_VEG_MODIFIER(hParam0);

	return;
}

char* func_795(int iParam0) // Position - 0x1768D
{
	if (iParam0 == 2)
		return "dewclm";

	if (iParam0 == 4)
		return "gua";

	return func_494(&(Global_1887363[func_537(iParam0) /*36*/].f_23));
}

char* func_796(int iParam0) // Position - 0x176C1
{
	switch (iParam0)
	{
		case 0:
			return "setup";
	
		case 1:
			return "running";
	
		case 2:
			if (PATHFIND::_NAVMESH_IS_SWAP_ACTIVE("bvh_nav_camp_teardown"))
				PATHFIND::_NAVMESH_DEACTIVATE_SWAP("bvh_nav_camp_teardown");
		
			if (PATHFIND::_NAVMESH_IS_SWAP_ACTIVE("bvh_nav_camp_finale1"))
				PATHFIND::_NAVMESH_DEACTIVATE_SWAP("bvh_nav_camp_finale1");
		
			return "teardown";
	}

	return "";
}

void func_797(int iParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x17727
{
	var scenarioGroupName;
	var scenarioGroupName2;

	TEXT_LABEL_COPY(&scenarioGroupName, { Global_1887363[iParam0 /*36*/].f_23 }, 8);
	TEXT_LABEL_APPEND_STRING(&scenarioGroupName, "_", 64);
	TEXT_LABEL_APPEND_STRING(&scenarioGroupName, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(iParam1), 64);
	TEXT_LABEL_APPEND_STRING(&scenarioGroupName, "_", 64);
	TEXT_LABEL_APPEND_STRING(&scenarioGroupName, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(iParam2), 64);
	scenarioGroupName2 = { scenarioGroupName };
	TEXT_LABEL_APPEND_STRING(&scenarioGroupName2, "_setup", 64);

	if (TASK::DOES_SCENARIO_GROUP_EXIST(&scenarioGroupName2))
		TASK::SET_SCENARIO_GROUP_ENABLED(&scenarioGroupName2, bParam4);
	else if (bParam4)
		bParam3 = true;

	if (TASK::DOES_SCENARIO_GROUP_EXIST(&scenarioGroupName))
		TASK::SET_SCENARIO_GROUP_ENABLED(&scenarioGroupName, bParam3);

	return;
}

var func_798(BOOL bParam0, var uParam1, var uParam2) // Position - 0x177A2
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_799(var uParam0, var uParam1, var uParam2) // Position - 0x177B9
{
	float num;

	*uParam0 = (171 * *uParam0) % 30269;
	*uParam1 = (172 * *uParam1) % 30307;
	*uParam2 = (170 * *uParam2) % 30323;
	num = (BUILTIN::TO_FLOAT(*uParam0) / 30269f) + (BUILTIN::TO_FLOAT(*uParam1) / 30307f) + (BUILTIN::TO_FLOAT(*uParam2) / 30323f);
	*uParam0 = 0 == *uParam0 ? 171 : *uParam0;
	*uParam1 = 0 == *uParam1 ? 172 : *uParam1;
	*uParam2 = 0 == *uParam2 ? 170 : *uParam2;
	return BUILTIN::ROUND(1000f * num);
}

float func_800(Player plParam0, BOOL bParam1) // Position - 0x17852
{
	Player player;

	if (!Global_1149432.f_5568)
		return 0f;

	if (plParam0 == Global_1295666.f_149[Global_1295666])
		return Global_17418.f_2641;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return 0f;

	player = plParam0;

	if (player < 0 || player >= 32)
		return 0f;

	if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(plParam0)) > 1 && bParam1 && Global_1101558[player /*38*/].f_18 >= Global_1101558[player /*38*/].f_30)
		return Global_1101558[player /*38*/].f_18;

	return Global_1101558[player /*38*/].f_30;
}

BOOL func_801(Player plParam0) // Position - 0x178F2
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), plParam0))
		return true;

	return false;
}

void func_802(Player plParam0) // Position - 0x1790F
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (!Global_1295666.f_17[player])
	{
		func_1007(plParam0);
		return;
	}

	if (Global_1072759.f_21353.f_1[player /*8*/] == 1)
		return;

	func_1008(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 1);
	Global_1072759.f_21353.f_1[player /*8*/] = 1;
	return;
}

void func_803(Hash hParam0) // Position - 0x17992
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(hParam0))
		return;

	DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(Global_1940252.f_245.f_5, hParam0);
	func_1009(hParam0);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(hParam0);
	func_1010(Global_1940252.f_245.f_1306 - 1);
	return;
}

BOOL func_804(int iParam0, int iParam1) // Position - 0x179D0
{
	if (iParam0 < 0)
		return false;

	return Global_1951910[iParam0 /*23*/].f_1 && iParam1 != false;
}

void func_805(int iParam0, Hash hParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, Volume volParam10, Volume volParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0x179F1
{
	Prompt prompt;

	Global_1951910[iParam0 /*23*/].f_4 = hParam1;
	Global_1951910[iParam0 /*23*/] = iParam4;
	Global_1951910[iParam0 /*23*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1951910[iParam0 /*23*/].f_2 = iParam5;
	Global_1951910[iParam0 /*23*/].f_6 = { fParam6 };
	Global_1951910[iParam0 /*23*/].f_9 = fParam9;
	Global_1951910[iParam0 /*23*/].f_10 = volParam10;
	Global_1951910[iParam0 /*23*/].f_11 = volParam11;
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
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, volParam11);
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
	func_1011(iParam0, true);
	func_1012(iParam0, true);
	func_1013(iParam0, 128);
	return;
}

BOOL func_806(int iParam0) // Position - 0x17D0B
{
	return Global_1296390.f_1 && iParam0 != false;
}

BOOL func_807() // Position - 0x17D1E
{
	return Global_1048577;
}

BOOL func_808(int iParam0) // Position - 0x17D2A
{
	int num;
	int num2;
	int num3;
	var statId;

	num = Global_1295666.f_16;
	num2 = func_639(iParam0);
	statId = { func_640(iParam0) };
	STATS::STAT_ID_GET_INT(&statId, &num3);

	if (num3 == 0 || num3 + num2 > num)
		return true;

	return false;
}

void func_809(int iParam0) // Position - 0x17D6F
{
	Global_1296390.f_1 = Global_1296390.f_1 - Global_1296390.f_1 && iParam0;
	return;
}

void func_810(Any* panParam0) // Position - 0x17D8D
{
	MISC::COPY_SCRIPT_STRUCT(panParam0, &(Global_1296390.f_50.f_5), 3);
	return;
}

BOOL func_811(int iParam0) // Position - 0x17DA4
{
	return func_1014(iParam0);
}

int func_812(Any anParam0, int iParam1) // Position - 0x17DB2
{
	anParam0->f_2 = iParam1;
	return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(anParam0);
}

 func_813(int iParam0, int iParam1) // Position - 0x17DC6
{
	var unk;

	if (!func_650(&unk))
		return 0;

	if (!func_651(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 16, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 43, iParam0, 0, 1))
		return 0;

	if (!func_651(&unk, 44, iParam1, 0, 1))
		return 0;

	return func_1015(&unk);
}

int func_814(Hash hParam0) // Position - 0x17E30
{
	int i;

	for (i = 0; i < Global_265213.f_2; i = i + 1)
	{
		if (Global_265213.f_57505[i /*8*/] != hParam0 && Global_265213.f_4[i /*46*/].f_23 != hParam0)
		{
		}
		else
		{
			return i;
		}
	}

	return -1;
}

Hash func_815(int iParam0, int iParam1, int iParam2) // Position - 0x17E7F
{
	var unk;

	if (!func_650(&unk))
		return 0;

	if (!func_651(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 17, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 19, iParam0, 0, 1))
		return 0;

	if (!func_651(&unk, 20, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 23, iParam1, 0, 1))
		return 0;

	if (!func_651(&unk, 65, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 66, iParam2, 0, 1))
		return 0;

	return func_1016(&unk);
}

Hash func_816(Hash hParam0, BOOL bParam1) // Position - 0x17F23
{
	Hash hash;

	if (!func_728(hParam0, 0))
		return 0;

	hash = func_1017(hParam0, bParam1);

	if (hash != 0)
		return hash;

	return hParam0;
}

const char* func_817(var uParam0, int iParam1) // Position - 0x17F51
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "LITERAL_STRING", uParam0);

	return func_1018(MISC::VAR_STRING(10, "LITERAL_STRING", uParam0), iParam1);
}

int func_818() // Position - 0x17F87
{
	return BUILTIN::FLOOR(func_1020(2f, BUILTIN::TO_FLOAT(func_1019() - 1))) + 1;
}

int func_819(var uParam0, int iParam1, BOOL bParam2) // Position - 0x17FA4
{
	int num;
	int num2;

	num = bParam2 ? 1 : 0;
	num2 = func_1021(uParam0, iParam1);

	if (num2 == 0)
		return 0;

	return BUILTIN::FLOOR(func_1020(2f, BUILTIN::TO_FLOAT(num2 - 1))) + num + 1;
}

BOOL func_820(var uParam0, int iParam1, var uParam2) // Position - 0x17FE0
{
	int value;
	int num;
	int num2;
	int num3;

	value = func_819(uParam0, iParam1, true) - 1;
	num3 = func_1022(uParam0, iParam1);
	num = func_1023(iParam1, uParam2);

	if (num == -1 || num > num3)
	{
		num = 0;
		num2 = 0;
	}
	else
	{
		num2 = BUILTIN::FLOOR(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(value)));
	}

	return num || num2;
}

int func_821(Any* panParam0) // Position - 0x1803C
{
	return func_855(panParam0, 79, 1);
}

struct<4> func_822(int iParam0) // Position - 0x1804D
{
	var unk;
	var unk6;
	var unk10;

	if (!func_650(&unk))
		return unk10;

	if (!func_651(&unk, 13, 0, 0, 1))
		return unk10;

	if (!func_651(&unk, 14, 0, 0, 1))
		return unk10;

	if (!func_651(&unk, 40, iParam0, 0, 1))
		return unk10;

	unk6.f_3 = iParam0;
	unk6 = func_1024(&unk);
	func_1025(unk, &unk6);
	return unk6;
}

BOOL func_823(var uParam0, BOOL bParam1) // Position - 0x180C5
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk.f_3 = -1;
	unk.f_3.f_1 = -1;
	unk.f_3.f_2 = -1;
	unk.f_3.f_4 = -1;
	unk.f_3.f_5 = -1;
	unk.f_9 = -1;
	unk.f_3 = { func_645(bParam1) };

	if (uParam0->f_1 & -2147483648 != 0)
		return false;

	if (uParam0->f_1 & 2 != 0)
		if (func_318() != 0)
			return false;

	if (uParam0->f_1 & 1 != 0)
		if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(*uParam0))
			return false;

	if (uParam0->f_1 & 4 != 0)
	{
		if (unk.f_3 == -1 || unk.f_3.f_1 == -1)
			return false;
	
		if (!func_336(8))
			return false;
	}

	if (uParam0->f_1 & 8 != 0)
	{
		if (unk.f_3 == -1 || unk.f_3.f_1 == -1)
			return false;
	
		if (!func_617(unk.f_3, unk.f_3.f_1, unk.f_3.f_2, 0))
			return false;
	}

	return true;
}

int func_824() // Position - 0x181C7
{
	int i;
	var unk;

	for (i = 0; i <= 4; i = i + 1)
	{
		func_611(i, &unk);
	
		if (!func_612(&unk))
			return i;
	}

	return -1;
}

BOOL func_825(int iParam0, Any anParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x181F9
{
	var unk;
	var unk13;

	unk.f_1 = 10;
	unk13.f_1 = 11;
	return func_983(iParam0, anParam1, &unk13, &unk, iParam2, iParam3, iParam4, bParam5);
}

void func_826(int iParam0, Any* panParam1, BOOL bParam2, var uParam3) // Position - 0x18229
{
	func_1026(iParam0, panParam1);
	func_1027(iParam0, bParam2);
	func_1028(iParam0, uParam3);
	return;
}

struct<7> func_827(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x18249
{
	int num;

	num = func_1029(&uParam0);
	num.f_1 = func_1030(&uParam0);

	switch (num)
	{
		case joaat("server"):
			num.f_2 = func_1031(&uParam0);
			break;
	
		default:
			num.f_2 = func_1032(&uParam0);
			break;
	}

	num.f_6 = func_1033(&uParam0, num == joaat("Stat"));
	func_1034(uParam0, &num);
	return num;
}

BOOL func_828(var uParam0, int iParam1) // Position - 0x182AB
{
	Hash hash;
	Any any;
	var unk;
	var unk3;

	if (!func_1035(iParam1, uParam0->f_3))
		return true;

	switch (*uParam0)
	{
		case joaat("UNLOCK"):
			hash = uParam0->f_1;
			return func_1036(hash, uParam0->f_2);
	
		case joaat("server"):
			if (!BOUNTY::BOUNTY_GET_LEGENDARY_TARGET(uParam0->f_1, &unk))
				return false;
		
			return unk.f_1 >= uParam0->f_2;
	
		case joaat("AWARD"):
		case 1204986881:
			any = uParam0->f_1;
			return func_1037(any, uParam0->f_2);
	
		case joaat("Stat"):
			if (!STATS::STAT_ID_IS_VALID(&(uParam0->f_4)))
				return false;
		
			STATS::STAT_ID_GET_INT(&(uParam0->f_4), &unk3);
		
			switch (uParam0->f_2)
			{
				case -1750328213:
					return unk3 <= uParam0->f_6;
			
				case -1485982111:
					return unk3 == uParam0->f_6;
			
				case joaat("greater_than"):
					return unk3 > uParam0->f_6;
			
				case -555488925:
					return unk3 >= uParam0->f_6;
			
				case joaat("less_than"):
					return unk3 < uParam0->f_6;
			
				case 1920326201:
					return unk3 != uParam0->f_6;
			
				default:
				
			}
			break;
	
		default:
			break;
	}

	return false;
}

BOOL func_829(Any* panParam0, int iParam1, int iParam2) // Position - 0x183C8
{
	if (!func_650(panParam0))
		return false;

	if (!func_651(panParam0, 13, 0, 0, 1))
		return false;

	if (!func_651(panParam0, 17, 0, 0, 1))
		return false;

	if (!func_651(panParam0, 19, iParam1, 0, 1))
		return false;

	if (!func_651(panParam0, 13, 0, 0, 0))
		return false;

	if (!func_651(panParam0, 47, iParam2, 0, 1))
		return false;

	return true;
}

int func_830(Any* panParam0) // Position - 0x18440
{
	return func_1038(panParam0, 83, true);
}

int func_831(Any* panParam0, int iParam1) // Position - 0x18451
{
	return func_855(panParam0, 93, iParam1);
}

Hash func_832(Any* panParam0) // Position - 0x18463
{
	return func_855(panParam0, 75, 1);
}

int func_833(int iParam0, int iParam1) // Position - 0x18474
{
	return Global_1296390.f_83[iParam0 /*17*/].f_1[iParam1];
}

BOOL func_834(BOOL bParam0) // Position - 0x1848C
{
	BOOL flag;
	int num;
	BOOL value;

	num = func_818();
	value = bParam0;
	value = BUILTIN::SHIFT_RIGHT(value, 32 - num);
	flag = func_1039();
	value = value && flag;
	return value;
}

void func_835(int iParam0, int iParam1, var uParam2, BOOL bParam3) // Position - 0x184BA
{
	int offset;
	BOOL flag;

	offset = func_819(iParam0, iParam1, false);
	flag = func_1022(iParam0, iParam1);

	if (MISC::IS_BIT_SET(bParam3, offset))
		bParam3 = bParam3 && flag;
	else
		bParam3 = -1;

	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					uParam2->f_2 = bParam3;
					break;
			
				case 1:
					uParam2->f_4 = bParam3;
					break;
			
				case 2:
					uParam2->f_5 = bParam3;
					break;
			
				case 3:
					uParam2->f_1 = bParam3;
					break;
			
				case 4:
					*uParam2 = bParam3;
					break;
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					uParam2->f_2 = bParam3;
					break;
			
				case 1:
					uParam2->f_4 = bParam3;
					break;
			
				case 2:
					uParam2->f_5 = bParam3;
					break;
			
				case 3:
					uParam2->f_1 = bParam3;
					break;
			
				case 4:
					*uParam2 = bParam3;
					break;
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					uParam2->f_2 = bParam3;
					break;
			
				case 1:
					uParam2->f_4 = bParam3;
					break;
			
				case 2:
					uParam2->f_5 = bParam3;
					break;
			
				case 3:
					uParam2->f_1 = bParam3;
					break;
			
				case 4:
					*uParam2 = bParam3;
					break;
			}
			break;
	
		default:
			break;
	}

	return;
}

int func_836(Any* panParam0) // Position - 0x18611
{
	return func_855(panParam0, 67, 1);
}

int func_837(int iParam0, Any* panParam1, int iParam2) // Position - 0x18622
{
	int num;
	int num2;
	int num3;

	num = 0;
	num2 = iParam2 - 1;

	while (num <= num2)
	{
		num3 = num + ((num2 - num) / 2);
	
		if (panParam1->[num3 /*3*/] > iParam0)
			num2 = num3 - 1;
		else if (panParam1->[num3 /*3*/] < iParam0)
			num = num3 + 1;
		else
			return num3;
	}

	return -1;
}

struct<2> func_838() // Position - 0x18677
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	return unk;
}

void func_839(int iParam0, var uParam1) // Position - 0x18690
{
	Global_1296390.f_58.f_4[iParam0 /*10*/].f_3.f_2 = uParam1;
	return;
}

void func_840(int iParam0, var uParam1) // Position - 0x186AA
{
	Global_1296390.f_58.f_4[iParam0 /*10*/].f_3.f_4 = uParam1;
	return;
}

void func_841(int iParam0, var uParam1) // Position - 0x186C4
{
	Global_1296390.f_58.f_4[iParam0 /*10*/].f_3.f_5 = uParam1;
	return;
}

void func_842(int iParam0, var uParam1) // Position - 0x186DE
{
	Global_1296390.f_58.f_4[iParam0 /*10*/].f_3 = uParam1;
	return;
}

void func_843(int iParam0, var uParam1) // Position - 0x186F6
{
	Global_1296390.f_58.f_4[iParam0 /*10*/].f_3.f_1 = uParam1;
	return;
}

void func_844(int iParam0, var uParam1, var uParam2) // Position - 0x18710
{
	Global_1296390.f_58.f_4[iParam0 /*10*/] = { uParam1 };
	return;
}

void func_845(int iParam0, var uParam1) // Position - 0x1872A
{
	Global_1296390.f_58.f_4[iParam0 /*10*/].f_2 = uParam1;
	return;
}

void func_846(int iParam0, var uParam1) // Position - 0x18742
{
	Global_1296390.f_58.f_4[iParam0 /*10*/].f_9 = uParam1;
	return;
}

int func_847(int iParam0, int iParam1, int iParam2) // Position - 0x1875A
{
	var unk;

	if (!func_650(&unk))
		return 0;

	if (!func_651(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 17, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 19, iParam0, 0, 1))
		return 0;

	if (!func_651(&unk, 20, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 23, iParam1, 0, 1))
		return 0;

	if (!func_651(&unk, 24, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 25, iParam2, 0, 1))
		return 0;

	if (!func_651(&unk, 48, 0, 0, 0))
		return 0;

	return func_812(&unk, 10);
}

struct<6> func_848(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10) // Position - 0x18813
{
	var unk;
	var unk6;
	int num;

	if (!func_650(&unk))
		return unk6;

	if (!func_651(&unk, 13, 0, 0, 1))
		return unk6;

	if (!func_651(&unk, 17, 0, 0, 1))
		return unk6;

	if (!func_651(&unk, 19, uParam0.f_3, 0, 1))
		return unk6;

	if (!func_651(&unk, 20, 0, 0, 1))
		return unk6;

	if (!func_651(&unk, 23, uParam0.f_3.f_1, 0, 1))
		return unk6;

	if (!func_651(&unk, 24, 0, 0, 1))
		return unk6;

	if (!func_651(&unk, 25, uParam0.f_3.f_2, 0, 1))
		return unk6;

	if (!func_651(&unk, 48, 0, 0, 0))
		return unk6;

	if (!func_651(&unk, 49, iParam10, 0, 1))
		return unk6;

	num = func_1040(&unk);
	return func_1041(num);
}

void func_849(var uParam0, BOOL bParam1) // Position - 0x1890E
{
	if (!func_1042(uParam0, bParam1))
		return;

	switch (uParam0->f_3)
	{
		case joaat("int"):
			if (STATS::CHAL_IS_GOAL_ACTIVE(uParam0->f_1, uParam0->f_2))
				STATS::CHAL_ADD_GOAL_PROGRESS_INT(uParam0->f_1, uParam0->f_2, uParam0->f_4);
			break;
	
		default:
			break;
	}

	return;
}

int func_850(int iParam0, int iParam1, int iParam2) // Position - 0x1895D
{
	var unk;

	if (!func_650(&unk))
		return 0;

	if (!func_651(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 17, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 19, iParam0, 0, 1))
		return 0;

	if (!func_651(&unk, 20, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 23, iParam1, 0, 1))
		return 0;

	if (!func_651(&unk, 24, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 25, iParam2, 0, 1))
		return 0;

	if (!func_651(&unk, 61, 0, 0, 0))
		return 0;

	return func_812(&unk, 12);
}

struct<5> func_851(var uParam0, int iParam1) // Position - 0x18A16
{
	var unk;
	int num;
	int num2;
	var unk10;
	int num3;
	Hash hash;
	var unk11;

	if (!func_650(&unk))
		return num;

	if (!func_651(&unk, 13, 0, 0, 1))
		return num;

	unk11 = unk.f_1;

	if (!func_651(&unk, 17, 0, 0, 1))
		return num;

	if (!func_651(&unk, 19, uParam0->f_3, 0, 1))
		return num;

	num2 = func_831(&unk, 1);

	if (!func_651(&unk, 20, 0, 0, 1))
		return num;

	if (!func_651(&unk, 23, uParam0->f_3.f_1, 0, 1))
		return num;

	hash = func_832(&unk);

	if (!func_651(&unk, 24, 0, 0, 1))
		return num;

	if (!func_651(&unk, 25, uParam0->f_3.f_2, 0, 1))
		return num;

	if (!func_651(&unk, 61, 0, 0, 1))
		return num;

	if (!func_651(&unk, 62, iParam1, 0, 1))
		return num;

	num3 = func_1043(&unk);
	unk.f_1 = unk11;

	if (!func_651(&unk, 60, 0, 0, 1))
		return num;

	if (!func_651(&unk, 63, num3, 0, 1))
		return num;

	unk10 = func_1044(&unk);
	num = num3;
	num.f_2 = hash;
	num.f_3 = num2;
	num.f_1 = unk10;
	func_1045(unk, &num);
	return num;
}

void func_852(var uParam0, BOOL bParam1) // Position - 0x18B81
{
	int rating;
	var unk;

	if (!func_1046(uParam0, bParam1))
		return;

	unk = -1;
	unk.f_1 = -1;
	unk.f_3 = -1;
	unk.f_3.f_1 = -1;
	unk.f_3.f_2 = -1;
	unk.f_3.f_4 = -1;
	unk.f_3.f_5 = -1;
	unk.f_9 = -1;
	unk.f_3 = { func_645(bParam1) };

	switch (uParam0->f_1)
	{
		case joaat("UNLOCK_REPLAY"):
			MISSIONDATA::MISSIONDATA_SET_REPLAY_LOCKED_FOR_CATEGORY(uParam0->f_3, false);
			break;
	
		case joaat("MARK_AS_FINISHED"):
			MISSIONDATA::MISSIONDATA_WAS_COMPLETED(uParam0->f_2);
		
			switch (unk.f_3.f_2)
			{
				case 0:
					rating = 3;
					break;
			
				case 1:
					rating = 4;
					break;
			
				case 2:
					rating = 5;
					break;
			}
		
			MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(uParam0->f_2, rating);
			break;
	
		default:
			break;
	}

	return;
}

int func_853(int iParam0, int iParam1, int iParam2) // Position - 0x18C46
{
	var unk;

	if (!func_650(&unk))
		return 0;

	if (!func_651(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 17, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 19, iParam0, 0, 1))
		return 0;

	if (!func_651(&unk, 20, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 23, iParam1, 0, 1))
		return 0;

	if (!func_651(&unk, 24, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 25, iParam2, 0, 1))
		return 0;

	if (!func_651(&unk, 38, 0, 0, 1))
		return 0;

	return func_812(&unk, 8);
}

struct<4> func_854(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10) // Position - 0x18CFF
{
	var unk;
	var unk6;
	int num;

	if (!func_650(&unk))
		return unk6;

	if (!func_651(&unk, 13, 0, 0, 1))
		return unk6;

	if (!func_651(&unk, 17, 0, 0, 1))
		return unk6;

	if (!func_651(&unk, 19, uParam0.f_3, 0, 1))
		return unk6;

	if (!func_651(&unk, 20, 0, 0, 1))
		return unk6;

	if (!func_651(&unk, 23, uParam0.f_3.f_1, 0, 1))
		return unk6;

	if (!func_651(&unk, 24, 0, 0, 1))
		return unk6;

	if (!func_651(&unk, 25, uParam0.f_3.f_2, 0, 1))
		return unk6;

	if (!func_651(&unk, 38, 0, 0, 1))
		return unk6;

	if (!func_651(&unk, 39, iParam10, 0, 1))
		return unk6;

	num = func_821(&unk);
	return func_822(num);
}

var func_855(Any* panParam0, int iParam1, int iParam2) // Position - 0x18DFA
{
	var unk;

	panParam0->f_2 = iParam1;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk, panParam0);
	return unk;
}

void func_856(int iParam0) // Position - 0x18E15
{
	Player player;
	int num;
	int num2;

	player = PLAYER::PLAYER_ID();
	num = func_1047(player);

	if (!func_497(num))
		return;

	if (num != iParam0)
	{
		func_1048(iParam0, 7);
		func_1048(iParam0, 8);
	}

	num2 = { func_891(num) };

	switch (func_1049(num))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			if (func_18(num2.f_5))
			{
				if (!func_1050(player, num, 8) && func_930(num, 1))
				{
					func_1051(num2.f_5);
					func_1052(num, 8);
				}
			
				if (func_1053(num2.f_5))
				{
					func_1052(num, 2);
					func_1048(num, 5);
				}
				else if (func_965(num2.f_5))
				{
					func_1052(num, true);
					func_1048(num, 6);
				}
				else
				{
					func_1054(num2);
					func_1052(num, 4);
					func_1048(num, 3);
				}
			}
			else
			{
				func_1048(num, 7);
			}
			break;
	
		case 8:
			if (Global_1110244.f_19)
			{
				if (func_930(num, 4))
				{
				}
				else
				{
					func_864();
				}
			
				func_1055(num);
				func_1056(1);
				func_1056(0);
			}
			else
			{
				func_864();
				func_1055(num);
				func_1056(1);
				func_1056(0);
			}
			break;
	}

	return;
}

void func_857(int iParam0) // Position - 0x18F64
{
	Player player;
	int num;
	int num2;

	player = PLAYER::PLAYER_ID();
	num = func_1047(player);

	if (!func_497(num))
		return;

	num2 = { func_891(iParam0) };

	switch (func_1049(num))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			if (func_18(num2.f_5))
			{
				if (!func_1050(player, iParam0, 8) && func_930(iParam0, 1))
				{
					func_1051(num2.f_5);
					func_1052(iParam0, 8);
				}
			
				if (func_1053(num2.f_5))
				{
					func_1052(iParam0, 2);
					func_1048(iParam0, 5);
				}
				else if (func_965(num2.f_5))
				{
					func_1052(iParam0, true);
					func_1048(iParam0, 6);
				}
				else
				{
					func_1054(num2);
					func_1052(iParam0, 4);
					func_1048(iParam0, 3);
				}
			}
			else
			{
				func_1048(iParam0, 7);
			}
			break;
	
		case 8:
			if (Global_1110244.f_19)
			{
				if (func_930(num, 4))
				{
				}
				else
				{
					func_864();
				}
			
				func_1055(num);
				func_1056(1);
				func_1056(0);
			}
			else
			{
				func_864();
				func_1055(num);
				func_1056(1);
				func_1056(0);
			}
			break;
	}

	return;
}

BOOL func_858(int iParam0, int iParam1) // Position - 0x1909D
{
	return Global_1207480.f_231.f_1066[iParam0 /*17*/].f_6 && iParam1 != false;
}

BOOL func_859() // Position - 0x190B9
{
	if (!Global_1072759.f_3)
		return false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (!NETWORK::NETWORK_IS_IN_SESSION() || func_184())
		return false;

	if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1219595, false))
		return false;

	if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("net_ambient_content_evaluator", -1, true, 0))
		return false;

	return PLAYER::PLAYER_ID() == NETWORK::NETWORK_GET_HOST_OF_THREAD(Global_1219595);
}

void func_860(int iParam0) // Position - 0x19122
{
	Player player;
	var unk;

	player = PLAYER::PLAYER_ID();
	unk = { func_1057(iParam0) };

	if (func_1058(iParam0) <= 0)
	{
		unk = { func_1059(iParam0) };
	
		if (func_18(unk))
		{
			func_1060(iParam0);
			return;
		}
	
		return;
	}

	if (!func_18(unk))
	{
		unk = { func_1059(iParam0) };
	
		if (func_18(unk))
		{
			func_1060(iParam0);
			return;
		}
	}

	if (func_18(unk))
	{
		if (!func_1061(iParam0, player, 0))
		{
			func_1062(iParam0, unk);
			func_1063(iParam0, 0);
		
			if (func_858(iParam0, 256))
				func_1063(iParam0, 1);
		}
	
		if (func_1053(unk))
		{
			if (func_1064(iParam0, 4))
			{
				func_1065(iParam0, false, 0);
				return;
			}
			else if (func_1064(iParam0, 5))
			{
				func_1066(iParam0, 0);
				return;
			}
		}
	}

	switch (func_1067(iParam0))
	{
		case 1:
			break;
	
		case 2:
			if (!func_858(iParam0, 2))
				return;
		
			if (!func_1068(iParam0))
			{
				func_1069(iParam0, 0);
				return;
			}
		
			if (!func_965(unk) && !func_1053(unk))
				if (!func_1061(iParam0, player, 2) && !func_1061(iParam0, player, 3))
					if (func_1064(iParam0, 3) || func_1070(iParam0) == Global_1295666.f_10)
						func_1071(iParam0);
			else if (!func_1064(iParam0, 3) && func_1070(iParam0) != Global_1295666.f_10)
				func_1069(iParam0, 0);
			break;
	
		case 4:
			if (!func_858(iParam0, 2))
			{
				if (func_858(iParam0, 2048))
					func_1072(iParam0);
			
				return;
			}
		
			if (func_965(unk))
			{
				if (func_1064(iParam0, 4))
				{
					func_1073(iParam0, false, true, true);
					func_1065(iParam0, false, 0);
				}
				else
				{
					func_1073(iParam0, false, true, true);
					func_1066(iParam0, 0);
				}
			}
			else if (func_1053(unk))
			{
				func_1066(iParam0, 0);
			}
			else
			{
				func_1063(iParam0, 6);
			}
		
			if (func_1074(iParam0))
				func_1072(iParam0);
			break;
	
		case 5:
		case 6:
			if (func_1061(iParam0, player, 0))
				func_1060(iParam0);
			break;
	}

	return;
}

void func_861(int iParam0, int iParam1, BOOL bParam2) // Position - 0x19373
{
	func_1075(iParam0, iParam1);

	if (!bParam2)
	{
		func_1076(iParam0, iParam1);
	}
	else
	{
		func_1077(iParam0, iParam1);
		func_1078(iParam0, iParam1);
	}

	return;
}

void func_862(int iParam0) // Position - 0x193A5
{
	int num;

	num = func_1067(iParam0);

	if (num > -1 && num < 5)
	{
		if (!func_18(func_1057(iParam0)))
		{
			func_1079(iParam0, 5);
			return;
		}
	}

	if (!func_1080(iParam0) && num < 5)
	{
		func_1081(iParam0);
		func_1079(iParam0, 5);
		return;
	}

	switch (num)
	{
		case -1:
			if (!func_18(func_1057(iParam0)))
				return;
		
			if (func_858(iParam0, 32))
				Global_1207480.f_231.f_1066[iParam0 /*17*/].f_8[0 /*4*/].f_1 = iParam0;
		
			if (Global_1207480.f_231.f_1066[iParam0 /*17*/].f_5 != 255)
			{
				func_1082(iParam0, Global_1207480.f_231.f_1066[iParam0 /*17*/].f_5);
				func_1079(iParam0, 2);
			}
			else
			{
				func_1079(iParam0, 1);
			}
			break;
	
		case 0:
			break;
	
		case 1:
			if (func_1083(iParam0) != 255)
			{
				func_1079(iParam0, 2);
				return;
			}
		
			if (func_1084(iParam0, 3))
			{
				func_1079(iParam0, 2);
				return;
			}
		
			if (func_1085(iParam0))
			{
				func_1079(iParam0, 5);
				return;
			}
			break;
	
		case 2:
			if (func_1083(iParam0) == 255 && !func_1084(iParam0, 3))
			{
				func_1079(iParam0, 4);
				return;
			}
		
			if (func_1086(iParam0))
			{
				func_1079(iParam0, 5);
				return;
			}
		
			if (func_1084(iParam0, 4) || func_1084(iParam0, 5))
			{
				func_1079(iParam0, 3);
				return;
			}
		
			func_1087(iParam0);
			break;
	
		case 3:
			if (func_1088(iParam0))
				return;
		
			func_1079(iParam0, 4);
			break;
	
		case 4:
			if (!func_1086(iParam0))
				return;
		
			func_1079(iParam0, 5);
			break;
	
		case 5:
			if (!func_1086(iParam0))
				return;
		
			if (func_1058(iParam0) > 1)
				func_1089(iParam0, 1);
		
			func_1079(iParam0, 6);
			break;
	
		case 6:
			break;
	}

	return;
}

BOOL func_863() // Position - 0x195A2
{
	return func_18(Global_1051268);
}

void func_864() // Position - 0x195B4
{
	BOOL sessionFlags;
	BOOL flags;

	if (!NETWORK::NETWORK_IS_HOST())
		return;

	sessionFlags = NETWORK::NETWORK_SESSION_GET_SESSION_FLAGS();
	flags = flags | 8;

	if (NETWORK::_NETWORK_AUTO_SESSION_IS_INSTANCED_SESSION())
		NETWORK::NETWORK_AUTO_SESSION_FINISH_INSTANCE();

	if (sessionFlags && flags != false)
	{
		flags = flags && sessionFlags;
		NETWORK::NETWORK_SESSION_REMOVE_SESSION_FLAGS(flags);
	}

	return;
}

BOOL func_865() // Position - 0x195F6
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1051645.f_38;
}

struct<40> func_866(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40) // Position - 0x19612
{
	var unk;
	int i;
	int num;

	if (uParam1.f_1 != -1)
		return iParam0->f_2[uParam1.f_1 /*40*/];

	unk = -1;
	unk.f_2 = -1;
	unk.f_3 = 255;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_8 = 2;
	unk.f_8.f_1 = -1;
	unk.f_8.f_5 = -1;
	unk.f_8.f_5.f_1 = -1;
	unk.f_8.f_5.f_3 = -1;
	unk.f_8.f_5.f_4 = -1;
	unk.f_8.f_5.f_5 = -1;
	unk.f_8.f_5.f_6 = -1;
	unk.f_8.f_5.f_6.f_1 = -1;
	unk.f_8.f_5.f_9 = 2;
	unk.f_23.f_1 = 1024;
	unk.f_23.f_4 = -15;
	unk.f_23.f_5 = 255;
	unk.f_23.f_8 = 1;
	unk.f_23.f_8.f_1.f_1 = 2147483647;
	unk.f_23.f_13 = -1;

	for (i = 0; i < *iParam0; i = i + 1)
	{
		num = (iParam0->f_1 + i) % 5;
	
		if (iParam0->f_2[num /*40*/].f_2 != uParam1.f_2)
		{
		}
		else if (iParam0->f_2[num /*40*/].f_3 != uParam1.f_3)
		{
		}
		else if (iParam0->f_2[num /*40*/].f_4 != uParam1.f_4)
		{
		}
		else
		{
			return iParam0->f_2[num /*40*/];
		}
	}

	return unk;
}

void func_867(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41) // Position - 0x19741
{
	switch (func_1090(uParam41))
	{
		case -1:
			func_1091(uParam40, uParam41->f_4);
			break;
	
		case 0:
			if (!func_1092(&uParam0, uParam41))
			{
				if (NETWORK::GET_NETWORK_TIME_ACCURATE() - uParam41->f_7 > 120000)
				{
					uParam41->f_6 = 2;
					func_1093(uParam41, 3);
				}
			
				return;
			}
		
			if (func_1094(&uParam0) < 0)
				return;
		
			uParam41->f_1 = uParam0.f_1;
			func_1093(uParam41, 1);
			break;
	
		case 1:
			if (!func_1092(&uParam0, uParam41))
			{
				uParam41->f_6 = 2;
				func_1093(uParam41, 3);
				return;
			}
		
			if (func_1094(&uParam0) < 1)
				return;
		
			uParam41->f_6 = uParam0.f_6;
			func_1093(uParam41, 2);
			break;
	
		case 2:
			if (!func_1092(&uParam0, uParam41))
			{
				if (uParam41->f_6 == -1)
					uParam41->f_6 = 2;
			
				func_1093(uParam41, 3);
				return;
			}
		
			if (func_1094(&uParam0) < 3)
				return;
		
			func_1093(uParam41, 3);
			break;
	
		case 3:
			func_1093(uParam41, -1);
			break;
	}

	return;
}

int func_868(int iParam0) // Position - 0x19870
{
	return Global_1107816.f_33[iParam0 /*16*/];
}

int func_869(var uParam0) // Position - 0x19882
{
	int num;
	int i;

	if (!func_1095(uParam0))
		return -1;

	num = func_1096(uParam0, uParam0->f_9);

	if (num != -1)
		return num;

	for (i = 0; i < 4; i = i + 1)
	{
		if (i == uParam0->f_9)
		{
		}
		else
		{
			num = func_1096(uParam0, i);
		
			if (num != -1)
				return num;
		}
	}

	return -1;
}

int func_870(int iParam0) // Position - 0x198E3
{
	return Global_1107816.f_33[iParam0 /*16*/].f_1;
}

BOOL func_871(int iParam0) // Position - 0x198F7
{
	return iParam0 >= 0 && iParam0 < 71;
}

void func_872(int iParam0, int iParam1) // Position - 0x1990D
{
	Global_1107816.f_33[iParam0 /*16*/].f_1 = iParam1;
	return;
}

void func_873(int iParam0) // Position - 0x19923
{
	Global_1107816.f_33[iParam0 /*16*/] = 0;
	return;
}

int func_874(Player plParam0, int iParam1) // Position - 0x19936
{
	int gangId;
	int i;

	gangId = GANG::NETWORK_GET_GANG_ID(plParam0);

	if (func_497(iParam1))
		if (gangId == func_868(iParam1))
			return iParam1;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (gangId == func_868(i))
			return i;
	}

	return -1;
}

int func_875(int iParam0) // Position - 0x19983
{
	return Global_1107816.f_33[iParam0 /*16*/].f_2;
}

void func_876(int iParam0, int iParam1) // Position - 0x19997
{
	Global_1107816.f_33[iParam0 /*16*/] = iParam1;

	if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(GANG::NETWORK_GET_GANG_LEADER(iParam1)))
	{
	}

	return;
}

BOOL func_877(int iParam0, var uParam1) // Position - 0x199BB
{
	if (!func_1097(iParam0))
		return 0;

	*uParam1 = 0;
	return 1;
}

BOOL func_878(int iParam0, var uParam1) // Position - 0x199D6
{
	if (!func_1097(iParam0))
	{
		*uParam1 = 9;
		return 1;
	}

	if (!func_18(func_498(iParam0)))
		return 0;

	if (func_930(iParam0, 4))
	{
		func_1098(func_498(iParam0));
		*uParam1 = 6;
		return 1;
	}

	func_1099(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
	*uParam1 = 1;
	return 1;
}

BOOL func_879(int iParam0, var uParam1) // Position - 0x19A2E
{
	var unk;
	var unk3;
	int num;
	int networkTimeAccurate;

	if (!func_1097(iParam0))
	{
		*uParam1 = 5;
		return 1;
	}

	unk = { func_498(iParam0) };

	if (!func_18(unk))
	{
		*uParam1 = 6;
		return 1;
	}

	if (func_930(iParam0, 4))
	{
		func_1098(func_498(iParam0));
		*uParam1 = 6;
		return 1;
	}

	unk3 = -1;
	unk3.f_1 = -1;
	unk3.f_3 = -1;
	unk3.f_4 = -1;
	unk3.f_5 = -1;
	unk3.f_6 = -1;
	unk3.f_6.f_1 = -1;
	unk3.f_9 = 2;
	unk3 = { unk };
	num = func_869(&unk3);

	if (func_871(num))
	{
		func_872(iParam0, num);
		func_1099(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
		*uParam1 = 2;
		return 1;
	}

	networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();

	if (NETWORK::GET_TIME_DIFFERENCE(func_1100(iParam0), networkTimeAccurate) > func_1101())
	{
		if (func_1102(unk, iParam0))
			*uParam1 = 6;
		else
			*uParam1 = 7;
	
		return 1;
	}

	return 0;
}

BOOL func_880(int iParam0, var uParam1) // Position - 0x19B23
{
	BOOL flag;
	int networkTimeAccurate;

	if (!func_1097(iParam0))
	{
		*uParam1 = 5;
		return 1;
	}

	flag = func_1103(iParam0);

	if (flag & 2 != 0)
	{
		*uParam1 = 4;
		return 1;
	}

	if (flag & true != 0)
	{
		*uParam1 = 3;
		return 1;
	}

	if (func_930(iParam0, 4))
	{
		func_1098(func_498(iParam0));
		*uParam1 = 6;
		return 1;
	}

	networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();

	if (NETWORK::GET_TIME_DIFFERENCE(func_1100(iParam0), networkTimeAccurate) > func_1101())
	{
		if (func_1102(func_498(iParam0), iParam0))
			*uParam1 = 6;
		else
			*uParam1 = 7;
	
		return 1;
	}

	return 0;
}

BOOL func_881(int iParam0, var uParam1) // Position - 0x19BB9
{
	BOOL flag;

	flag = func_1103(iParam0);

	if (flag & 2 != 0)
	{
		*uParam1 = 4;
		return 1;
	}

	if (func_930(iParam0, 4))
	{
		func_1098(func_498(iParam0));
		*uParam1 = 6;
		return 1;
	}

	if (flag & true != 0)
		return 0;

	if (func_1102(func_498(iParam0), iParam0))
		*uParam1 = 6;
	else
		*uParam1 = 7;

	return 1;
}

BOOL func_882(int iParam0, var uParam1) // Position - 0x19C1C
{
	BOOL flag;

	if (!func_1097(iParam0))
	{
		*uParam1 = 5;
		return 1;
	}

	flag = func_1103(iParam0);

	if (flag & 2 != 0)
		return 0;

	if (flag & true != 0)
	{
		*uParam1 = 3;
		return 1;
	}

	if (func_930(iParam0, 4))
	{
		func_1098(func_498(iParam0));
		*uParam1 = 6;
		return 1;
	}

	if (Global_1110244.f_18)
	{
		if (func_1102(func_498(iParam0), iParam0))
			*uParam1 = 6;
		else
			*uParam1 = 7;
	}
	else
	{
		func_1102(func_498(iParam0), iParam0);
		*uParam1 = 6;
	}

	return 1;
}

BOOL func_883(int iParam0, var uParam1) // Position - 0x19CAE
{
	BOOL flag;

	flag = func_1103(iParam0);

	if (flag & 2 != 0)
		return 0;

	if (flag & true != 0)
		return 0;

	if (func_1102(func_498(iParam0), iParam0))
		*uParam1 = 6;
	else
		*uParam1 = 7;

	return 1;
}

BOOL func_884(int iParam0, var uParam1) // Position - 0x19CF1
{
	var unk;
	int num;
	int networkTimeAccurate;

	if (!func_18(func_498(iParam0)))
	{
		*uParam1 = 7;
		return 1;
	}

	unk = -1;
	unk.f_1 = -1;
	unk.f_3 = -1;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_6.f_1 = -1;
	unk.f_9 = 2;
	unk = { func_498(iParam0) };
	num = func_869(&unk);

	if (!func_871(num))
	{
		func_1104(iParam0);
		*uParam1 = 7;
		return 1;
	}

	networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();

	if (NETWORK::GET_TIME_DIFFERENCE(func_1100(iParam0), networkTimeAccurate) > func_1105())
	{
		func_1098(unk);
		func_1099(iParam0, networkTimeAccurate);
	}

	return 0;
}

BOOL func_885(int iParam0, var uParam1) // Position - 0x19D98
{
	if (func_1097(iParam0))
	{
		*uParam1 = 8;
		return 1;
	}
	else
	{
		*uParam1 = 9;
		return 1;
	}

	return 0;
}

BOOL func_886(int iParam0, var uParam1) // Position - 0x19DBF
{
	int num;
	BOOL flag;

	flag = true;

	if (Global_1110244.f_19)
	{
		num = func_1106();
	
		if (num <= 1)
			if (func_930(iParam0, 4))
				flag = false;
			else
				flag = true;
		else
			flag = true;
	}
	else
	{
		flag = true;
	}

	if (flag)
	{
		if (NETWORK::NETWORK_SESSION_GET_SESSION_FLAGS() & 9 != 0 && func_930(iParam0, 1))
		{
			if (NETWORK::GET_TIME_DIFFERENCE(func_1107(), NETWORK::GET_NETWORK_TIME_ACCURATE()) > 5000)
			{
				func_1108();
				func_456();
			}
		
			return 0;
		}
	}

	func_1109(iParam0);
	*uParam1 = -1;
	return 1;
}

BOOL func_887(int iParam0, var uParam1) // Position - 0x19E44
{
	switch (func_888(iParam0))
	{
		case 0:
			return func_1110(iParam0, uParam1);
	
		case 1:
			return func_1111(iParam0, uParam1);
	
		default:
		
	}

	return 0;
}

int func_888(int iParam0) // Position - 0x19E7E
{
	return Global_1107816.f_33[iParam0 /*16*/].f_3.f_2;
}

void func_889(int iParam0, var uParam1, int iParam2) // Position - 0x19E94
{
	Global_1107816.f_33[iParam0 /*16*/].f_2 = uParam1;
	return;
}

void func_890(int iParam0, int iParam1) // Position - 0x19EAA
{
	Global_1110244[iParam0] = iParam1;
	return;
}

struct<13> func_891(int iParam0) // Position - 0x19EBC
{
	return Global_1107816.f_33[iParam0 /*16*/].f_3;
}

BOOL func_892(var uParam0, var uParam1, var uParam2) // Position - 0x19ED3
{
	return !func_929(func_1112(), uParam0) || func_1113() != uParam2;
}

void func_893(var uParam0) // Position - 0x19EF5
{
	Global_1110244.f_11 = { *uParam0 };
	return;
}

BOOL func_894(Player plParam0, int iParam1) // Position - 0x19F09
{
	return Global_1138673[plParam0 /*56*/].f_34 && iParam1 != false;
}

struct<2> func_895() // Position - 0x19F20
{
	return Global_1140723.f_5.f_3;
}

struct<2> func_896() // Position - 0x19F32
{
	return Global_1110244.f_21.f_13.f_25;
}

int func_897() // Position - 0x19F46
{
	return Global_1140723.f_5.f_7;
}

int func_898() // Position - 0x19F56
{
	return Global_1140723.f_24;
}

Any func_899() // Position - 0x19F64
{
	return Global_1110244.f_21.f_13.f_20;
}

int func_900() // Position - 0x19F76
{
	return Global_1110244.f_21.f_13.f_2;
}

BOOL func_901(int iParam0) // Position - 0x19F88
{
	return func_527(1, iParam0);
}

void func_902() // Position - 0x19F97
{
	func_1114(-1);
	func_1115(-1);
	func_1116(-1);
	func_1117();
	func_1118();
	return;
}

int func_903() // Position - 0x19FB6
{
	return Global_1110244.f_21.f_13.f_8;
}

void func_904(int iParam0) // Position - 0x19FC8
{
	Player player;

	player = PLAYER::PLAYER_ID();
	Global_1138673[player /*56*/].f_34 = Global_1138673[player /*56*/].f_34 - Global_1138673[player /*56*/].f_34 && iParam0;
	return;
}

void func_905(int iParam0) // Position - 0x19FF8
{
	Global_1110244.f_21.f_13.f_8 = iParam0;
	return;
}

void func_906(var uParam0, var uParam1) // Position - 0x1A00C
{
	Global_1110244.f_21.f_13.f_9 = { uParam0 };
	return;
}

int func_907() // Position - 0x1A024
{
	return Global_1110244.f_21.f_13;
}

void func_908(int iParam0) // Position - 0x1A034
{
	Player player;

	player = PLAYER::PLAYER_ID();
	Global_1138673[player /*56*/].f_34 = Global_1138673[player /*56*/].f_34 || iParam0;
	return;
}

BOOL func_909(int iParam0) // Position - 0x1A059
{
	return func_476(&(Global_1110244.f_251.f_6), iParam0, 2);
}

void func_910(int iParam0) // Position - 0x1A070
{
	func_514(&Global_1140466[PLAYER::PLAYER_ID() /*8*/], iParam0, 2);
	return;
}

void func_911(int iParam0) // Position - 0x1A08C
{
	func_513(&Global_1140466[PLAYER::PLAYER_ID() /*8*/], iParam0, 2);
	return;
}

BOOL func_912(int iParam0) // Position - 0x1A0A8
{
	return func_476(&(Global_1110244.f_251.f_12), iParam0, 4);
}

void func_913(int iParam0) // Position - 0x1A0BF
{
	func_514(&(Global_1140466[PLAYER::PLAYER_ID() /*8*/].f_3), iParam0, 4);
	return;
}

void func_914(int iParam0) // Position - 0x1A0DD
{
	func_513(&(Global_1140466[PLAYER::PLAYER_ID() /*8*/].f_3), iParam0, 4);
	return;
}

BOOL func_915(int iParam0) // Position - 0x1A0FB
{
	int num;

	num = func_1119(iParam0);

	if (num < 0)
		return true;

	return func_1120(&Global_1149432.f_11.f_3222.f_320[num /*4*/], 1);
}

void func_916(int iParam0) // Position - 0x1A12A
{
	if (Global_1138673[PLAYER::PLAYER_ID() /*56*/].f_47 == iParam0)
		return;

	Global_1138673[PLAYER::PLAYER_ID() /*56*/].f_47 = iParam0;
	return;
}

BOOL func_917(Player plParam0, int iParam1) // Position - 0x1A154
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0))
		return false;

	return Global_1138673[plParam0 /*56*/].f_54.f_1 && iParam1 != false;
}

BOOL func_918(int iParam0) // Position - 0x1A17B
{
	return Global_1140723.f_24.f_3 && iParam0 != false;
}

var func_919() // Position - 0x1A190
{
	return Global_1140723.f_24.f_6;
}

void func_920(Player plParam0) // Position - 0x1A1A0
{
	var unk;
	var value;

	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_7 = -1;
	unk.f_7.f_1 = -1;
	unk.f_10 = 255;
	unk.f_17 = -1;
	unk.f_18 = -1;
	unk.f_19 = 7;
	unk.f_19.f_1 = 255;
	unk.f_19.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	unk.f_27.f_1 = -1;
	unk.f_4 = 15;
	unk.f_10 = PLAYER::PLAYER_ID();
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, plParam0);
	func_1121(&unk, value);
	return;
}

void func_921(int iParam0) // Position - 0x1A23D
{
	Global_1140723.f_24.f_6 = iParam0;
	return;
}

void func_922(int iParam0) // Position - 0x1A24F
{
	Global_1140723.f_24.f_3 = Global_1140723.f_24.f_3 || iParam0;
	return;
}

BOOL func_923() // Position - 0x1A26A
{
	return Global_1110244.f_21.f_112.f_6;
}

int func_924() // Position - 0x1A27C
{
	return Global_1110244.f_21.f_112.f_5;
}

void func_925() // Position - 0x1A28E
{
	var unk;

	func_1122(-1);
	func_1123(-1);
	func_1124(-1);
	func_1125(func_838());
	func_1126(0);
	func_1127(0);
	func_1128(0);
	func_1129(0);
	unk.f_1 = -1;
	func_1130(&unk);
	return;
}

int func_926(int iParam0) // Position - 0x1A2D0
{
	int i;

	if (iParam0 == 0)
		return -1;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (iParam0 == func_868(i))
			return i;
	}

	return -1;
}

BOOL func_927(int iParam0) // Position - 0x1A306
{
	int num;

	if (!func_1131(func_933()))
		if (func_1131(func_1132(iParam0)))
			func_1122(func_1132(iParam0));
		else
			return false;

	if (!func_1133(func_932()))
		if (func_1133(func_1134(iParam0)))
			func_1123(func_1134(iParam0));
		else
			return false;

	if (!func_1135(func_935()))
		if (func_1135(func_1136(iParam0)))
			func_1124(func_1136(iParam0));
		else
			return false;

	if (!func_1137() && func_1139(func_1138(func_935())) == 7)
	{
		num.f_1 = -1;
		func_1140(iParam0, &num);
	
		if (num == 0)
		{
		}
		else
		{
			func_1130(&num);
			func_1129(1);
		}
	}

	return true;
}

struct<2> func_928() // Position - 0x1A3CD
{
	return Global_1110244.f_21.f_112.f_3;
}

BOOL func_929(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1A3E1
{
	return uParam0 == uParam2 && uParam0.f_1 == uParam2.f_1;
}

BOOL func_930(int iParam0, int iParam1) // Position - 0x1A3FC
{
	return Global_1107816.f_33[iParam0 /*16*/].f_3.f_8 && iParam1 != false;
}

void func_931(Any* panParam0) // Position - 0x1A417
{
	MISC::COPY_SCRIPT_STRUCT(panParam0, &(Global_1110244.f_21.f_112.f_9), 4);
	return;
}

int func_932() // Position - 0x1A430
{
	return Global_1110244.f_21.f_112;
}

int func_933() // Position - 0x1A440
{
	return Global_1110244.f_21.f_112.f_1;
}

var func_934() // Position - 0x1A452
{
	return Global_1110244.f_21.f_112.f_7;
}

int func_935() // Position - 0x1A464
{
	return Global_1110244.f_21.f_112.f_2;
}

void func_936(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10) // Position - 0x1A476
{
	var unk;
	var unk32;
	var unk33;
	float num;

	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_7 = -1;
	unk.f_7.f_1 = -1;
	unk.f_10 = 255;
	unk.f_17 = -1;
	unk.f_18 = -1;
	unk.f_19 = 7;
	unk.f_19.f_1 = 255;
	unk.f_19.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	unk.f_27.f_1 = -1;
	unk32 = func_153(0, 8);
	unk.f_6 = iParam0;
	unk.f_5 = iParam1;
	unk.f_11 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	unk.f_4 = 3;
	unk.f_9 = iParam3;
	unk.f_14 = uParam2;
	unk.f_7 = { uParam4 };
	unk.f_13 = iParam10;
	MISC::COPY_SCRIPT_STRUCT(&(unk.f_27), &uParam6, 4);
	Global_1110244.f_4647 = uParam2;
	unk33 = { func_1141(iParam0) };
	num = func_1142(iParam0);
	func_1143(&(unk.f_19), unk.f_11, unk33, num);
	func_1121(&unk, unk32);
	return;
}

void func_937(Player plParam0, Any* panParam1) // Position - 0x1A577
{
	MISC::COPY_SCRIPT_STRUCT(panParam1, &(Global_1138673[plParam0 /*56*/].f_38), 5);
	return;
}

void func_938(Any* panParam0) // Position - 0x1A590
{
	func_1144(panParam0, 1);
	return;
}

BOOL func_939(int iParam0) // Position - 0x1A59F
{
	return Global_1110244.f_4607.f_2 && iParam0 != false;
}

void func_940(Any* panParam0) // Position - 0x1A5B5
{
	func_1145(panParam0, 0);
	return;
}

void func_941(Any* panParam0) // Position - 0x1A5C4
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1138673[PLAYER::PLAYER_ID() /*56*/].f_38), panParam0, 5);
	return;
}

void func_942(int iParam0) // Position - 0x1A5DF
{
	Global_1110244.f_4607.f_2 = Global_1110244.f_4607.f_2 - Global_1110244.f_4607.f_2 && iParam0;
	return;
}

void func_943(Player plParam0, Any* panParam1) // Position - 0x1A606
{
	MISC::COPY_SCRIPT_STRUCT(panParam1, &(Global_1138673[plParam0 /*56*/].f_43), 4);
	return;
}

void func_944(Any* panParam0) // Position - 0x1A61F
{
	func_1146(panParam0, 1);
	return;
}

void func_945(Any* panParam0) // Position - 0x1A62E
{
	func_1147(panParam0, 0);
	return;
}

void func_946(Any* panParam0) // Position - 0x1A63D
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1138673[PLAYER::PLAYER_ID() /*56*/].f_43), panParam0, 4);
	return;
}

void func_947(Player plParam0, Any* panParam1) // Position - 0x1A658
{
	MISC::COPY_SCRIPT_STRUCT(panParam1, &(Global_1138673[plParam0 /*56*/].f_49), 5);
	return;
}

void func_948(Any* panParam0) // Position - 0x1A671
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1110244.f_4607.f_22), panParam0, 5);
	return;
}

int func_949(int iParam0) // Position - 0x1A689
{
	return Global_1110244.f_150.f_84[iParam0 /*4*/];
}

int func_950(int iParam0) // Position - 0x1A69D
{
	return Global_1110244.f_150.f_84[iParam0 /*4*/].f_2;
}

BOOL func_951(Player plParam0, int iParam1) // Position - 0x1A6B3
{
	return func_476(&(Global_1138673[plParam0 /*56*/].f_49), iParam1, 3);
}

void func_952(int iParam0) // Position - 0x1A6CC
{
	func_513(&(Global_1138673[PLAYER::PLAYER_ID() /*56*/].f_49), iParam0, 3);
	return;
}

BOOL func_953() // Position - 0x1A6EA
{
	return Global_1203952.f_399.f_4;
}

void func_954(int iParam0) // Position - 0x1A6FB
{
	int num;
	int i;

	num = func_469(iParam0);

	if (num == -1)
	{
		Global_1072759.f_19585.f_19 = Global_1072759.f_19585[iParam0];
		return;
	}

	if (num == 0)
		return;

	for (i = 0; i <= num - 1; i = i + 1)
	{
		if (MISC::IS_BIT_SET(Global_38.f_118[iParam0], i))
			MISC::SET_BIT(&(Global_1072759.f_19585.f_19), i);
		else
			MISC::CLEAR_BIT(&(Global_1072759.f_19585.f_19), i);
	}

	return;
}

BOOL func_955(int iParam0) // Position - 0x1A779
{
	return iParam0 > -1 && iParam0 <= 80;
}

BOOL func_956(var uParam0, int iParam1) // Position - 0x1A78F
{
	BOOL flag;

	flag = *uParam0 && iParam1;

	if (!(flag == false))
		return true;

	return false;
}

BOOL func_957() // Position - 0x1A7AF
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return currentMessage != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(currentMessage) == 4;
}

BOOL func_958(int iParam0, int iParam1) // Position - 0x1A7CF
{
	switch (iParam1)
	{
		case 0:
			if (iParam0 >= 9 && iParam0 <= 25)
				return true;
			break;
	}

	return false;
}

Vector3 func_959(int iParam0) // Position - 0x1A7FF
{
	return Global_1835011[iParam0 /*72*/].f_19;
}

Vector3 func_960(int iParam0) // Position - 0x1A813
{
	return Global_1835011[iParam0 /*72*/].f_19;
}

Vector3 func_961(int iParam0) // Position - 0x1A827
{
	return Global_1835011[iParam0 /*72*/].f_19;
}

void func_962(int iParam0, int iParam1) // Position - 0x1A83B
{
	if (!func_693(iParam0))
		return;

	Global_1900562[iParam0 /*2*/].f_1 = Global_1900562[iParam0 /*2*/].f_1 || iParam1;
	return;
}

void func_963(int iParam0) // Position - 0x1A867
{
	if (func_57() == -1)
		return;

	if (Global_1835011[iParam0 /*72*/].f_3 != 0 && UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*72*/].f_3))
		UNLOCK::_UNLOCK_SET_NEW(Global_1835011[iParam0 /*72*/].f_3, false);

	func_1148(iParam0);
	return;
}

void func_964(var uParam0, int iParam1) // Position - 0x1A8B1
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_965(var uParam0, var uParam1) // Position - 0x1A8C2
{
	int num;

	num = func_370(uParam0);
	return num == 1 || num == 2;
}

void func_966(var uParam0, var uParam1, BOOL bParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x1A8E2
{
	int num;

	if (!func_18(uParam0))
	{
		!bParam2;
		return;
	}

	if (!func_1053(uParam0) && !func_965(uParam0))
	{
		!bParam2;
		return;
	}

	func_1149(uParam0) == 0;

	if (iParam3 == 0 || iParam3 == 1 || iParam3 == 4)
		if (func_370(uParam0) == 3)
			func_1150(true, -1706799532);
		else if (func_370(uParam0) == 4)
			func_1150(false, -1706799532);

	if (func_370(uParam0) == 3 || func_370(uParam0) == 1 || bParam5 && func_370(uParam0) == 4 && STATS::STATSTRACKER_IS_INITIALIZED(func_1149(uParam0)))
		if (iParam3 != -1)
			func_1151(uParam0, iParam3, iParam4, 255, 0);
		else
			func_1151(uParam0, 2, iParam4, 255, 0);

	func_968(uParam0, 0);

	if (func_929(func_213(0), uParam0))
	{
		func_1152(true);
		func_1153(false);
		func_1154(false);
		func_1155(1);
	}

	func_1156(uParam0);
	Global_1051645.f_45.f_1 = 1;
	num = func_1157(uParam0);

	if (num != 2 && num != 7)
		MISC::_0x1096603B519C905F("");

	return;
}

void func_967(var uParam0, var uParam1) // Position - 0x1AA4A
{
	if (func_1149(uParam0) == 0)
	{
	}
	else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_1149(uParam0)))
	{
		STATS::_0x99230691875FC218(func_1157(uParam0), func_1149(uParam0), Global_34);
	}

	return;
}

void func_968(var uParam0, var uParam1, int iParam2) // Position - 0x1AA8D
{
	if (!func_18(uParam0))
		return;

	if (iParam2 == 0 || iParam2 == -1)
		func_1158(uParam0);
	else
		func_1159(uParam0, iParam2);

	func_1160();
	return;
}

BOOL func_969() // Position - 0x1AAD0
{
	return Global_1295849.f_537 != 0;
}

BOOL func_970() // Position - 0x1AAE1
{
	if (UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1) != 0)
		return false;

	if (!CAM::IS_SCREEN_FADED_IN())
		return false;

	return true;
}

BOOL func_971(int iParam0) // Position - 0x1AB03
{
	return Global_1295849.f_537 && iParam0 != false;
}

BOOL func_972(int iParam0) // Position - 0x1AB17
{
	int num;
	 Var1;
	int num2;
	Blip blipIndex;

	Var1 = func_1161(iParam0);
	num2 = func_1162(iParam0);
	blipIndex = func_704();

	switch (num2)
	{
		case 0:
			num = func_288(MISC::VAR_STRING(0, Var1), 10000, 0, 0, 0, true);
			break;
	
		case 1:
			if (!MAP::DOES_BLIP_EXIST(blipIndex))
			{
				blipIndex = MAP::_BLIP_ADD_FOR_STYLE(joaat("BLIP_STYLE_MP_MISSION_GIVER"));
			
				if (!MAP::DOES_BLIP_EXIST(blipIndex))
					return false;
			
				MAP::SET_BLIP_SPRITE(blipIndex, joaat("blip_proc_bounty_poster"), true);
				MAP::BLIP_ADD_MODIFIER(blipIndex, -244815569);
				func_705(blipIndex);
			}
		
			num = func_288(MISC::VAR_STRING(0, Var1, blipIndex), 10000, 0, 0, 0, true);
			break;
	}

	return num != 0;
}

void func_973(int iParam0) // Position - 0x1ABBE
{
	Global_1295849.f_537 = Global_1295849.f_537 - Global_1295849.f_537 && iParam0;
	return;
}

BOOL func_974(int iParam0) // Position - 0x1ABDF
{
	return func_243(Global_1072759.f_28644.f_8.f_1, iParam0);
}

Hash func_975(Hash hParam0) // Position - 0x1ABF8
{
	return hParam0;
}

BOOL func_976(Hash hParam0, int iParam1) // Position - 0x1AC02
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

Hash func_977(int iParam0) // Position - 0x1AC1C
{
	switch (iParam0)
	{
		case 0:
			return joaat("CHARACTER_RANK");
	
		case 7:
			return joaat("CHARACTER_RANK_BOUNTY_HUNTER");
	
		case 11:
			return joaat("CHARACTER_RANK_TRADER");
	
		case 12:
			return joaat("CHARACTER_RANK_COLLECTOR");
	
		case 13:
			return joaat("CHARACTER_RANK_SEASON_005");
	
		case 14:
			return joaat("CHARACTER_RANK_VIP_SEASON_005");
	
		case 15:
			return joaat("CHARACTER_RANK_MOONSHINER");
	
		case 16:
			return joaat("CHARACTER_RANK_SEASON_006");
	
		case 17:
			return joaat("CHARACTER_RANK_VIP_SEASON_006");
	
		case 18:
			return -296143963;
	
		case 19:
			return -575193412;
	
		case 20:
			return 1364208910;
	
		case 21:
			return 1936286816;
	
		case 22:
			return -361115047;
	
		case 23:
			return -874931455;
	
		case 24:
			return -1692024648;
	
		case 25:
			return -1371940008;
	
		case 26:
			return -108990605;
	
		case 27:
			return -122883667;
	
		case 28:
			return -2093379718;
	
		case 29:
			return -362851054;
	
		case 30:
			return -244323351;
	
		case 31:
			return 1314790674;
	
		case 32:
			return -550123659;
	
		case 33:
			return 944566512;
	
		case 34:
			return 1589331582;
	
		case 35:
			return 721639005;
	
		case 36:
			return 1289855691;
	
		default:
		
	}

	return 0;
}

Hash func_978(int iParam0) // Position - 0x1ADB5
{
	if (iParam0 == 255 || iParam0 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
		return NETWORK::_NETWORK_GET_RANK();

	return Global_1155150[iParam0 /*30*/];
}

Hash func_979(int iParam0) // Position - 0x1ADE1
{
	switch (iParam0)
	{
		case 0:
			return joaat("CHARACTER_XP");
	
		case 7:
			return joaat("CHARACTER_XP_BOUNTY_HUNTER");
	
		case 11:
			return joaat("CHARACTER_XP_TRADER");
	
		case 12:
			return joaat("CHARACTER_XP_COLLECTOR");
	
		case 13:
			return joaat("CHARACTER_XP_SEASON_005");
	
		case 14:
			return joaat("CHARACTER_XP_VIP_SEASON_005");
	
		case 15:
			return joaat("CHARACTER_XP_MOONSHINER");
	
		case 16:
			return joaat("CHARACTER_XP_SEASON_006");
	
		case 17:
			return joaat("CHARACTER_XP_VIP_SEASON_006");
	
		case 18:
			return -399749454;
	
		case 19:
			return 1428145499;
	
		case 20:
			return -1318783204;
	
		case 21:
			return 893948884;
	
		case 22:
			return -187008013;
	
		case 23:
			return 92055054;
	
		case 24:
			return 2141983659;
	
		case 25:
			return 1021617260;
	
		case 26:
			return 451790629;
	
		case 27:
			return -379952091;
	
		case 28:
			return -2076041980;
	
		case 29:
			return -453223575;
	
		case 30:
			return -1366789744;
	
		case 31:
			return -745162596;
	
		case 32:
			return 312097202;
	
		case 33:
			return -1063349586;
	
		case 34:
			return 48798287;
	
		case 35:
			return -1288374309;
	
		case 36:
			return 1026199250;
	
		default:
		
	}

	return 0;
}

struct<4> func_980(Hash hParam0, BOOL bParam1) // Position - 0x1AF7A
{
	var unk;

	unk = { func_1163(hParam0, bParam1, 0) };
	return func_502(hParam0, unk, unk.f_4, bParam1);
}

int func_981(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1AF9F
{
	int inventoryItemCountWithItemid;
	int num;
	Hash AmmoType;
	var guid;

	inventoryItemCountWithItemid = 0;

	if (!func_728(hParam0, 0))
		return 0;

	num = func_1164(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		AmmoType = func_1165(hParam0, 1);
	
		if (AmmoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, AmmoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_1166(hParam0, false);
	}

	if (func_729(hParam0, joaat("DEFAULT")) != 0)
	{
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_503(bParam2), hParam0, bParam3);
	}
	else
	{
		guid = { func_980(hParam0, bParam2) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_503(bParam2), &guid, bParam3);
	}

	return inventoryItemCountWithItemid;
}

int func_982(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1B061
{
	if (!func_1167(&uParam0))
		return 0;

	return INVENTORY::_INVENTORY_GET_ITEM_EXPIRY_TIME(&uParam0);
}

BOOL func_983(Hash hParam0, Any anParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x1B07D
{
	BOOL flag;
	int num;
	var unk;
	var unk2;

	if (hParam0 == 0)
		return 0;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return 0;

	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(hParam0))
		return 1;

	if (bParam7)
	{
		flag = GANG::NETWORK_IS_GANG_ID_VALID(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) && GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
		bParam7 = flag;
	}

	POSSE::_0xC08AFF658B2E51DA(&num);

	if (num != 0)
		func_1168(iParam2, -372840566);

	SECURE_STORE(&unk, hParam0);

	if (!bParam7)
		if (!NETWORK::_0x64A36BA85CE01A81(&unk, &(uParam3->f_1), &(iParam2->f_1), anParam1))
			return 0;
	else if (!NETWORK::_0x7A8E8DF782B47EB0(&unk, &(iParam2->f_1), anParam1))
		return 0;

	unk2.f_1 = 11;
	unk2.f_16 = 255;
	unk2.f_13 = iParam4;
	unk2.f_16 = iParam5;
	unk2.f_14 = iParam6;
	unk2 = { *iParam2 };
	func_1169(anParam1, hParam0, unk2);
	return 1;
}

void func_984(int iParam0) // Position - 0x1B15E
{
	Global_1300387.f_155.f_4[iParam0 /*4*/].f_1 = 0;
	return;
}

void func_985(int iParam0) // Position - 0x1B175
{
	Global_1300387.f_155.f_4[iParam0 /*4*/].f_2 = 0;
	return;
}

void func_986(Player plParam0) // Position - 0x1B18C
{
	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1300387.f_155.f_2), plParam0);
	return;
}

int func_987(Hash hParam0) // Position - 0x1B1A2
{
	var unk;

	if (!func_1170(&unk))
		return 0;

	if (!func_1171(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_1171(&unk, 37, 0, 0, 1))
		return 0;

	if (!func_1171(&unk, 40, hParam0, 0, 1))
		return 0;

	if (!func_1171(&unk, 53, 0, 0, 1))
		return 0;

	return func_1172(&unk, 11);
}

int func_988() // Position - 0x1B20D
{
	return SCRIPTS::COUNT_PLAYER_BITS(&(Global_1300387.f_155.f_2));
}

BOOL func_989(int iParam0) // Position - 0x1B221
{
	return Global_1300387.f_155.f_3 && iParam0 != false;
}

void func_990(int iParam0) // Position - 0x1B236
{
	Global_1300387.f_155.f_3 = Global_1300387.f_155.f_3 - Global_1300387.f_155.f_3 && iParam0;
	return;
}

BOOL func_991(Player plParam0, Hash hParam1) // Position - 0x1B25A
{
	return MISC::IS_BIT_SET(Global_1300387.f_155.f_4[plParam0 /*4*/].f_2, hParam1);
}

BOOL func_992(Hash hParam0, Hash hParam1, var uParam2) // Position - 0x1B276
{
	var unk;

	if (!func_1170(&unk))
		return false;

	if (!func_1171(&unk, 13, 0, 0, 1))
		return false;

	if (!func_1171(&unk, 37, 0, 0, 1))
		return false;

	if (!func_1171(&unk, 40, hParam0, 0, 1))
		return false;

	if (!func_1171(&unk, 53, 0, 0, 1))
		return false;

	if (!func_1171(&unk, 54, hParam1, 0, 1))
		return false;

	uParam2->f_1 = { func_1173(unk) };
	*uParam2 = func_1174(unk);
	uParam2->f_9 = func_1175(unk);
	return true;
}

int func_993(Hash hParam0) // Position - 0x1B314
{
	var unk;

	if (!func_1170(&unk))
		return 0;

	if (!func_1171(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_1171(&unk, 37, 0, 0, 1))
		return 0;

	if (!func_1171(&unk, 40, hParam0, 0, 1))
		return 0;

	if (!func_1171(&unk, 51, 0, 0, 1))
		return 0;

	return func_1172(&unk, 10);
}

BOOL func_994(Player plParam0, Hash hParam1) // Position - 0x1B37F
{
	return MISC::IS_BIT_SET(Global_1300387.f_155.f_4[plParam0 /*4*/].f_1, hParam1);
}

BOOL func_995(Hash hParam0, Hash hParam1, var uParam2) // Position - 0x1B39B
{
	var unk;

	if (!func_1170(&unk))
		return false;

	if (!func_1171(&unk, 13, 0, 0, 1))
		return false;

	if (!func_1171(&unk, 37, 0, 0, 1))
		return false;

	if (!func_1171(&unk, 40, hParam0, 0, 1))
		return false;

	if (!func_1171(&unk, 51, 0, 0, 1))
		return false;

	if (!func_1171(&unk, 52, hParam1, 0, 1))
		return false;

	uParam2->f_33 = func_1176(unk, joaat("PARTICLE"));
	*uParam2 = { func_1173(unk) };
	uParam2->f_8 = { func_1177(unk) };
	uParam2->f_16 = func_1178(unk);
	uParam2->f_17 = { func_1179(unk) };
	uParam2->f_20 = { func_1180(unk) };
	uParam2->f_26 = func_1181(unk);
	uParam2->f_27 = func_1182(unk);

	if (uParam2->f_33 & 32 != 0)
		uParam2->f_23 = { func_1183(unk) };

	if (uParam2->f_33 & 16 != 0)
		uParam2->f_31 = func_1184(unk);

	if (uParam2->f_33 & 8 != 0)
	{
		uParam2->f_28 = func_1185(unk);
		uParam2->f_29 = func_1186(unk);
		uParam2->f_30 = func_1187(unk);
	}

	if (uParam2->f_33 & 64 != 0)
		uParam2->f_32 = func_1188(unk);

	return true;
}

void func_996(Player plParam0, Hash hParam1) // Position - 0x1B4F6
{
	MISC::SET_BIT(&(Global_1300387.f_155.f_4[plParam0 /*4*/].f_1), hParam1);
	return;
}

void func_997(Player plParam0) // Position - 0x1B512
{
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Global_1300387.f_155.f_2), plParam0);
	return;
}

void func_998(int iParam0) // Position - 0x1B528
{
	Global_1300387.f_155.f_3 = Global_1300387.f_155.f_3 || iParam0;
	return;
}

void func_999(Player plParam0, Hash hParam1) // Position - 0x1B543
{
	MISC::SET_BIT(&(Global_1300387.f_155.f_4[plParam0 /*4*/].f_2), hParam1);
	return;
}

void func_1000(int iParam0) // Position - 0x1B55F
{
	var unk;

	unk = -1;
	unk.f_3 = 255;
	*iParam0 = { unk };
	return;
}

int func_1001(int iParam0, int iParam1) // Position - 0x1B57D
{
	switch (iParam0)
	{
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_01"):
			return 521;
	
		case -2141419899:
			return 404;
	
		case -2106445152:
			return 277;
	
		case -2106214197:
			return 102;
	
		case -2101264851:
			return 192;
	
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_02"):
			return 470;
	
		case -2073072369:
			return 57;
	
		case -2069570138:
			return 25;
	
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
			return 394;
	
		case -2058120606:
			return 194;
	
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_04"):
			return 464;
	
		case joaat("WS_MP_JAIL_DOORS_BLACKWATER_UNLOCK"):
			return 338;
	
		case -2038424081:
			return 49;
	
		case -2034257789:
			return 90;
	
		case -2022369555:
			return 251;
	
		case -2021582629:
			return 110;
	
		case -2020023971:
			return 263;
	
		case -1957523409:
			return 205;
	
		case -1952856164:
			return 163;
	
		case -1949204933:
			return 261;
	
		case joaat("ws_mp_camp_defend_radleys_pasture"):
			return 387;
	
		case -1939389836:
			return 416;
	
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_04"):
			return 428;
	
		case -1925798111:
			return 41;
	
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_03"):
			return 439;
	
		case joaat("WS_MP_TREASURE_MAP_INTRO_VALENTINE_02"):
			return 403;
	
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_03"):
			return 463;
	
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			return 380;
	
		case -1852605133:
			return 10;
	
		case joaat("WS_MP_TREASURE_MAP_INTRO_RHODES_03"):
			return 409;
	
		case -1847672446:
			return 312;
	
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_04"):
			return 504;
	
		case -1840704908:
			return 274;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

int func_1002(Player plParam0) // Position - 0x1D89E
{
	Player player;

	player = plParam0;

	if (player >= 0 && player < 32)
		return Global_1144526[player /*83*/].f_38.f_3;

	return -1;
}

void func_1003(int iParam0, int iParam1) // Position - 0x1D8CE
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

BOOL func_1004(BOOL bParam0) // Position - 0x1D8E3
{
	return Global_1102813.f_26.f_9 && bParam0 == bParam0;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(int iParam0) // Position - 0x1D8F9
{
	switch (iParam0)
	{
		case 0:
			return "DUTCH";
	
		case 1:
			return "JOHN";
	
		case 2:
			return "JAVIER";
	
		case 3:
			return "BILL";
	
		case 4:
			return "UNCLE";
	
		case 5:
			return "HOSEA";
	
		case 6:
			return "MICAH";
	
		case 7:
			return "CHARLES";
	
		case 8:
			return "SEAN";
	
		case 9:
			return "LENNY";
	
		case 10:
			return "KIERAN";
	
		case 11:
			return "SADIE";
	
		case 12:
			return "DOG";
	
		case 13:
			return "ABIGAIL";
	
		case 14:
			return "JACK";
	
		case 15:
			return "MARYBETH";
	
		case 16:
			return "MOLLY";
	
		case 17:
			return "PEARSON";
	
		case 18:
			return "STRAUSS";
	
		case 19:
			return "GRIMSHAW";
	
		case 20:
			return "KAREN";
	
		case 21:
			return "SWANSON";
	
		case 22:
			return "TILLY";
	
		case 23:
			return "TRELAWNY";
	
		case 24:
			return "CLEET";
	
		case 25:
			return "JOE";
	
		case 26:
			return "EAGLEFLIES";
	
		default:
		
	}

	return "Companion unknown";
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(int iParam0) // Position - 0x1DA6C
{
	switch (iParam0)
	{
		case 0:
			return "Morning";
	
		case 1:
			return "Day";
	
		case 2:
			return "LongDay";
	
		case 3:
			return "Afternoon";
	
		case 4:
			return "Evening";
	
		case 5:
			return "Night";
	
		default:
		
	}

	return "";
}

void func_1007(Player plParam0) // Position - 0x1DACE
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (Global_1072759.f_21353.f_1[player /*8*/] == 0)
		return;

	func_1008(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 0);
	Global_1072759.f_21353.f_1[player /*8*/] = 0;
	return;
}

void func_1008(Player plParam0) // Position - 0x1DB3A
{
	if (Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 = 0;
	}

	return;
}

void func_1009(Hash hParam0) // Position - 0x1DB75
{
	int feedMessage;

	feedMessage = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(hParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(95));

	if (func_1190(feedMessage))
		UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(feedMessage, true);

	return;
}

void func_1010(int iParam0) // Position - 0x1DB9E
{
	Global_1940252.f_245.f_1306 = iParam0;
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_245.f_6, MISC::_GET_STRING_FROM_FLOAT(BUILTIN::TO_FLOAT(Global_1940252.f_245.f_1306), 0));
	return;
}

void func_1011(int iParam0, BOOL bParam1) // Position - 0x1DBCF
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		if (Global_1951910[iParam0 /*23*/].f_5 == 5 && !func_804(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[iParam0 /*23*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[iParam0 /*23*/].f_3, bParam1);

	return;
}

void func_1012(int iParam0, BOOL bParam1) // Position - 0x1DC27
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951910[iParam0 /*23*/].f_3, bParam1);

	return;
}

void func_1013(int iParam0, int iParam1) // Position - 0x1DC50
{
	if (iParam0 < 0)
		return;

	Global_1951910[iParam0 /*23*/].f_1 = Global_1951910[iParam0 /*23*/].f_1 || iParam1;
	return;
}

BOOL func_1014(int iParam0) // Position - 0x1DC78
{
	var unk;
	int i;
	int num;
	int j;
	int num2;
	var unk6;
	var unk7;
	int num3;
	int num4;
	int num5;

	num5 = -1;
	num5.f_1 = -1;
	num5.f_2 = -1;
	func_810(&num5);

	if (num5 == -1)
		return 0;

	if (num5.f_1 == -1)
		return 0;

	if (!func_650(&unk))
		return 0;

	if (!func_651(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 16, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 43, iParam0, 0, 1))
		return 0;

	unk6 = unk.f_1;
	num = func_812(&unk, 7);

	for (i = 0; i <= num - 1; i = i + 1)
	{
		unk.f_1 = unk6;
	
		if (!func_651(&unk, 44, i, 0, 1))
			return 0;
	
		if (!func_651(&unk, 45, 0, 0, 0))
		{
		}
		else
		{
			unk7 = unk.f_1;
			num2 = func_812(&unk, 9);
		
			for (j = 0; j <= num2 - 1; j = j + 1)
			{
				unk.f_1 = unk7;
			
				if (!func_651(&unk, 46, j, 0, 1))
					return 0;
			
				num3 = { func_827(unk) };
			
				switch (num3)
				{
					case 1204986881:
						num4 = func_1191(num5, num5.f_1, num3.f_1);
						num3.f_1 = func_1192(num4);
						break;
				
					case joaat("Stat"):
						num3.f_4 = { func_351(num5, num5.f_1, num3.f_1, 1) };
						break;
				}
			
				if (!func_828(&num3, 4))
					return 0;
			}
		}
	}

	return 1;
}

int func_1015(Any* panParam0) // Position - 0x1DDEB
{
	return func_855(panParam0, 82, 1);
}

int func_1016(Any* panParam0) // Position - 0x1DDFC
{
	return func_855(panParam0, 78, 1);
}

Hash func_1017(Hash hParam0, BOOL bParam1) // Position - 0x1DE0D
{
	switch (hParam0)
	{
		case joaat("kit_pouch_kit"):
			return MISC::GET_HASH_KEY("KIT_POUCH_KIT_MP");
	
		case joaat("kit_pouch_valuables"):
			return MISC::GET_HASH_KEY("KIT_POUCH_VALUABLES_MP");
	
		case joaat("kit_pouch_provisions"):
			return MISC::GET_HASH_KEY("KIT_POUCH_PROVISIONS_MP");
	
		case joaat("kit_pouch_remedies"):
			return MISC::GET_HASH_KEY("KIT_POUCH_REMEDIES_MP");
	
		case 239629152:
			if (bParam1)
				return MISC::GET_HASH_KEY("DOCUMENT_BOUNTY_HUNTER_LICENSE_UPGRADE_01_SHORT");
			break;
	
		case joaat("kit_pouch_materials"):
			return MISC::GET_HASH_KEY("KIT_POUCH_MATERIALS_MP");
	
		case joaat("kit_pouch_ingredients"):
			return MISC::GET_HASH_KEY("KIT_POUCH_INGREDIENTS_MP");
	}

	return 0;
}

const char* func_1018(const char* sParam0, int iParam1) // Position - 0x1DEAF
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_1019() // Position - 0x1DEC9
{
	return 4;
}

float func_1020(float fParam0, float fParam1) // Position - 0x1DED2
{
	return BUILTIN::LOG10(fParam1) / BUILTIN::LOG10(fParam0);
}

int func_1021(int iParam0, int iParam1) // Position - 0x1DEE7
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 5;
			
				case 1:
					return 13;
			
				case 2:
					return 2;
			
				case 3:
					return 15;
			
				case 4:
					return 2;
			
				default:
				
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return 5;
			
				case 1:
					return 13;
			
				case 2:
					return 2;
			
				case 3:
					return 13;
			
				case 4:
					return 2;
			
				default:
				
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return 3;
			
				case 1:
					return 0;
			
				case 2:
					return 2;
			
				case 3:
					return 0;
			
				case 4:
					return 0;
			
				default:
				
			}
			break;
	
		default:
			break;
	}

	return 0;
}

int func_1022(var uParam0, int iParam1) // Position - 0x1DFD1
{
	int value;

	value = func_819(uParam0, iParam1, false);
	return BUILTIN::FLOOR(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(value))) - 1;
}

int func_1023(int iParam0, var uParam1) // Position - 0x1DFF5
{
	switch (iParam0)
	{
		case 0:
			return uParam1->f_2;
	
		case 1:
			return uParam1->f_4;
	
		case 2:
			return uParam1->f_5;
	
		case 3:
			return uParam1->f_1;
	
		case 4:
			return *uParam1;
	
		default:
		
	}

	return -1;
}

var func_1024(Any* panParam0) // Position - 0x1E049
{
	return func_855(panParam0, 80, 1);
}

void func_1025(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x1E05A
{
	int i;
	int num;
	BOOL flag;
	int num2;
	var unk;

	unk = uParam0.f_1;
	num = func_812(&uParam0, 4);

	for (i = 0; i <= num - 1; i = i + 1)
	{
		flag = false;
		uParam0.f_1 = unk;
	
		if (!func_651(&uParam0, 32, i, 0, 1))
			return;
	
		flag = func_1193(uParam0, &num2);
	
		switch (num2)
		{
			case joaat("AWARD_PROCESS"):
				uParam5->f_2 = flag;
				break;
		
			case joaat("AWARD"):
				uParam5->f_1 = flag;
				break;
		
			default:
				break;
		}
	}

	return;
}

void func_1026(int iParam0, Any* panParam1) // Position - 0x1E0D7
{
	MISC::COPY_SCRIPT_STRUCT(&Global_1296390.f_118[iParam0 /*6*/], panParam1, 4);
	return;
}

void func_1027(int iParam0, BOOL bParam1) // Position - 0x1E0F0
{
	Global_1296390.f_118[iParam0 /*6*/].f_4 = bParam1;
	return;
}

void func_1028(int iParam0, var uParam1) // Position - 0x1E106
{
	Global_1296390.f_118[iParam0 /*6*/].f_5 = uParam1;
	return;
}

var func_1029(Any* panParam0) // Position - 0x1E11C
{
	return func_855(panParam0, 70, 1);
}

var func_1030(Any* panParam0) // Position - 0x1E12D
{
	return func_855(panParam0, 71, 1);
}

var func_1031(Any* panParam0) // Position - 0x1E13E
{
	return func_1038(panParam0, 69, 1);
}

var func_1032(Any* panParam0) // Position - 0x1E14F
{
	return func_855(panParam0, 69, 1);
}

var func_1033(Any* panParam0, BOOL bParam1) // Position - 0x1E160
{
	return func_1038(panParam0, 99, bParam1);
}

void func_1034(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x1E172
{
	int i;
	int num;
	BOOL flag;
	int num2;
	var unk;

	unk = uParam0.f_1;
	num = func_812(&uParam0, 4);

	for (i = 0; i <= num - 1; i = i + 1)
	{
		flag = false;
		uParam0.f_1 = unk;
	
		if (!func_651(&uParam0, 32, i, 0, 1))
			return;
	
		flag = func_1193(uParam0, &num2);
	
		switch (num2)
		{
			case joaat("prerequisite"):
				uParam5->f_3 = flag;
				break;
		
			default:
				break;
		}
	}

	return;
}

BOOL func_1035(int iParam0, int iParam1) // Position - 0x1E1E0
{
	switch (iParam0)
	{
		case 0:
			return true;
	
		case 1:
			return true;
	
		case 2:
			return iParam1 & 2 == 0;
	
		case 3:
			return iParam1 & 1 == 0;
	
		case 4:
			return true;
	
		default:
		
	}

	return true;
}

BOOL func_1036(Hash hParam0, int iParam1) // Position - 0x1E230
{
	switch (iParam1)
	{
		case -1989751792:
			return UNLOCK::UNLOCK_IS_UNLOCKED(hParam0) || !UNLOCK::UNLOCK_IS_VISIBLE(hParam0);
	
		case joaat("locked"):
			return !UNLOCK::UNLOCK_IS_UNLOCKED(hParam0);
	
		case joaat("VISIBLE"):
			return UNLOCK::UNLOCK_IS_VISIBLE(hParam0);
	
		case 105823627:
			return UNLOCK::UNLOCK_IS_UNLOCKED(hParam0) && !UNLOCK::UNLOCK_IS_VISIBLE(hParam0);
	
		case 127786994:
			return !UNLOCK::UNLOCK_IS_UNLOCKED(hParam0) && !UNLOCK::UNLOCK_IS_VISIBLE(hParam0);
	
		case joaat("UNLOCKED"):
			return UNLOCK::UNLOCK_IS_UNLOCKED(hParam0);
	
		case 848504716:
			return !UNLOCK::UNLOCK_IS_UNLOCKED(hParam0) && UNLOCK::UNLOCK_IS_VISIBLE(hParam0);
	
		case joaat("HIDDEN"):
			return !UNLOCK::UNLOCK_IS_VISIBLE(hParam0);
	
		case 1605840866:
			return !UNLOCK::UNLOCK_IS_UNLOCKED(hParam0) || !UNLOCK::UNLOCK_IS_VISIBLE(hParam0);
	
		case 1699110072:
			return !UNLOCK::UNLOCK_IS_UNLOCKED(hParam0) || UNLOCK::UNLOCK_IS_VISIBLE(hParam0);
	
		case 1916788071:
			return UNLOCK::UNLOCK_IS_UNLOCKED(hParam0) || UNLOCK::UNLOCK_IS_VISIBLE(hParam0);
	
		case 2078976555:
			return UNLOCK::UNLOCK_IS_UNLOCKED(hParam0) && UNLOCK::UNLOCK_IS_VISIBLE(hParam0);
	
		default:
		
	}

	return false;
}

BOOL func_1037(Any anParam0, int iParam1) // Position - 0x1E35E
{
	switch (iParam1)
	{
		case joaat("UNCLAIMED"):
			return !NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(anParam0);
	
		case joaat("CLAIMED"):
			return NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(anParam0);
	
		default:
		
	}

	return false;
}

var func_1038(Any* panParam0, int iParam1, BOOL bParam2) // Position - 0x1E391
{
	var unk;

	panParam0->f_2 = iParam1;
	!DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&unk, panParam0);
	return unk;
}

int func_1039() // Position - 0x1E3AD
{
	int value;

	value = func_818();
	return BUILTIN::FLOOR(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(value))) - 1;
}

int func_1040(Any* panParam0) // Position - 0x1E3CC
{
	return func_855(panParam0, 89, 1);
}

struct<6> func_1041(int iParam0) // Position - 0x1E3DD
{
	var unk;
	int num;
	var unk11;

	if (!func_650(&unk))
		return unk11;

	if (!func_651(&unk, 13, 0, 0, 1))
		return unk11;

	if (!func_651(&unk, 15, 0, 0, 1))
		return unk11;

	if (!func_651(&unk, 50, iParam0, 0, 1))
		return unk11;

	num = iParam0;
	num.f_1 = func_1194(&unk);
	num.f_2 = func_1195(&unk);
	num.f_3 = func_1196(&unk);

	switch (num.f_3)
	{
		case joaat("int"):
			num.f_4 = func_1197(&unk);
			break;
	
		default:
			break;
	}

	func_1198(unk, &num);
	return num;
}

BOOL func_1042(var uParam0, BOOL bParam1) // Position - 0x1E489
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk.f_3 = -1;
	unk.f_3.f_1 = -1;
	unk.f_3.f_2 = -1;
	unk.f_3.f_4 = -1;
	unk.f_3.f_5 = -1;
	unk.f_9 = -1;
	unk.f_3 = { func_645(bParam1) };

	if (uParam0->f_5 & 1 != 0)
	{
		if (unk.f_3 == -1 || unk.f_3.f_1 == -1)
			return false;
	
		if (!func_336(8))
			return false;
	}

	if (uParam0->f_5 & 2 != 0)
	{
		if (unk.f_3 == -1 || unk.f_3.f_1 == -1)
			return false;
	
		if (!func_617(unk.f_3, unk.f_3.f_1, unk.f_3.f_2, 0))
			return false;
	}

	return true;
}

int func_1043(Any* panParam0) // Position - 0x1E54A
{
	return func_855(panParam0, 67, 1);
}

var func_1044(Any* panParam0) // Position - 0x1E55B
{
	return func_855(panParam0, 94, 1);
}

void func_1045(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x1E56C
{
	int i;
	int num;
	BOOL flag;
	int num2;
	var unk;

	unk = uParam0.f_1;
	num = func_812(&uParam0, 4);

	for (i = 0; i <= num - 1; i = i + 1)
	{
		flag = false;
		uParam0.f_1 = unk;
	
		if (!func_651(&uParam0, 32, i, 0, 1))
			return;
	
		flag = func_1193(uParam0, &num2);
	
		switch (num2)
		{
			case joaat("REPLAY"):
				uParam5->f_4 = flag;
				break;
		
			default:
				break;
		}
	}

	return;
}

BOOL func_1046(var uParam0, BOOL bParam1) // Position - 0x1E5DA
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk.f_3 = -1;
	unk.f_3.f_1 = -1;
	unk.f_3.f_2 = -1;
	unk.f_3.f_4 = -1;
	unk.f_3.f_5 = -1;
	unk.f_9 = -1;
	unk.f_3 = { func_645(bParam1) };

	if (uParam0->f_4 & 1 != 0)
	{
		if (unk.f_3 == -1 || unk.f_3.f_1 == -1)
			return false;
	
		if (!func_336(8))
			return false;
	}

	if (uParam0->f_4 & 2 != 0)
	{
		if (unk.f_3 == -1 || unk.f_3.f_1 == -1)
			return false;
	
		if (!func_617(unk.f_3, unk.f_3.f_1, unk.f_3.f_2, 0))
			return false;
	}

	return true;
}

int func_1047(Player plParam0) // Position - 0x1E69B
{
	int num;
	int num2;

	num = func_496(plParam0);
	num2 = func_874(plParam0, num);

	if (num != num2)
	{
		if (func_497(num2))
		{
			func_1199(num2);
			num = num2;
		}
	}

	return num;
}

void func_1048(int iParam0, BOOL bParam1) // Position - 0x1E6D1
{
	Player player;

	player = PLAYER::PLAYER_ID();
	Global_1138673[player /*56*/].f_1[iParam0] = Global_1138673[player /*56*/].f_1[iParam0] - Global_1138673[player /*56*/].f_1[iParam0] && bParam1;
	return;
}

int func_1049(int iParam0) // Position - 0x1E70D
{
	if (iParam0 < 0 || iParam0 >= 32)
		return -1;

	return func_875(iParam0);
}

BOOL func_1050(Player plParam0, int iParam1, BOOL bParam2) // Position - 0x1E731
{
	return Global_1138673[plParam0 /*56*/].f_1[iParam1] && bParam2 != false;
}

int func_1051(var uParam0, var uParam1) // Position - 0x1E74C
{
	if (func_863())
		return 0;

	if (!func_18(uParam0))
		return 0;

	Global_1051268 = { uParam0 };
	return 1;
}

void func_1052(int iParam0, BOOL bParam1) // Position - 0x1E77A
{
	Player player;

	player = PLAYER::PLAYER_ID();
	Global_1138673[player /*56*/].f_1[iParam0] = Global_1138673[player /*56*/].f_1[iParam0] || bParam1;
	return;
}

BOOL func_1053(var uParam0, var uParam1) // Position - 0x1E7A7
{
	int num;

	num = func_370(uParam0);
	return num == 3 || num == 4;
}

void func_1054(int iParam0) // Position - 0x1E7C7
{
	func_1200(iParam0);
	return;
}

void func_1055(int iParam0) // Position - 0x1E7D5
{
	if (!func_1050(PLAYER::PLAYER_ID(), iParam0, 8))
		return;

	func_1201();
	Global_1110244.f_15 = 1;
	func_1048(iParam0, 8);
	return;
}

void func_1056(int iParam0) // Position - 0x1E803
{
	func_1202(iParam0);
	func_1203(iParam0, 0);
	return;
}

struct<2> func_1057(int iParam0) // Position - 0x1E818
{
	if (iParam0 < 0)
		return func_838();

	return Global_1207480.f_231[iParam0 /*15*/].f_5;
}

int func_1058(int iParam0) // Position - 0x1E83B
{
	if (!func_871(iParam0))
		return -1;

	return Global_1207480.f_231[iParam0 /*15*/].f_1;
}

struct<2> func_1059(int iParam0) // Position - 0x1E85D
{
	return Global_1219595.f_1[iParam0 /*10*/].f_4;
}

void func_1060(int iParam0) // Position - 0x1E873
{
	int i;
	int num;

	num = Global_1207480.f_231.f_1066[iParam0 /*17*/].f_7;

	if (num > 1)
		num = 1;

	for (i = 0; i < num; i = i + 1)
	{
		func_1204(iParam0, i);
		func_1205(iParam0, i);
	}

	func_1069(iParam0, 0);
	func_1206(iParam0);
	func_1072(iParam0);
	return;
}

BOOL func_1061(int iParam0, Player plParam1, int iParam2) // Position - 0x1E8CB
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam1))
		return false;

	return MISC::IS_BIT_SET(Global_1217218[plParam1 /*72*/][iParam0], iParam2);
}

void func_1062(int iParam0, var uParam1, var uParam2) // Position - 0x1E8F3
{
	Global_1219595.f_1[iParam0 /*10*/].f_4 = { uParam1 };
	Global_1219595.f_1[iParam0 /*10*/].f_6 = func_19(uParam1);
	return;
}

void func_1063(int iParam0, int iParam1) // Position - 0x1E921
{
	Player playerIndex;

	playerIndex = PLAYER::GET_PLAYER_INDEX();

	if (func_1061(iParam0, playerIndex, iParam1))
		return;

	MISC::SET_BIT(&Global_1217218[playerIndex /*72*/][iParam0], iParam1);
	return;
}

BOOL func_1064(int iParam0, int iParam1) // Position - 0x1E951
{
	Player player;
	int i;

	for (i = 0; i < func_1207(); i = i + 1)
	{
		player = func_1208(i);
	
		if (func_1061(iParam0, player, iParam1))
			return true;
	}

	return func_1061(iParam0, PLAYER::PLAYER_ID(), iParam1);
}

void func_1065(int iParam0, BOOL bParam1, int iParam2) // Position - 0x1E993
{
	var unk;
	int num;

	unk = { func_1059(iParam0) };

	if (!func_18(unk))
		return;

	if (func_965(unk))
		return;

	if (!func_1053(unk))
		return;

	if (func_1061(iParam0, PLAYER::PLAYER_ID(), 5))
		return;

	if (bParam1)
		num = 4;
	else
		num = 0;

	func_966(unk, false, num, iParam2, false);
	func_1063(iParam0, 4);
	return;
}

void func_1066(int iParam0, int iParam1) // Position - 0x1EA05
{
	var unk;

	unk = { func_1059(iParam0) };

	if (!func_18(unk))
		return;

	if (func_965(unk))
		return;

	if (!func_1053(unk))
		return;

	if (func_1061(iParam0, PLAYER::PLAYER_ID(), 5))
		return;

	func_966(unk, false, 1, iParam1, false);
	func_1063(iParam0, 5);
	return;
}

int func_1067(int iParam0) // Position - 0x1EA68
{
	return Global_1207480.f_231.f_1066[iParam0 /*17*/].f_13;
}

BOOL func_1068(int iParam0) // Position - 0x1EA7F
{
	if (!func_1080(iParam0))
		return false;

	if (func_1067(iParam0) >= 5)
		return false;

	if (func_1067(iParam0) <= 0)
		return false;

	if (!func_1061(iParam0, PLAYER::PLAYER_ID(), 0))
		return false;

	return true;
}

void func_1069(int iParam0, int iParam1) // Position - 0x1EAC5
{
	var unk;

	unk = { func_1059(iParam0) };

	if (!func_18(unk))
		return;

	if (!func_965(unk) && !func_1053(unk))
		return;

	func_1209(iParam0, 2);
	func_1209(iParam0, 3);
	func_1063(iParam0, 6);
	func_966(unk, false, 2, iParam1, false);
	return;
}

int func_1070(int iParam0) // Position - 0x1EB25
{
	return Global_1207480.f_2505[iParam0 /*6*/].f_4;
}

void func_1071(int iParam0) // Position - 0x1EB3A
{
	var unk;

	unk = { func_1059(iParam0) };

	if (!func_18(unk))
		return;

	if (func_965(unk))
		return;

	if (func_1053(unk))
		return;

	func_1063(iParam0, 2);
	func_1209(iParam0, 3);
	func_1209(iParam0, 6);
	func_372(unk);
	return;
}

void func_1072(int iParam0) // Position - 0x1EB95
{
	Player playerIndex;

	playerIndex = PLAYER::GET_PLAYER_INDEX();
	Global_1217218[playerIndex /*72*/][iParam0] = 0;
	return;
}

void func_1073(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1EBB0
{
	var unk;

	unk = { func_1059(iParam0) };

	if (!func_18(unk))
		return;

	if (!func_965(unk))
		return;

	if (func_1053(unk))
		return;

	if (bParam1)
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);

	if (bParam1)
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);

	func_1063(iParam0, 3);
	func_1210(unk, true, bParam2, bParam3);
	return;
}

BOOL func_1074(int iParam0) // Position - 0x1EC16
{
	Player player;
	int i;
	var unk;

	for (i = 0; i < func_1207(); i = i + 1)
	{
		player = func_1208(i);
	
		if (func_1061(iParam0, player, 2) && !(func_1061(iParam0, player, 4) || func_1061(iParam0, player, 5) || func_1061(iParam0, player, 6)))
			return false;
	}

	unk = { func_1059(iParam0) };
	return !(func_965(unk) || func_1053(unk));
}

void func_1075(int iParam0, int iParam1) // Position - 0x1EC99
{
	Hash scriptHash;
	int num;
	int num2;
	int num3;

	scriptHash = func_1211(iParam0);
	num = func_1212(iParam0, iParam1);
	num2 = func_1213(iParam0, iParam1);
	num3 = func_1067(iParam0);

	switch (func_1214(iParam0, iParam1))
	{
		case -1:
			if (!func_1068(iParam0))
				return;
		
			func_1215(iParam0, iParam1, 1);
			break;
	
		case 0:
			if (!func_1068(iParam0))
				return;
		
			func_1215(iParam0, iParam1, 1);
			break;
	
		case 1:
			if (!func_1068(iParam0))
			{
				func_1216(iParam0, iParam1);
				func_1215(iParam0, iParam1, 0);
				return;
			}
		
			if (num2 < 1)
				return;
		
			if (num2 >= 3)
				return;
		
			func_1215(iParam0, iParam1, 2);
			break;
	
		case 2:
			if (!func_1068(iParam0))
			{
				func_1216(iParam0, iParam1);
				func_1215(iParam0, iParam1, 0);
				return;
			}
		
			if (num2 < 1)
			{
				func_1215(iParam0, iParam1, 1);
				return;
			}
		
			if (num2 >= 3)
			{
				func_1215(iParam0, iParam1, 6);
				return;
			}
		
			if (!func_1217(iParam0, iParam1))
				return;
		
			func_1218(iParam0, iParam1, 0);
			func_1215(iParam0, iParam1, 3);
			break;
	
		case 3:
			if (!func_1068(iParam0))
			{
				func_1216(iParam0, iParam1);
				func_1215(iParam0, iParam1, 0);
				return;
			}
		
			if (num2 < 1)
			{
				func_1215(iParam0, iParam1, 7);
				return;
			}
		
			if (num2 >= 3)
			{
				func_1215(iParam0, iParam1, 6);
				return;
			}
		
			if (!func_1219(iParam0, iParam1))
				return;
		
			func_1215(iParam0, iParam1, 4);
			break;
	
		case 4:
			if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(scriptHash, num, true, 0))
			{
				if (!func_1220(iParam0, iParam1))
				{
					func_1221(iParam0, iParam1, 0);
					func_1222(iParam0, iParam1, 0);
					func_1215(iParam0, iParam1, 2);
				}
			
				return;
			}
		
			func_1215(iParam0, iParam1, 5);
			break;
	
		case 5:
			if (func_1058(iParam0) <= 0 || num3 >= 5 || num3 < 1)
				func_1204(iParam0, iParam1);
		
			if (func_1223(iParam0, iParam1))
				func_1204(iParam0, iParam1);
		
			if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(scriptHash, num, true, 0))
				return;
		
			if (func_1220(iParam0, iParam1))
				return;
		
			func_1221(iParam0, iParam1, 0);
		
			if (func_1084(iParam0, 4) || func_1084(iParam0, 5) || func_1067(iParam0) > 2 && num2 == 3)
			{
				func_1215(iParam0, iParam1, 6);
			}
			else
			{
				func_1222(iParam0, iParam1, 0);
				func_1215(iParam0, iParam1, 8);
			}
			break;
	
		case 6:
			if (!func_1074(iParam0))
				return;
		
			func_1215(iParam0, iParam1, 7);
			break;
	
		case 7:
			func_1216(iParam0, iParam1);
			func_1215(iParam0, iParam1, 8);
			break;
	
		case 8:
			func_1063(iParam0, 7);
		
			if (num2 == 2 || num2 == 3)
				return;
		
			func_1215(iParam0, iParam1, 1);
			func_1209(iParam0, 7);
			break;
	}

	return;
}

BOOL func_1076(int iParam0, int iParam1) // Position - 0x1EF91
{
	int volLockRequestId;

	volLockRequestId = func_1224(iParam0, iParam1);

	if (volLockRequestId == 0)
		return true;

	if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(volLockRequestId))
	{
		func_1225(iParam0, iParam1, 0);
		return true;
	}

	func_1225(iParam0, iParam1, 0);
	return true;
}

void func_1077(int iParam0, int iParam1) // Position - 0x1EFCE
{
	int num;
	int num2;

	if (!func_858(iParam0, 8))
		return;

	num = func_1226(iParam0, iParam1);
	num2 = func_1058(iParam0);

	if (!func_1080(iParam0) || func_1067(iParam0) >= 5)
	{
		if (num != 1)
		{
			func_1227(iParam0, iParam1);
			func_1228(iParam0, iParam1, 1);
		}
	
		return;
	}

	switch (num)
	{
		case -2:
			break;
	
		case -1:
			if (!func_18(func_1057(iParam0)))
				return;
		
			if (func_1229(iParam0, iParam1) <= 0)
			{
				func_1228(iParam0, iParam1, 0);
				return;
			}
			else
			{
				if (num2 == 1)
					func_1228(iParam0, iParam1, 5);
				else
					func_1228(iParam0, iParam1, 2);
			
				return;
			}
			break;
	
		case 0:
			if (func_1229(iParam0, iParam1) > 0)
			{
				func_1228(iParam0, iParam1, 2);
				return;
			}
			break;
	
		case 1:
			func_1228(iParam0, iParam1, -1);
			break;
	
		case 2:
			if (func_1230(iParam0, iParam1) != 0)
			{
				func_1228(iParam0, iParam1, 4);
				return;
			}
		
			func_1231(iParam0, iParam1, false);
			func_1228(iParam0, iParam1, 3);
			break;
	
		case 3:
			if (func_1224(iParam0, iParam1) == 0)
			{
				func_1228(iParam0, iParam1, 2);
				return;
			}
		
			if (func_1232(iParam0, iParam1))
			{
				func_1228(iParam0, iParam1, 4);
				return;
			}
			break;
	
		case 4:
			if (num2 == 1)
			{
				VOLUME::_0xD4FA73FE628FEC63(func_1230(iParam0, iParam1), 160);
				func_1228(iParam0, iParam1, 7);
				return;
			}
		
			if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(func_1230(iParam0, iParam1)))
			{
				func_1233(iParam0, iParam1);
				func_1228(iParam0, iParam1, 2);
				return;
			}
			break;
	
		case 5:
			if (func_1213(iParam0, iParam1) == 2 || func_1067(iParam0) == 2 || num2 > 1)
			{
				func_1228(iParam0, iParam1, 2);
				return;
			}
			break;
	
		case 6:
			if (func_1224(iParam0, iParam1) == 0)
			{
				func_1228(iParam0, iParam1, 5);
				return;
			}
		
			if (func_1213(iParam0, iParam1) == 2 || func_1067(iParam0) == 2 || num2 > 1)
			{
				func_1076(iParam0, iParam1);
				func_1228(iParam0, iParam1, 2);
				return;
			}
		
			if (func_1232(iParam0, iParam1))
			{
				func_1228(iParam0, iParam1, 7);
				return;
			}
			break;
	
		case 7:
			if (func_1213(iParam0, iParam1) == 2 || func_1067(iParam0) == 2 || num2 > 1)
			{
				VOLUME::_0xD4FA73FE628FEC63(func_1230(iParam0, iParam1), 32);
				func_1228(iParam0, iParam1, 4);
				return;
			}
		
			if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(func_1230(iParam0, iParam1)))
			{
				func_1233(iParam0, iParam1);
				func_1228(iParam0, iParam1, 5);
				return;
			}
			break;
	}

	return;
}

void func_1078(int iParam0, int iParam1) // Position - 0x1F290
{
	Hash scriptHash;
	int num;
	int num2;
	int num3;

	if (!func_858(iParam0, 16))
		return;

	scriptHash = func_1211(iParam0);
	num = func_1212(iParam0, iParam1);
	num3 = func_1213(iParam0, iParam1);

	if (num3 > 0)
	{
		if (!func_1080(iParam0))
		{
			func_1234(iParam0, iParam1, 0);
			return;
		}
	}

	switch (num3)
	{
		case -1:
			if (!func_18(func_1057(iParam0)))
				return;
		
			if (func_1235(iParam0, iParam1) <= 0)
			{
				func_1234(iParam0, iParam1, 0);
				return;
			}
			else
			{
				func_1234(iParam0, iParam1, 1);
				return;
			}
			break;
	
		case 0:
			if (!func_1080(iParam0))
				return;
		
			if (func_1235(iParam0, iParam1) <= 0)
				return;
		
			num2 = func_1236(iParam0);
		
			if (num2 != -15 && func_1237(num2))
				return;
		
			func_1234(iParam0, iParam1, 1);
			break;
	
		case 1:
			if (func_1238(iParam0, iParam1, 0))
			{
				func_1234(iParam0, iParam1, 2);
				func_1089(iParam0, 3);
				return;
			}
			break;
	
		case 2:
			if (!func_1238(iParam0, iParam1, 0) && !NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(scriptHash, num, false, 0))
			{
				func_1234(iParam0, iParam1, 3);
				return;
			}
		
			if (func_1067(iParam0) >= 3)
			{
				func_1234(iParam0, iParam1, 3);
				return;
			}
			break;
	
		case 3:
			if (func_1067(iParam0) >= 3)
				return;
		
			if (!func_1239(iParam0, iParam1))
			{
				func_1234(iParam0, iParam1, 2);
				return;
			}
		
			if (func_1083(iParam0) != 255)
				func_1089(iParam0, 2);
			else
				func_1089(iParam0, 1);
		
			num2 = func_1236(iParam0);
		
			if (num2 != -15 && func_1237(num2))
			{
				func_1234(iParam0, iParam1, 0);
				return;
			}
		
			if (func_1067(iParam0) >= 4)
				return;
		
			if (func_1240(iParam0, 7))
				return;
		
			func_1234(iParam0, iParam1, 1);
			break;
	}

	return;
}

void func_1079(int iParam0, int iParam1) // Position - 0x1F47A
{
	Global_1207480.f_231.f_1066[iParam0 /*17*/].f_13 = iParam1;
	return;
}

BOOL func_1080(int iParam0) // Position - 0x1F493
{
	BOOL flag;

	flag = !func_1242(func_1059(iParam0), func_1241(iParam0), 0);
	return flag;
}

int func_1081(int iParam0) // Position - 0x1F4B1
{
	var unk;
	int num;
	int num2;
	int num3;

	if (!func_871(iParam0))
		return 0;

	unk = 2;
	unk.f_1 = -1;
	unk.f_5 = -1;
	unk.f_5.f_1 = -1;
	unk.f_5.f_3 = -1;
	unk.f_5.f_4 = -1;
	unk.f_5.f_5 = -1;
	unk.f_5.f_6 = -1;
	unk.f_5.f_6.f_1 = -1;
	unk.f_5.f_9 = 2;
	num = { Global_1207480.f_231[iParam0 /*15*/] };
	unk.f_1 = 0;
	Global_1207480.f_231[iParam0 /*15*/] = { unk };
	num2 = num;
	num3 = num.f_5.f_9;
	Global_1207480.f_13[num3] = Global_1207480.f_13[num3] - 1;
	Global_1207480.f_8[num2] = Global_1207480.f_8[num2] - 1;

	if (num2 != num3)
		Global_1207480.f_18[num2] = Global_1207480.f_18[num2] - 1;

	if (func_1243(iParam0))
		Global_1207480.f_23[num2] = Global_1207480.f_23[num2] - 1;

	return 1;
}

void func_1082(int iParam0, Player plParam1) // Position - 0x1F5A8
{
	if (iParam0 < 0)
		return;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam1))
		return;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam1))
		return;

	Global_1207480.f_2505[iParam0 /*6*/].f_4 = GANG::NETWORK_GET_GANG_ID(plParam1);
	Global_1207480.f_2505[iParam0 /*6*/].f_5 = plParam1;
	return;
}

Player func_1083(int iParam0) // Position - 0x1F5F5
{
	return Global_1207480.f_2505[iParam0 /*6*/].f_5;
}

BOOL func_1084(int iParam0, int iParam1) // Position - 0x1F60A
{
	Player Plr;
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		Plr = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Plr))
		{
		}
		else if (func_1061(iParam0, Plr, iParam1))
		{
			return true;
		}
	}

	return false;
}

BOOL func_1085(int iParam0) // Position - 0x1F64C
{
	int num;
	var value;

	if (!func_858(iParam0, 512))
		return false;

	num = func_1244(iParam0);

	if (num <= 0)
		return false;

	value = func_289(func_1245(iParam0, 0), 0f, 0f, 0f, (float)num, (float)num, (float)num * 2, joaat("volSphere"), false, 8);
	return SCRIPTS::COUNT_PLAYER_BITS(&value) <= 0;
}

BOOL func_1086(int iParam0) // Position - 0x1F6A2
{
	Player Plr;
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		Plr = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Plr))
		{
		}
		else if (!func_1246(iParam0, Plr))
		{
			return false;
		}
	}

	return true;
}

void func_1087(int iParam0) // Position - 0x1F6E3
{
	Player Plr;
	Player gangLeader;
	int gangId;

	if (Global_1207480.f_231.f_1066[iParam0 /*17*/].f_6 & 4096 != 0)
		return;

	Plr = Global_1207480.f_2505[iParam0 /*6*/].f_5;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Plr))
		return;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Plr))
	{
		gangId = GANG::NETWORK_GET_GANG_ID(Plr);
	
		if (Global_1207480.f_2505[iParam0 /*6*/].f_4 != gangId)
		{
			if (GANG::NETWORK_IS_GANG_ID_VALID(Global_1207480.f_2505[iParam0 /*6*/].f_4) && GANG::NETWORK_IS_GANG_IN_SESSION(Global_1207480.f_2505[iParam0 /*6*/].f_4) && GANG::NETWORK_GET_NUM_GANG_MEMBERS(Global_1207480.f_2505[iParam0 /*6*/].f_4) > 0)
			{
				gangLeader = GANG::NETWORK_GET_GANG_LEADER(Global_1207480.f_2505[iParam0 /*6*/].f_4);
				func_1082(iParam0, gangLeader);
			}
			else if (GANG::NETWORK_GET_GANG_LEADER(gangId) == Plr)
			{
				Global_1207480.f_2505[iParam0 /*6*/].f_4 = gangId;
			}
			else
			{
				func_1247(iParam0);
			}
		}
	
		return;
	}

	if (Global_1207480.f_2505[iParam0 /*6*/].f_4 == 0)
	{
		func_1247(iParam0);
		return;
	}

	if (!GANG::NETWORK_IS_GANG_IN_SESSION(Global_1207480.f_2505[iParam0 /*6*/].f_4))
	{
		func_1247(iParam0);
		return;
	}

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(Global_1207480.f_2505[iParam0 /*6*/].f_4);

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(gangLeader))
	{
		func_1247(iParam0);
		return;
	}

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(gangLeader))
	{
		func_1247(iParam0);
		return;
	}

	func_1082(iParam0, gangLeader);
	return;
}

BOOL func_1088(int iParam0) // Position - 0x1F843
{
	Player Plr;
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		Plr = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Plr))
		{
		}
		else if (Global_1217218[Plr /*72*/][iParam0] > 127)
		{
			return true;
		}
	}

	return false;
}

void func_1089(int iParam0, int iParam1) // Position - 0x1F889
{
	Global_1207480.f_231[iParam0 /*15*/].f_1 = iParam1;
	return;
}

int func_1090(var uParam0) // Position - 0x1F89F
{
	return *uParam0;
}

struct<40> func_1091(var uParam0, int iParam1) // Position - 0x1F8AA
{
	var unk;

	unk = { func_1248(uParam0, iParam1) };
	func_1249(uParam0, iParam1);
	return unk;
}

BOOL func_1092(var uParam0, var uParam1) // Position - 0x1F8CC
{
	if (uParam0->f_2 == -1)
		return false;

	if (uParam1->f_2 == -1)
		return false;

	if (uParam0->f_2 != uParam1->f_2)
		return false;

	if (uParam0->f_3 != uParam1->f_3)
		return false;

	if (uParam0->f_4 != -1 && uParam1->f_1 != -1)
	{
		if (uParam0->f_1 == uParam1->f_1 && uParam0->f_4 == uParam1->f_4)
			return true;
	
		return false;
	}

	if (uParam0->f_5 == -1)
		return false;

	if (uParam1->f_5 == -1)
		return false;

	if (uParam0->f_5 != uParam1->f_5)
		return false;

	if (uParam0->f_7 != uParam1->f_7)
		return false;

	if (uParam0->f_8 != uParam1->f_8)
		return false;

	if (uParam0->f_8.f_1 != uParam1->f_8.f_1)
		return false;

	if (!func_929(uParam0->f_8.f_5, uParam1->f_8.f_5))
		return false;

	if (uParam0->f_8.f_5.f_2 != uParam1->f_8.f_5.f_2)
		return false;

	if (uParam0->f_8.f_5.f_3 != uParam1->f_8.f_5.f_3)
		return false;

	if (uParam0->f_8.f_5.f_4 != uParam1->f_8.f_5.f_4)
		return false;

	if (uParam0->f_8.f_5.f_5 != uParam1->f_8.f_5.f_5)
		return false;

	if (!func_929(uParam0->f_8.f_5.f_6, uParam1->f_8.f_5.f_6))
		return false;

	if (uParam0->f_8.f_5.f_8 != uParam1->f_8.f_5.f_8)
		return false;

	if (uParam0->f_8.f_5.f_9 != uParam1->f_8.f_5.f_9)
		return false;

	return true;
}

void func_1093(var uParam0, int iParam1) // Position - 0x1FA5F
{
	*uParam0 = iParam1;
	return;
}

int func_1094(var uParam0) // Position - 0x1FA6C
{
	return *uParam0;
}

BOOL func_1095(var uParam0) // Position - 0x1FA77
{
	if (func_18(*uParam0))
		return true;

	if (uParam0->f_2 != 0)
	{
		if (uParam0->f_3 != -1)
			return true;
	
		if (uParam0->f_4 != -1)
			return true;
	
		if (uParam0->f_5 != -1)
			return true;
	}

	return false;
}

int func_1096(var uParam0, int iParam1) // Position - 0x1FABB
{
	int num;
	int num2;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	int i;

	num = func_1250(iParam1);
	num2 = (num + Global_1207480.f_3[iParam1]) - 1;

	if (Global_1207480.f_23[iParam1] != 0)
		num2 = (num + func_1251(iParam1)) - 1;

	flag = func_18(*uParam0);
	flag2 = uParam0->f_2 != 0 && uParam0->f_3 != -1;
	flag3 = uParam0->f_2 != 0 && uParam0->f_4 != -1;
	flag4 = uParam0->f_2 != 0 && uParam0->f_5 != -1;

	for (i = num; i <= num2; i = i + 1)
	{
		if (flag)
			if (func_929(Global_1207480.f_231[i /*15*/].f_5, *uParam0))
				return i;
	
		if (flag2)
			if (Global_1207480.f_231[i /*15*/].f_5.f_2 == uParam0->f_2 && Global_1207480.f_231[i /*15*/].f_5.f_3 == uParam0->f_3)
				return i;
	
		if (flag3)
			if (Global_1207480.f_231[i /*15*/].f_5.f_2 == uParam0->f_2 && Global_1207480.f_231[i /*15*/].f_5.f_4 == uParam0->f_4)
				return i;
	
		if (flag4)
			if (Global_1207480.f_231[i /*15*/].f_5.f_2 == uParam0->f_2 && Global_1207480.f_231[i /*15*/].f_5.f_5 == uParam0->f_5)
				return i;
	}

	return -1;
}

BOOL func_1097(int iParam0) // Position - 0x1FC1A
{
	int gangId;

	gangId = func_868(iParam0);

	if (gangId == 0)
		return false;

	if (!GANG::NETWORK_IS_GANG_IN_SESSION(gangId))
		return false;

	return true;
}

void func_1098(var uParam0, var uParam1) // Position - 0x1FC43
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_3 = 255;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_8 = 2;
	unk.f_8.f_1 = -1;
	unk.f_8.f_5 = -1;
	unk.f_8.f_5.f_1 = -1;
	unk.f_8.f_5.f_3 = -1;
	unk.f_8.f_5.f_4 = -1;
	unk.f_8.f_5.f_5 = -1;
	unk.f_8.f_5.f_6 = -1;
	unk.f_8.f_5.f_6.f_1 = -1;
	unk.f_8.f_5.f_9 = 2;
	unk.f_23.f_1 = 1024;
	unk.f_23.f_4 = -15;
	unk.f_23.f_5 = 255;
	unk.f_23.f_8 = 1;
	unk.f_23.f_8.f_1.f_1 = 2147483647;
	unk.f_23.f_13 = -1;
	unk.f_2 = 0;
	unk.f_5 = 7;
	unk.f_8.f_1 = 2;
	unk.f_8 = 1;
	unk.f_8.f_5.f_9 = 1;
	unk.f_8.f_5 = { uParam0 };
	func_1252(&(Global_1107816.f_33.f_513), &unk, false, 0, 0, 0, 0);
	return;
}

void func_1099(int iParam0, int iParam1) // Position - 0x1FD32
{
	Global_1107816.f_33[iParam0 /*16*/].f_3.f_7 = iParam1;
	return;
}

int func_1100(int iParam0) // Position - 0x1FD4A
{
	return Global_1107816.f_33[iParam0 /*16*/].f_3.f_7;
}

int func_1101() // Position - 0x1FD60
{
	return Global_1901671.f_319.f_45;
}

BOOL func_1102(var uParam0, var uParam1, int iParam2) // Position - 0x1FD71
{
	int gangId;
	BOOL flag;
	int num;

	gangId = func_868(iParam2);
	flag = gangId != 0 && GANG::NETWORK_IS_GANG_IN_SESSION(gangId);

	if (Global_1110244.f_18)
	{
		num = func_1253(uParam0);
	
		if (func_1254(num, flag))
		{
			func_1098(uParam0);
			return true;
		}
	}
	else
	{
		func_1098(uParam0);
		return true;
	}

	return false;
}

BOOL func_1103(int iParam0) // Position - 0x1FDCC
{
	BOOL flag;
	int i;

	flag = false;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (!Global_1295666.f_17[i])
		{
		}
		else
		{
			flag = flag || Global_1138673[i /*56*/].f_1[iParam0];
		}
	}

	return flag;
}

void func_1104(int iParam0) // Position - 0x1FE10
{
	Global_1107816.f_33[iParam0 /*16*/].f_1 = -1;
	return;
}

int func_1105() // Position - 0x1FE25
{
	return Global_1901671.f_319.f_46;
}

int func_1106() // Position - 0x1FE36
{
	int i;
	int num;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (func_868(i) == 0)
		{
		}
		else if (!GANG::NETWORK_IS_GANG_IN_SESSION(func_868(i)))
		{
		}
		else
		{
			num = num + 1;
		}
	}

	return num;
}

int func_1107() // Position - 0x1FE77
{
	return Global_1107816.f_750.f_1;
}

void func_1108() // Position - 0x1FE88
{
	var unk;
	var value;
	Player sessionHost;

	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_7 = -1;
	unk.f_7.f_1 = -1;
	unk.f_10 = 255;
	unk.f_17 = -1;
	unk.f_18 = -1;
	unk.f_19 = 7;
	unk.f_19.f_1 = 255;
	unk.f_19.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	unk.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	unk.f_27.f_1 = -1;

	if (!func_666())
		return;

	sessionHost = NETWORK::_NETWORK_GET_SESSION_HOST();

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(sessionHost))
		return;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(sessionHost))
		return;

	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, sessionHost);
	unk.f_10 = PLAYER::PLAYER_ID();
	unk.f_11 = GANG::NETWORK_GET_GANG_ID(unk.f_10);
	unk.f_4 = 10;
	func_456();
	func_1121(&unk, value);
	return;
}

void func_1109(int iParam0) // Position - 0x1FF60
{
	func_1255(iParam0);
	func_1104(iParam0);
	func_1256(iParam0);
	return;
}

int func_1110(int iParam0, var uParam1) // Position - 0x1FF7A
{
	BOOL flag;

	flag = func_1103(iParam0);

	if (flag & 8 != 0)
		return 0;

	if (Global_1110244.f_19)
		if (!func_930(iParam0, 4))
			if (NETWORK::NETWORK_SESSION_GET_SESSION_FLAGS() & 9 != 0)
				return 0;
	else if (NETWORK::NETWORK_SESSION_GET_SESSION_FLAGS() & 9 != 0)
		return 0;

	func_1256(iParam0);
	func_1104(iParam0);
	*uParam1 = 0;
	return 1;
}

int func_1111(int iParam0, var uParam1) // Position - 0x1FFDD
{
	func_1256(iParam0);
	func_1104(iParam0);
	*uParam1 = 0;
	return 1;
}

struct<2> func_1112() // Position - 0x1FFF6
{
	return Global_1110244.f_11;
}

var func_1113() // Position - 0x2000A
{
	return Global_1110244.f_11.f_3;
}

void func_1114(int iParam0) // Position - 0x2001A
{
	Global_1110244.f_21.f_13.f_1 = iParam0;
	return;
}

void func_1115(int iParam0) // Position - 0x2002E
{
	Global_1110244.f_21.f_13.f_2 = iParam0;
	return;
}

void func_1116(int iParam0) // Position - 0x20042
{
	Global_1110244.f_21.f_13.f_3 = iParam0;
	return;
}

void func_1117() // Position - 0x20056
{
	func_1257(&(Global_1110244.f_21.f_13));
	return;
}

void func_1118() // Position - 0x2006A
{
	Global_1138673[PLAYER::PLAYER_ID() /*56*/].f_34 = 0;
	return;
}

int func_1119(int iParam0) // Position - 0x2007F
{
	if (iParam0 == 255)
		iParam0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (iParam0 < 0 || iParam0 >= 32)
		return -1;

	return Global_1155150[iParam0 /*30*/].f_3.f_1;
}

BOOL func_1120(int iParam0, int iParam1) // Position - 0x200B6
{
	return iParam0->f_3 && iParam1 != false;
}

void func_1121(Any* panParam0, var uParam1) // Position - 0x200C7
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
		return;

	*panParam0 = 9;
	panParam0->f_1 = PLAYER::PLAYER_ID();
	panParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, panParam0, 31, 32, &uParam1);
	return;
}

void func_1122(int iParam0) // Position - 0x200FE
{
	Global_1110244.f_21.f_112.f_1 = iParam0;
	return;
}

void func_1123(int iParam0) // Position - 0x20112
{
	Global_1110244.f_21.f_112 = iParam0;
	return;
}

void func_1124(int iParam0) // Position - 0x20124
{
	Global_1110244.f_21.f_112.f_2 = iParam0;
	return;
}

void func_1125(var uParam0, var uParam1) // Position - 0x20138
{
	Global_1110244.f_21.f_112.f_3 = { uParam0 };
	return;
}

void func_1126(int iParam0) // Position - 0x20150
{
	Global_1110244.f_21.f_112.f_5 = iParam0;
	return;
}

void func_1127(int iParam0) // Position - 0x20164
{
	Global_1110244.f_21.f_112.f_6 = iParam0;
	return;
}

void func_1128(int iParam0) // Position - 0x20178
{
	Global_1110244.f_21.f_112.f_7 = iParam0;
	return;
}

void func_1129(int iParam0) // Position - 0x2018C
{
	Global_1110244.f_21.f_112.f_6 = iParam0;
	return;
}

void func_1130(Any* panParam0) // Position - 0x201A0
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1110244.f_21.f_112.f_9), panParam0, 4);
	return;
}

BOOL func_1131(int iParam0) // Position - 0x201B9
{
	return iParam0 >= 0 && iParam0 < 36;
}

int func_1132(int iParam0) // Position - 0x201CF
{
	return Global_1107816.f_33[iParam0 /*16*/].f_3;
}

BOOL func_1133(int iParam0) // Position - 0x201E3
{
	return iParam0 >= 0 && iParam0 < 62;
}

int func_1134(int iParam0) // Position - 0x201F9
{
	return Global_1107816.f_33[iParam0 /*16*/].f_3.f_1;
}

BOOL func_1135(int iParam0) // Position - 0x2020F
{
	return iParam0 > -1 && iParam0 < 104;
}

int func_1136(int iParam0) // Position - 0x20225
{
	return Global_1107816.f_33[iParam0 /*16*/].f_3.f_3;
}

BOOL func_1137() // Position - 0x2023B
{
	return Global_1110244.f_21.f_112.f_8;
}

int func_1138(int iParam0) // Position - 0x2024D
{
	return Global_1110244.f_3667[iParam0 /*7*/];
}

int func_1139(int iParam0) // Position - 0x20260
{
	return func_1258(iParam0);
}

void func_1140(int iParam0, Any* panParam1) // Position - 0x2026E
{
	MISC::COPY_SCRIPT_STRUCT(panParam1, &(Global_1107816.f_33[iParam0 /*16*/].f_3.f_9), 4);
	return;
}

Vector3 func_1141(int iParam0) // Position - 0x2028B
{
	return Global_1114893[iParam0 /*70*/].f_7.f_1;
}

float func_1142(int iParam0) // Position - 0x202A1
{
	return Global_1114893[iParam0 /*70*/].f_7;
}

// Unhandled jump detected. Output should be considered invalid
void func_1143(var uParam0, Any anParam1, var uParam2, var uParam3, var uParam4, float fParam5) // Position - 0x202B3
{
	int num;
	int num2;
	int i;
	int Arg;
	var unk;
	Player Plr;

	unk = 7;

	for (i = 0; i <= 31; i = i + 1)
	{
		Plr = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Plr))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Plr))
		{
		}
		else if (!GANG::_NETWORK_IS_GANG_MEMBER(anParam1, Plr))
		{
		}
		else
		{
			if (GANG::NETWORK_IS_GANG_LEADER(Plr))
			{
				uParam0->[0] = Plr;
				goto 0x9F;
			}
		
			if (func_1259(Plr, uParam2, fParam5))
			{
				if (num + 1 < 7)
				{
					uParam0->[1 + num] = Plr;
					num = num + 1;
				}
			}
			else if (num2 < 7)
			{
				unk[num2] = i;
				num2 = num2 + 1;
			}
		}
	}

	for (i = 0; i <= num2 - 1; i = i + 1)
	{
		Arg = unk[i];
		Plr = PLAYER::INT_TO_PLAYERINDEX(Arg);
	
		if (num + 1 < 7)
		{
			uParam0->[1 + num] = Plr;
			num = num + 1;
		}
	}

	return;
}

void func_1144(Any* panParam0, int iParam1) // Position - 0x2039E
{
	MISC::COPY_SCRIPT_STRUCT(&Global_1110244.f_4607.f_3[iParam1 /*9*/], panParam0, 5);
	return;
}

void func_1145(Any* panParam0, int iParam1) // Position - 0x203BA
{
	MISC::COPY_SCRIPT_STRUCT(panParam0, &Global_1110244.f_4607.f_3[iParam1 /*9*/], 5);
	return;
}

void func_1146(Any* panParam0, int iParam1) // Position - 0x203D6
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1110244.f_4607.f_3[iParam1 /*9*/].f_5), panParam0, 4);
	return;
}

void func_1147(Any* panParam0, int iParam1) // Position - 0x203F4
{
	MISC::COPY_SCRIPT_STRUCT(panParam0, &(Global_1110244.f_4607.f_3[iParam1 /*9*/].f_5), 4);
	return;
}

void func_1148(int iParam0) // Position - 0x20412
{
	Global_1149432.f_4920[iParam0 /*3*/] = UNLOCK::_UNLOCK_IS_NEW(Global_1835011[iParam0 /*72*/].f_3);
	Global_1149432.f_4920[iParam0 /*3*/].f_2 = UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*72*/].f_3);
	Global_1149432.f_4920[iParam0 /*3*/].f_1 = UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*72*/].f_3);
	return;
}

Hash func_1149(var uParam0, var uParam1) // Position - 0x20469
{
	return func_19(uParam0);
}

int func_1150(BOOL bParam0, Hash hParam1) // Position - 0x20479
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return 0;

	if (!Global_1102813.f_16)
		return 0;

	if (!func_21())
		return 0;

	if (!func_26())
		return 0;

	Global_0 = hParam1;

	if (bParam0)
		func_1260(&Global_0, 8);

	func_1260(&Global_0, 1);
	return 1;
}

void func_1151(var uParam0, var uParam1, int iParam2, int iParam3, Player plParam4, int iParam5) // Position - 0x204CF
{
	int deedType;
	Hash deedHash;
	Hash data;
	char* str;

	deedType = func_1261(func_1157(uParam0));
	deedHash = func_1149(uParam0);
	str = "";
	data.f_1 = iParam3;
	data = 0;
	data.f_2 = 0;

	if (func_57() == 0)
	{
		data = Global_265213.f_122484.f_80.f_12;
		str = func_1262(Global_265213.f_122484.f_80.f_22);
		func_1263(uParam0, &data, iParam2);
	}

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam4))
	{
		data.f_4 = plParam4;
		data.f_3 = iParam5;
	}
	else
	{
		data.f_4 = 255;
		data.f_3 = 0;
	}

	if (Global_1072759.f_16.f_1)
		data.f_6 = 1;

	data.f_5 = Global_1072759.f_16.f_2;

	if (data.f_5 == -1)
		data.f_5 = deedHash;

	unk_0x6F5BC5C4EAB42B15(data.f_5, 2, str);
	STATS::_STATSTRACKER_DEED_STATUS(deedType, deedHash, iParam2, &data);
	return;
}

void func_1152(BOOL bParam0) // Position - 0x2059F
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_1264(&Global_1940199, 8388608);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_1265(&Global_1940199, 8388608);
	}

	MISC::ENABLE_DISPATCH_SERVICE(DT_BikerBackup, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceRiders, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceAutomobile, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(16, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceHelicopter, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_FireDepartment, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_SwatAutomobile, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_AmbulanceDepartment, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceVehicleRequest, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceAutomobileWaitPulledOver, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceAutomobileWaitCruising, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_Gangs, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_SwatHelicopter, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceBoat, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_ArmyVehicle, bParam0);
	return;
}

void func_1153(BOOL bParam0) // Position - 0x20642
{
	int i;
	Hash crimeType;
	var unk;

	for (i = 0; i <= 58; i = i + 1)
	{
		crimeType = func_1266(i, 1);
	
		if (crimeType == joaat("crime_murder_player") || crimeType == joaat("crime_murder_player_horse") || crimeType == joaat("crime_trample_player"))
		{
		}
		else
		{
			if (bParam0)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_1267(unk);
			}
			else
			{
				func_1268();
			}
		
			LAW::_0xF611DE44AEB36A1D(crimeType, bParam0);
		}
	}

	return;
}

int func_1154(BOOL bParam0) // Position - 0x206B4
{
	if (!bParam0 && func_776(373691918))
		return 0;

	LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(joaat("bountyhuntersglobalcooldown"), bParam0, 0);
	return 1;
}

void func_1155(BOOL bParam0) // Position - 0x206E1
{
	Global_1900460 = Global_1900460 || bParam0;
	return;
}

int func_1156(var uParam0, var uParam1) // Position - 0x206F4
{
	return func_1270(func_1269(uParam0));
}

int func_1157(var uParam0, var uParam1) // Position - 0x20708
{
	return uParam0;
}

int func_1158(var uParam0, var uParam1) // Position - 0x20712
{
	int num;

	num = func_692(uParam0);

	if (num < 0)
		return 0;

	return func_1271(num);
}

int func_1159(var uParam0, var uParam1, int iParam2) // Position - 0x20734
{
	var unk;
	var unk4;
	var unk7;
	int num;

	if (Global_1072759.f_19487 >= 32)
		return -1;

	unk.f_1 = -1;
	unk.f_2 = -1;
	unk4.f_1 = -1;
	unk4.f_2 = -1;

	if (!func_77(uParam0, &unk))
		return -1;

	unk7 = -1;
	unk7.f_1 = -1;
	unk7 = { uParam0 };
	unk7.f_2 = iParam2;

	if (Global_1072759.f_19487 == 0)
	{
		Global_1072759.f_19487.f_1[Global_1072759.f_19487 /*3*/] = { unk7 };
		Global_1072759.f_19487 = Global_1072759.f_19487 + 1;
		return 0;
	}

	num = 0;

	while (num < Global_1072759.f_19487)
	{
		func_77(Global_1072759.f_19487.f_1[num /*3*/], &unk4);
	
		if (unk == unk4)
		{
			Global_1072759.f_19487.f_1[num /*3*/] = { unk7 };
			return num;
		}
		else if (unk > unk4)
		{
			num = num + 1;
		}
		else if (unk < unk4)
		{
			func_1272(num);
			Global_1072759.f_19487.f_1[num /*3*/] = { unk7 };
			return num;
		}
	}

	if (Global_1072759.f_19487 < 31)
	{
		num = Global_1072759.f_19487;
		Global_1072759.f_19487.f_1[num /*3*/] = { unk7 };
		Global_1072759.f_19487 = Global_1072759.f_19487 + 1;
	
		if (Global_1072759.f_19487 > 32)
			Global_1072759.f_19487 = 32;
	
		return num;
	}

	return -1;
}

void func_1160() // Position - 0x208A3
{
	int num;
	var unk;

	num = 0;
	unk.f_1 = -1;
	unk.f_2 = -1;

	while (num < Global_1072759.f_19487)
	{
		func_77(Global_1072759.f_19487.f_1[num /*3*/], &unk);
		num = num + 1;
	}

	return;
}

 func_1161(int iParam0) // Position - 0x208EA
{
	switch (iParam0)
	{
		case 1:
			return 1193206973;
	
		case 2:
			return -1344025432;
	
		case 4:
			return -108962728;
	
		default:
		
	}

	return 0;
}

int func_1162(int iParam0) // Position - 0x20925
{
	switch (iParam0)
	{
		case 4:
			return 1;
	
		default:
		
	}

	return 0;
}

struct<5> func_1163(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x20944
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_397(bParam1) };
	unk.f_4 = 1084182731;
	num = func_1164(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_1279(hParam0, -1823706425))
			{
				unk = { func_502(joaat("kit_camp"), unk, 1084182731, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_1279(hParam0, -1483207246))
			{
				unk = { func_502(joaat("WARDROBE"), unk, 1034665895, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_502(joaat("kit_camp"), unk, 1084182731, bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1311702610))
			{
				unk.f_4 = -1311702610;
			}
			else if (func_1279(hParam0, -1653629781))
			{
				unk = { func_502(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			break;
	
		case joaat("coach"):
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = -1591664384;
			unk = { func_1277(bParam1) };
		
			switch (func_1278(hParam0))
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
			unk = { func_502(joaat("WARDROBE"), unk, 1034665895, bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_1273(bParam1) };
		
			if (iParam2 && func_1274(hParam0, true))
			{
				unk6.f_9 = -1591664384;
			
				if (!func_1275(hParam0, &unk, 1728382685, false, false))
					unk.f_4 = 1728382685;
				else if (!func_1275(hParam0, &unk, -649335959, false, false))
					unk.f_4 = -649335959;
				else if (func_1276(hParam0, &unk6, 1728382685))
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
			
				if (!func_1280(unk, &unk28, bParam1, false, -1))
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
			else if (func_1279(hParam0, -1653629781))
			{
				unk = { func_502(1384535894, unk, 1784584921, bParam1) };
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

int func_1164(Hash hParam0) // Position - 0x20CB8
{
	var unk;

	if (!func_728(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk))
		return 0;

	return unk.f_2;
}

Hash func_1165(Hash hParam0, int iParam1) // Position - 0x20CE3
{
	int num;
	var unk;
	Hash hash;

	if (!func_728(hParam0, 0))
		return 0;

	num = func_1164(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_1281(hParam0, 1399091007))
	{
		func_1282(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

int func_1166(Hash hParam0, BOOL bParam1) // Position - 0x20D5D
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_1283(hParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };

	if (bParam1)
		func_1284(&unk, func_1273(false));

	if (!func_1285(&unk, &num, &num2, false))
		return 0;

	func_1286(num);
	return num2;
}

BOOL func_1167(var uParam0) // Position - 0x20DBC
{
	if (*uParam0 == 0 && uParam0->f_1 == 0 && uParam0->f_2 == 0 && uParam0->f_3 == 0)
		return false;

	return true;
}

void func_1168(int iParam0, int iParam1) // Position - 0x20DF2
{
	if (iParam1 == 0)
		return;

	if (SECURE_LOAD(&iParam0) >= 11)
		return;

	SECURE_STORE(&iParam0->f_1[SECURE_LOAD(&iParam0)], iParam1);
	SECURE_STORE(&iParam0, SECURE_LOAD(&iParam0) + 1);
	return;
}

void func_1169(Any anParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18) // Position - 0x20E22
{
	int i;
	var unk;

	if (!func_612(anParam0))
		return;

	if (Global_1292143.f_2012 < 20)
	{
		Global_1292143.f_2012 = Global_1292143.f_2012 + 1;
	}
	else
	{
		for (i = 0; i < 19; i = i + 1)
		{
			Global_1292143.f_2012.f_1[i /*24*/] = { Global_1292143.f_2012.f_1[i + 1 /*24*/] };
		}
	}

	unk.f_7.f_1 = 11;
	unk.f_7.f_16 = 255;
	unk = { *anParam0 };
	unk.f_4 = iParam1;
	unk.f_7 = { uParam2 };
	unk.f_6 = 1;
	Global_1292143.f_2012.f_1[Global_1292143.f_2012 - 1 /*24*/] = { unk };
	return;
}

BOOL func_1170(Any* panParam0) // Position - 0x20EDD
{
	var SourceStruct;

	MISC::COPY_SCRIPT_STRUCT(panParam0, &SourceStruct, 5);

	if (!func_1287(1))
		return false;

	*panParam0 = Global_1072759.f_28418[51 /*4*/].f_3;
	return true;
}

BOOL func_1171(Any* panParam0, int iParam1, Hash hParam2, int iParam3, int iParam4) // Position - 0x20F0C
{
	var unk;

	panParam0->f_2 = iParam1;
	panParam0->f_3 = hParam2;
	panParam0->f_4 = iParam3;
	unk = panParam0->f_1;

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0))
	{
		panParam0->f_1 = unk;
		return false;
	}

	return true;
}

int func_1172(Any anParam0, int iParam1) // Position - 0x20F45
{
	anParam0->f_2 = iParam1;
	return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(anParam0);
}

struct<8> func_1173(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x20F59
{
	return func_1288(&uParam0, 69, 1);
}

int func_1174(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x20F6A
{
	return func_1289(&uParam0, 93, 1, -1);
}

var func_1175(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x20F7C
{
	return func_1290(&uParam0, 94, 1);
}

BOOL func_1176(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5) // Position - 0x20F8D
{
	Hash i;
	int num;
	int num2;
	BOOL flag;
	BOOL flag2;

	if (!func_1171(&uParam0, 28, hParam5, 0, 1))
		return false;

	num = func_1172(&uParam0, 3);

	for (i = 0; i <= num - 1; i = i + 1)
	{
		num2 = 0;
		flag = 0;
		num2 = func_1291(uParam0, i);
	
		switch (hParam5)
		{
			case joaat("PARTICLE"):
				flag = func_1293(func_1295(num2));
				break;
		
			case joaat("PLAYLIST"):
				flag = func_1293(func_1296(num2));
				break;
		
			case -952694274:
				flag = func_1293(func_1294(num2));
				break;
		
			case joaat("ANIM_SCENE"):
				flag = func_1293(func_1292(num2));
				break;
		
			default:
				break;
		}
	
		flag2 = flag2 || flag;
	}

	return flag2;
}

struct<8> func_1177(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x21041
{
	return func_1288(&uParam0, 87, 1);
}

int func_1178(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x21052
{
	return func_1297(&uParam0, 87, 1);
}

Vector3 func_1179(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x21063
{
	return func_1298(&uParam0, 88, 1);
}

Vector3 func_1180(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x21074
{
	return func_1298(&uParam0, 68, 1);
}

int func_1181(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x21085
{
	return func_1299(func_1297(&uParam0, 89, 1));
}

var func_1182(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x2109A
{
	return func_1290(&uParam0, 90, 1);
}

Vector3 func_1183(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x210AB
{
	return func_1298(&uParam0, 91, 1);
}

int func_1184(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x210BC
{
	return func_1289(&uParam0, 86, 0, -1);
}

int func_1185(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x210CE
{
	return func_1289(&uParam0, 83, 0, -1);
}

int func_1186(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x210E0
{
	return func_1289(&uParam0, 85, 0, -1);
}

int func_1187(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x210F2
{
	return func_1289(&uParam0, 84, 0, -1);
}

int func_1188(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x21104
{
	return func_1289(&uParam0, 92, 1, -1);
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(int iParam0) // Position - 0x21116
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

BOOL func_1190(int iParam0) // Position - 0x21624
{
	return iParam0 != 0;
}

int func_1191(int iParam0, int iParam1, int iParam2) // Position - 0x21630
{
	var unk;

	if (!func_650(&unk))
		return 0;

	if (!func_651(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 17, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 19, iParam0, 0, 1))
		return 0;

	if (!func_651(&unk, 20, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 23, iParam1, 0, 1))
		return 0;

	if (!func_651(&unk, 38, 0, 0, 1))
		return 0;

	if (!func_651(&unk, 40, iParam2, 0, 1))
		return 0;

	return func_821(&unk);
}

var func_1192(int iParam0) // Position - 0x216D4
{
	var unk;

	unk = { func_822(iParam0) };
	return unk;
}

BOOL func_1193(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x216E8
{
	int i;
	int num;
	BOOL flag;
	BOOL flag2;
	var unk;
	var unk2;

	unk2 = uParam0.f_1;
	*uParam5 = func_1300(&uParam0);
	num = func_812(&uParam0, 5);

	for (i = 0; i <= num - 1; i = i + 1)
	{
		uParam0.f_1 = unk2;
	
		if (!func_651(&uParam0, 34, i, 0, 1))
		{
		}
		else
		{
			unk = func_855(&uParam0, 67, 1);
		
			switch (*uParam5)
			{
				case joaat("Challenge"):
					flag = func_1305(unk);
					break;
			
				case joaat("REPLAY"):
					flag = func_1306(unk);
					break;
			
				case joaat("prerequisite"):
					flag = func_1303(unk);
					break;
			
				case joaat("AWARD_PROCESS"):
					flag = func_1302(unk);
					break;
			
				case joaat("Matchmaking"):
					flag = func_1304(unk);
					break;
			
				case joaat("AWARD"):
					flag = func_1301(unk);
					break;
			
				default:
					break;
			}
		
			flag2 = flag2 || flag;
		}
	}

	return flag2;
}

var func_1194(Any* panParam0) // Position - 0x217BC
{
	return func_855(panParam0, 85, 1);
}

var func_1195(Any* panParam0) // Position - 0x217CD
{
	return func_855(panParam0, 86, 1);
}

var func_1196(Any* panParam0) // Position - 0x217DE
{
	return func_855(panParam0, 87, 1);
}

var func_1197(Any* panParam0) // Position - 0x217EF
{
	return func_1038(panParam0, 88, true);
}

void func_1198(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x21800
{
	int i;
	int num;
	BOOL flag;
	int num2;
	var unk;

	unk = uParam0.f_1;
	num = func_812(&uParam0, 4);

	for (i = 0; i <= num - 1; i = i + 1)
	{
		flag = false;
		uParam0.f_1 = unk;
	
		if (!func_651(&uParam0, 32, i, 0, 1))
			return;
	
		flag = func_1193(uParam0, &num2);
	
		switch (num2)
		{
			case joaat("Challenge"):
				uParam5->f_5 = flag;
				break;
		
			default:
				break;
		}
	}

	return;
}

void func_1199(int iParam0) // Position - 0x2186E
{
	if (!func_497(iParam0))
		return;

	Global_1138673[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/] = iParam0;
	return;
}

void func_1200(int iParam0) // Position - 0x2188F
{
	if (!func_1131(iParam0))
		return;

	func_1307(iParam0);
	return;
}

void func_1201() // Position - 0x218AA
{
	if (!func_863())
		return;

	if (!func_18(Global_1051268))
		return;

	func_291(&Global_1051268);
	return;
}

void func_1202(int iParam0) // Position - 0x218D6
{
	func_513(&Global_1140723, iParam0, 1);
	return;
}

void func_1203(int iParam0, int iParam1) // Position - 0x218EC
{
	Global_1140723.f_2[iParam0] = iParam1;
	return;
}

void func_1204(int iParam0, int iParam1) // Position - 0x21900
{
	int thread;

	if (!func_1220(iParam0, iParam1))
		return;

	thread = func_1308(iParam0, iParam1);

	if (!SCRIPTS::IS_THREAD_ACTIVE(thread, false))
		return;

	SCRIPTS::_REQUEST_THREAD_EXIT(thread);
	return;
}

void func_1205(int iParam0, int iParam1) // Position - 0x21935
{
	func_1216(iParam0, iParam1);
	func_1215(iParam0, iParam1, -1);
	return;
}

void func_1206(int iParam0) // Position - 0x2194E
{
	func_291(&(Global_1219595.f_1[iParam0 /*10*/].f_4));
	Global_1219595.f_1[iParam0 /*10*/].f_6 = 0;
	return;
}

int func_1207() // Position - 0x21973
{
	return Global_1102813.f_3673;
}

Player func_1208(int iParam0) // Position - 0x21982
{
	if (iParam0 < 0 || iParam0 >= 7)
		return 255;

	return Global_1102813.f_3675[iParam0];
}

void func_1209(int iParam0, int iParam1) // Position - 0x219AB
{
	Player playerIndex;

	playerIndex = PLAYER::GET_PLAYER_INDEX();
	MISC::CLEAR_BIT(&Global_1217218[playerIndex /*72*/][iParam0], iParam1);
	return;
}

void func_1210(var uParam0, var uParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x219CB
{
	int num;
	var unk;

	if (!func_18(uParam0))
		return;

	if (!func_965(uParam0))
		return;

	if (bParam2)
		func_1309(uParam0);

	if (!func_18(func_213(0)))
	{
		func_968(uParam0, 3);
		func_1152(bParam3);
		func_1153(!bParam4);
		func_1310(uParam0, -1);
	
		if (bParam2 && !func_525(2))
			func_1260(&Global_0, 1024);
	
		func_1155(true);
	}
	else
	{
		func_1310(uParam0, -1);
		func_968(uParam0, 4);
		func_1311(uParam0, false);
	}

	Global_1051645.f_45.f_1 = 1;
	num = func_1157(uParam0);

	if (num != 2 && num != 7)
		if (func_1312(uParam0, &unk))
			MISC::_0x1096603B519C905F(&(unk.f_17));

	return;
}

Hash func_1211(int iParam0) // Position - 0x21AA2
{
	return Global_1207480.f_231.f_1066[iParam0 /*17*/];
}

int func_1212(int iParam0, int iParam1) // Position - 0x21AB7
{
	return Global_1207480.f_231.f_1066[iParam0 /*17*/].f_8[iParam1 /*4*/].f_1;
}

int func_1213(int iParam0, int iParam1) // Position - 0x21AD4
{
	return Global_1207480.f_2505[iParam0 /*6*/][iParam1 /*3*/];
}

int func_1214(int iParam0, int iParam1) // Position - 0x21AEB
{
	return Global_1219595.f_1[iParam0 /*10*/][iParam1 /*3*/];
}

void func_1215(int iParam0, int iParam1, int iParam2) // Position - 0x21B01
{
	Global_1219595.f_1[iParam0 /*10*/][iParam1 /*3*/] = iParam2;
	return;
}

void func_1216(int iParam0, int iParam1) // Position - 0x21B19
{
	int i;

	for (i = 0; i < 2; i = i + 1)
	{
		func_1222(iParam0, iParam1, i);
	}

	return;
}

BOOL func_1217(int iParam0, int iParam1) // Position - 0x21B3D
{
	int num;
	var unk;

	num = func_1235(iParam0, iParam1);

	if (num == 2147483647)
		return true;

	unk = { func_1313(PLAYER::PLAYER_ID()) };

	if (_IS_NULL_VECTOR(unk))
		return false;

	return func_743(unk, func_1245(iParam0, iParam1)) < (float)num;
}

void func_1218(int iParam0, int iParam1, int iParam2) // Position - 0x21B8C
{
	func_1063(iParam0, func_1314(iParam1, iParam2));
	return;
}

BOOL func_1219(int iParam0, int iParam1) // Position - 0x21BA2
{
	int num;
	Hash scriptHash;
	int num2;
	struct<10> args;
	struct<5> args2;
	var args3;

	num = func_1212(iParam0, iParam1);
	scriptHash = func_1211(iParam0);

	if (func_1220(iParam0, iParam1))
		return false;

	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(scriptHash, num, true, 0))
		return false;

	if (func_858(iParam0, 8))
		if (func_1226(iParam0, iParam1) != 4)
			return false;

	SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(scriptHash);

	if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(scriptHash))
	{
		if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(func_1315(iParam0)) <= 0)
			return false;
	
		if (func_858(iParam0, 64))
		{
			args.f_7 = -1;
			args.f_7.f_1 = -1;
			args.f_9 = 255;
			args = num;
			args.f_9 = func_1083(iParam0);
			args.f_1 = { func_1245(iParam0, iParam1) };
			args.f_5 = iParam0;
			args.f_7 = { func_1059(iParam0) };
			num2 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(scriptHash, &args, 10, func_1315(iParam0));
		}
		else if (func_858(iParam0, 128))
		{
			args2 = num;
			args2.f_1 = func_1316(scriptHash);
			args2.f_2 = Global_1207480.f_231.f_1066[iParam0 /*17*/].f_14;
			args2.f_3 = Global_1207480.f_231.f_1066[iParam0 /*17*/].f_15;
			args2.f_4 = Global_1207480.f_231.f_1066[iParam0 /*17*/].f_16;
			num2 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(scriptHash, &args2, 5, func_1315(iParam0));
		}
		else
		{
			num2 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(scriptHash, &args3, 1, func_1315(iParam0));
		}
	
		func_1221(iParam0, iParam1, num2);
		SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(scriptHash);
		func_1317(scriptHash, num);
		return true;
	}

	return false;
}

BOOL func_1220(int iParam0, int iParam1) // Position - 0x21D12
{
	return SCRIPTS::DOES_THREAD_EXIST(Global_1219595.f_1[iParam0 /*10*/][iParam1 /*3*/].f_2);
}

void func_1221(int iParam0, int iParam1, int iParam2) // Position - 0x21D2E
{
	Global_1219595.f_1[iParam0 /*10*/][iParam1 /*3*/].f_2 = iParam2;
	return;
}

void func_1222(int iParam0, int iParam1, int iParam2) // Position - 0x21D48
{
	func_1209(iParam0, func_1314(iParam1, iParam2));
	return;
}

BOOL func_1223(int iParam0, int iParam1) // Position - 0x21D5E
{
	int num;

	if (!func_858(iParam0, 1024))
		return false;

	num = func_1244(iParam0);

	if (num <= 0)
		return false;

	return func_743(Global_34, func_1245(iParam0, iParam1)) > (float)num;
}

int func_1224(int iParam0, int iParam1) // Position - 0x21D9E
{
	return Global_1219595.f_1[iParam0 /*10*/][iParam1 /*3*/].f_1;
}

void func_1225(int iParam0, int iParam1, int iParam2) // Position - 0x21DB6
{
	if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(iParam2))
	{
		Global_1219595.f_1[iParam0 /*10*/][iParam1 /*3*/].f_1 = 0;
		return;
	}

	Global_1219595.f_1[iParam0 /*10*/][iParam1 /*3*/].f_1 = iParam2;
	return;
}

int func_1226(int iParam0, int iParam1) // Position - 0x21DEE
{
	return Global_1207480.f_2505[iParam0 /*6*/][iParam1 /*3*/].f_1;
}

void func_1227(int iParam0, int iParam1) // Position - 0x21E07
{
	func_1233(iParam0, iParam1);
	func_1076(iParam0, iParam1);
	return;
}

void func_1228(int iParam0, int iParam1, int iParam2) // Position - 0x21E20
{
	Global_1207480.f_2505[iParam0 /*6*/][iParam1 /*3*/].f_1 = iParam2;
	return;
}

int func_1229(int iParam0, int iParam1) // Position - 0x21E3B
{
	return Global_1207480.f_231.f_1066[iParam0 /*17*/].f_8[iParam1 /*4*/].f_2;
}

int func_1230(int iParam0, int iParam1) // Position - 0x21E58
{
	return Global_1207480.f_2505[iParam0 /*6*/][iParam1 /*3*/].f_2;
}

void func_1231(int iParam0, int iParam1, BOOL bParam2) // Position - 0x21E71
{
	int num;
	var args;
	var unk9;
	Hash hash;

	if (func_1224(iParam0, iParam1) != 0 && !func_1318(func_1224(iParam0, iParam1)))
		return;

	num = 96;

	if (!bParam2)
		num = num + 128;

	if (func_1076(iParam0, iParam1))
	{
		args = { func_1245(iParam0, iParam1) };
		args.f_4 = BUILTIN::TO_FLOAT(func_1229(iParam0, iParam1));
		args.f_5 = num;
		args.f_6 = func_1319(iParam0);
		unk9 = { func_1059(iParam0) };
		hash = 0;
	
		if (func_18(unk9))
			hash = func_19(unk9);
	
		if (hash != 0)
			args.f_7 = hash;
		else
			args.f_7 = -1546799264;
	
		func_1225(iParam0, iParam1, VOLUME::REQUEST_VOLUME_LOCK_WITH_ARGS(&args));
	}

	return;
}

BOOL func_1232(int iParam0, int iParam1) // Position - 0x21F2A
{
	int num;

	if (func_1230(iParam0, iParam1) != 0)
		return true;

	func_1320(iParam0, iParam1);
	func_1231(iParam0, iParam1, true);
	num = func_1224(iParam0, iParam1);

	if (num == 0)
		return false;

	if (!func_1321(num))
		return false;

	func_1322(iParam0, iParam1, VOLUME::_0x351D71B8B72B858B(func_1224(iParam0, iParam1)));
	return true;
}

void func_1233(int iParam0, int iParam1) // Position - 0x21F8A
{
	int volLockRequestId;

	volLockRequestId = func_1230(iParam0, iParam1);

	if (volLockRequestId == 0)
		return;

	if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(volLockRequestId))
	{
		func_1322(iParam0, iParam1, 0);
		return;
	}

	VOLUME::_RELEASE_LOCK_VOLUME(volLockRequestId);
	func_1322(iParam0, iParam1, 0);
	func_1076(iParam0, iParam1);
	return;
}

void func_1234(int iParam0, int iParam1, int iParam2) // Position - 0x21FD3
{
	Global_1207480.f_2505[iParam0 /*6*/][iParam1 /*3*/] = iParam2;
	return;
}

int func_1235(int iParam0, int iParam1) // Position - 0x21FEC
{
	return Global_1207480.f_231.f_1066[iParam0 /*17*/].f_8[iParam1 /*4*/].f_3;
}

int func_1236(int iParam0) // Position - 0x22009
{
	return Global_1207480.f_231.f_1066[iParam0 /*17*/].f_4;
}

BOOL func_1237(int iParam0) // Position - 0x22020
{
	return Global_1902569 > iParam0;
}

BOOL func_1238(int iParam0, int iParam1, int iParam2) // Position - 0x2202F
{
	Player Plr;
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		Plr = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Plr))
		{
		}
		else if (func_1323(iParam0, iParam1, Plr, iParam2))
		{
			return true;
		}
	}

	return false;
}

BOOL func_1239(int iParam0, int iParam1) // Position - 0x22073
{
	Player Plr;
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		Plr = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Plr))
		{
		}
		else if (!func_1324(iParam0, iParam1, Plr))
		{
			return false;
		}
	}

	return true;
}

BOOL func_1240(int iParam0, int iParam1) // Position - 0x220B6
{
	Player Plr;
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		Plr = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Plr))
		{
		}
		else if (!func_1061(iParam0, Plr, 2))
		{
		}
		else if (!func_1061(iParam0, Plr, iParam1))
		{
			return true;
		}
	}

	return false;
}

BOOL func_1241(int iParam0) // Position - 0x22109
{
	if (!func_871(iParam0))
		return false;

	return Global_1207480.f_231[iParam0 /*15*/].f_5.f_8;
}

BOOL func_1242(var uParam0, var uParam1, BOOL bParam2, int iParam3) // Position - 0x2212D
{
	if (Global_265213.f_122484.f_139 & 8 != 0)
	{
		Global_1072759.f_28307 = 1;
		return true;
	}

	if (func_18(Global_1051268) && !func_929(Global_1051268, uParam0))
	{
		Global_1072759.f_28307 = 2;
		return true;
	}

	if (bParam2 != false && func_741(bParam2))
		return true;

	if (iParam3 != 0 && func_1325(iParam3, 255))
	{
		Global_1072759.f_28307 = 4;
		return true;
	}

	if (Global_263042[Global_1295666 /*65*/] > 2)
	{
		Global_1072759.f_28307 = 5;
		return true;
	}

	if (Global_262155 >= 1)
	{
		Global_1072759.f_28307 = 6;
		return true;
	}

	if (func_360())
	{
		Global_1072759.f_28307 = 7;
		return true;
	}

	if (Global_1572887.f_8 & true != 0)
	{
		if (!func_18(Global_1051268))
		{
			Global_1072759.f_28307 = 8;
			return true;
		}
	}

	if (*Global_265213.f_122646 != 0 && SCRIPTS::DOES_THREAD_EXIST(*Global_265213.f_122646))
	{
		Global_1072759.f_28307 = 9;
		return true;
	}

	Global_1072759.f_28307 = 0;
	return false;
}

BOOL func_1243(int iParam0) // Position - 0x22256
{
	if (iParam0 < 3)
		return false;

	if (iParam0 < 3 + Global_1207480.f_3[1])
		return false;

	if (iParam0 < 35)
		return true;

	if (iParam0 < 35 + Global_1207480.f_3[2])
		return false;

	if (iParam0 < 35 + Global_1207480.f_3[2] + 16)
		return false;

	return true;
}

int func_1244(int iParam0) // Position - 0x222B4
{
	return Global_1207480.f_231.f_1066[iParam0 /*17*/].f_2;
}

Vector3 func_1245(int iParam0, int iParam1) // Position - 0x222CB
{
	return func_1326(Global_1207480.f_231.f_1066[iParam0 /*17*/].f_8[iParam1 /*4*/]);
}

BOOL func_1246(int iParam0, Player plParam1) // Position - 0x222EA
{
	return Global_1217218[plParam1 /*72*/][iParam0] == 0;
}

void func_1247(int iParam0) // Position - 0x22300
{
	Global_1207480.f_2505[iParam0 /*6*/].f_4 = 0;
	Global_1207480.f_2505[iParam0 /*6*/].f_5 = 255;
	return;
}

struct<40> func_1248(var uParam0, int iParam1) // Position - 0x22325
{
	var unk;
	var unk41;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_3 = 255;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_8 = 2;
	unk.f_8.f_1 = -1;
	unk.f_8.f_5 = -1;
	unk.f_8.f_5.f_1 = -1;
	unk.f_8.f_5.f_3 = -1;
	unk.f_8.f_5.f_4 = -1;
	unk.f_8.f_5.f_5 = -1;
	unk.f_8.f_5.f_6 = -1;
	unk.f_8.f_5.f_6.f_1 = -1;
	unk.f_8.f_5.f_9 = 2;
	unk.f_23.f_1 = 1024;
	unk.f_23.f_4 = -15;
	unk.f_23.f_5 = 255;
	unk.f_23.f_8 = 1;
	unk.f_23.f_8.f_1.f_1 = 2147483647;
	unk.f_23.f_13 = -1;

	if (!func_1327(uParam0, iParam1))
		return unk;

	unk41 = { uParam0->f_3[iParam1 /*40*/] };
	uParam0->f_3[iParam1 /*40*/] = { unk };
	return unk41;
}

void func_1249(var uParam0, int iParam1) // Position - 0x2240D
{
	int num;
	int i;
	int num2;
	int num3;
	int num4;

	num = ((uParam0->f_1 + *uParam0) - 1) % uParam0->f_2;

	if (uParam0->f_1 == iParam1)
	{
		num2 = *uParam0;
	
		for (i = 0; i < *uParam0; i = i + 1)
		{
			num3 = (uParam0->f_1 + i) % uParam0->f_2;
		
			if (uParam0->f_3[num3 /*40*/] != -1)
				break;
		
			if (uParam0->f_3[num3 /*40*/].f_4 != -1)
				func_1248(uParam0, num3);
		
			num2 = num2 - 1;
		}
	
		uParam0->f_1 = num3;
		*uParam0 = num2;
	}
	else if (num == iParam1)
	{
		num2 = *uParam0;
	
		for (i = 0; i < *uParam0; i = i + 1)
		{
			num4 = ((num - i) + 5) % uParam0->f_2;
		
			if (uParam0->f_3[num4 /*40*/] != -1)
				break;
		
			func_1248(uParam0, num4);
			num2 = num2 - 1;
		}
	
		*uParam0 = num2;
	}

	return;
}

int func_1250(int iParam0) // Position - 0x2252F
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 3;
	
		case 2:
			return 35;
	
		case 3:
			return 55;
	
		default:
		
	}

	return 0;
}

int func_1251(int iParam0) // Position - 0x2256A
{
	switch (iParam0)
	{
		case 0:
			return 3;
	
		case 1:
			if (Global_1207480.f_3[iParam0] * 2 <= 32)
				return Global_1207480.f_3[iParam0] * 2;
		
			return 32;
	
		case 2:
			if (Global_1207480.f_3[iParam0] * 2 <= 20)
				return Global_1207480.f_3[iParam0] * 2;
		
			return 20;
	
		case 3:
			if (Global_1207480.f_3[iParam0] * 2 <= 16)
				return Global_1207480.f_3[iParam0] * 2;
		
			return 16;
	
		default:
		
	}

	return 0;
}

int func_1252(var uParam0, var uParam1, BOOL bParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x22606
{
	int num;
	int num2;

	if (func_1328(uParam0))
		return 0;

	if (!func_1329(&(uParam1->f_8)))
		return 0;

	if (uParam1->f_2 == -1)
		return 0;

	if (uParam1->f_2 == 5)
		uParam1->f_3 = PLAYER::PLAYER_ID();

	if (uParam1->f_5 == -1)
		return 0;

	if (uParam1->f_8 != uParam1->f_8.f_5.f_9)
		return 0;

	num = func_1330(uParam0, uParam1);

	if (num >= 0)
		return 0;

	switch (uParam1->f_5)
	{
		case 0:
		case 1:
		case 3:
			if (!func_1331(uParam1, bParam2, iParam3, iParam4, iParam5, iParam6))
				return 0;
			break;
	
		default:
			break;
	}

	uParam1->f_7 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	num2 = (uParam0->f_1 + *uParam0) % uParam0->f_2;
	uParam1->f_4 = num2;
	uParam0->f_3[num2 /*40*/] = { *uParam1 };
	func_1093(&uParam0->f_3[num2 /*40*/], 0);
	*uParam0 = *uParam0 + 1;
	return 1;
}

int func_1253(var uParam0, var uParam1) // Position - 0x226F7
{
	var unk;
	int i;
	int num;
	int num2;
	int gangId;

	if (!func_18(uParam0))
		return 0;

	unk = -1;
	unk.f_1 = -1;

	for (i = 0; i <= 31; i = i + 1)
	{
		unk = { func_498(i) };
	
		if (func_929(unk, uParam0))
		{
			num2 = func_875(i);
			gangId = func_868(i);
		
			if (num2 >= 1 && num2 <= 4)
				if (gangId != 0 && GANG::NETWORK_IS_GANG_IN_SESSION(gangId))
					num = num + 1;
		}
	}

	return num;
}

BOOL func_1254(int iParam0, BOOL bParam1) // Position - 0x22782
{
	if (iParam0 > 1)
		return false;

	if (iParam0 < 1)
		return true;

	if (bParam1)
		return true;

	return false;
}

void func_1255(int iParam0) // Position - 0x227B1
{
	Global_1107816.f_33[iParam0 /*16*/] = 0;
	return;
}

void func_1256(int iParam0) // Position - 0x227C4
{
	var SourceStruct;

	SourceStruct = -1;
	SourceStruct.f_1 = -1;
	SourceStruct.f_2 = -1;
	SourceStruct.f_3 = -1;
	SourceStruct.f_5 = -1;
	SourceStruct.f_5.f_1 = -1;
	SourceStruct.f_9.f_1 = -1;
	MISC::COPY_SCRIPT_STRUCT(&(Global_1107816.f_33[iParam0 /*16*/].f_3), &SourceStruct, 13);
	return;
}

void func_1257(int iParam0) // Position - 0x22811
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_3 = -1;
	unk.f_9 = -1;
	unk.f_9.f_1 = -1;
	unk.f_11 = -1;
	unk.f_12 = 7;
	unk.f_12.f_1 = 255;
	unk.f_12.f_1.f_1 = 255;
	unk.f_12.f_1.f_1.f_1 = 255;
	unk.f_12.f_1.f_1.f_1.f_1 = 255;
	unk.f_12.f_1.f_1.f_1.f_1.f_1 = 255;
	unk.f_12.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	unk.f_12.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	unk.f_25 = -1;
	unk.f_25.f_1 = -1;
	*iParam0 = { unk };
	return;
}

int func_1258(int iParam0) // Position - 0x2289B
{
	return Global_1296644[iParam0 /*5*/].f_3;
}

BOOL func_1259(Player plParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4) // Position - 0x228AD
{
	return BUILTIN::VDIST(func_1313(plParam0), vParam1) <= fParam4;
}

void func_1260(Hash hParam0, int iParam1) // Position - 0x228C6
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

int func_1261(int iParam0) // Position - 0x228D9
{
	switch (iParam0)
	{
		case 2:
			return joaat("UNLOCK_GROUP__MISSION_STORY");
	
		case 3:
			return joaat("UNLOCK_GROUP__MISSION_PROCEDURAL");
	
		case 4:
			return joaat("UNLOCK_GROUP__MISSION_FETCH");
	
		case 5:
			return joaat("UNLOCK_GROUP__MISSION_MINIGAME");
	
		case 6:
			return joaat("UNLOCK_GROUP__MISSION_FREE_MODE_EVENT");
	
		case 7:
			return joaat("UNLOCK_GROUP__MISSION_UGC");
	
		case 8:
			return 634321112;
	
		default:
		
	}

	return 0;
}

char* func_1262(var uParam0, var uParam1, var uParam2) // Position - 0x2294C
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

void func_1263(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x22960
{
	int num;
	int i;
	int num2;
	int gangId;
	int num3;
	int j;
	int num4;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	num2 = -1;
	gangId = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());

	if (gangId == 0)
		return;

	switch (func_1157(uParam0))
	{
		case 4:
			num3 = func_1332(func_343(uParam0));
		
			if (num3 == -1 && iParam3 == 2 && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("net_main_offline")) == 0)
			{
				for (j = 0; j <= 112; j = j + 1)
				{
					if (func_1333(j) == func_343(uParam0))
					{
						num3 = j;
						break;
					}
				}
			}
		
			num4 = func_1334(num3);
		
			if (!func_1335(num4, 0))
				return;
			break;
	
		case 8:
			return;
	}

	for (i = 0; i <= 31; i = i + 1)
	{
		if (Global_1107816.f_33[i /*16*/] == gangId)
		{
			num2 = i;
			break;
		}
	}

	if (num2 == -1)
		return;

	num = Global_1107816.f_33[num2 /*16*/].f_3.f_1;

	if (num == -1)
		return;

	uParam2->f_2 = Global_1114893[num /*70*/];
	return;
}

void func_1264(int iParam0, int iParam1) // Position - 0x22A72
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

void func_1265(int iParam0, int iParam1) // Position - 0x22A87
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

Hash func_1266(int iParam0, int iParam1) // Position - 0x22A98
{
	switch (iParam0)
	{
		case 0:
			return joaat("crime_arson");
	
		case 1:
			return joaat("crime_assault");
	
		case 2:
			return joaat("crime_assault_animal");
	
		case 3:
			return joaat("crime_assault_corpse");
	
		case 4:
			return joaat("crime_assault_horse");
	
		case 5:
			return joaat("crime_assault_law");
	
		case 6:
			return joaat("crime_assault_livestock");
	
		case 7:
			return joaat("crime_bank_robbery");
	
		case 8:
			return joaat("crime_burglary");
	
		case 9:
			return joaat("crime_cheating");
	
		case 10:
			return joaat("CRIME_DISTURBANCE");
	
		case 11:
			return joaat("crime_explosion");
	
		case 12:
			return joaat("crime_grave_robbery");
	
		case 13:
			return joaat("CRIME_HASSLE");
	
		case 14:
			return joaat("crime_hit_and_run");
	
		case 15:
			return joaat("crime_hit_and_run_law");
	
		case 16:
			return joaat("crime_intimidation");
	
		case 17:
			return joaat("crime_jack_horse");
	
		case 18:
			return joaat("crime_jack_vehicle");
	
		case 19:
			return joaat("crime_jail_break");
	
		case 20:
			return joaat("crime_kidnapping");
	
		case 21:
			return joaat("crime_kidnapping_law");
	
		case 22:
			return joaat("crime_lasso_assault");
	
		case 23:
			return joaat("crime_law_is_threatened");
	
		case 24:
			return joaat("crime_loitering");
	
		case 25:
			return joaat("crime_looting");
	
		case 26:
			return joaat("crime_murder");
	
		case 27:
			return joaat("crime_murder_animal");
	
		case 28:
			return joaat("crime_murder_horse");
	
		case 29:
			return joaat("crime_murder_law");
	
		case 30:
			return joaat("crime_murder_livestock");
	
		case 31:
			return joaat("crime_property_destruction");
	
		case 32:
			return joaat("CRIME_RESIST_ARREST");
	
		case 33:
			return joaat("crime_robbery");
	
		case 34:
			return joaat("crime_stagecoach_robbery");
	
		case 35:
			return joaat("crime_stolen_goods");
	
		case 36:
			return joaat("crime_theft");
	
		case 37:
			return joaat("crime_theft_horse");
	
		case 38:
			return joaat("crime_theft_livestock");
	
		case 39:
			return joaat("crime_theft_vehicle");
	
		case 40:
			return joaat("crime_threaten");
	
		case 41:
			return joaat("crime_threaten_law");
	
		case 42:
			return joaat("crime_train_robbery");
	
		case 43:
			return joaat("crime_trample");
	
		case 44:
			return joaat("crime_trample_law");
	
		case 45:
			return joaat("crime_trespassing");
	
		case 46:
			return joaat("crime_unarmed_assault");
	
		case 47:
			return joaat("crime_vandalism");
	
		case 48:
			return joaat("crime_vandalism_vehicle");
	
		case 49:
			return joaat("crime_vehicle_destruction");
	
		case 50:
			return joaat("crime_wanted_level_up_debug_high");
	
		case 51:
			return joaat("crime_wanted_level_up_debug_low");
	
		case 52:
			return joaat("crime_accomplice");
	
		case 53:
			return joaat("crime_explosion_poison");
	
		case 54:
			return joaat("crime_murder_player");
	
		case 55:
			return joaat("crime_murder_player_horse");
	
		case 56:
			return joaat("crime_self_defence");
	
		case 57:
			return joaat("crime_trample_player");
	
		case 58:
			return 0;
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

void func_1267(var uParam0, var uParam1, var uParam2) // Position - 0x22DED
{
	Global_1939102.f_75.f_67 = { uParam0 };
	return;
}

void func_1268() // Position - 0x22E03
{
	TEXT_LABEL_ASSIGN_STRING(&(Global_1939102.f_75.f_67), "", 24);
	return;
}

int func_1269(var uParam0, var uParam1) // Position - 0x22E19
{
	int i;

	if (!func_18(uParam0))
		return -1;

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (func_929(Global_1900460.f_1[i /*2*/], uParam0))
			return i;
	}

	return -1;
}

int func_1270(int iParam0) // Position - 0x22E64
{
	if (iParam0 < 0)
		return 0;

	if (Global_1900460.f_66 == 0)
		return 0;

	if (Global_1900460.f_66 == 1)
	{
		Global_1900460.f_66 = 0;
		func_291(&Global_1900460.f_1[0 /*2*/]);
		return 1;
	}

	func_291(&Global_1900460.f_1[iParam0 /*2*/]);
	Global_1900460.f_66 = Global_1900460.f_66 - 1;
	func_1336(iParam0, Global_1900460.f_66);
	return 1;
}

int func_1271(int iParam0) // Position - 0x22ECF
{
	int i;
	var unk;

	for (i = iParam0; i < Global_1072759.f_19487; i = i + 1)
	{
		if (i + 1 < 32)
			Global_1072759.f_19487.f_1[i /*3*/] = { Global_1072759.f_19487.f_1[i + 1 /*3*/] };
	}

	unk = -1;
	unk.f_1 = -1;

	if (Global_1072759.f_19487 < 32)
		Global_1072759.f_19487.f_1[Global_1072759.f_19487 /*3*/] = { unk };

	Global_1072759.f_19487 = Global_1072759.f_19487 - 1;

	if (Global_1072759.f_19487 < 0)
		Global_1072759.f_19487 = 0;

	return 1;
}

int func_1272(int iParam0) // Position - 0x22F70
{
	int num;
	var unk;

	num = Global_1072759.f_19487 - 1;
	unk = -1;
	unk.f_1 = -1;

	while (num >= iParam0)
	{
		if (num + 1 < 32)
			Global_1072759.f_19487.f_1[num + 1 /*3*/] = { Global_1072759.f_19487.f_1[num /*3*/] };
	
		num = num - 1;
	}

	Global_1072759.f_19487.f_1[iParam0 /*3*/] = { unk };
	Global_1072759.f_19487 = Global_1072759.f_19487 + 1;

	if (Global_1072759.f_19487 > 32)
		Global_1072759.f_19487 = 32;

	return 1;
}

struct<4> func_1273(BOOL bParam0) // Position - 0x23004
{
	int num;

	num = func_503(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_502(923904168, func_397(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_502(923904168, func_397(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_502(923904168, func_397(bParam0), -740156546, false);
}

int func_1274(Hash hParam0, BOOL bParam1) // Position - 0x230A5
{
	if (func_1278(hParam0) == 1779021115)
		return 0;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_1337();
		else
			return 1;

	return 0;
}

BOOL func_1275(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x230DC
{
	return func_398(hParam0, *uParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_1276(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x230F7
{
	var unk;

	if (func_1338(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_1277(BOOL bParam0) // Position - 0x23118
{
	int num;

	num = func_503(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_502(271701509, func_397(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_502(271701509, func_397(bParam0), 12999093, false);
}

int func_1278(Hash hParam0) // Position - 0x23182
{
	var unk;

	if (!func_728(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk))
		return 0;

	return unk.f_1;
}

BOOL func_1279(Hash hParam0, int iParam1) // Position - 0x231AD
{
	Hash hash;
	int num;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || iParam1 == 0)
		return false;

	num = func_1278(hParam0);

	if (num == -1015256479)
		return false;

	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(num);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(num, i, &hash))
			if (func_1339(hParam0, iParam1, hash))
				return true;
	}

	return false;
}

BOOL func_1280(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x2321A
{
	return func_1340(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

BOOL func_1281(Hash hParam0, Hash hParam1) // Position - 0x23230
{
	if (!func_728(hParam0, 0))
		return func_1341(func_975(hParam0), hParam1);

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, 1120943070))
		return true;

	return false;
}

void func_1282(Hash hParam0, var uParam1, var uParam2) // Position - 0x23271
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

struct<18> func_1283(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x2347D
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

void func_1284(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x2355B
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_1285(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x23576
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_503(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

int func_1286(int iParam0) // Position - 0x2359B
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

BOOL func_1287(int iParam0) // Position - 0x235BC
{
	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1072759.f_28418[51 /*4*/].f_3))
		return false;

	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1072759.f_28418[51 /*4*/].f_3))
		return false;

	return true;
}

struct<8> func_1288(Any* panParam0, int iParam1, int iParam2) // Position - 0x235F7
{
	var unk;

	panParam0->f_2 = iParam1;
	!DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&unk, panParam0);
	return unk;
}

int func_1289(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x23616
{
	int num;

	panParam0->f_2 = iParam1;

	if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&num, panParam0))
		num = iParam3;

	return num;
}

var func_1290(Any* panParam0, int iParam1, int iParam2) // Position - 0x23636
{
	var unk;

	panParam0->f_2 = iParam1;
	!DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&unk, panParam0);
	return unk;
}

int func_1291(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5) // Position - 0x23652
{
	if (!func_1171(&uParam0, 30, hParam5, 0, 1))
		return 0;

	return func_1297(&uParam0, 61, 1);
}

int func_1292(int iParam0) // Position - 0x23677
{
	switch (iParam0)
	{
		case -1813649426:
			return 1;
	
		case -1728078503:
			return 2;
	
		case joaat("ASF_ENABLE_LETTER_BOX"):
			return 2048;
	
		case joaat("ASF_BLOCK_SKIPPING"):
			return 256;
	
		case -1303182884:
			return 4096;
	
		case -1138842803:
			return 512;
	
		case -656485570:
			return 8;
	
		case -608370326:
			return 128;
	
		case -40729341:
			return 32;
	
		case 513761045:
			return 64;
	
		case 664704845:
			return 4;
	
		case 856889675:
			return 16;
	
		case 1317645850:
			return 8192;
	
		case 1930555512:
			return 32768;
	
		case 1959327570:
			return 1024;
	
		case 2020911072:
			return 16384;
	
		default:
		
	}

	return 0;
}

int func_1293(int iParam0) // Position - 0x23741
{
	return iParam0;
}

int func_1294(int iParam0) // Position - 0x2374B
{
	switch (iParam0)
	{
		case joaat("ASSE_GIVE_OWNERSHIP"):
			return 1;
	
		default:
		
	}

	return 0;
}

int func_1295(int iParam0) // Position - 0x23769
{
	switch (iParam0)
	{
		case -1420685820:
			return 1;
	
		case -445480404:
			return 2;
	
		case -138533181:
			return 4;
	
		case 74623641:
			return 64;
	
		case 675169979:
			return 16;
	
		case 1324736666:
			return 8;
	
		default:
		
	}

	return 0;
}

int func_1296(int iParam0) // Position - 0x237BC
{
	switch (iParam0)
	{
		case joaat("crouching"):
			return 8;
	
		case joaat("Standing"):
			return 4;
	
		case joaat("Male"):
			return 1;
	
		case joaat("female"):
			return 2;
	
		default:
		
	}

	return 0;
}

int func_1297(Any* panParam0, int iParam1, int iParam2) // Position - 0x237F9
{
	var unk;

	panParam0->f_2 = iParam1;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk, panParam0);
	return unk;
}

Vector3 func_1298(Any* panParam0, int iParam1, int iParam2) // Position - 0x23814
{
	var unk;

	panParam0->f_2 = iParam1;
	!DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&unk, panParam0);
	return unk;
}

int func_1299(int iParam0) // Position - 0x23832
{
	switch (iParam0)
	{
		case joaat("ID_SKEL_NECK1"):
			return 14284;
	
		case joaat("id_skel_spine4"):
			return 14414;
	
		case joaat("ID_SKEL_HEAD"):
			return 21030;
	
		case joaat("id_skel_spine5"):
			return 14415;
	
		case joaat("id_skel_root"):
			return 0;
	
		case joaat("id_skel_spine6"):
			return 14416;
	
		case joaat("id_skel_neck0"):
			return 14283;
	
		case joaat("id_skel_spine0"):
			return 14410;
	
		case joaat("id_skel_neck2"):
			return 14285;
	
		case joaat("id_skel_spine1"):
			return 14411;
	
		case joaat("id_skel_spine2"):
			return 14412;
	
		case joaat("id_skel_spine_root"):
			return 11569;
	
		case joaat("id_skel_spine3"):
			return 14413;
	
		default:
		
	}

	return -1;
}

var func_1300(Any* panParam0) // Position - 0x238E0
{
	return func_855(panParam0, 67, 1);
}

int func_1301(int iParam0) // Position - 0x238F1
{
	switch (iParam0)
	{
		case -1093766591:
			return -2147483648;
	
		case 106596528:
			return 16;
	
		case joaat("ONLY_INIT"):
			return 2;
	
		case joaat("ONLY_UNLOCKED_IN_FLOW"):
			return 8;
	
		case joaat("CHECK_MAX_CLAIMS"):
			return 1;
	
		case joaat("ONLY_ON_WIN"):
			return 4;
	
		default:
		
	}

	return 0;
}

int func_1302(int iParam0) // Position - 0x23947
{
	switch (iParam0)
	{
		case joaat("INCREMENT_MISSION"):
			return 1;
	
		case joaat("INCREMENT_DIFFICULTY"):
			return 2;
	
		default:
		
	}

	return 0;
}

int func_1303(int iParam0) // Position - 0x2396F
{
	switch (iParam0)
	{
		case joaat("IGNORE_FOR_REPLAY_AVAILABILITY"):
			return 2;
	
		case joaat("IGNORE_FOR_MISSION_SELECTION"):
			return 1;
	
		default:
		
	}

	return 0;
}

int func_1304(int iParam0) // Position - 0x23997
{
	switch (iParam0)
	{
		case joaat("UGC_SKIP_LOBBY"):
			return 1024;
	
		case 236229850:
			return 2;
	
		case joaat("EXCLUDE_IN_PROGRESS"):
			return 4;
	
		case joaat("HIDE_SIDEMENU"):
			return 268435456;
	
		case joaat("HIDE_HELPTEXT_CANCEL_MSG"):
			return 536870912;
	
		case joaat("LOCKED_TO_GANG"):
			return 1;
	
		default:
		
	}

	return 0;
}

int func_1305(int iParam0) // Position - 0x239F1
{
	switch (iParam0)
	{
		case joaat("ONLY_UNLOCKED_IN_FLOW"):
			return 2;
	
		case joaat("ONLY_ON_WIN"):
			return 1;
	
		default:
		
	}

	return 0;
}

int func_1306(int iParam0) // Position - 0x23A19
{
	switch (iParam0)
	{
		case joaat("ONLY_IN_FLOW"):
			return 2;
	
		case joaat("ONLY_ON_WIN"):
			return 1;
	
		default:
		
	}

	return 0;
}

void func_1307(int iParam0) // Position - 0x23A41
{
	func_291(&(Global_1119235[iParam0 /*35*/].f_16));
	return;
}

int func_1308(int iParam0, int iParam1) // Position - 0x23A57
{
	return Global_1219595.f_1[iParam0 /*10*/][iParam1 /*3*/].f_2;
}

void func_1309(var uParam0, var uParam1) // Position - 0x23A6F
{
	Hash hash;
	var unk;

	if (func_1149(uParam0) == 0)
	{
	}
	else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_1149(uParam0)))
	{
	}
	else
	{
		hash = func_1149(uParam0);
		STATS::STATSTRACKER_DEED_STARTED(hash, Global_265213.f_122484.f_80.f_12);
		unk_0x6F5BC5C4EAB42B15(hash, 2, &(Global_265213.f_122484.f_80.f_22));
	
		if (func_1312(uParam0, &unk))
		{
			if (unk.f_29 == joaat("race_impromptu"))
				STATS::_0xF21A5D66874FCEDD(unk.f_2, 0, joaat("RACE"));
		
			STATS::_0xF21A5D66874FCEDD(unk.f_2, unk.f_29, 0);
			STATS::_0xF21A5D66874FCEDD(unk.f_2, unk.f_30, 0);
			STATS::_0xF21A5D66874FCEDD(unk.f_2, unk.f_31, 0);
		}
	}

	return;
}

int func_1310(var uParam0, var uParam1, int iParam2) // Position - 0x23B18
{
	int num;

	num = func_1269(uParam0);

	if (num >= 0)
		return num;

	if (Global_1900460.f_66 >= 32)
		return -1;

	num = Global_1900460.f_66;
	func_1342(uParam0, num);
	Global_1900460.f_66 = Global_1900460.f_66 + 1;

	if (iParam2 < 0 || iParam2 >= Global_1900460.f_66)
		return num;

	func_1336(num, iParam2);
	return iParam2;
}

int func_1311(var uParam0, var uParam1, BOOL bParam2) // Position - 0x23B89
{
	int num;

	if (!func_18(uParam0))
		return 0;

	num = func_1269(uParam0);

	if (num < 0)
		return 0;

	if (!func_1343(uParam0, func_213(0), bParam2))
	{
		func_968(func_213(0), 3);
		func_968(func_213(num), 4);
		return 0;
	}

	func_1336(num, 0);
	func_968(func_213(0), 3);
	func_968(func_213(1), 4);
	return 1;
}

BOOL func_1312(int iParam0, var uParam1, var uParam2) // Position - 0x23BFD
{
	var unk;

	unk.f_1 = -1;
	unk.f_2 = -1;
	func_77(iParam0, &unk);

	if (func_1344(iParam0, unk, uParam2))
		return true;

	return false;
}

Vector3 func_1313(Player plParam0) // Position - 0x23C31
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false, false);
}

int func_1314(int iParam0, int iParam1) // Position - 0x23C45
{
	return 8 + (iParam0 * 2) + iParam1;
}

eStackSize func_1315(int iParam0) // Position - 0x23C57
{
	return Global_1207480.f_231.f_1066[iParam0 /*17*/].f_1;
}

int func_1316(Hash hParam0) // Position - 0x23C6E
{
	switch (hParam0)
	{
		case joaat("nb_kidnapped"):
			return 6;
	
		case joaat("nb_slumped_hunter"):
			return 18;
	
		case joaat("la_beaver"):
			return 28;
	
		case joaat("nb_treasure_hunter"):
			return 9;
	
		case joaat("nb_photography"):
			return 7;
	
		case joaat("nb_hobo_dog"):
			return 12;
	
		case joaat("la_cougar"):
			return 22;
	
		case joaat("nb_tied_up_ped"):
			return 8;
	
		case -1209093440:
			return 33;
	
		case joaat("nb_tree_map"):
			return 10;
	
		case joaat("nb_moonshine_camp"):
			return 15;
	
		case joaat("la_fox"):
			return 26;
	
		case joaat("la_boar"):
			return 24;
	
		case joaat("la_moose"):
			return 30;
	
		case joaat("nb_rival_collector"):
			return 5;
	
		case joaat("nb_graverobber"):
			return 4;
	
		case joaat("nb_egg_protector"):
			return 3;
	
		case joaat("nb_runaway_wagon"):
			return 11;
	
		case 0:
			return 0;
	
		case joaat("nb_stalking_hunter"):
			return 17;
	
		case joaat("la_bear"):
			return 21;
	
		case joaat("nb_suspension_trap"):
			return 20;
	
		case 569695338:
			return 23;
	
		case joaat("la_coyote"):
			return 29;
	
		case joaat("la_alligator"):
			return 31;
	
		case 901959776:
			return 34;
	
		case joaat("nb_beggar"):
			return 16;
	
		case joaat("la_wolf"):
			return 27;
	
		case joaat("la_bison"):
			return 25;
	
		case joaat("nb_duel"):
			return 14;
	
		case joaat("nb_arrowhead_injury"):
			return 2;
	
		case 1773252799:
			return 32;
	
		case joaat("nb_crashed_wagon"):
			return 19;
	
		case joaat("nb_animal_attack"):
			return 1;
	
		case joaat("nb_wildman"):
			return 13;
	
		default:
		
	}

	return 0;
}

void func_1317(Hash hParam0, int iParam1) // Position - 0x23DF8
{
	int num;

	if (Global_1051645.f_80.f_101 >= 10)
		return;

	num = func_1345(hParam0, iParam1);

	if (num != -1)
		return;

	TEXT_LABEL_ASSIGN_STRING(&Global_1051645.f_80[Global_1051645.f_80.f_101 /*10*/], "HashOnlyScript", 64);
	Global_1051645.f_80[Global_1051645.f_80.f_101 /*10*/].f_8 = hParam0;
	Global_1051645.f_80[Global_1051645.f_80.f_101 /*10*/].f_9 = iParam1;
	Global_1051645.f_80.f_101 = Global_1051645.f_80.f_101 + 1;
	Global_1051645.f_45.f_1 = 1;
	return;
}

BOOL func_1318(int iParam0) // Position - 0x23E7C
{
	if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(iParam0))
		return true;

	if (VOLUME::GET_VOLUME_LOCK_REQUEST_STATUS(iParam0) == 4)
		return true;

	return false;
}

var func_1319(int iParam0) // Position - 0x23EA1
{
	return Global_1207480.f_231.f_1066[iParam0 /*17*/].f_3;
}

void func_1320(int iParam0, int iParam1) // Position - 0x23EB8
{
	if (func_1224(iParam0, iParam1) != 0)
	{
		if (func_1318(func_1224(iParam0, iParam1)))
		{
			func_1233(iParam0, iParam1);
			func_1076(iParam0, iParam1);
		}
	}

	return;
}

BOOL func_1321(int iParam0) // Position - 0x23EEC
{
	int volumeLockRequestStatus;

	if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(iParam0))
		return false;

	volumeLockRequestStatus = VOLUME::GET_VOLUME_LOCK_REQUEST_STATUS(iParam0);

	if (volumeLockRequestStatus == 3)
		return true;

	return false;
}

void func_1322(int iParam0, int iParam1, int iParam2) // Position - 0x23F15
{
	if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(iParam2))
	{
		Global_1207480.f_2505[iParam0 /*6*/][iParam1 /*3*/].f_2 = 0;
		return;
	}

	Global_1207480.f_2505[iParam0 /*6*/][iParam1 /*3*/].f_2 = iParam2;
	return;
}

BOOL func_1323(int iParam0, int iParam1, Player plParam2, int iParam3) // Position - 0x23F4F
{
	return func_1061(iParam0, plParam2, func_1314(iParam1, iParam3));
}

BOOL func_1324(int iParam0, int iParam1, Player plParam2) // Position - 0x23F67
{
	int i;

	for (i = 0; i < 2; i = i + 1)
	{
		if (func_1323(iParam0, iParam1, plParam2, i))
			return false;
	}

	return true;
}

BOOL func_1325(BOOL bParam0, int iParam1) // Position - 0x23F95
{
	if (!Global_1072759.f_3)
		return false;

	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return false;

	if (iParam1 == 255)
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	return Global_1206954[iParam1 /*12*/] && bParam0 != false;
}

Vector3 func_1326(BOOL bParam0) // Position - 0x23FD1
{
	float num;
	int value;
	int value2;

	value = bParam0 & 32767;
	value2 = BUILTIN::SHIFT_RIGHT(bParam0, 15) & 32767;
	num = BUILTIN::TO_FLOAT(value);
	num.f_1 = BUILTIN::TO_FLOAT(value2);

	if (bParam0 & 1073741824 == 0)
		num = num * -1f;

	if (bParam0 & -2147483648 == 0)
		num.f_1 = num.f_1 * -1f;

	return num;
}

BOOL func_1327(var uParam0, int iParam1) // Position - 0x2402F
{
	return iParam1 >= 0 && iParam1 < uParam0->f_2;
}

BOOL func_1328(var uParam0) // Position - 0x24047
{
	return *uParam0 == uParam0->f_2;
}

BOOL func_1329(var uParam0) // Position - 0x24057
{
	if (uParam0->f_1 == -1)
		return false;

	if (!func_1095(&(uParam0->f_5)))
		return false;

	return true;
}

int func_1330(var uParam0, var uParam1) // Position - 0x2407C
{
	int i;
	int num;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		num = (uParam0->f_1 + i) % uParam0->f_2;
	
		if (func_1346(uParam1, &uParam0->f_3[num /*40*/]))
			return i;
	}

	return -1;
}

BOOL func_1331(var uParam0, BOOL bParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x240BD
{
	var unk;
	var unk34;
	BOOL flag;
	var unk36;
	int i;
	int num;
	int numReservedMissionPeds;
	int numReservedMissionVehicles;
	int numReservedMissionObjects;
	int numReservedMissionPickups;
	int num2;

	unk34 = -1;
	unk34.f_1 = -1;

	if (func_18(uParam0->f_8.f_5))
		unk34 = { uParam0->f_8.f_5 };
	else if (func_18(uParam0->f_8.f_5.f_6))
		unk34 = { uParam0->f_8.f_5.f_6 };
	else
		return true;

	flag = false;

	if (_IS_NULL_VECTOR(uParam0->f_8.f_2))
		flag = true;
	else
		flag = false;

	if (bParam1)
	{
		unk.f_25 = iParam2;
		unk.f_26 = iParam3;
		unk.f_27 = iParam4;
		unk.f_28 = iParam5;
	}
	else if (!func_1347(func_19(unk34), &unk))
	{
		return false;
	}

	unk36 = 4;

	if (unk.f_25 <= 0 || unk.f_25 > 50)
	{
		unk.f_25 != 0;
		unk36[0] = 0;
	}
	else
	{
		unk36[0] = 1;
	}

	if (unk.f_26 <= 0 || unk.f_26 > 10)
	{
		unk.f_26 != 0;
		unk36[1] = 0;
	}
	else
	{
		unk36[1] = 1;
	}

	if (unk.f_27 <= 0 || unk.f_27 > 25)
	{
		unk.f_27 != 0;
		unk36[2] = 0;
	}
	else
	{
		unk36[2] = 1;
	}

	if (unk.f_28 <= 0 || unk.f_28 > 10)
	{
		unk.f_28 != 0;
		unk36[3] = 0;
	}
	else
	{
		unk36[3] = 1;
	}

	if (flag)
	{
		numReservedMissionPeds = NETWORK::GET_NUM_RESERVED_MISSION_PEDS(true);
		numReservedMissionVehicles = NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(true);
		numReservedMissionObjects = NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(true);
		numReservedMissionPickups = NETWORK::_GET_NUM_RESERVED_MISSION_PICKUPS(true);
	}
	else
	{
		NETWORK::GET_RESERVED_MISSION_ENTITIES_IN_AREA(uParam0->f_8.f_2, false, &numReservedMissionPeds, &numReservedMissionVehicles, &numReservedMissionObjects, &numReservedMissionPickups);
	}

	for (i = 0; i < 4; i = i + 1)
	{
		num2 = i;
	
		if (num2 == -1)
		{
		}
		else if (!unk36[i])
		{
		}
		else
		{
			switch (num2)
			{
				case 0:
					num = NETWORK::GET_MAX_NUM_NETWORK_PEDS() - numReservedMissionPeds;
				
					if (num < unk.f_25)
						return false;
					break;
			
				case 1:
					num = NETWORK::GET_MAX_NUM_NETWORK_VEHICLES() - numReservedMissionVehicles;
				
					if (num < unk.f_26)
						return false;
					break;
			
				case 2:
					num = NETWORK::GET_MAX_NUM_NETWORK_OBJECTS() - numReservedMissionObjects;
				
					if (num < unk.f_27)
						return false;
					break;
			
				case 3:
					num = NETWORK::GET_MAX_NUM_NETWORK_PICKUPS() - numReservedMissionPickups;
				
					if (num < unk.f_28)
						return false;
					break;
			}
		}
	}

	return true;
}

int func_1332(int iParam0) // Position - 0x24316
{
	int num;
	int num2;

	num = -1;

	if (func_1348(&num2, iParam0))
		num = func_1349() - DATAFILE::_0xE13634BB6BAF0734(num2, num2.f_1) - 1;

	return num;
}

int func_1333(int iParam0) // Position - 0x24341
{
	if (iParam0 == -1)
		return 0;

	return Global_1245174[iParam0 /*5*/];
}

int func_1334(int iParam0) // Position - 0x2435B
{
	if (iParam0 == -1)
		return 0;

	return Global_1245174[iParam0 /*5*/].f_2;
}

BOOL func_1335(int iParam0, BOOL bParam1) // Position - 0x24377
{
	switch (iParam0)
	{
		case joaat("bounty_board"):
		case joaat("gun_for_hire"):
		case -697789102:
		case joaat("CAMP_RESUPPLY"):
		case joaat("MOONSHINE_SETUP_GET_SUPPLIES"):
		case joaat("MOONSHINE_MARKETING"):
		case 195932838:
		case joaat("outlaw"):
		case joaat("CAMP_SETUP"):
		case joaat("MOONSHINE_SELL"):
		case joaat("MOONSHINE_SETUP_RESCUE_COOK"):
		case joaat("CAMP_SELL"):
			return true;
	
		case joaat("dynamic"):
			return bParam1;
	
		default:
		
	}

	return false;
}

void func_1336(int iParam0, int iParam1) // Position - 0x243DF
{
	int i;

	if (iParam0 == iParam1)
		return;

	if (iParam1 < iParam0)
	{
		for (i = iParam0; i > iParam1; i = i - 1)
		{
			func_1350(i - 1, i);
		}
	}
	else
	{
		for (i = iParam0; i < iParam1; i = i + 1)
		{
			func_1350(i, i + 1);
		}
	}

	if (func_18(Global_1900460.f_1[0 /*2*/]))
		func_968(Global_1900460.f_1[0 /*2*/], 3);

	return;
}

int func_1337() // Position - 0x24459
{
	if (func_1351(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

BOOL func_1338(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x24476
{
	int inventoryId;

	inventoryId = func_503(false);
	*panParam1 = { func_502(hParam0, func_1273(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_1339(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x244BB
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, iParam1, hParam2);
}

BOOL func_1340(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x244EE
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_503(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

BOOL func_1341(Hash hParam0, Hash hParam1) // Position - 0x24528
{
	if (!func_976(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, 1120943070))
		return 1;

	return 0;
}

void func_1342(var uParam0, var uParam1, int iParam2) // Position - 0x2455E
{
	if (!func_18(uParam0))
		func_291(&Global_1900460.f_1[iParam2 /*2*/]);
	else
		Global_1900460.f_1[iParam2 /*2*/] = { uParam0 };

	func_1352(uParam0, false, 1, -1);
	return;
}

BOOL func_1343(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x2459F
{
	int num;
	int num2;

	if (!func_18(uParam0))
		return false;

	if (!func_18(uParam2))
		return true;

	num = func_1157(uParam0);
	num2 = func_1157(uParam2);

	if (num2 == num)
		if (bParam4)
			return true;

	if (num2 == 2 || num2 == 7)
	{
		if (bParam4 && num == 2 || num == 7)
			return true;
	
		return false;
	}

	if (num == 2 || num == 7)
		return true;

	if (num2 == 6)
		return false;

	if (num == 6)
		return true;

	if (num2 == 5)
		return false;

	if (num == 5)
		return true;

	if (num2 == 3)
	{
		if (bParam4 && num == 3)
			return true;
	
		return false;
	}

	if (num == 3)
		return true;

	if (num2 == 4)
	{
		if (bParam4 && num == 4)
			return true;
	
		return false;
	}

	if (num == 4)
		return true;

	return false;
}

BOOL func_1344(int iParam0, Hash hParam1, var uParam2) // Position - 0x246A6
{
	var unk;

	if (!func_1353(iParam0))
		return false;

	if (func_1354(iParam0, hParam1, &unk))
		func_1355(iParam0, &unk, uParam2);
	else
		return false;

	return true;
}

int func_1345(Hash hParam0, int iParam1) // Position - 0x246DB
{
	int i;

	if (Global_1051645.f_80.f_101 == 0)
		return -1;

	i = 0;

	for (i = 0; i <= Global_1051645.f_80.f_101 - 1; i = i + 1)
	{
		if (Global_1051645.f_80[i /*10*/].f_8 == hParam0 && Global_1051645.f_80[i /*10*/].f_9 == iParam1)
			return i;
	}

	return -1;
}

BOOL func_1346(var uParam0, var uParam1) // Position - 0x2473D
{
	if (uParam1->f_2 == -1)
		return false;

	if (uParam0->f_2 == -1)
		return false;

	if (uParam1->f_2 != uParam0->f_2)
		return false;

	if (uParam1->f_5 == -1)
		return false;

	if (uParam0->f_5 == -1)
		return false;

	if (uParam1->f_5 != uParam0->f_5)
		return false;

	if (uParam1->f_8 != uParam0->f_8)
		return false;

	if (uParam1->f_8.f_1 != uParam0->f_8.f_1)
		return false;

	if (!func_929(uParam1->f_8.f_5, uParam0->f_8.f_5))
		return false;

	if (uParam1->f_8.f_5.f_4 != uParam0->f_8.f_5.f_4)
		return false;

	if (uParam1->f_8.f_5.f_2 != uParam0->f_8.f_5.f_2)
		return false;

	return true;
}

BOOL func_1347(Hash hParam0, var uParam1) // Position - 0x24800
{
	int num;

	num = { func_1356(hParam0) };

	if (!func_18(num))
		return false;

	func_1344(num, hParam0, uParam1);
	return true;
}

BOOL func_1348(Any* panParam0, int iParam1) // Position - 0x2482E
{
	*panParam0 = Global_1245174.f_9818;
	panParam0->f_2 = 423895568;
	panParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_IS_FILE_LOADED(*panParam0) && DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

int func_1349() // Position - 0x24865
{
	int numChildren;
	int num;

	numChildren = 0;
	num = Global_1245174.f_9818;
	num.f_2 = -1041770777;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(num.f_1), &num))
		numChildren = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(num, num.f_1);

	return numChildren;
}

void func_1350(int iParam0, int iParam1) // Position - 0x2489D
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk = { Global_1900460.f_1[iParam0 /*2*/] };
	Global_1900460.f_1[iParam0 /*2*/] = { Global_1900460.f_1[iParam1 /*2*/] };
	Global_1900460.f_1[iParam1 /*2*/] = { unk };
	return;
}

int func_1351(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x248EA
{
	if (func_1357(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_503(bParam1), hParam0, bParam3);
}

int func_1352(var uParam0, var uParam1, BOOL bParam2, int iParam3, int iParam4) // Position - 0x2491D
{
	Hash hash;

	if (func_1358(uParam0) >= 0)
		return 0;

	hash.f_1 = -1;
	hash.f_1.f_1 = -1;
	hash.f_1 = { uParam0 };
	hash = func_19(uParam0);
	hash.f_3 = iParam3;
	func_1359(&hash, bParam2, iParam4);
	return 1;
}

BOOL func_1353(int iParam0) // Position - 0x2496B
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

BOOL func_1354(int iParam0, var uParam1, Any* panParam2) // Position - 0x249AA
{
	*panParam2 = Global_1149432.f_7;
	panParam2->f_2 = 1351168281;
	panParam2->f_3 = func_1360(iParam0);
	panParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam2->f_1), panParam2);
}

void func_1355(int iParam0, Any* panParam1, var uParam2) // Position - 0x249DE
{
	int num;

	*uParam2 = iParam0;
	panParam1->f_2 = -611386243;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), panParam1);
	uParam2->f_3 = func_1361(iParam0, uParam2->f_1);
	panParam1->f_2 = -2140901307;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1);
	uParam2->f_2 = num;
	panParam1->f_2 = -2140901307;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_9), panParam1);
	panParam1->f_2 = 1292053410;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_17), panParam1);

	if (*uParam2 == 3)
	{
		panParam1->f_2 = 1636457257;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1))
			uParam2->f_5 = func_1362(num);
	}
	else if (*uParam2 == 4)
	{
		panParam1->f_2 = 1636457257;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1))
			uParam2->f_5 = num;
	}
	else if (*uParam2 == 5)
	{
		panParam1->f_2 = 1636457257;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1))
			uParam2->f_5 = func_1363(num);
	}
	else if (*uParam2 == 6)
	{
		panParam1->f_2 = 1636457257;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1))
			uParam2->f_5 = func_1364(num);
	
		panParam1->f_2 = 162343104;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_6), panParam1);
	}
	else if (*uParam2 == 7)
	{
		panParam1->f_2 = 1636457257;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1))
			uParam2->f_5 = func_1365(num);
	}
	else
	{
		panParam1->f_2 = 1636457257;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_5), panParam1);
	}

	panParam1->f_2 = 2012757065;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1);
	uParam2->f_7 = func_1366(num);
	panParam1->f_2 = 1060782978;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(uParam2->f_8), panParam1);
	panParam1->f_2 = 162343104;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_6), panParam1);
	panParam1->f_2 = -733480474;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_25), panParam1);
	panParam1->f_2 = 492825771;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_26), panParam1);
	panParam1->f_2 = -839279581;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_27), panParam1);
	panParam1->f_2 = -640941103;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_28), panParam1);
	num = 0;
	panParam1->f_2 = -2025968302;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1);
	uParam2->f_29 = num;
	num = 0;
	panParam1->f_2 = -1829781569;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1);
	uParam2->f_30 = num;
	num = 0;
	panParam1->f_2 = -1999176766;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1);
	uParam2->f_31 = num;
	num = 0;
	panParam1->f_2 = -739728609;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1);
	uParam2->f_32 = num;
	return;
}

struct<2> func_1356(Hash hParam0) // Position - 0x24C39
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk = { func_647(hParam0, 2) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_647(hParam0, 7) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_647(hParam0, 5) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_647(hParam0, 6) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_647(hParam0, 8) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_647(hParam0, 3) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_647(hParam0, 4) };

	if (unk.f_1 >= 0)
		return unk;

	return func_838();
}

BOOL func_1357(Hash hParam0) // Position - 0x24D09
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

int func_1358(var uParam0, var uParam1) // Position - 0x24D17
{
	int i;

	if (Global_1205804.f_129 <= 0)
		return -1;

	i = 0;

	for (i = 0; i < Global_1205804.f_129; i = i + 1)
	{
		if (func_929(Global_1205804[i /*4*/].f_1, uParam0))
			return i;
	}

	return -1;
}

void func_1359(var uParam0, BOOL bParam1, int iParam2) // Position - 0x24D64
{
	func_1367(uParam0, iParam2);

	if (Global_1205804.f_129 == 1)
	{
		iParam2 = 0;
		bParam1 = true;
	}

	if (bParam1)
		func_1368(func_1358(uParam0->f_1));
	else
		func_1369();

	return;
}

int func_1360(int iParam0) // Position - 0x24D9E
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

int func_1361(int iParam0, var uParam1) // Position - 0x24F13
{
	var unk;

	if (func_1370(iParam0, uParam1, &unk))
		return unk.f_2;

	return 0;
}

int func_1362(int iParam0) // Position - 0x24F30
{
	switch (iParam0)
	{
		case joaat("IWD_INF"):
			return 19;
	
		case joaat("COACH_HOLDUP_KIDNAPPING"):
			return 27;
	
		case joaat("ASSASSINATION_PVP_POSSE"):
			return 25;
	
		case -1381389849:
			return 5;
	
		case joaat("AMBUSH"):
			return 10;
	
		case -867762478:
			return 14;
	
		case joaat("IWD_1V1"):
			return 17;
	
		case -668110249:
			return 4;
	
		case -621956193:
			return 11;
	
		case joaat("ASSASSINATION_PVP_PLAYER"):
			return 24;
	
		case joaat("COACH_HOLDUP_ROBBERY"):
			return 26;
	
		case joaat("GANG_EVENT_IMPROMPTU_RACE"):
			return 13;
	
		case joaat("ROBBERY_TRAIN"):
			return 2;
	
		case joaat("IWD_PF"):
			return 20;
	
		case joaat("ASSASSINATION"):
			return 22;
	
		case 377122918:
			return 8;
	
		case 536699577:
			return 6;
	
		case 541147288:
			return 7;
	
		case 602097925:
			return 15;
	
		case joaat("IWD_PLF"):
			return 21;
	
		case joaat("GANG_EVENT_SHOWDOWN"):
			return 12;
	
		case 1158195437:
			return 9;
	
		case 1336837986:
			return 0;
	
		case joaat("IWD_PVP"):
			return 18;
	
		case 1443764480:
			return 3;
	
		case 1518877519:
			return 30;
	
		case joaat("ASSASSINATION_TRACKING"):
			return 23;
	
		case joaat("IWD_F"):
			return 28;
	
		case joaat("TRAIN_ESCORT"):
			return 16;
	
		case 2124631622:
			return 1;
	
		default:
		
	}

	return -1;
}

int func_1363(int iParam0) // Position - 0x25086
{
	switch (iParam0)
	{
		case joaat("fence_building"):
			return 6;
	
		case joaat("blackjack"):
			return 0;
	
		case joaat("clean_stalls"):
			return 5;
	
		case joaat("Poker"):
			return 2;
	
		case joaat("dominoes"):
			return 1;
	
		case joaat("fillet"):
			return 3;
	
		case joaat("milking_cow"):
			return 4;
	
		default:
		
	}

	return -1;
}

int func_1364(int iParam0) // Position - 0x250DD
{
	switch (iParam0)
	{
		case joaat("HUNT_THE_POSSE_LEADER"):
			return 18;
	
		case joaat("KING_OF_THE_RAILS"):
			return 6;
	
		case joaat("CONDOR_EGG"):
			return 12;
	
		case joaat("DEAD_DROP"):
			return 2;
	
		case joaat("KING_OF_THE_CASTLE"):
			return 5;
	
		case joaat("HOT_PROPERTY"):
			return 4;
	
		case joaat("PV_CHALLENGE_HERBALIST"):
			return 15;
	
		case joaat("ESCAPED_CONVICTS"):
			return 8;
	
		case -142235487:
			return 7;
	
		case -27117790:
			return 13;
	
		case joaat("PV_CHALLENGE_BIGGEST_FISH"):
			return 16;
	
		case joaat("ROUND_UP"):
			return 9;
	
		case joaat("PV_CHALLENGE_FLYING_BIRD"):
			return 17;
	
		case joaat("GOLDEN_HAT"):
			return 3;
	
		case 1653867545:
			return 14;
	
		case joaat("ARCHERY"):
			return 0;
	
		case joaat("CHALLENGES"):
			return 1;
	
		case joaat("WRECKAGE"):
			return 11;
	
		case joaat("SUPPLY_TRAIN"):
			return 10;
	
		default:
		
	}

	return -1;
}

int func_1365(int iParam0) // Position - 0x251B7
{
	switch (iParam0)
	{
		case -1641798436:
			return 4;
	
		case joaat("UGC_MAJOR_ID_MOONSHINE_COOP"):
			return 9;
	
		case joaat("UGC_MAJOR_ID_LBM"):
			return 8;
	
		case joaat("UGC_MAJOR_ID_DBG_RACE"):
			return 2;
	
		case 352400957:
			return 5;
	
		case 434282564:
			return 11;
	
		case 787592898:
			return 7;
	
		case 1039801657:
			return 10;
	
		case 1211286129:
			return 6;
	
		case 1228993410:
			return 12;
	
		case joaat("UGC_MAJOR_ID_DBG_DEATHMATCH"):
			return 1;
	
		case 2006131499:
			return 3;
	
		case joaat("UGC_MAJOR_ID_DBG_VERSUS"):
			return 0;
	
		default:
		
	}

	return 0;
}

int func_1366(int iParam0) // Position - 0x2524F
{
	switch (iParam0)
	{
		case -1968391995:
			return 34;
	
		case joaat("intro_generic"):
			return 2;
	
		case -1797632736:
			return 36;
	
		case joaat("Collector"):
			return 12;
	
		case -1317631038:
			return 27;
	
		case -862833187:
			return 23;
	
		case -713504854:
			return 19;
	
		case joaat("intro_char"):
			return 1;
	
		case joaat("intro_freemode"):
			return 4;
	
		case joaat("season006"):
			return 16;
	
		case joaat("season005"):
			return 13;
	
		case -171568028:
			return 33;
	
		case -89188661:
			return 24;
	
		case joaat("hunter"):
			return 10;
	
		case joaat("trader"):
			return 11;
	
		case 67219675:
			return 31;
	
		case joaat("outlaw"):
			return 9;
	
		case joaat("vipseason006"):
			return 17;
	
		case 547199896:
			return 22;
	
		case 591458137:
			return 29;
	
		case joaat("BountyHunter"):
			return 7;
	
		case 696644969:
			return 26;
	
		case joaat("vipseason005"):
			return 14;
	
		case 753957709:
			return 20;
	
		case joaat("NULL"):
			return -1;
	
		case joaat("teamster"):
			return 6;
	
		case 1054483531:
			return 21;
	
		case 1322114923:
			return 3;
	
		case joaat("normal"):
			return 0;
	
		case joaat("intro_clay2"):
			return 5;
	
		case 1539627774:
			return 28;
	
		case joaat("moonshiner"):
			return 15;
	
		case joaat("gunslinger"):
			return 8;
	
		case 1792833819:
			return 25;
	
		case 1837071987:
			return 30;
	
		case 1885832251:
			return 32;
	
		case 1976336482:
			return 18;
	
		case 2042305612:
			return 35;
	
		default:
		
	}

	return -1;
}

void func_1367(var uParam0, int iParam1) // Position - 0x253F9
{
	int num;
	int num2;
	var unk;

	if (Global_1205804.f_129 >= 32)
	{
		Global_1205804.f_129 = 32;
		return;
	}

	if (iParam1 >= Global_1205804.f_129)
		iParam1 = -1;

	if (iParam1 <= -1)
	{
		Global_1205804[Global_1205804.f_129 /*4*/] = { *uParam0 };
		Global_1205804.f_129 = Global_1205804.f_129 + 1;
		return;
	}

	num = iParam1;
	num2 = Global_1205804.f_129 - 1;
	unk.f_1 = -1;
	unk.f_1.f_1 = -1;

	while (num2 >= num)
	{
		unk = { Global_1205804[num2 /*4*/] };
		Global_1205804[num2 /*4*/] = { Global_1205804[num2 + 1 /*4*/] };
		Global_1205804[num2 + 1 /*4*/] = { unk };
		num2 = num2 - 1;
	}

	Global_1205804[iParam1 /*4*/] = { *uParam0 };
	Global_1205804.f_129 = Global_1205804.f_129 + 1;
	return;
}

void func_1368(int iParam0) // Position - 0x254CD
{
	if (iParam0 < 0 || iParam0 >= Global_1205804.f_129)
		return;

	Global_1205804.f_130 = iParam0;
	Global_1205804.f_131 = Global_1205804[iParam0 /*4*/];
	return;
}

void func_1369() // Position - 0x25504
{
	if (Global_1205804.f_131 == 0)
		return;

	Global_1205804.f_130 = func_1371(Global_1205804.f_131);

	if (Global_1205804.f_130 < 0)
		Global_1205804.f_131 = 0;

	return;
}

BOOL func_1370(int iParam0, var uParam1, var uParam2) // Position - 0x2553A
{
	var unk;

	if (func_1372(iParam0, uParam1, &unk))
		func_1373(&unk, iParam0, uParam2);
	else
		return false;

	return true;
}

int func_1371(int iParam0) // Position - 0x25561
{
	int i;

	if (Global_1205804.f_129 <= 0)
		return -1;

	i = 0;

	for (i = 0; i < Global_1205804.f_129; i = i + 1)
	{
		if (Global_1205804[i /*4*/] == iParam0)
			return i;
	}

	return -1;
}

BOOL func_1372(int iParam0, var uParam1, Any* panParam2) // Position - 0x255A4
{
	*panParam2 = Global_1149432.f_7;
	panParam2->f_2 = -1096981081;
	panParam2->f_3 = func_1360(iParam0);
	panParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam2->f_1), panParam2);
}

void func_1373(Any* panParam0, int iParam1, var uParam2) // Position - 0x255D8
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

