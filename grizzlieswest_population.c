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
	Volume volLocal_16 = 0;
	Volume volLocal_17 = 0;
	Volume volLocal_18 = 0;
	Volume volLocal_19 = 0;
	Volume volLocal_20 = 0;
	Volume volLocal_21 = 0;
#endregion

void main() // Position - 0x0
{
	BOOL flag;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	func_1();
	func_2();
	flag = true;

	while (flag)
	{
		if (func_3() != -1)
		{
			Global_1896646.f_51 = NETWORK::_NETWORK_GET_INSTANCE_ID_OF_THREAD(Global_1896646.f_42);
		
			if (func_4(true, true))
				flag = false;
		
			func_5();
		}
		else if (func_6(-1414537028))
		{
			POPULATION::_0xF45E46DEECF7DF6E(2016, 0, 0, -1, -1);
		}
		else if (func_6(38162571))
		{
			POPULATION::_0xF45E46DEECF7DF6E(224, 0, 0, -1, -1);
			POPULATION::_0xDBBF12EA7C1029B2(0, 1);
		}
		else if (func_6(1350391819))
		{
			POPULATION::_0xDBBF12EA7C1029B2(1, 1);
		}
	
		BUILTIN::WAIT(0);
	}

	func_7();
	func_8();
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1() // Position - 0xA8
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT();
		func_8();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	return;
}

void func_2() // Position - 0xE1
{
	volLocal_16 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-600f, 2695f, 330f, 0f, 0f, 0f, 250f, 200f, 200f, "m_volAdlerRanch_Restriction");
	func_9(volLocal_16);
	volLocal_17 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volColter_Restriction");
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_17, -1320f, 2425f, 305f, 0f, 0f, 0f, 115f, 115f, 15f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_17, -1410f, 2435f, 327.5f, 0f, 0f, 0f, 25f, 25f, 25f);
	func_9(volLocal_17);
	volLocal_18 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-411.5007f, 1732.1594f, 220.70819f, 0f, 0f, 17.188463f, 71.74252f, 70.79237f, 31.057716f, "m_volChezPorter_Restriction");
	func_10(volLocal_18, 0, false);
	volLocal_19 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volWinterMiningTown_Restriction");
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_19, -1947.5f, 1332.25f, 216f, 0f, 0f, 0f, 8f, 8f, 30f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_19, -1898.5f, 1346.5f, 216f, 0f, 0f, 0f, 48f, 48f, 30f);
	func_10(volLocal_19, 0, false);
	volLocal_20 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volLakeIsabella_Restriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_20, -1888.7559f, 1801.4811f, 235.75629f, 0f, 0f, 25.738407f, 74.84248f, 98.28612f, 31.188478f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_20, -1954.7927f, 1783.318f, 243.28734f, 0f, 0f, 0f, 46.645744f, 29.928177f, 11.7102f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_20, -1762.2211f, 1695.6542f, 241.4712f, 0f, 0f, 41.082565f, 79.253685f, 154.93314f, 19.56473f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_20, -1701.7885f, 1569.3317f, 236.86743f, 0f, 0f, 0f, 35.550243f, 41.68321f, 26.915134f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_20, -1778.828f, 1559.3986f, 224.96841f, 0f, 0f, 52.77263f, 63.782925f, 40.769115f, 36.184322f);
	func_11(volLocal_20, 0, false);
	volLocal_21 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-166.75327f, 1728.3191f, 179.90657f, 0f, 0f, -50.0001f, 19.317749f, 14.360326f, 21.413816f, "m_volGranitePass_Restriction");
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volLocal_21, 2228767, 0, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volLocal_21, 2228767, 0, 0, -1, -1, 0);
	func_12();
	return;
}

int func_3() // Position - 0x33A
{
	return Global_1572887.f_14;
}

BOOL func_4(BOOL bParam0, BOOL bParam1) // Position - 0x348
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

void func_5() // Position - 0x428
{
	if (BUILTIN::VDIST(Global_34, -573.6422f, 2709.2234f, 320.48395f) < 100f)
	{
		switch (Global_1939596.f_314)
		{
			case 0:
				Global_1939596.f_313 = ENTITY::PIN_CLOSEST_MAP_ENTITY(joaat("p_val_gate_snow01x"), -573.6422f, 2709.2234f, 320.48395f, 11);
				Global_1939596.f_314 = 1;
				break;
		
			case 1:
				if (ENTITY::IS_MAP_ENTITY_PINNED(Global_1939596.f_313))
				{
					ENTITY::SET_ENTITY_VISIBLE(ENTITY::_GET_PINNED_MAP_ENTITY(Global_1939596.f_313), false);
					ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(ENTITY::_GET_PINNED_MAP_ENTITY(Global_1939596.f_313), false, false);
					func_13(371690004);
					Global_1939596.f_314 = 2;
				}
				break;
		
			case 3:
				Global_1939596.f_314 = 1;
				break;
		}
	}
	else
	{
		func_7();
	}

	return;
}

BOOL func_6(int iParam0) // Position - 0x4F1
{
	int num;
	int num2;
	int offset;

	num = func_14(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (func_15(num2))
	{
		if (Global_1072759.f_19585.f_24 && !func_16(iParam0))
			return false;
	
		return MISC::IS_BIT_SET(Global_1072759.f_19585[num2], offset) || MISC::IS_BIT_SET(Global_38.f_118[num2], offset);
	}

	return MISC::IS_BIT_SET(Global_38.f_118[num2], offset);
}

void func_7() // Position - 0x570
{
	if (ENTITY::IS_MAP_ENTITY_PINNED(Global_1939596.f_313))
		ENTITY::_UNPIN_MAP_ENTITY(Global_1939596.f_313);

	Global_1939596.f_314 = 0;
	return;
}

void func_8() // Position - 0x599
{
	return;
}

void func_9(Volume volParam0) // Position - 0x5A1
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, 231, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, 231, 16384, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(231, 16384, 0, -1, -1, volParam0);
	return;
}

void func_10(Volume volParam0, int iParam1, BOOL bParam2) // Position - 0x5E2
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);

	if (bParam2)
		func_17(&iParam1, 8192);

	POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, volParam0);
	return;
}

void func_11(Volume volParam0, int iParam1, BOOL bParam2) // Position - 0x661
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 0);

	if (bParam2)
		func_17(&iParam1, 8192);

	POPULATION::_0x2161278C6322F740(iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, volParam0);
	return;
}

void func_12() // Position - 0x6D7
{
	int num;

	num = 5;
	VOLUME::REQUEST_VOLUME_LOCK(-1779.3875f, 1638.8478f, 235.66107f, 17f, num, 8192);
	VOLUME::REQUEST_VOLUME_LOCK(-1782.2443f, 1654.2479f, 235.66107f, 19f, num, 8192);
	VOLUME::REQUEST_VOLUME_LOCK(-1803.3016f, 1669.097f, 235.66107f, 22f, num, 8192);
	return;
}

void func_13(Hash hParam0) // Position - 0x73C
{
	if (!STREAMING::IS_IPL_ACTIVE_HASH(hParam0))
		func_18(hParam0);

	return;
}

int func_14(int iParam0, int iParam1) // Position - 0x755
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

BOOL func_15(int iParam0) // Position - 0x1FFA
{
	int num;

	num = func_19(iParam0);

	if (num < 336)
		return false;

	return true;
}

BOOL func_16(int iParam0) // Position - 0x2017
{
	if (iParam0 == joaat("WS_MP_HIDEOUT_CLEMENS_COVE"))
		return true;

	return false;
}

void func_17(var uParam0, int iParam1) // Position - 0x202E
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

int func_18(Hash hParam0) // Position - 0x2043
{
	if (STREAMING::IS_IPL_ACTIVE_HASH(hParam0))
		return 1;

	if (func_20())
		return 0;

	STREAMING::REQUEST_IPL_HASH(hParam0);
	return 0;
}

int func_19(int iParam0) // Position - 0x206A
{
	return func_21(iParam0) + 30;
}

BOOL func_20() // Position - 0x207A
{
	return func_22() == 4;
}

int func_21(int iParam0) // Position - 0x2088
{
	return iParam0 * 31;
}

int func_22() // Position - 0x2094
{
	if (Global_1102813 <= 5)
		return Global_1102813;

	if (Global_1102813 <= 22)
		return 4;

	if (Global_1102813 <= 25)
		return 3;

	return 26;
}

