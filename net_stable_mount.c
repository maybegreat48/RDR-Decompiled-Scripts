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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 255;
	var uLocal_41 = 0;
	var uLocal_42 = 4;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 2;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
#endregion

void main() // Position - 0x0
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	uLocal_19.f_4 = BRAIN::_GET_SCRIPT_BRAIN_ENTITY();

	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_19.f_4))
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
		return;
	}

	func_1();

	while (!func_2(true, true) && ENTITY::DOES_ENTITY_EXIST(uLocal_19.f_4) && BRAIN::_GET_SCRIPT_BRAIN_ENTITY() == uLocal_19.f_4)
	{
		if (!func_3(&uLocal_19, &uScriptParam_0))
		{
			func_4(&uLocal_19, &uScriptParam_0);
		
			if (func_3(&uLocal_19, &uScriptParam_0))
				break;
		}
		else
		{
			break;
		}
	
		BUILTIN::WAIT(0);
	}

	func_5(&uLocal_19, &uScriptParam_0);
	return;
}

void func_1() // Position - 0x8A
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
	BRAIN::_0xA6AC35DB4A7957A8(275);
	return;
}

BOOL func_2(BOOL bParam0, BOOL bParam1) // Position - 0xA7
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

BOOL func_3(var uParam0, Any* panParam1) // Position - 0x187
{
	if (func_2(true, true))
		return true;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
		return true;

	if (func_6(uParam0, 12))
		return true;

	if (func_6(uParam0, 0))
		return true;

	if (!func_6(uParam0, 2))
	{
		if (!NETWORK::NETWORK_IS_HANDLE_VALID(panParam1) || !NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(panParam1))
		{
			func_7(uParam0, 11);
			return true;
		}
	}

	return false;
}

void func_4(var uParam0, Any* panParam1) // Position - 0x1F8
{
	Ped playerPed;

	uParam0->f_4 = BRAIN::_GET_SCRIPT_BRAIN_ENTITY();

	if (ENTITY::IS_ENTITY_A_PED(uParam0->f_4))
		uParam0->f_19 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_4);
	else
		uParam0->f_22 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_4);

	uParam0->f_21 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(panParam1);

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_21))
	{
		playerPed = PLAYER::GET_PLAYER_PED(uParam0->f_21);
	
		if (uParam0->f_20 != playerPed)
		{
			uParam0->f_20 = playerPed;
			func_7(uParam0, 29);
		}
	}

	switch (*uParam0)
	{
		case 0:
			func_8(uParam0, panParam1);
			break;
	
		case 1:
			func_9(uParam0, panParam1);
			break;
	
		case 2:
			func_10(uParam0, panParam1);
			break;
	
		case 3:
			func_11(uParam0, panParam1);
			break;
	
		case 4:
			func_12(uParam0, panParam1);
			break;
	}

	func_13(uParam0, panParam1);
	uParam0->f_2 = uParam0->f_2 + 1;

	if (uParam0->f_2 > 5)
		uParam0->f_2 = 0;

	return;
}

void func_5(var uParam0, Any* panParam1) // Position - 0x2E1
{
	BOOL flag;

	flag = true;

	if (MAP::DOES_BLIP_EXIST(uParam0->f_17))
		MAP::REMOVE_BLIP(&(uParam0->f_17));

	if (HUD::IS_MP_GAMER_TAG_ACTIVE(uParam0->f_6))
		HUD::REMOVE_MP_GAMER_TAG(&(uParam0->f_6));

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
		return;
	}
	else if (ENTITY::GET_ENTITY_COLLISION_DISABLED(uParam0->f_4))
	{
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_4, true, false);
	}

	if (func_14(uParam0))
		flag = false;

	func_15(uParam0->f_19);
	func_16(uParam0, panParam1);
	func_17(uParam0, panParam1);

	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_19))
	{
		AITRANSPORT::SET_TRANSPORT_ACCESSIBLE_SEAT_FLAGS(uParam0->f_19, 0);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(uParam0->f_19, 34, true);
	}

	if (PED::_IS_PED_VISIBILITY_TRACKED(uParam0->f_19))
		PED::RELEASE_PED_VISIBILITY_TRACKING(uParam0->f_19);

	if (!uParam0->f_3)
		!func_18(panParam1, uParam0->f_4, uParam0->f_5, flag, func_6(uParam0, 2));

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_6(var uParam0, int iParam1) // Position - 0x3BB
{
	return MISC::IS_BIT_SET(uParam0->f_1, iParam1);
}

void func_7(var uParam0, int iParam1) // Position - 0x3CD
{
	if (MISC::IS_BIT_SET(uParam0->f_1, iParam1))
		return;

	MISC::SET_BIT(&(uParam0->f_1), iParam1);
	return;
}

void func_8(var uParam0, Any* panParam1) // Position - 0x3EF
{
	Hash entityModel;
	int num;
	Ped EntityIndex;
	Player playerFromGamerHandle;
	int num2;
	var unk;
	int NetworkId;
	int bondingLevel;

	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_4))
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_4, true, true);

	entityModel = ENTITY::GET_ENTITY_MODEL(uParam0->f_4);

	if (!STREAMING::IS_MODEL_VALID(entityModel))
	{
		func_7(uParam0, 0);
		return;
	}

	if (func_19(&(uParam0->f_30)))
		func_20(&(uParam0->f_30));

	num = func_21(entityModel);

	if (num == -1)
		if (STREAMING::IS_MODEL_A_PED(entityModel))
			num = 0;
		else if (STREAMING::IS_MODEL_A_VEHICLE(entityModel))
			num = 2;
		else
			func_7(uParam0, 0);

	EntityIndex = PLAYER::PLAYER_PED_ID();
	uParam0->f_5 = num;
	playerFromGamerHandle = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(panParam1);
	uParam0->f_21 = playerFromGamerHandle;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(panParam1->f_2)))
		func_7(uParam0, 1);

	if (ENTITY::IS_ENTITY_A_PED(uParam0->f_4))
		uParam0->f_19 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_4);
	else
		uParam0->f_22 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_4);

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(playerFromGamerHandle) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(playerFromGamerHandle) || playerFromGamerHandle != PLAYER::PLAYER_ID())
	{
		switch (uParam0->f_5)
		{
			case 0:
			case 1:
				func_7(uParam0, 5);
			
				if (MISC::COMPARE_STRINGS(&(panParam1->f_7), func_22(), false, -1) == 0 || Global_1901671.f_51.f_29 && !unk_0xDBDF80673BBA3D65(1))
					PED::_SET_PED_PROMPT_NAME(uParam0->f_19, MISC::VAR_STRING(2, func_24(func_23(entityModel))));
				else if (HUD::GET_LENGTH_OF_LITERAL_STRING(&(panParam1->f_7)) > 0 && NETWORK::_0xF23A6D6C11D8EC15(panParam1))
					PED::_SET_PED_PROMPT_NAME(uParam0->f_19, &(panParam1->f_7));
				else if (entityModel == func_25())
					PED::_SET_PED_PROMPT_NAME(uParam0->f_19, MISC::VAR_STRING(2, func_24(func_26())));
			
				func_7(uParam0, 21);
				break;
		
			case 2:
				func_7(uParam0, 6);
				func_27(uParam0, EntityIndex, NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(panParam1));
				break;
		
			case 3:
				func_7(uParam0, 6);
				func_7(uParam0, 21);
				break;
		
			default:
				func_7(uParam0, 21);
				break;
		}
	
		func_28(uParam0, 4);
		return;
	}

	if (func_6(uParam0, 1))
	{
		if (num == 0 || num == 1)
		{
			num2 = func_23(entityModel);
			TEXT_LABEL_ASSIGN_STRING(&(Global_1290271.f_11.f_747), MISC::VAR_STRING(2, func_24(num2)), 64);
		}
	}
	else
	{
		if (!func_29(&(panParam1->f_2), &unk))
			if (func_30(&(panParam1->f_2)))
				func_31(false, true);
	
		if (num == 0 || num == 1)
		{
			if (!func_32(&(panParam1->f_2), uParam0->f_5, true))
			{
				func_7(uParam0, 0);
				return;
			}
		}
	
		panParam1->f_2 = { Global_1903838 };
		uParam0->f_5 = Global_1903838.f_10;
		Global_1290271.f_11.f_747 = { func_33(&Global_1903838, true) };
	}

	if (uParam0->f_5 == -1)
	{
		func_7(uParam0, 0);
		return;
	}

	func_7(uParam0, 2);

	if (!UNLOCK::UNLOCK_IS_UNLOCKED(1988458112))
	{
		ENTITY::IS_ENTITY_DEAD(EntityIndex);
		PED::SET_PED_CONFIG_FLAG(EntityIndex, 561, false);
		func_34(uParam0, 23);
	}

	uParam0->f_18 = func_35(uParam0->f_5);

	if (func_6(uParam0, 1))
		uParam0->f_18 = -1230993421;

	switch (uParam0->f_5)
	{
		case 0:
		case 1:
			func_7(uParam0, 21);
		
			if (NETWORK::NETWORK_DOES_TUNABLE_EXIST(-475019843, 1661175588) && NETWORK::NETWORK_ACCESS_TUNABLE_BOOL(-475019843, 1661175588))
			{
				if (func_6(uParam0, 1))
				{
					bondingLevel = 1;
				}
				else
				{
					func_36(uParam0->f_19, Global_1903838.f_23);
					bondingLevel = func_37(uParam0->f_19);
				}
			
				PED::_SET_MOUNT_BONDING_LEVEL(uParam0->f_19, bondingLevel);
			}
		
			uParam0->f_19 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_4);
			NetworkId = NETWORK::PED_TO_NET(uParam0->f_19);
			func_38(uParam0->f_4, false);
			func_7(uParam0, 5);
			func_28(uParam0, 1);
		
			if (HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1290271.f_11.f_747)) > 0)
			{
				uParam0->f_6 = HUD::CREATE_FAKE_MP_GAMER_TAG(uParam0->f_19, &(Global_1290271.f_11.f_747), true, false, "", 0);
				PED::_SET_PED_PROMPT_NAME(uParam0->f_19, &(Global_1290271.f_11.f_747));
			}
			else if (entityModel == func_25())
			{
				uParam0->f_6 = HUD::CREATE_FAKE_MP_GAMER_TAG(uParam0->f_19, MISC::VAR_STRING(2, func_24(func_26())), true, false, "", 0);
				PED::_SET_PED_PROMPT_NAME(uParam0->f_19, MISC::VAR_STRING(2, func_24(func_26())));
			}
			else
			{
				uParam0->f_6 = HUD::CREATE_FAKE_MP_GAMER_TAG(uParam0->f_19, "HORSE", true, false, "", 0);
			}
		
			if (func_6(uParam0, 1))
				HUD::_SET_MP_GAMER_TAG_TOP_ICON(uParam0->f_6, -847116890);
			else
				HUD::_SET_MP_GAMER_TAG_TOP_ICON(uParam0->f_6, joaat("player_horse"));
		
			HUD::_SET_MP_GAMER_TAG_COLOUR(uParam0->f_6, joaat("color_friendly"));
			HUD::_SET_MP_GAMER_TAG_VISIBILITY(uParam0->f_6, uParam0->f_7);
		
			if (func_32(&(panParam1->f_2), uParam0->f_5, false))
			{
				if (!func_39(&Global_1903838, &(uParam0->f_35)))
				{
				}
			}
		
			func_40();
			break;
	
		case 2:
			func_27(uParam0, EntityIndex, PLAYER::PLAYER_ID());
			func_7(uParam0, 6);
			func_28(uParam0, 2);
			NetworkId = NETWORK::_0xF260AF6F43953316(uParam0->f_4);
			break;
	
		case 3:
			func_7(uParam0, 21);
			func_7(uParam0, 6);
			func_28(uParam0, 3);
			NetworkId = NETWORK::_0xF260AF6F43953316(uParam0->f_4);
			break;
	
		default:
			func_7(uParam0, 0);
			break;
	}

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(NetworkId))
		return;

	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_4))
		return;

	NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(NetworkId, PLAYER::PLAYER_ID(), true);
	return;
}

void func_9(var uParam0, Any* panParam1) // Position - 0x920
{
	Player PlayerIndex;
	int num;
	var unk;
	const char* String1;

	PlayerIndex = PLAYER::PLAYER_ID();
	num = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(PlayerIndex))
	{
		func_41(uParam0);
		return;
	}

	func_42(uParam0);

	if (!PLAYER::IS_PLAYER_DEAD(PlayerIndex) && func_43(PLAYER::GET_PLAYER_PED(PlayerIndex), uParam0->f_19, 5f, true, true))
	{
		func_44();
	
		if (!func_45(966, 1073741824) && !func_46(966))
		{
			func_47(966, false);
			func_48(966, 1073741824);
		}
	}

	if (PlayerIndex == uParam0->f_21)
	{
		func_7(uParam0, 7);
	
		if (!func_6(uParam0, 22))
		{
			func_49();
		
			if (!func_50())
			{
			}
			else
			{
				func_51(&(Global_1903838.f_113));
				Global_1903838.f_111 = 1;
				Global_1903838.f_112 = 0;
				unk = { func_52(false, true, false, -1) };
				TELEMETRY::TELEMETRY_PERSONAL_VEHICLE_MOUNT(uParam0->f_19, joaat("CALL"), &unk, 0);
				func_7(uParam0, 22);
			}
		}
	
		if (func_53(44))
			func_34(uParam0, 4);
		else
			func_7(uParam0, 4);
	
		if (func_54(2, 255))
			func_7(uParam0, 8);
		else
			func_34(uParam0, 8);
	
		Global_1289643[num /*19*/].f_9 = Global_1289643[num /*19*/].f_9 | 1;
	
		if (func_6(uParam0, 20))
		{
			func_32(&(panParam1->f_2), 0, false);
			String1 = func_55(func_33(&Global_1903838, true));
		
			if (Global_1901671.f_51.f_29)
			{
				if (!unk_0xDBDF80673BBA3D65(1))
				{
					func_34(uParam0, 20);
				}
				else if (MISC::COMPARE_STRINGS(String1, &(Global_1290271.f_11.f_747), true, -1) > 0)
				{
					HUD::SET_MP_GAMER_TAG_NAME(uParam0->f_6, &(Global_1903838.f_12));
					PED::_SET_PED_PROMPT_NAME(uParam0->f_19, &(Global_1903838.f_12));
					Global_1290271.f_11.f_747 = { Global_1903838.f_12 };
					func_34(uParam0, 20);
				}
			}
			else if (MISC::COMPARE_STRINGS(String1, &(Global_1290271.f_11.f_747), true, -1) > 0)
			{
				HUD::SET_MP_GAMER_TAG_NAME(uParam0->f_6, &(Global_1903838.f_12));
				PED::_SET_PED_PROMPT_NAME(uParam0->f_19, &(Global_1903838.f_12));
				Global_1290271.f_11.f_747 = { Global_1903838.f_12 };
				func_34(uParam0, 20);
			}
		}
	
		if (func_54(4096, 255))
		{
			func_56(4096);
			func_7(uParam0, 20);
		}
	
		func_57(uParam0);
		func_58(uParam0);
		func_59(uParam0, panParam1);
		func_60(uParam0, uParam0->f_19, 8192, 16384, func_53(91));
	}
	else
	{
		func_34(uParam0, 7);
		func_34(uParam0, 8);
	
		if (func_6(uParam0, 3))
			func_7(uParam0, 4);
		else
			func_34(uParam0, 4);
	}

	func_61(uParam0, panParam1);
	func_62(uParam0, panParam1);
	func_63(uParam0);
	func_64(uParam0);
	func_65(uParam0);
	func_66(uParam0, num);
	func_67(uParam0, num);
	func_68(uParam0, num);
	func_69(uParam0, panParam1, num);
	func_70(uParam0, panParam1, num);
	func_71(uParam0);
	func_72(uParam0);
	return;
}

void func_10(var uParam0, Any* panParam1) // Position - 0xC05
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();
	num = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (panParam1->f_6 == Global_1290271.f_814.f_46)
	{
		PLAYER::_SET_PLAYER_OWNS_VEHICLE(PLAYER::PLAYER_ID(), uParam0->f_22);
	
		if (func_53(94))
			BRAIN::_0xA6AC35DB4A7957A8(9999);
		else
			BRAIN::_0xA6AC35DB4A7957A8(275);
	
		func_7(uParam0, 7);
	
		if (func_53(90))
			func_34(uParam0, 4);
		else
			func_7(uParam0, 4);
	
		if (func_73(8, 255))
			func_7(uParam0, 8);
		else
			func_34(uParam0, 8);
	
		Global_1289643[num /*19*/].f_10 = Global_1289643[num /*19*/].f_10 | 1;
	
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_22) && VEHICLE::IS_DRAFT_VEHICLE(uParam0->f_22))
		{
			VEHICLE::_SET_DRAFT_VEHICLE_YOKE_CAN_BREAK(uParam0->f_22, func_53(96));
			VEHICLE::_SET_DRAFT_VEHICLE_ANIMALS_CAN_DETACH(uParam0->f_22, func_53(96));
		}
	
		func_60(uParam0, uParam0->f_22, 32768, 65536, func_53(91));
	}
	else
	{
		func_34(uParam0, 7);
		func_34(uParam0, 8);
	
		if (func_6(uParam0, 3))
			func_7(uParam0, 4);
		else
			func_34(uParam0, 4);
	}

	func_74(uParam0);
	func_27(uParam0, ped, PLAYER::PLAYER_ID());
	func_65(uParam0);
	func_69(uParam0, panParam1, num);
	func_70(uParam0, panParam1, num);
	func_75(uParam0);
	return;
}

void func_11(var uParam0, Any* panParam1) // Position - 0xD4E
{
	int num;

	num = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (panParam1->f_6 == Global_1290271.f_814.f_46)
	{
		PLAYER::_SET_PLAYER_OWNS_VEHICLE(PLAYER::PLAYER_ID(), uParam0->f_22);
		func_7(uParam0, 7);
	
		if (func_53(90))
			func_34(uParam0, 4);
		else
			func_7(uParam0, 4);
	
		if (func_73(8, 255))
			func_7(uParam0, 8);
		else
			func_34(uParam0, 8);
	
		Global_1289643[num /*19*/].f_10 = Global_1289643[num /*19*/].f_10 | 1;
		func_60(uParam0, uParam0->f_22, 32768, 65536, func_53(91));
	}
	else
	{
		func_34(uParam0, 7);
		func_34(uParam0, 8);
	
		if (func_6(uParam0, 3))
			func_7(uParam0, 4);
		else
			func_34(uParam0, 4);
	}

	func_65(uParam0);
	func_69(uParam0, panParam1, num);
	func_70(uParam0, panParam1, num);
	func_76(uParam0);
	return;
}

void func_12(var uParam0, Any* panParam1) // Position - 0xE31
{
	Player playerFromGamerHandle;
	Player player;
	float num;

	if (func_6(uParam0, 11))
	{
		func_7(uParam0, 0);
		return;
	}

	playerFromGamerHandle = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(panParam1);
	player = playerFromGamerHandle;
	playerFromGamerHandle != uParam0->f_21;

	if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(panParam1))
	{
		func_7(uParam0, 10);
		func_7(uParam0, 0);
		return;
	}

	switch (func_77(uParam0, 1))
	{
		case 1:
			return;
	
		case 2:
			func_7(uParam0, 0);
			return;
	
		default:
		
	}

	if (!Global_1072759.f_5)
		return;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(playerFromGamerHandle))
	{
		func_7(uParam0, 10);
		func_7(uParam0, 0);
		return;
	}

	if (!NETWORK::NETWORK_IS_PLAYER_CONNECTED(playerFromGamerHandle))
	{
		func_7(uParam0, 10);
		func_7(uParam0, 0);
		return;
	}

	if (uParam0->f_5 == 2)
		func_27(uParam0, PLAYER::PLAYER_PED_ID(), playerFromGamerHandle);

	func_66(uParam0, player);

	if (uParam0->f_2 != 0)
		return;

	func_67(uParam0, player);
	func_69(uParam0, panParam1, player);
	func_70(uParam0, panParam1, player);
	func_71(uParam0);

	if (!func_6(uParam0, 18))
	{
		if (uParam0->f_19 != PLAYER::GET_MOUNT_OWNED_BY_PLAYER(playerFromGamerHandle))
		{
			if (!func_19(&(uParam0->f_11)))
				func_78(&(uParam0->f_11));
		
			num = func_79(&(uParam0->f_11));
		
			if (num > 5f)
				func_7(uParam0, 18);
		}
		else if (func_19(&(uParam0->f_11)))
		{
			func_20(&(uParam0->f_11));
		}
	}

	switch (uParam0->f_5)
	{
		case 0:
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_19))
				uParam0->f_19 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_4);
		
			if (uParam0->f_19 == PLAYER::GET_MOUNT_OWNED_BY_PLAYER(playerFromGamerHandle))
			{
				func_63(uParam0);
				func_61(uParam0, panParam1);
			}
			else if (func_6(uParam0, 18))
			{
				func_7(uParam0, 0);
				func_7(uParam0, 10);
			}
			break;
	
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_22))
				uParam0->f_22 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_4);
		
			if (func_73(1, player) && Global_1289643[player /*19*/].f_14 == panParam1->f_6)
			{
			}
			else if (func_6(uParam0, 18))
			{
				func_7(uParam0, 0);
				func_7(uParam0, 10);
			}
		
			func_74(uParam0);
			break;
	
		case 3:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_22))
				uParam0->f_22 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_4);
		
			if (func_73(1, player) && Global_1289643[player /*19*/].f_14 == panParam1->f_6)
			{
			}
			else if (func_6(uParam0, 18))
			{
				func_7(uParam0, 0);
				func_7(uParam0, 10);
			}
			break;
	
		default:
			func_7(uParam0, 0);
			break;
	}

	return;
}

void func_13(var uParam0, Any* panParam1) // Position - 0x10C0
{
	int i;
	int numberOfEvents;

	numberOfEvents = SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK);

	for (i = 0; i < numberOfEvents; i = i + 1)
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i))
		{
			case -507840394:
				func_80(uParam0, panParam1, i);
				break;
		}
	}

	return;
}

BOOL func_14(var uParam0) // Position - 0x1102
{
	if (!Global_1048579)
		return false;

	if (!Global_387940.f_3)
		return false;

	if (Global_387940.f_18.f_1)
		return false;

	if (func_6(uParam0, 11))
		return true;

	if (func_6(uParam0, 17))
		return true;

	return false;
}

int func_15(Ped pedParam0) // Position - 0x1152
{
	var unk;
	int num;
	int num2;
	int i;

	if (!func_81(pedParam0))
		return 1;

	if (!PED::IS_PED_CARRYING_SOMETHING(pedParam0))
		return 1;

	unk = 3;
	num = func_82(pedParam0, &unk, 3);
	num2 = 0;

	for (i = 0; i < num; i = i + 1)
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(unk[i]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(unk[i]) || ENTITY::IS_ENTITY_A_PED(unk[i]) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(unk[i])))
			{
				PED::DETACH_CARRIABLE_ENTITY(unk[i], false, false);
				num2 = num2 + 1;
			}
			else
			{
				ENTITY::_SET_ENTITY_CARRYING_FLAG(unk[i], 2, false);
				ENTITY::_SET_ENTITY_CARRYING_FLAG(unk[i], 27, true);
				num2 = num2 + 1;
			}
		}
		else if (!ENTITY::_GET_ENTITY_CARRYING_FLAG(unk[i], 2))
		{
			if (ENTITY::_GET_ENTITY_CARRYING_FLAG(unk[i], 27))
				num2 = num2 + 1;
		}
	}

	if (num == num2)
		return 1;

	return 0;
}

void func_16(var uParam0, Any* panParam1) // Position - 0x1240
{
	BOOL flag;
	Ped EntityIndex;
	Player PlayerIndex;

	flag = false;
	EntityIndex = PLAYER::PLAYER_PED_ID();
	PlayerIndex = PLAYER::PLAYER_ID();

	if (!ENTITY::DOES_ENTITY_EXIST(EntityIndex))
		return;

	if (!func_83(EntityIndex, uParam0->f_19, false) || ENTITY::IS_ENTITY_DEAD(EntityIndex) || PED::GET_MOUNT(EntityIndex) != uParam0->f_19)
		return;

	if (!ENTITY::IS_ENTITY_DEAD(EntityIndex))
		if (TASK::_IS_PED_LEADING_HORSE(EntityIndex) && TASK::_GET_LED_HORSE_FROM_PED(EntityIndex) == uParam0->f_19)
			TASK::TASK_STOP_LEADING_HORSE(EntityIndex);

	if (!PLAYER::IS_PLAYER_DEAD(PlayerIndex))
		if (PLAYER::IS_PLAYER_FREE_AIMING(PlayerIndex) || PED::GET_PED_RESET_FLAG(EntityIndex, 311))
			flag = true;

	if (flag || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_19) || PED::_IS_PED_QUEUED_FOR_DELETION(uParam0->f_19))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(EntityIndex, false, true);
		PED::_REMOVE_PED_FROM_MOUNT(EntityIndex, true, false);
	}
	else
	{
		TASK::TASK_DISMOUNT_ANIMAL(EntityIndex, 1, 0, 0, 0, 0);
	}

	return;
}

void func_17(var uParam0, Any* panParam1) // Position - 0x1321
{
	if (!func_6(uParam0, 2))
		return;

	Global_1903838.f_111 = 0;
	PLAYER::_SET_PLAYER_OWNS_MOUNT(PLAYER::PLAYER_ID(), 0);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 561, false);
	func_84();
	func_85(uParam0->f_19, &(panParam1->f_2));
	func_86();
	func_56(1);
	func_56(65536);
	func_56(32768);
	func_56(131072);
	func_87(0, true);
	func_88(false, true);
	return;
}

BOOL func_18(Any* panParam0, Entity eParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1390
{
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam1))
		return false;

	for (i = 0; i < 32; i = i + 1)
	{
		if (!MISC::IS_BIT_SET(Global_1290271.f_11.f_320, i))
		{
			Global_1290271.f_11.f_323[i /*6*/].f_2 = eParam1;
			Global_1290271.f_11.f_323[i /*6*/].f_3 = iParam2;
			Global_1290271.f_11.f_323[i /*6*/] = { *panParam0 };
			Global_1290271.f_11.f_323[i /*6*/].f_4 = 0;
			Global_1290271.f_11.f_323[i /*6*/].f_5 = 0;
		
			if (bParam4)
				Global_1290271.f_11.f_323[i /*6*/].f_4 = Global_1290271.f_11.f_323[i /*6*/].f_4 | 8;
		
			if (bParam3)
				Global_1290271.f_11.f_323[i /*6*/].f_4 = Global_1290271.f_11.f_323[i /*6*/].f_4 | 2;
		
			if (bParam4)
			{
				switch (iParam2)
				{
					case 0:
					case 1:
						Global_1291939 = i;
						Global_1291939.f_2 = 0;
						break;
				
					case 2:
					case 3:
						Global_1291939.f_1 = i;
						break;
				}
			}
		
			MISC::SET_BIT(&(Global_1290271.f_11.f_320), i);
			return true;
		}
	}

	return false;
}

BOOL func_19(var uParam0) // Position - 0x14C0
{
	return func_89(*uParam0, 1);
}

void func_20(var uParam0) // Position - 0x14D0
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

int func_21(Hash hParam0) // Position - 0x14E6
{
	int i;
	int num;

	func_90();

	for (i = 0; i < 6; i = i + 1)
	{
		num = i;
		Global_1903838.f_106.f_1 = 0;
		Global_1903838.f_106.f_2 = -571823039;
		Global_1903838.f_106.f_3 = func_91(num);
		Global_1903838.f_106.f_4 = hParam0;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Global_1903838.f_106.f_1), &(Global_1903838.f_106)))
			return num;
	}

	return -1;
}

char* func_22() // Position - 0x1551
{
	return "UNNAMED_HORSE";
}

int func_23(Hash hParam0) // Position - 0x155B
{
	if (hParam0 == joaat("a_c_horse_mp_mangy_backup"))
		return joaat("breed_mangy_backup");

	switch (hParam0)
	{
		case joaat("a_c_horse_ardennes_irongreyroan"):
			return joaat("breed_ardennes_irongreyroan");
	
		case -2004712574:
			return 956799610;
	
		case joaat("a_c_horse_arabian_black"):
			return joaat("breed_arabian_black");
	
		case joaat("a_c_horse_americanpaint_greyovero"):
			return joaat("breed_americanpaint_greyovero");
	
		case joaat("a_c_horse_thoroughbred_bloodbay"):
			return joaat("breed_thoroughbred_bloodbay");
	
		case joaat("a_c_horse_hungarianhalfbred_liverchestnut"):
			return joaat("breed_hungarianhalfbred_liverchestnut");
	
		case joaat("a_c_horse_kladruber_cremello"):
			return joaat("breed_kladruber_cremello");
	
		case joaat("a_c_horse_kladruber_silver"):
			return joaat("breed_kladruber_silver");
	
		case joaat("a_c_horse_criollo_baybrindle"):
			return joaat("breed_criollo_baybrindle");
	
		case joaat("a_c_horse_breton_steelgrey"):
			return joaat("breed_breton_steelgrey");
	
		case joaat("a_c_horse_suffolkpunch_redchestnut"):
			return joaat("breed_suffolkpunch_redchestnut");
	
		case joaat("a_c_horse_americanpaint_tobiano"):
			return joaat("breed_americanpaint_tobiano");
	
		case joaat("a_c_horse_tennesseewalker_flaxenroan"):
			return joaat("breed_tennesseewalker_flaxenroan");
	
		case joaat("a_c_horse_kladruber_black"):
			return joaat("breed_kladruber_black");
	
		case joaat("a_c_horse_turkoman_silver"):
			return joaat("breed_turkoman_silver");
	
		case joaat("a_c_horse_suffolkpunch_sorrel"):
			return joaat("breed_suffolkpunch_sorrel");
	
		case joaat("a_c_horse_appaloosa_leopardblanket"):
			return joaat("breed_appaloosa_leopardblanket");
	
		case joaat("a_c_horse_ardennes_bayroan"):
			return joaat("breed_ardennes_bayroan");
	
		case -1460773772:
			return 1935859332;
	
		case joaat("a_c_horse_breton_mealydapplebay"):
			return joaat("breed_breton_mealydapplebay");
	
		case joaat("A_C_HORSE_NORFOLKROADSTER_PIEBALDROAN"):
			return joaat("breed_norfolkroadster_piebaldroan");
	
		case joaat("a_c_horse_missourifoxtrotter_amberchampagne"):
			return joaat("breed_missourifoxtrotter_amberchampagne");
	
		case joaat("a_c_horse_kentuckysaddle_chestnutpinto"):
			return joaat("breed_kentuckysaddle_chestnutpinto");
	
		case joaat("a_c_horse_nokota_whiteroan"):
			return joaat("breed_nokota_whiteroan");
	
		case joaat("a_c_horse_americanstandardbred_black"):
			return joaat("breed_americanstandardbred_black");
	
		case joaat("a_c_horsemule_01"):
			return joaat("breed_mule");
	
		case joaat("a_c_horse_mustang_grullodun"):
			return joaat("breed_mustang_grullodun");
	
		case joaat("a_c_horse_missourifoxtrotter_silverdapplepinto"):
			return joaat("breed_missourifoxtrotter_silverdapplepinto");
	
		case -1142861801:
			return -1750687713;
	
		case joaat("a_c_horse_appaloosa_leopard"):
			return joaat("breed_appaloosa_leopard");
	
		case joaat("a_c_horse_morgan_flaxenchestnut"):
			return joaat("breed_morgan_flaxenchestnut");
	
		case joaat("a_c_horse_appaloosa_brownleopard"):
			return joaat("breed_appaloosa_brownleopard");
	
		case joaat("a_c_horse_appaloosa_blacksnowflake"):
			return joaat("breed_appaloosa_blacksnowflake");
	
		case joaat("a_c_horse_kladruber_grey"):
			return joaat("breed_kladruber_grey");
	
		case joaat("a_c_horse_arabian_white"):
			return joaat("breed_arabian_white");
	
		case joaat("a_c_horse_murfreebrood_mange_02"):
			return joaat("breed_murfreebrood_mange_02");
	
		case joaat("a_c_horse_hungarianhalfbred_darkdapplegrey"):
			return joaat("breed_hungarianhalfbred_darkdapplegrey");
	
		case joaat("a_c_horse_tennesseewalker_redroan"):
			return joaat("breed_tennesseewalker_redroan");
	
		case joaat("a_c_horse_breton_redroan"):
			return joaat("breed_breton_redroan");
	
		case joaat("a_c_horse_kladruber_dapplerosegrey"):
			return joaat("breed_kladruber_dapplerosegrey");
	
		case joaat("a_c_horse_ardennes_strawberryroan"):
			return joaat("breed_ardennes_strawberryroan");
	
		case joaat("a_c_horse_breton_grullodun"):
			return joaat("breed_breton_grullodun");
	
		case joaat("a_c_horse_murfreebrood_mange_03"):
			return joaat("breed_murfreebrood_mange_03");
	
		case joaat("a_c_horse_belgian_blondchestnut"):
			return joaat("breed_belgian_blondchestnut");
	
		case joaat("a_c_horse_thoroughbred_brindle"):
			return joaat("breed_thoroughbred_brindle");
	
		case joaat("a_c_horse_americanstandardbred_silvertailbuckskin"):
			return joaat("breed_americanstandardbred_silvertailbuckskin");
	
		case joaat("a_c_horse_americanpaint_overo"):
			return joaat("breed_americanpaint_overo");
	
		case joaat("a_c_horse_andalusian_darkbay"):
			return joaat("breed_andalusian_darkbay");
	
		case joaat("a_c_horse_missourifoxtrotter_sablechampagne"):
			return joaat("breed_missourifoxtrotter_sablechampagne");
	
		case -417416199:
			return -272192064;
	
		case joaat("a_c_horse_arabian_rosegreybay"):
			return joaat("breed_arabian_rosegreybay");
	
		case -390136947:
			return -952011226;
	
		case joaat("a_c_horse_americanstandardbred_buckskin"):
			return joaat("breed_americanstandardbred_buckskin");
	
		case joaat("a_c_horse_kentuckysaddle_black"):
			return joaat("BREED_KENTUCKYSADDLE_BLACK");
	
		case joaat("A_C_HORSE_NORFOLKROADSTER_ROSEGREY"):
			return joaat("breed_norfolkroadster_rosegrey");
	
		case joaat("A_C_HORSE_NORFOLKROADSTER_DAPPLEDBUCKSKIN"):
			return joaat("breed_norfolkroadster_dappledbuckskin");
	
		case joaat("a_c_horse_kladruber_white"):
			return joaat("breed_kladruber_white");
	
		case joaat("a_c_horse_tennesseewalker_dapplebay"):
			return joaat("breed_tennesseewalker_dapplebay");
	
		case joaat("a_c_horse_hungarianhalfbred_piebaldtobiano"):
			return joaat("breed_hungarianhalfbred_piebaldtobiano");
	
		case joaat("a_c_horse_shire_lightgrey"):
			return joaat("breed_shire_lightgrey");
	
		case joaat("a_c_horse_mustang_tigerstripedbay"):
			return joaat("breed_mustang_tigerstripedbay");
	
		case joaat("a_c_horse_americanstandardbred_palominodapple"):
			return joaat("breed_americanstandardbred_palominodapple");
	
		case 74569170:
			return 406093506;
	
		case joaat("a_c_horse_arabian_grey"):
			return joaat("breed_arabian_grey");
	
		case joaat("a_c_horse_morgan_palomino"):
			return joaat("breed_morgan_palomino");
	
		case joaat("a_c_horse_nokota_reversedappleroan"):
			return joaat("breed_nokota_reversedappleroan");
	
		case joaat("a_c_horse_breton_sorrel"):
			return joaat("breed_breton_sorrel");
	
		case joaat("a_c_horse_mustang_goldendun"):
			return joaat("breed_mustang_goldendun");
	
		case 506531963:
			return -1159865523;
	
		case joaat("a_c_horse_criollo_sorrelovero"):
			return joaat("breed_criollo_sorrelovero");
	
		case joaat("a_c_horsemulepainted_01"):
			return joaat("breed_mule_painted");
	
		case joaat("a_c_horse_dutchwarmblood_chocolateroan"):
			return joaat("breed_dutchwarmblood_chocolateroan");
	
		case 699227695:
			return 139264677;
	
		case 704938950:
			return 1133580901;
	
		case joaat("a_c_horse_andalusian_perlino"):
			return joaat("breed_andalusian_perlino");
	
		case joaat("a_c_horse_andalusian_rosegray"):
			return joaat("breed_andalusian_rosegray");
	
		case joaat("a_c_horse_criollo_bayframeovero"):
			return joaat("breed_criollo_bayframeovero");
	
		case joaat("a_c_horse_dutchwarmblood_sealbrown"):
			return joaat("breed_dutchwarmblood_sealbrown");
	
		case joaat("a_c_horse_thoroughbred_reversedappleblack"):
			return joaat("breed_thoroughbred_reversedappleblack");
	
		case joaat("a_c_horse_murfreebrood_mange_01"):
			return joaat("breed_murfreebrood_mange_01");
	
		case joaat("a_c_horse_belgian_mealychestnut"):
			return joaat("breed_belgian_mealychestnut");
	
		case joaat("A_C_HORSE_NORFOLKROADSTER_BLACK"):
			return joaat("breed_norfolkroadster_black");
	
		case joaat("A_C_HORSE_NORFOLKROADSTER_SPECKLEDGREY"):
			return joaat("breed_norfolkroadster_speckledgrey");
	
		case joaat("a_c_horse_shire_darkbay"):
			return joaat("breed_shire_darkbay");
	
		case joaat("a_c_horse_tennesseewalker_blackrabicano"):
			return joaat("breed_tennesseewalker_blackrabicano");
	
		case joaat("a_c_horse_tennesseewalker_chestnut"):
			return joaat("breed_tennesseewalker_chestnut");
	
		case 1104566530:
			return -356470463;
	
		case joaat("a_c_horse_turkoman_darkbay"):
			return joaat("breed_turkoman_darkbay");
	
		case joaat("a_c_horse_criollo_dun"):
			return joaat("breed_criollo_dun");
	
		case 1154747978:
			return -1712303883;
	
		case joaat("a_c_horse_morgan_bayroan"):
			return joaat("breed_morgan_bayroan");
	
		case joaat("A_C_HORSE_NORFOLKROADSTER_SPOTTEDTRICOLOR"):
			return joaat("breed_norfolkroadster_spottedtricolor");
	
		case 1387035765:
			return 1323533737;
	
		case 1476007840:
			return -1898310680;
	
		case joaat("a_c_horse_arabian_redchestnut"):
			return joaat("breed_arabian_redchestnut");
	
		case 1514230770:
			return -11223392;
	
		case joaat("a_c_horse_breton_sealbrown"):
			return joaat("breed_breton_sealbrown");
	
		case joaat("a_c_horse_dutchwarmblood_sootybuckskin"):
			return joaat("breed_dutchwarmblood_sootybuckskin");
	
		case 1599848740:
			return 1416158449;
	
		case 1645353708:
			return 1147338535;
	
		case joaat("a_c_horse_kentuckysaddle_silverbay"):
			return joaat("breed_kentuckysaddle_silverbay");
	
		case joaat("a_c_horse_turkoman_gold"):
			return joaat("breed_turkoman_gold");
	
		case joaat("a_c_horse_hungarianhalfbred_flaxenchestnut"):
			return joaat("breed_hungarianhalfbred_flaxenchestnut");
	
		case joaat("a_c_donkey_01"):
			return joaat("breed_donkey");
	
		case joaat("a_c_horse_americanpaint_splashedwhite"):
			return joaat("breed_americanpaint_splashedwhite");
	
		case joaat("a_c_horse_criollo_blueroanovero"):
			return joaat("breed_criollo_blueroanovero");
	
		case joaat("a_c_horse_thoroughbred_dapplegrey"):
			return joaat("breed_thoroughbred_dapplegrey");
	
		case joaat("a_c_horse_americanstandardbred_lightbuckskin"):
			return joaat("breed_americanstandardbred_lightbuckskin");
	
		case 1887211198:
			return 577120648;
	
		case joaat("a_c_horse_kentuckysaddle_grey"):
			return joaat("breed_kentuckysaddle_grey");
	
		case joaat("a_c_horse_morgan_bay"):
			return joaat("breed_morgan_bay");
	
		case 2038357529:
			return 1854655826;
	
		case joaat("a_c_horse_mustang_wildbay"):
			return joaat("breed_mustang_wildbay");
	
		case joaat("a_c_horse_thoroughbred_blackchestnut"):
			return joaat("breed_thoroughbred_blackchestnut");
	
		case joaat("a_c_horse_appaloosa_blanket"):
			return joaat("breed_appaloosa_blanket");
	
		case joaat("a_c_horse_nokota_blueroan"):
			return joaat("breed_nokota_blueroan");
	
		case joaat("a_c_horse_criollo_marblesabino"):
			return joaat("breed_criollo_marblesabino");
	
		default:
		
	}

	return 0;
}

char* func_24(int iParam0) // Position - 0x1BE6
{
	switch (iParam0)
	{
		case joaat("breed_arabian_black"):
		case joaat("breed_arabian_redchestnut"):
		case joaat("breed_arabian_grey"):
		case joaat("breed_arabian_rosegreybay"):
		case joaat("breed_arabian_white"):
			return "BREED_ARABIAN";
	
		case joaat("breed_gang_sadie"):
			return "BREED_TURKOMAN";
	
		case joaat("breed_shire_lightgrey"):
		case joaat("breed_shire_ravenblack"):
		case joaat("breed_shire_darkbay"):
			return "BREED_SHIRE";
	
		case joaat("BREED_KENTUCKYSADDLE_BLACK"):
		case joaat("breed_kentuckysaddle_silverbay"):
		case joaat("breed_kentuckysaddle_chestnutpinto"):
		case joaat("breed_kentuckysaddle_grey"):
			return "BREED_KENTUCKYSADDLE";
	
		case joaat("breed_americanstandardbred_lightbuckskin"):
		case joaat("breed_americanstandardbred_silvertailbuckskin"):
		case joaat("breed_americanstandardbred_buckskin"):
		case joaat("breed_americanstandardbred_black"):
		case joaat("breed_americanstandardbred_palominodapple"):
			return "BREED_AMERICANSTANDARDBRED";
	
		case joaat("breed_gang_trelawney"):
			return "BREED_APPALOOSA";
	
		case joaat("breed_thoroughbred_dapplegrey"):
		case joaat("breed_thoroughbred_blackchestnut"):
		case joaat("breed_thoroughbred_bloodbay"):
		case joaat("breed_thoroughbred_brindle"):
		case joaat("breed_thoroughbred_reversedappleblack"):
			return "BREED_THOROUGHBRED";
	
		case -1898310680:
		case -1750687713:
		case -952011226:
		case -356470463:
		case -272192064:
		case 1935859332:
			return "BREED_GYPSYCOB";
	
		case joaat("breed_turkoman_silver"):
		case joaat("breed_turkoman_gold"):
		case joaat("breed_turkoman_darkbay"):
		case -11223392:
		case 139264677:
		case 956799610:
		case 1133580901:
			return "BREED_TURKOMAN";
	
		case joaat("breed_norfolkroadster_dappledbuckskin"):
		case joaat("breed_norfolkroadster_rosegrey"):
		case joaat("breed_norfolkroadster_black"):
		case joaat("breed_norfolkroadster_piebaldroan"):
		case joaat("breed_norfolkroadster_speckledgrey"):
		case joaat("breed_norfolkroadster_spottedtricolor"):
			return "BREED_NORFOLKROADSTER";
	
		case joaat("breed_mule_painted"):
		case joaat("breed_mule"):
			return "BREED_MULE";
	
		case joaat("breed_appaloosa_blanket"):
		case joaat("breed_appaloosa_leopard"):
		case joaat("breed_appaloosa_leopardblanket"):
		case joaat("breed_appaloosa_blacksnowflake"):
		case joaat("breed_appaloosa_brownleopard"):
			return "BREED_APPALOOSA";
	
		case joaat("breed_criollo_sorrelovero"):
		case joaat("breed_criollo_bayframeovero"):
		case joaat("breed_criollo_baybrindle"):
		case joaat("breed_criollo_dun"):
		case joaat("breed_criollo_marblesabino"):
		case joaat("breed_criollo_blueroanovero"):
			return "BREED_CRIOLLO";
	
		case joaat("breed_nokota_reversedappleroan"):
		case joaat("breed_nokota_whiteroan"):
		case joaat("breed_nokota_blueroan"):
			return "BREED_NOKOTA";
	
		case -1712303883:
		case joaat("breed_mustang_grullodun"):
		case joaat("breed_mustang_tigerstripedbay"):
		case 406093506:
		case 577120648:
		case joaat("breed_mustang_goldendun"):
		case 1147338535:
		case joaat("breed_mustang_wildbay"):
			return "BREED_MUSTANG";
	
		case joaat("breed_kladruber_dapplerosegrey"):
		case joaat("breed_kladruber_white"):
		case joaat("breed_kladruber_silver"):
		case joaat("breed_kladruber_cremello"):
		case joaat("breed_kladruber_grey"):
		case joaat("breed_kladruber_black"):
			return "BREED_KLADRUBER";
	
		case joaat("breed_dutchwarmblood_sootybuckskin"):
		case joaat("breed_dutchwarmblood_chocolateroan"):
		case joaat("breed_dutchwarmblood_sealbrown"):
			return "BREED_DUTCHWARMBLOOD";
	
		case joaat("breed_gang_hosea"):
			return "BREED_TURKOMAN";
	
		case joaat("breed_hungarianhalfbred_darkdapplegrey"):
		case joaat("breed_hungarianhalfbred_liverchestnut"):
		case joaat("breed_hungarianhalfbred_flaxenchestnut"):
		case joaat("breed_hungarianhalfbred_piebaldtobiano"):
			return "BREED_HUNGARIANHALFBRED";
	
		case joaat("breed_breton_steelgrey"):
		case joaat("breed_breton_redroan"):
		case joaat("breed_breton_sealbrown"):
		case joaat("breed_breton_mealydapplebay"):
		case joaat("breed_breton_grullodun"):
		case joaat("breed_breton_sorrel"):
			return "BREED_BRETON";
	
		case joaat("breed_donkey"):
			return "BREED_DONKEY";
	
		case joaat("breed_andalusian_darkbay"):
		case joaat("breed_andalusian_rosegray"):
		case joaat("breed_andalusian_perlino"):
			return "BREED_ANDALUSIAN";
	
		case joaat("breed_gang_micah"):
			return "BREED_MISSOURIFOXTROTTER";
	
		case joaat("breed_belgian_blondchestnut"):
		case joaat("breed_belgian_mealychestnut"):
			return "BREED_BELGIAN";
	
		case joaat("breed_missourifoxtrotter_sablechampagne"):
		case -1159865523:
		case joaat("breed_missourifoxtrotter_amberchampagne"):
		case 1323533737:
		case 1416158449:
		case 1854655826:
		case joaat("breed_missourifoxtrotter_silverdapplepinto"):
			return "BREED_MISSOURIFOXTROTTER";
	
		case joaat("breed_gang_karen"):
			return "BREED_NOKOTA";
	
		case joaat("breed_eagleflies"):
			return "BREED_AMERICANPAINT";
	
		case joaat("breed_john_endlesssummer"):
			return "BREED_THOROUGHBRED";
	
		case joaat("breed_murfreebrood_mange_03"):
			return "BREED_APPALOOSA";
	
		case joaat("breed_americanpaint_overo"):
		case joaat("breed_americanpaint_greyovero"):
		case joaat("breed_americanpaint_splashedwhite"):
		case joaat("breed_americanpaint_tobiano"):
			return "BREED_AMERICANPAINT";
	
		case joaat("breed_tennesseewalker_dapplebay"):
		case joaat("breed_tennesseewalker_chestnut"):
		case joaat("breed_tennesseewalker_redroan"):
		case joaat("breed_tennesseewalker_blackrabicano"):
		case joaat("breed_tennesseewalker_mahoganybay"):
		case joaat("breed_tennesseewalker_flaxenroan"):
			return "BREED_TENNESSEEWALKER";
	
		case joaat("breed_gang_uncle"):
			return "BREED_KENTUCKYSADDLE";
	
		case joaat("breed_gang_charles_endlesssummer"):
			return "BREED_NOKOTA";
	
		case joaat("breed_gang_sadie_endlesssummer"):
			return "BREED_MUSTANG";
	
		case joaat("breed_gang_bill"):
			return "BREED_ARDENNES";
	
		case joaat("breed_mangy_backup"):
			return "BREED_MANGY_BACKUP";
	
		case joaat("breed_murfreebrood_mange_01"):
			return "BREED_TENNESSEEWALKER";
	
		case joaat("breed_murfreebrood_mange_02"):
			return "BREED_NOKOTA";
	
		case joaat("breed_ardennes_irongreyroan"):
		case joaat("breed_ardennes_strawberryroan"):
		case joaat("breed_ardennes_bayroan"):
			return "BREED_ARDENNES";
	
		case joaat("breed_suffolkpunch_redchestnut"):
		case joaat("breed_suffolkpunch_sorrel"):
			return "BREED_SUFFOLKPUNCH";
	
		case joaat("breed_buell_warvets"):
			return "BREED_DUTCHWARMBLOOD";
	
		case joaat("breed_gang_uncle_endlesssummer"):
			return "BREED_APPALOOSA";
	
		case joaat("breed_morgan_palomino"):
		case joaat("breed_morgan_bayroan"):
		case joaat("breed_morgan_flaxenchestnut"):
		case joaat("breed_morgan_bay"):
			return "BREED_MORGAN";
	
		case joaat("breed_gang_sean"):
			return "BREED_AMERICANSTANDARDBRED";
	
		case joaat("breed_gang_john"):
			return "BREED_HUNGARIANHALFBRED";
	
		case joaat("breed_gang_javier"):
			return "BREED_AMERICANPAINT";
	
		case joaat("breed_gang_lenny"):
			return "BREED_MUSTANG";
	
		case joaat("breed_winter02_01"):
			return "BREED_THOROUGHBRED";
	
		case joaat("breed_gang_dutch"):
			return "BREED_ARABIAN";
	
		case joaat("breed_gang_kieran"):
			return "BREED_TENNESSEEWALKER";
	
		case joaat("breed_gang_charles"):
			return "BREED_APPALOOSA";
	
		default:
			break;
	}

	return "BREED_INVALID";
}

Hash func_25() // Position - 0x20E2
{
	return joaat("a_c_horse_mp_mangy_backup");
}

int func_26() // Position - 0x20EF
{
	return joaat("breed_mangy_backup");
}

void func_27(var uParam0, Ped pedParam1, Player plParam2) // Position - 0x20FC
{
	int i;
	int j;
	int num;
	int actual;
	int expected;
	Ped pedInDraftHarness;

	for (i = 0; i < uParam0->f_28; i = i + 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_23[i]))
		{
		}
		else
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_23[i], PED::GET_PED_RELATIONSHIP_GROUP_HASH(pedParam1));
		}
	}

	if (func_6(uParam0, 21))
		return;

	uParam0->f_22 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_4);

	if (!VEHICLE::IS_DRAFT_VEHICLE(uParam0->f_22))
	{
		uParam0->f_33 = uParam0->f_33 + 1;
		return;
	}

	VEHICLE::GET_DRAFT_ANIMAL_COUNT(uParam0->f_22, &expected, &actual);

	if (expected == 0)
	{
		if (actual == 0)
		{
			uParam0->f_33 = uParam0->f_33 + 1;
		
			if (uParam0->f_33 > 90)
				func_7(uParam0, 0);
		
			return;
		}
	}

	if (actual >= expected)
	{
		for (j = 0; j < actual; j = j + 1)
		{
			pedInDraftHarness = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(uParam0->f_22, j);
		
			if (!ENTITY::DOES_ENTITY_EXIST(pedInDraftHarness))
			{
			}
			else
			{
				if (num >= 4)
					break;
			
				uParam0->f_23[num] = pedInDraftHarness;
			
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_23[num]) || !ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(uParam0->f_23[num]))
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_23[num], true, true);
			
				PED::SET_PED_OWNS_ANIMAL(PLAYER::GET_PLAYER_PED(plParam2), uParam0->f_23[num], false);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_23[num], 208, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_23[num], 209, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_23[num], 277, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_23[num], 467, true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_23[num], PED::GET_PED_RELATIONSHIP_GROUP_HASH(pedParam1));
				num = num + 1;
			}
		}
	}
	else
	{
		uParam0->f_33 = uParam0->f_33 + 1;
	
		if (uParam0->f_33 > 90)
			func_7(uParam0, 0);
	
		return;
	}

	uParam0->f_28 = num;
	func_7(uParam0, 21);
	return;
}

void func_28(var uParam0, int iParam1) // Position - 0x22B5
{
	*uParam0 = iParam1;
	return;
}

BOOL func_29(Any* panParam0, var uParam1) // Position - 0x22C2
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return false;

	*uParam1 = 0;
	*uParam1 = 0;

	while (*uParam1 < 10)
	{
		if (!INVENTORY::_INVENTORY_COMPARE_GUIDS(&Global_17418.f_55.f_61.f_41[*uParam1 /*56*/], panParam0))
		{
		}
		else
		{
			return true;
		}
	
		*uParam1 = *uParam1 + 1;
	}

	return false;
}

BOOL func_30(Any* panParam0) // Position - 0x2313
{
	var guid2;
	var unk4;
	BOOL flag;
	int i;

	guid2 = { func_92() };

	if (INVENTORY::_INVENTORY_COMPARE_GUIDS(panParam0, &guid2))
		return false;

	unk4.f_9 = -1591664384;

	for (i = 0; i < 10; i = i + 1)
	{
		if (INVENTORY::_INVENTORY_COMPARE_GUIDS(&Global_17418.f_55.f_61.f_41[i /*56*/], panParam0))
		{
			flag = true;
			break;
		}
	
		if (INVENTORY::_INVENTORY_COMPARE_GUIDS(&Global_17418.f_55.f_61.f_41[i /*56*/], &guid2))
		{
			func_93(&Global_17418.f_55.f_61.f_41[i /*56*/]);
			Global_17418.f_55.f_61.f_41[i /*56*/] = { *panParam0 };
			flag = true;
			break;
		}
	
		if (func_94(Global_17418.f_55.f_61.f_41[i /*56*/], &unk4, true, true, -1))
		{
		}
		else
		{
			func_93(&Global_17418.f_55.f_61.f_41[i /*56*/]);
			Global_17418.f_55.f_61.f_41[i /*56*/] = { *panParam0 };
			flag = true;
			break;
		}
	}

	if (!flag)
		return false;

	return true;
}

void func_31(BOOL bParam0, BOOL bParam1) // Position - 0x2401
{
	if (bParam1)
		func_95();

	if (bParam0)
	{
		func_96(8);
		func_96(512);
	}
	else
	{
		func_96(8);
		func_96(16);
	}

	return;
}

BOOL func_32(Any* panParam0, int iParam1, BOOL bParam2) // Position - 0x2433
{
	if (iParam1 == -1)
		return false;

	func_97(&Global_1903838);

	switch (iParam1)
	{
		case 0:
		case 1:
			if (!func_98(panParam0, &Global_1903838, &(Global_1903838.f_53), bParam2))
				return false;
			break;
	
		case 2:
			if (!func_99(panParam0, &Global_1903838, &(Global_1903838.f_82), bParam2))
				return false;
			break;
	}

	return true;
}

struct<8> func_33(Any* panParam0, BOOL bParam1) // Position - 0x24A2
{
	var String1;
	var unk8;
	Hash modelHash;
	const char* str;

	String1 = { panParam0->f_12 };

	if (bParam1)
		if (func_100(panParam0, &unk8))
			String1 = { unk8 };

	if (MISC::COMPARE_STRINGS(&String1, func_22(), false, -1) == 0)
		TEXT_LABEL_ASSIGN_STRING(&String1, MISC::VAR_STRING(2, func_24(panParam0->f_22)), 64);

	if (HUD::GET_LENGTH_OF_LITERAL_STRING(&String1) == 0)
		if (panParam0->f_22 != 0)
			TEXT_LABEL_ASSIGN_STRING(&String1, MISC::VAR_STRING(2, func_101(panParam0->f_22)), 64);
		else
			TEXT_LABEL_ASSIGN_STRING(&String1, "", 64);

	if (func_102(panParam0->f_4, 0))
	{
		modelHash = func_103(panParam0->f_4);
	
		if (STREAMING::IS_MODEL_VALID(modelHash) && STREAMING::IS_MODEL_A_VEHICLE(modelHash))
		{
			str = MISC::VAR_STRING(0, func_104(panParam0->f_4, false));
			String1 = { func_105(str) };
		}
	}

	return String1;
}

void func_34(var uParam0, int iParam1) // Position - 0x2567
{
	if (!MISC::IS_BIT_SET(uParam0->f_1, iParam1))
		return;

	MISC::CLEAR_BIT(&(uParam0->f_1), iParam1);
	return;
}

int func_35(int iParam0) // Position - 0x258A
{
	var unk;
	int num;

	if (iParam0 == -1)
		return 0;

	func_90();
	Global_1903838.f_106.f_2 = 116835447;
	Global_1903838.f_106.f_3 = func_91(iParam0);

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk, &(Global_1903838.f_106)))
		return joaat("BLIP_STYLE_PLAYER_HORSE");

	num = unk;
	return num;
}

void func_36(Ped pedParam0, int iParam1) // Position - 0x25D9
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(pedParam0, 7, iParam1);
	return;
}

int func_37(Ped pedParam0) // Position - 0x260C
{
	int attributeRank;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	attributeRank = ATTRIBUTE::GET_ATTRIBUTE_RANK(pedParam0, 7);
	return attributeRank;
}

void func_38(Entity eParam0, BOOL bParam1) // Position - 0x2642
{
	func_106(eParam0, bParam1);
	return;
}

BOOL func_39(Any* panParam0, var uParam1) // Position - 0x2652
{
	if (func_107(panParam0, -2147483648))
		*uParam1 = 4;
	else if (func_107(panParam0, 1073741824))
		*uParam1 = 3;
	else if (func_107(panParam0, 536870912))
		*uParam1 = 2;
	else if (func_107(panParam0, 268435456))
		*uParam1 = 1;
	else if (func_107(panParam0, 134217728))
		*uParam1 = 0;
	else
		return false;

	return true;
}

int func_40() // Position - 0x26C8
{
	int num;

	num = 0;

	if (Global_17418.f_55.f_61.f_602 & 2 != 0)
		num = 2;

	if (Global_17418.f_55.f_61.f_602 & 4 != 0)
		num = 3;

	if (Global_17418.f_55.f_61.f_602 & 8 != 0)
		num = 4;

	if (Global_17418.f_55.f_61.f_602 & 16 != 0)
		num = 1;

	return num;
}

void func_41(var uParam0) // Position - 0x2723
{
	if (!func_6(uParam0, 24) && !func_6(uParam0, 25))
	{
		func_7(uParam0, 0);
		func_7(uParam0, 24);
		func_108();
	}

	return;
}

void func_42(var uParam0) // Position - 0x2758
{
	Ped riderOfMount;
	Ped EntityIndex;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_19))
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_19))
			riderOfMount = PED::_GET_RIDER_OF_MOUNT(uParam0->f_19, false);

	EntityIndex = PLAYER::PLAYER_PED_ID();

	if (riderOfMount == EntityIndex && func_6(uParam0, 2))
	{
		if (!func_6(uParam0, 23))
		{
			if (UNLOCK::UNLOCK_IS_UNLOCKED(1988458112))
			{
				ENTITY::IS_ENTITY_DEAD(EntityIndex);
				PED::SET_PED_CONFIG_FLAG(EntityIndex, 561, true);
				func_7(uParam0, 23);
			}
		}
	}
	else if (func_6(uParam0, 23))
	{
		ENTITY::IS_ENTITY_DEAD(EntityIndex);
		PED::SET_PED_CONFIG_FLAG(EntityIndex, 561, false);
		func_34(uParam0, 23);
	}

	return;
}

BOOL func_43(Ped pedParam0, Entity eParam1, float fParam2, BOOL bParam3, BOOL bParam4) // Position - 0x27F4
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam1))
		return false;

	if (bParam4)
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(eParam1, bParam3, false)) <= fParam2 * fParam2)
			return true;
	else if (func_109(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(eParam1, bParam3, false)) <= fParam2 * fParam2)
		return true;

	return false;
}

void func_44() // Position - 0x2867
{
	if (!func_110(3))
	{
		func_111();
		func_112(3);
	}

	return;
}

BOOL func_45(int iParam0, int iParam1) // Position - 0x2881
{
	return Global_1904402.f_33[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_46(int iParam0) // Position - 0x289A
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_17418.f_2585[num2], offset);
}

void func_47(int iParam0, BOOL bParam1) // Position - 0x28C4
{
	int num;
	int num2;

	func_113(iParam0, &num, &num2);

	if (!func_114(iParam0, num, num2, bParam1))
		return;

	func_115(num, num2);
	return;
}

void func_48(int iParam0, int iParam1) // Position - 0x28F1
{
	Global_1904402.f_33[iParam0 /*9*/].f_2 = Global_1904402.f_33[iParam0 /*9*/].f_2 || iParam1;
	return;
}

void func_49() // Position - 0x2914
{
	Hash modelHash;
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		modelHash = Global_1903838.f_113[i /*96*/];
	
		if (!STREAMING::IS_MODEL_VALID(modelHash))
		{
		}
		else
		{
			STREAMING::REQUEST_MODEL(modelHash, false);
		}
	}

	return;
}

BOOL func_50() // Position - 0x294E
{
	Hash modelHash;
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		modelHash = Global_1903838.f_113[i /*96*/];
	
		if (!STREAMING::IS_MODEL_VALID(modelHash))
		{
		}
		else if (!STREAMING::HAS_MODEL_LOADED(modelHash))
		{
			return false;
		}
	}

	return true;
}

void func_51(var uParam0) // Position - 0x2990
{
	Ped mountOwnedByPlayer;
	int i;

	mountOwnedByPlayer = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());

	if (!ENTITY::DOES_ENTITY_EXIST(mountOwnedByPlayer))
		return;

	if (ENTITY::IS_ENTITY_DEAD(mountOwnedByPlayer) || PED::IS_PED_INJURED(mountOwnedByPlayer))
		return;

	for (i = 0; i < 3; i = i + 1)
	{
		func_116(mountOwnedByPlayer, &uParam0->[i /*96*/], i);
	}

	return;
}

struct<4> func_52(BOOL bParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0x29E7
{
	var guid2;
	var guid;
	BOOL flag;
	BOOL flag2;
	int num;
	var unk32;

	guid2.f_9 = -1591664384;
	!func_117(&guid2, bParam0);

	if (!bParam2)
	{
		guid = { func_118() };
	
		if (func_119() && INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			guid2 = { guid };
		else if (!INVENTORY::_INVENTORY_COMPARE_GUIDS(&guid, &guid2))
			func_120(&guid2, false);
	}

	if (iParam3 == -1)
		iParam3 = func_121(PLAYER::PLAYER_ID());

	flag = func_122();
	flag2 = false;

	if (flag)
		flag2 = func_123(75);

	num = func_124(iParam3, 0);

	if (num != 3)
		if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_17418.f_55.f_61[num /*4*/]))
			guid2 = { Global_17418.f_55.f_61[num /*4*/] };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid2))
	{
		if (!bParam1)
			return func_92();
	
		if (!func_125(&guid2, false))
			unk32 = { func_126(bParam0) };
		else
			unk32 = { guid2 };
	
		return unk32;
	}

	return guid2;
}

BOOL func_53(int iParam0) // Position - 0x2AE5
{
	int num;
	int offset;

	if (iParam0 <= -1 || iParam0 >= 117)
		return false;

	num = iParam0 / 32;
	offset = iParam0 % 32;
	return MISC::IS_BIT_SET(Global_1903838.f_496[num], offset);
}

BOOL func_54(int iParam0, int iParam1) // Position - 0x2B22
{
	if (iParam1 == 255)
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	return Global_1289643[iParam1 /*19*/].f_9 && iParam0 != false;
}

const char* func_55(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x2B5C
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

void func_56(int iParam0) // Position - 0x2B70
{
	int num;

	num = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	Global_1289643[num /*19*/].f_9 = Global_1289643[num /*19*/].f_9 - Global_1289643[num /*19*/].f_9 && iParam0;
	return;
}

void func_57(var uParam0) // Position - 0x2BA0
{
	Player Plr;
	Ped playerPed;
	Ped activeAnimalOwner;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_19))
		return;

	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_19))
		return;

	Plr = PLAYER::PLAYER_ID();

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Plr))
		return;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Plr))
		return;

	playerPed = PLAYER::GET_PLAYER_PED(Plr);

	if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
		return;

	activeAnimalOwner = PED::_GET_ACTIVE_ANIMAL_OWNER(uParam0->f_19);

	if (activeAnimalOwner == playerPed)
		return;

	PED::SET_PED_OWNS_ANIMAL(playerPed, uParam0->f_19, false);
	return;
}

void func_58(var uParam0) // Position - 0x2C1A
{
	if (!func_6(uParam0, 5) || !func_6(uParam0, 7))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_19))
		return;

	if (!func_6(uParam0, 28))
	{
		if (func_127(false))
		{
			if (BUILTIN::VDIST(func_128(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(uParam0->f_19, true, false)) > 2.7f)
			{
				func_129(512);
				func_7(uParam0, 28);
			}
		}
	}
	else if (!func_127(false))
	{
		if (BUILTIN::VDIST(func_128(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(uParam0->f_19, true, false)) <= 2.7f)
			func_34(uParam0, 28);
	}

	return;
}

void func_59(var uParam0, Any* panParam1) // Position - 0x2CC2
{
	int attributeRank;
	int num;

	switch (uParam0->f_5)
	{
		case 0:
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_19))
			{
				attributeRank = ATTRIBUTE::GET_ATTRIBUTE_RANK(uParam0->f_19, 13);
			
				if (attributeRank < 10)
					num = 0;
				else if (attributeRank < 30)
					num = 1;
				else if (attributeRank < 70)
					num = 2;
				else if (attributeRank < 90)
					num = 3;
				else
					num = 4;
			
				if (num != uParam0->f_35)
					if (func_130(&(panParam1->f_2), uParam0->f_5, num, false))
						uParam0->f_35 = num;
			}
			break;
	}

	return;
}

void func_60(var uParam0, Entity eParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x2D55
{
	int num;
	BOOL flag;
	BOOL flag2;
	int visibility;
	BOOL flag3;

	if (!HUD::IS_MP_GAMER_TAG_ACTIVE(uParam0->f_6))
		return;

	num = func_131(&(uParam0->f_6), eParam1);
	num = num;
	flag = func_132(iParam2);
	flag2 = func_132(iParam3);
	visibility = 0;

	if (bParam4)
	{
		visibility = 0;
	}
	else if (AITRANSPORT::_IS_PED_ON_TRANSPORT_ENTITY(PLAYER::PLAYER_PED_ID(), eParam1))
	{
		visibility = 0;
	}
	else if (flag || flag2)
	{
		flag3 = func_133(uParam0);
	
		if (flag3)
			visibility = func_134(eParam1, false, &(uParam0->f_15), -1, -1, 1277358601, true, true);
		else
			visibility = uParam0->f_34;
	}

	uParam0->f_34 = visibility;

	if (uParam0->f_7 != visibility)
	{
		HUD::_SET_MP_GAMER_TAG_VISIBILITY(uParam0->f_6, visibility);
		uParam0->f_7 = visibility;
	}

	return;
}

void func_61(var uParam0, Any* panParam1) // Position - 0x2E05
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	flag = PLAYER::IS_PLAYER_DEAD(uParam0->f_21) || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_20) || ENTITY::IS_ENTITY_DEAD(uParam0->f_20) || func_6(uParam0, 29);
	flag2 = !flag && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(uParam0->f_20, true, false), ENTITY::GET_ENTITY_COORDS(uParam0->f_4, true, false)) >= Global_1901671.f_701.f_38;
	flag3 = flag2 || func_135(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(panParam1), true, 0);

	if (flag3 || flag)
	{
		if (flag)
		{
			if (func_6(uParam0, 29))
				func_34(uParam0, 29);
		
			if (func_6(uParam0, 2))
			{
				if (func_136(uParam0->f_21, true, 0))
					func_88(0, true);
			
				if (func_19(&(Global_1290271.f_11.f_788)))
					func_20(&(Global_1290271.f_11.f_788));
			}
		}
		else
		{
			if (func_6(uParam0, 2))
				if (!func_19(&(Global_1290271.f_11.f_788)))
					func_78(&(Global_1290271.f_11.f_788));
		
			if (!func_136(uParam0->f_21, true, false))
				if (func_6(uParam0, 2))
					if (func_137(uParam0))
						func_88(true, true);
			else if (func_6(uParam0, 2))
				func_137(uParam0);
		}
	}
	else
	{
		if (func_6(uParam0, 2))
		{
			if (func_19(&(Global_1290271.f_11.f_788)))
				func_20(&(Global_1290271.f_11.f_788));
		
			if (!func_135(PLAYER::PLAYER_ID(), true, false))
				func_88(false, true);
		}
	
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_19))
			if (ENTITY::_GET_ENTITY_CARRYING_FLAG(uParam0->f_19, 34))
				ENTITY::_SET_ENTITY_CARRYING_FLAG(uParam0->f_19, 34, false);
	
		if (func_6(uParam0, 30))
		{
			func_138(uParam0);
			func_34(uParam0, 30);
		}
	}

	return;
}

void func_62(var uParam0, Any* panParam1) // Position - 0x2FC3
{
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_19))
		return;

	num = uParam0->f_21;

	if (num < 0 || num >= 32)
		return;

	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_19))
		return;

	if (func_139(Global_1289643[num /*19*/].f_12, 4))
	{
		if (!func_6(uParam0, 31))
		{
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(uParam0->f_19, 1);
			func_7(uParam0, 31);
		}
	}
	else if (func_6(uParam0, 31))
	{
		POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(uParam0->f_19, 0);
		func_34(uParam0, 31);
	}

	return;
}

void func_63(var uParam0) // Position - 0x3052
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_19))
		return;

	if (func_140(uParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_19))
			return;
	
		PED::_SET_MOUNT_SECURITY_ENABLED(uParam0->f_19, true);
	}
	else
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_19))
			return;
	
		PED::_SET_MOUNT_SECURITY_ENABLED(uParam0->f_19, false);
	}

	return;
}

void func_64(var uParam0) // Position - 0x30A5
{
	Ped PedIndex;
	Hash pedRelationshipGroupHash;
	Hash pedRelationshipGroupHash2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_19))
		return;

	PedIndex = PLAYER::PLAYER_PED_ID();
	pedRelationshipGroupHash = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PedIndex);
	pedRelationshipGroupHash2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_19);

	if (pedRelationshipGroupHash2 == pedRelationshipGroupHash)
		return;

	PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_19, pedRelationshipGroupHash);
	return;
}

void func_65(var uParam0) // Position - 0x30E8
{
	Ped pedInTransportSeat;
	BOOL isPedInWrithe;
	BOOL isPedIncapacitated;
	Player playerIndexFromPed;

	if (ENTITY::_IS_ENTITY_FROZEN(uParam0->f_4) || !func_6(uParam0, 4))
	{
		if (MAP::DOES_BLIP_EXIST(uParam0->f_17))
			MAP::REMOVE_BLIP(&(uParam0->f_17));
	
		return;
	}

	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_4))
	{
		if (MAP::DOES_BLIP_EXIST(uParam0->f_17))
			MAP::REMOVE_BLIP(&(uParam0->f_17));
	
		return;
	}

	pedInTransportSeat = AITRANSPORT::_GET_PED_IN_TRANSPORT_SEAT(uParam0->f_4, -1);

	if (ENTITY::DOES_ENTITY_EXIST(pedInTransportSeat))
	{
		if (pedInTransportSeat == PLAYER::PLAYER_PED_ID())
		{
			if (MAP::DOES_BLIP_EXIST(uParam0->f_17))
				MAP::REMOVE_BLIP(&(uParam0->f_17));
		
			return;
		}
	}

	if (MAP::DOES_BLIP_EXIST(uParam0->f_17))
	{
		if (PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_WHISTLE")))
		{
			uParam0->f_14 = Global_1295666.f_16 + 15;
			MAP::BLIP_REMOVE_MODIFIER(uParam0->f_17, -272772079);
			MAP::BLIP_ADD_MODIFIER(uParam0->f_17, -272772079);
		}
	
		if (Global_1295666.f_16 > uParam0->f_14)
			MAP::BLIP_REMOVE_MODIFIER(uParam0->f_17, -272772079);
		else
			MAP::BLIP_ADD_MODIFIER(uParam0->f_17, -272772079);
	
		isPedInWrithe = TASK::IS_PED_IN_WRITHE(uParam0->f_19);
		isPedIncapacitated = PED::IS_PED_INCAPACITATED(uParam0->f_19);
	
		if (isPedInWrithe || isPedIncapacitated)
			MAP::BLIP_ADD_MODIFIER(uParam0->f_17, 430539302);
		else
			MAP::BLIP_REMOVE_MODIFIER(uParam0->f_17, 430539302);
	
		if (!ENTITY::DOES_ENTITY_EXIST(pedInTransportSeat))
		{
			MAP::BLIP_REMOVE_MODIFIER(uParam0->f_17, 453356795);
			return;
		}
	
		if (!PED::IS_PED_A_PLAYER(pedInTransportSeat))
		{
			MAP::BLIP_REMOVE_MODIFIER(uParam0->f_17, 453356795);
			return;
		}
	
		playerIndexFromPed = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(pedInTransportSeat);
	
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(playerIndexFromPed))
		{
			MAP::BLIP_REMOVE_MODIFIER(uParam0->f_17, 453356795);
			return;
		}
	
		if (func_141(playerIndexFromPed, false))
			MAP::BLIP_ADD_MODIFIER(uParam0->f_17, 453356795);
		else
			MAP::BLIP_REMOVE_MODIFIER(uParam0->f_17, 453356795);
	
		return;
	}

	if (MAP::_DOES_ENTITY_HAVE_BLIP(uParam0->f_4))
		return;

	uParam0->f_17 = MAP::BLIP_ADD_FOR_ENTITY(uParam0->f_18, uParam0->f_4);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1290271.f_11.f_747)))
		MAP::_SET_BLIP_NAME(uParam0->f_17, &(Global_1290271.f_11.f_747));
	else
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_17, func_142(uParam0->f_5));

	MAP::BLIP_ADD_MODIFIER(uParam0->f_17, 580546400);
	return;
}

void func_66(var uParam0, Player plParam1) // Position - 0x3305
{
	BOOL bTrue;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
		return;

	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_4))
		return;

	if (!ENTITY::IS_ENTITY_A_PED(uParam0->f_4))
		return;

	if (PED::IS_PED_DEAD_OR_DYING(uParam0->f_19, true))
		return;

	bTrue = !func_54(8192, plParam1);

	if (bTrue)
		PED::SET_PED_RESET_FLAG(uParam0->f_19, 197, bTrue);

	if (func_54(2048, plParam1))
		PED::SET_PED_RESET_FLAG(uParam0->f_19, 306, true);

	if (func_54(512, plParam1))
		PED::SET_PED_RESET_FLAG(uParam0->f_19, 360, true);

	return;
}

void func_67(var uParam0, Player plParam1) // Position - 0x3396
{
	BOOL entityCanBeDamaged;
	BOOL flag;
	BOOL AlwaysExistsForPlayer;
	int NetworkId;
	Player i;
	Player Plr;
	BOOL bTrue;
	BOOL bTrue2;
	BOOL bTrue3;
	BOOL bTrue4;
	BOOL bTrue5;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
		return;

	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_4))
	{
		func_34(uParam0, 26);
		return;
	}

	if (!ENTITY::IS_ENTITY_A_PED(uParam0->f_4))
		return;

	if (PED::IS_PED_DEAD_OR_DYING(uParam0->f_19, true))
		return;

	if (func_143(255) == 1)
	{
		entityCanBeDamaged = ENTITY::_GET_ENTITY_CAN_BE_DAMAGED(uParam0->f_19);
		flag = func_6(uParam0, 15);
	
		if (func_54(8, plParam1))
		{
			if (!flag || entityCanBeDamaged)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_19, true);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uParam0->f_19, false);
				func_7(uParam0, 15);
			}
		}
		else if (flag || !entityCanBeDamaged)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_19, false);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uParam0->f_19, true);
			func_34(uParam0, 15);
		}
	}
	else
	{
		func_34(uParam0, 15);
	}

	if (func_143(255) == 1)
	{
		if (func_54(16384, plParam1))
		{
			if (!func_6(uParam0, 16))
			{
				NETWORK::KEEP_NETWORK_ID_IN_FAST_INSTANCE(NETWORK::_0xF260AF6F43953316(uParam0->f_4), true, 256);
				func_7(uParam0, 16);
			}
		
			NETWORK::PREVENT_NETWORK_ID_MIGRATION(NETWORK::_0xF260AF6F43953316(uParam0->f_4));
		}
		else if (func_6(uParam0, 16))
		{
			NETWORK::KEEP_NETWORK_ID_IN_FAST_INSTANCE(NETWORK::_0xF260AF6F43953316(uParam0->f_4), false, 256);
			func_34(uParam0, 16);
		}
	}
	else
	{
		func_34(uParam0, 16);
	}

	if (func_54(16, plParam1))
		if (!func_6(uParam0, 17))
			func_7(uParam0, 17);
	else if (func_6(uParam0, 17))
		func_34(uParam0, 17);

	AlwaysExistsForPlayer = func_54(262144, plParam1);

	if (!func_6(uParam0, 26) || func_6(uParam0, 27) != AlwaysExistsForPlayer)
	{
		NetworkId = NETWORK::PED_TO_NET(uParam0->f_19);
	
		for (i = 0; i <= 31; i = i + 1)
		{
			Plr = i;
		
			if (Plr == uParam0->f_21)
			{
			}
			else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Plr))
			{
			}
			else
			{
				NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(NetworkId, Plr, AlwaysExistsForPlayer);
			}
		}
	
		func_7(uParam0, 26);
	
		if (AlwaysExistsForPlayer)
			func_7(uParam0, 27);
		else
			func_34(uParam0, 27);
	}

	bTrue = func_54(64, plParam1);

	if (PED::GET_PED_CONFIG_FLAG(uParam0->f_19, 388, true) != bTrue)
		PED::SET_PED_CONFIG_FLAG(uParam0->f_19, 388, bTrue);

	bTrue2 = !func_54(32, plParam1);

	if (PED::GET_PED_CONFIG_FLAG(uParam0->f_19, 319, true) != bTrue2)
		PED::SET_PED_CONFIG_FLAG(uParam0->f_19, 319, bTrue2);

	bTrue3 = func_54(256, plParam1);

	if (PED::GET_PED_CONFIG_FLAG(uParam0->f_19, 312, true) != bTrue3)
		PED::SET_PED_CONFIG_FLAG(uParam0->f_19, 312, bTrue3);

	bTrue4 = !func_54(128, plParam1);

	if (PED::GET_PED_CONFIG_FLAG(uParam0->f_19, 211, true) != bTrue4)
		PED::SET_PED_CONFIG_FLAG(uParam0->f_19, 211, bTrue4);

	bTrue5 = func_54(1024, plParam1);

	if (PED::GET_PED_CONFIG_FLAG(uParam0->f_19, 412, true) != bTrue5)
		PED::SET_PED_CONFIG_FLAG(uParam0->f_19, 412, bTrue5);

	return;
}

void func_68(var uParam0, int iParam1) // Position - 0x366C
{
	Player player;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
		return;

	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_4))
		return;

	if (!ENTITY::IS_ENTITY_A_PED(uParam0->f_4))
		return;

	if (PED::IS_PED_DEAD_OR_DYING(uParam0->f_19, true))
		return;

	player = PLAYER::INT_TO_PLAYERINDEX(iParam1);

	if (func_53(65))
	{
		if (!PLAYER::_GET_PLAYER_UI_PROMPT_FOR_PED_IS_ENABLED(player, uParam0->f_19, 33, 1))
		{
			PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(player, uParam0->f_19, 33, 1, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_19, 26, true);
		}
	}
	else if (PLAYER::_GET_PLAYER_UI_PROMPT_FOR_PED_IS_ENABLED(player, uParam0->f_19, 33, 1))
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(player, uParam0->f_19, 33, 1, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_19, 26, false);
	}

	if (func_53(62))
		if (!PLAYER::_GET_PLAYER_UI_PROMPT_FOR_PED_IS_ENABLED(player, uParam0->f_19, 45, 1))
			PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(player, uParam0->f_19, 45, 1, true);
	else if (PLAYER::_GET_PLAYER_UI_PROMPT_FOR_PED_IS_ENABLED(player, uParam0->f_19, 45, 1))
		PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(player, uParam0->f_19, 45, 1, false);

	if (func_53(63))
		if (!PLAYER::_GET_PLAYER_UI_PROMPT_FOR_PED_IS_ENABLED(player, uParam0->f_19, 46, 1))
			PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(player, uParam0->f_19, 46, 1, true);
	else if (PLAYER::_GET_PLAYER_UI_PROMPT_FOR_PED_IS_ENABLED(player, uParam0->f_19, 46, 1))
		PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(player, uParam0->f_19, 46, 1, false);

	if (func_53(64))
		if (!PLAYER::_GET_PLAYER_UI_PROMPT_FOR_PED_IS_ENABLED(player, uParam0->f_19, 28, 1))
			PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(player, uParam0->f_19, 28, 1, true);
	else if (PLAYER::_GET_PLAYER_UI_PROMPT_FOR_PED_IS_ENABLED(player, uParam0->f_19, 28, 1))
		PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(player, uParam0->f_19, 28, 1, false);

	return;
}

void func_69(var uParam0, Any* panParam1, Player plParam2) // Position - 0x37F2
{
	BOOL isEntityAPed;
	Player playerFromGamerHandle;
	BOOL value;
	int flags;
	int flags2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
		return;

	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_4))
		return;

	isEntityAPed = ENTITY::IS_ENTITY_A_PED(uParam0->f_4);

	if (isEntityAPed)
		if (PED::IS_PED_DEAD_OR_DYING(uParam0->f_19, true))
			return;
	else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_22, false, false))
		return;

	playerFromGamerHandle = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(panParam1);
	value = false;

	if (func_144(playerFromGamerHandle))
		value = true;

	AITRANSPORT::SET_TRANSPORT_CONFIG_FLAG(uParam0->f_4, 0, value);
	flags2 = 0;
	AITRANSPORT::_GET_TRANSPORT_USAGE_FLAGS(uParam0->f_4, &flags);

	if (Global_1289643[plParam2 /*19*/].f_8 & 1 != 0)
	{
		if (!func_145(flags, 1))
			flags2 = 1;
	
		if (Global_1289643[plParam2 /*19*/].f_8 & 32 != 0)
			if (!func_145(flags, 32))
				flags2 = flags2 | 32;
	}
	else
	{
		if (Global_1289643[plParam2 /*19*/].f_8 & 2 != 0)
			if (!func_145(flags, 2))
				flags2 = flags2 | 2;
	
		if (Global_1289643[plParam2 /*19*/].f_8 & 4 != 0)
			if (!func_145(flags, 4))
				flags2 = flags2 | 4;
	
		if (Global_1289643[plParam2 /*19*/].f_8 & 8 != 0)
			if (!func_145(flags, 8))
				flags2 = flags2 | 8;
	
		if (Global_1289643[plParam2 /*19*/].f_8 & 64 != 0)
			if (!func_145(flags, 64))
				flags2 = flags2 | 64;
	
		if (Global_1289643[plParam2 /*19*/].f_8 & 128 != 0)
			if (!func_145(flags, 128))
				flags2 = flags2 | 128;
	
		if (Global_1289643[plParam2 /*19*/].f_8 & 256 != 0)
			if (!func_145(flags, 256))
				flags2 = flags2 | 256;
	
		if (Global_1289643[plParam2 /*19*/].f_8 & 16 != 0)
			if (!func_145(flags, 16))
				flags2 = 16;
	
		if (Global_1289643[plParam2 /*19*/].f_8 & 512 != 0)
			if (!func_145(flags, 512))
				flags2 = flags2 | 512;
	
		if (func_145(flags, 1024))
			if (!func_145(flags, 1024))
				flags2 = flags2 | 1024;
	}

	if (flags2 != 0)
		AITRANSPORT::_SET_TRANSPORT_USAGE_FLAGS(uParam0->f_4, flags2);

	return;
}

void func_70(var uParam0, Any* panParam1, Player plParam2) // Position - 0x3A0D
{
	Ped riderOfMount;
	Player playerIndexFromPed;
	Player playerFromGamerHandle;

	if (!func_146(uParam0, panParam1, plParam2))
		return;

	if (ENTITY::IS_ENTITY_A_VEHICLE(uParam0->f_4))
	{
		if (AITRANSPORT::_GET_PED_IN_TRANSPORT_SEAT(uParam0->f_19, -1) == PLAYER::PLAYER_PED_ID())
			func_147(uParam0->f_19);
	
		return;
	}

	if (ENTITY::IS_ENTITY_A_PED(uParam0->f_4))
	{
		if (uParam0->f_16 >= Global_1295666.f_16)
			return;
	
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_19))
			return;
	
		riderOfMount = PED::_GET_RIDER_OF_MOUNT(uParam0->f_19, false);
	
		if (!ENTITY::DOES_ENTITY_EXIST(riderOfMount))
			return;
	
		playerIndexFromPed = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(riderOfMount);
	
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(playerIndexFromPed))
			return;
	
		if (playerIndexFromPed != PLAYER::PLAYER_ID())
			return;
	
		playerFromGamerHandle = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(panParam1);
	
		if (func_144(playerFromGamerHandle))
			func_148(15, true);
		else if (Global_1289643[plParam2 /*19*/].f_8 & 16 != 0 || Global_1289642 & 32 != 0)
			func_148(16, true);
		else
			func_148(14, true);
	
		TASK::TASK_HORSE_ACTION(uParam0->f_19, 10, 0, 0);
		uParam0->f_16 = Global_1295666.f_16 + 3;
	}

	return;
}

void func_71(var uParam0) // Position - 0x3B14
{
	int num;
	BOOL flag;
	int i;
	Hash peltFromHorse;
	Hash peltFromHorse2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_19))
		return;

	if (PED::IS_PED_DEAD_OR_DYING(uParam0->f_19, true))
		return;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_21))
		return;

	num = uParam0->f_21;
	flag = func_6(uParam0, 2);

	if (flag)
	{
		if (!Global_1903838.f_111)
			return;
	
		i = 0;
	
		for (i = 0; i < 3; i = i + 1)
		{
			peltFromHorse = PED::_GET_PELT_FROM_HORSE(uParam0->f_19, i);
		
			if (peltFromHorse != Global_1289643[num /*19*/].f_15[i])
				Global_1289643[num /*19*/].f_15[i] = peltFromHorse;
		}
	}

	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_19))
		return;

	i = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		peltFromHorse2 = PED::_GET_PELT_FROM_HORSE(uParam0->f_19, i);
	
		if (peltFromHorse2 == Global_1289643[num /*19*/].f_15[i])
		{
		}
		else if (Global_1289643[num /*19*/].f_15[i] == 0)
		{
			PED::_CLEAR_PELT_FROM_HORSE(uParam0->f_19, peltFromHorse2);
		}
		else if (peltFromHorse2 == 0)
		{
			PED::_SET_PELT_FOR_HORSE(uParam0->f_19, Global_1289643[num /*19*/].f_15[i]);
		}
		else
		{
			PED::_SET_PELT_FOR_HORSE(uParam0->f_19, Global_1289643[num /*19*/].f_15[i]);
		}
	}

	return;
}

void func_72(var uParam0) // Position - 0x3C48
{
	float num;

	if (func_6(uParam0, 11))
	{
		if (func_6(uParam0, 7))
		{
			Global_1903838.f_111 = 0;
			Global_1903838.f_112 = 0;
		}
	
		func_7(uParam0, 0);
		return;
	}

	if (func_6(uParam0, 0))
		return;

	if (!func_6(uParam0, 10))
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_19))
		{
			if (!func_19(&(uParam0->f_8)))
				func_78(&(uParam0->f_8));
		
			num = func_79(&(uParam0->f_8));
		
			if (num > 4f)
			{
				func_7(uParam0, 12);
				func_20(&(uParam0->f_8));
			}
		
			return;
		}
	}

	if (func_6(uParam0, 8))
		return;

	if (func_6(uParam0, 7))
	{
		if (func_149())
		{
		}
		else if (!func_6(uParam0, 10))
		{
			if (func_53(46))
				return;
		
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), ENTITY::GET_ENTITY_COORDS(uParam0->f_19, true, false)) < 250f)
				return;
		}
	}
	else if (!func_6(uParam0, 10))
	{
		return;
	}

	func_150(uParam0);
	return;
}

BOOL func_73(int iParam0, Player plParam1) // Position - 0x3D52
{
	if (plParam1 == 255)
		plParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (plParam1 < 0 || plParam1 >= 32)
		return false;

	return Global_1289643[plParam1 /*19*/].f_10 && iParam0 != false;
}

void func_74(var uParam0) // Position - 0x3D8C
{
	Player playerOwnerOfVehicle;
	Ped playerPed;
	Vector3 VecReturnNearestNodeCoors;
	var ReturnHeading;
	BOOL flag;
	BOOL isEntityDead;

	if (!func_6(uParam0, 19))
		return;

	playerOwnerOfVehicle = PLAYER::_GET_PLAYER_OWNER_OF_VEHICLE(uParam0->f_22);

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(playerOwnerOfVehicle))
	{
		func_34(uParam0, 19);
		return;
	}

	playerPed = PLAYER::GET_PLAYER_PED(playerOwnerOfVehicle);

	if (PED::IS_PED_ON_VEHICLE(playerPed, false))
	{
		if (PED::GET_VEHICLE_PED_IS_IN(playerPed, true) == uParam0->f_22)
		{
			func_34(uParam0, 19);
			return;
		}
	}

	PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(func_128(playerOwnerOfVehicle), &VecReturnNearestNodeCoors, &ReturnHeading, 1, 1077936128, 0);
	flag = NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_4);
	isEntityDead = ENTITY::IS_ENTITY_DEAD(uParam0->f_22);

	if (func_151(playerPed, uParam0->f_22, true, true) < 12f)
		func_34(uParam0, 19);

	if (!flag)
		return;

	if (isEntityDead)
		return;

	if (TASK::_0x583AE9AF9CEE0958(uParam0->f_22, VecReturnNearestNodeCoors))
		return;

	if (!func_6(uParam0, 19))
	{
		TASK::_0x141BC64C8D7C5529(uParam0->f_22);
		return;
	}

	TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION_2(uParam0->f_22, VecReturnNearestNodeCoors, 6f, 1078722947, 2, 8f, 3f);
	return;
}

void func_75(var uParam0) // Position - 0x3E87
{
	int i;
	Player Plr;
	Vector3 entityCoords;

	if (func_6(uParam0, 10))
	{
		func_7(uParam0, 0);
		return;
	}

	if (func_6(uParam0, 11))
	{
		func_7(uParam0, 0);
		return;
	}

	if (func_53(94))
		return;

	if (func_6(uParam0, 8))
		return;

	if (CAM::IS_SCREEN_FADED_OUT())
		return;

	if (ENTITY::_IS_ENTITY_FROZEN(uParam0->f_22))
		return;

	if (func_6(uParam0, 7))
	{
		if (func_53(92))
			return;
	
		entityCoords = { ENTITY::GET_ENTITY_COORDS(uParam0->f_22, true, false) };
	
		if (BUILTIN::VDIST(entityCoords, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false)) < 250f)
			return;
	
		i = 0;
	
		for (i = 0; i < 7; i = i + 1)
		{
			Plr = func_152(i);
		
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Plr))
			{
			}
			else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Plr))
			{
			}
			else if (BUILTIN::VDIST(entityCoords, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(Plr), true, false)) < 250f)
			{
				return;
			}
		}
	}

	func_7(uParam0, 0);
	return;
}

void func_76(var uParam0) // Position - 0x3F8B
{
	int i;
	Player Plr;
	Vector3 entityCoords;

	if (func_6(uParam0, 10))
	{
		func_7(uParam0, 0);
		return;
	}

	if (func_6(uParam0, 11))
	{
		func_7(uParam0, 0);
		return;
	}

	if (func_6(uParam0, 8))
		return;

	if (CAM::IS_SCREEN_FADED_OUT())
		return;

	if (ENTITY::_IS_ENTITY_FROZEN(uParam0->f_22))
		return;

	if (func_6(uParam0, 7))
	{
		if (func_53(92))
			return;
	
		entityCoords = { ENTITY::GET_ENTITY_COORDS(uParam0->f_22, true, false) };
	
		if (BUILTIN::VDIST(entityCoords, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false)) < 250f)
			return;
	
		for (i = 0; i < 7; i = i + 1)
		{
			Plr = func_152(i);
		
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Plr))
			{
			}
			else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Plr))
			{
			}
			else if (BUILTIN::VDIST(entityCoords, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(Plr), true, false)) < 250f)
			{
				return;
			}
		}
	}

	func_7(uParam0, 0);
	return;
}

int func_77(var uParam0, int iParam1) // Position - 0x4084
{
	Player playerOwnerOfMount;
	Ped playerPed;

	if (!func_6(uParam0, 10))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_19))
		return 2;

	playerOwnerOfMount = PLAYER::_GET_PLAYER_OWNER_OF_MOUNT(uParam0->f_19);

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(playerOwnerOfMount) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(playerOwnerOfMount))
		return 2;

	playerPed = PLAYER::GET_PLAYER_PED(uParam0->f_21);

	if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
		playerPed = PLAYER::PLAYER_PED_ID();

	func_153(uParam0->f_19);
	func_154(uParam0, playerPed);
	return 2;
}

void func_78(var uParam0) // Position - 0x40FC
{
	func_155(uParam0, 0f);
	return;
}

float func_79(var uParam0) // Position - 0x410B
{
	if (!func_19(uParam0))
		return uParam0->f_1;

	if (func_156(uParam0))
		return uParam0->f_2;

	return func_157() - uParam0->f_1;
}

void func_80(var uParam0, Any* panParam1, int iParam2) // Position - 0x4140
{
	struct<6> data;

	data.f_4 = -1;
	data.f_5 = -1;

	if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam2, &data, 6))
		return;

	if (data != 47)
		return;

	if (!func_158(uParam0, panParam1, data.f_4, data.f_5))
		return;

	switch (data.f_4)
	{
		case 0:
			if (func_6(uParam0, 11))
				return;
		
			if (func_6(uParam0, 8))
				return;
		
			if (func_6(uParam0, 2))
			{
				func_159(131072);
			}
			else if (!uParam0->f_3)
			{
				if (!func_18(panParam1, uParam0->f_4, uParam0->f_5, true, func_6(uParam0, 2)))
				{
				}
				else
				{
					uParam0->f_3 = 1;
				}
			}
		
			func_7(uParam0, 10);
			break;
	
		case 1:
			if (func_6(uParam0, 8))
				return;
		
			if (func_6(uParam0, 2))
			{
				func_159(131072);
			}
			else if (!uParam0->f_3)
			{
				if (!func_18(panParam1, uParam0->f_4, uParam0->f_5, false, func_6(uParam0, 2)))
				{
				}
				else
				{
					uParam0->f_3 = 1;
				}
			}
		
			func_34(uParam0, 10);
			func_7(uParam0, 11);
			break;
	
		case 2:
			if (func_6(uParam0, 5))
				if (uParam0->f_21 != data.f_1)
					return;
			else if (func_6(uParam0, 6))
				if (uParam0->f_21 != data.f_1)
					return;
			else
				return;
		
			if (func_6(uParam0, 2))
			{
				func_159(131072);
			}
			else if (!uParam0->f_3)
			{
				if (!func_18(panParam1, uParam0->f_4, uParam0->f_5, false, func_6(uParam0, 2)))
				{
				}
				else
				{
					uParam0->f_3 = 1;
				}
			}
		
			func_34(uParam0, 10);
			func_7(uParam0, 11);
			break;
	
		case 3:
			if (func_6(uParam0, 11))
				return;
		
			if (func_6(uParam0, 5))
				if (uParam0->f_21 != data.f_1)
					return;
			else if (func_6(uParam0, 6))
				if (uParam0->f_21 != data.f_1)
					return;
			else
				return;
		
			if (func_6(uParam0, 2))
			{
				func_159(131072);
			}
			else if (!uParam0->f_3)
			{
				if (!func_18(panParam1, uParam0->f_4, uParam0->f_5, true, func_6(uParam0, 2)))
				{
				}
				else
				{
					uParam0->f_3 = 1;
				}
			}
		
			func_7(uParam0, 10);
			break;
	
		case 4:
			func_7(uParam0, 8);
			break;
	
		case 5:
			func_34(uParam0, 8);
			break;
	
		case 6:
			func_7(uParam0, 19);
			break;
	
		case 7:
			func_162(uParam0, &data);
			break;
	
		case 8:
			func_163(uParam0, &data);
			break;
	
		case 9:
			func_160(uParam0, &data, false);
			break;
	
		case 10:
			func_160(uParam0, &data, true);
			break;
	
		case 11:
			func_161(uParam0, &data);
			break;
	}

	return;
}

BOOL func_81(Ped pedParam0) // Position - 0x4417
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	if (PED::_IS_THIS_MODEL_A_HORSE(entityModel))
		return true;

	return false;
}

int func_82(Ped pedParam0, var uParam1, int iParam2) // Position - 0x4443
{
	ItemSet itemSet;
	Entity entityFromItem;
	int i;
	int itemsetSize;
	int num;

	if (!PED::IS_PED_CARRYING_SOMETHING(pedParam0))
		return num;

	itemSet = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(pedParam0, itemSet);
	itemsetSize = ITEMSET::GET_ITEMSET_SIZE(itemSet);

	for (i = 0; i < itemsetSize; i = i + 1)
	{
		entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemSet));
	
		if (!ENTITY::DOES_ENTITY_EXIST(entityFromItem))
		{
		}
		else
		{
			uParam1->[num] = entityFromItem;
			num = num + 1;
		
			if (num == iParam2)
				break;
		}
	}

	ITEMSET::DESTROY_ITEMSET(itemSet);
	return num;
}

BOOL func_83(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x44BF
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0) && !ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (ENTITY::DOES_ENTITY_EXIST(pedParam1) && !ENTITY::IS_ENTITY_DEAD(pedParam1))
			if (bParam2)
				return PED::IS_PED_FULLY_ON_MOUNT(pedParam0, true) && PED::GET_MOUNT(pedParam0) == pedParam1;
			else
				return PED::IS_PED_ON_MOUNT(pedParam0) && PED::GET_MOUNT(pedParam0) == pedParam1;

	return false;
}

void func_84() // Position - 0x4529
{
	if (Global_1290271.f_1640.f_5 == true)
		return;

	Global_1290271.f_1640.f_5 = 1;
	return;
}

void func_85(Ped pedParam0, Any* panParam1) // Position - 0x454B
{
	BOOL isPedInWrithe;
	BOOL isPedIncapacitated;
	Player playerOwnerOfMount;
	int num;
	BOOL flag;

	if (func_165(func_164(), 0, 0))
		return;

	if (!func_166(pedParam0))
		return;

	isPedInWrithe = TASK::IS_PED_IN_WRITHE(pedParam0);
	isPedIncapacitated = PED::IS_PED_INCAPACITATED(pedParam0);

	if (!isPedInWrithe && !isPedIncapacitated)
		return;

	playerOwnerOfMount = PLAYER::_GET_PLAYER_OWNER_OF_MOUNT(pedParam0);

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(playerOwnerOfMount))
		return;

	if (playerOwnerOfMount != PLAYER::PLAYER_ID())
		return;

	if (func_53(8))
		return;

	func_167(pedParam0, false, false);

	if (!func_32(panParam1, 0, false))
		return;

	func_168(&Global_1903838, 0, true);
	func_169();
	num = func_170(panParam1, joaat("SLOTID_HORSE_INSURANCE"), false);
	flag = num > 0;

	if (flag)
	{
		func_148(18, false);
		func_171(*panParam1, 0, 0);
	}
	else
	{
		func_148(17, false);
	}

	return;
}

void func_86() // Position - 0x4619
{
	Player player;

	player = PLAYER::PLAYER_ID();

	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_MOUNT_OWNED_BY_PLAYER(player)))
		return;

	PLAYER::_SET_PLAYER_OWNS_MOUNT(player, 0);
	return;
}

void func_87(BOOL bParam0, BOOL bParam1) // Position - 0x463F
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

	if (func_139(Global_1289643[player /*19*/].f_12, true) != bParam0)
	{
		if (bParam0)
			func_172(&(Global_1289643[player /*19*/].f_12), 1);
		else
			func_173(&(Global_1289643[player /*19*/].f_12), 1);
	
		func_173(&(Global_1289643[player /*19*/].f_12), 2);
	
		if (bParam0)
			func_78(&(Global_1290271.f_11.f_788));
		else
			func_20(&(Global_1290271.f_11.f_788));
	}

	return;
}

void func_88(BOOL bParam0, BOOL bParam1) // Position - 0x46DB
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

	if (!func_139(Global_1289643[player /*19*/].f_12, true))
		return;

	if (func_139(Global_1289643[player /*19*/].f_12, 2) != bParam0)
		if (bParam0)
			func_172(&(Global_1289643[player /*19*/].f_12), 2);
		else
			func_173(&(Global_1289643[player /*19*/].f_12), 2);

	return;
}

BOOL func_89(int iParam0, int iParam1) // Position - 0x475C
{
	return iParam0 && iParam1 != false;
}

void func_90() // Position - 0x476B
{
	Global_1903838.f_106 = Global_1072759.f_28418[49 /*4*/].f_3;
	Global_1903838.f_106.f_1 = 0;
	Global_1903838.f_106.f_2 = 0;
	Global_1903838.f_106.f_3 = 0;
	Global_1903838.f_106.f_4 = 0;
	return;
}

int func_91(int iParam0) // Position - 0x47AA
{
	switch (iParam0)
	{
		case -1:
			return -1844561321;
	
		case 0:
			return joaat("NSMT_HORSE");
	
		case 1:
			return joaat("NSMT_DONKEY");
	
		case 2:
			return joaat("NSMT_VEHICLE");
	
		case 3:
			return joaat("NSMT_CANOE");
	
		case 4:
			return joaat("NSMT_TRAIN");
	
		case 5:
			return joaat("NSMT_CANNON");
	
		default:
		
	}

	return 0;
}

struct<4> func_92() // Position - 0x481D
{
	var unk;

	return unk;
}

void func_93(Any* panParam0) // Position - 0x4829
{
	int i;

	*panParam0 = { func_92() };

	for (i = 0; i < 24; i = i + 1)
	{
		panParam0->f_4[i] = 0f;
	}

	i = 0;

	for (i = 0; i < 2; i = i + 1)
	{
		panParam0->f_29[i /*5*/] = 100;
		panParam0->f_29[i /*5*/].f_1 = 0f;
		panParam0->f_29[i /*5*/].f_2 = 0f;
		panParam0->f_29[i /*5*/].f_3 = 0;
		panParam0->f_29[i /*5*/].f_4 = 0f;
	}

	i = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		switch (i)
		{
			case 0:
				panParam0->f_40[i /*4*/] = 100;
				break;
		
			case 1:
				panParam0->f_40[i /*4*/] = 0;
				break;
		
			case 2:
				panParam0->f_40[i /*4*/] = 50;
				break;
		}
	
		panParam0->f_40[i /*4*/].f_1 = 0f;
		panParam0->f_40[i /*4*/].f_2 = 0f;
		panParam0->f_40[i /*4*/].f_3 = 0;
	}

	panParam0->f_53 = { 0f, 0f, 0f };
	return;
}

BOOL func_94(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x491F
{
	return func_174(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

void func_95() // Position - 0x4935
{
	Global_1953292.f_1046 = 0;
	return;
}

void func_96(BOOL bParam0) // Position - 0x4945
{
	Global_1953292 = Global_1953292 || bParam0;
	return;
}

void func_97(Any* panParam0) // Position - 0x4958
{
	func_175(panParam0);
	panParam0->f_4 = 0;
	panParam0->f_5 = { func_92() };
	panParam0->f_9 = 0;
	panParam0->f_10 = -1;
	panParam0->f_11 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(panParam0->f_12), "", 64);
	panParam0->f_20 = 0;
	panParam0->f_22 = 0;
	panParam0->f_23 = 0;
	return;
}

BOOL func_98(Any* panParam0, Any* panParam1, Any* panParam2, BOOL bParam3) // Position - 0x499B
{
	if (!func_176(panParam0, panParam2, bParam3))
		return false;

	if (!func_177(panParam1, panParam2))
		return false;

	return true;
}

BOOL func_99(Any* panParam0, Any* panParam1, Any* panParam2, BOOL bParam3) // Position - 0x49C6
{
	if (!func_178(panParam0, panParam2, bParam3))
		return false;

	if (!func_179(panParam1, panParam2))
		return false;

	return true;
}

BOOL func_100(Any* panParam0, var uParam1) // Position - 0x49F1
{
	int i;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return false;

	for (i = 0; i < 10; i = i + 1)
	{
		if (!INVENTORY::_INVENTORY_COMPARE_GUIDS(&Global_1290271.f_1171[i /*24*/], panParam0))
		{
		}
		else
		{
			if (Global_1290271.f_1171[i /*24*/].f_23 < Global_1295666.f_16)
			{
				*uParam1 = { Global_1290271.f_1171[i /*24*/].f_7 };
				return true;
			}
		
			*uParam1 = { Global_1290271.f_1171[i /*24*/].f_15 };
			return true;
		}
	}

	return false;
}

 func_101(var uParam0) // Position - 0x4A7B
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(uParam0), 64);
	TEXT_LABEL_APPEND_STRING(&unk, "_BREED", 64);
	return func_181(&unk);
}

BOOL func_102(Hash hParam0, int iParam1) // Position - 0x4A9B
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

Hash func_103(Hash hParam0) // Position - 0x4AB5
{
	var unk;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk))
		return 0;

	return unk.f_4;
}

Hash func_104(Hash hParam0, BOOL bParam1) // Position - 0x4AD1
{
	Hash hash;

	if (!func_102(hParam0, 0))
		return 0;

	hash = func_182(hParam0, bParam1);

	if (hash != 0)
		return hash;

	return hParam0;
}

struct<8> func_105(const char* sParam0) // Position - 0x4AFF
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, sParam0, 64);
	return unk;
}

void func_106(Entity eParam0, BOOL bParam1) // Position - 0x4B12
{
	Ped pedIndexFromEntityIndex;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return;

	if (!ENTITY::IS_ENTITY_A_PED(eParam0))
		return;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0);

	if (pedIndexFromEntityIndex == _INVALID_PLAYER_INDEX())
		return;

	PED::SET_LOOTING_FLAG(pedIndexFromEntityIndex, 0, bParam1);
	PED::SET_LOOTING_FLAG(pedIndexFromEntityIndex, 1, bParam1);
	return;
}

BOOL func_107(Any* panParam0, int iParam1) // Position - 0x4B5A
{
	return func_184(&(panParam0->f_20), iParam1);
}

void func_108() // Position - 0x4B6C
{
	if (func_54(2, 255))
		return;

	func_185(2);
	return;
}

float func_109(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x4B86
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

BOOL func_110(int iParam0) // Position - 0x4BA4
{
	int num;
	int offset;

	func_186(iParam0, &num, &offset);
	return MISC::IS_BIT_SET(Global_17418.f_3116[num], offset);
}

void func_111() // Position - 0x4BC6
{
	char* str;
	char* str2;
	Hash hashKey;
	Hash hashKey2;
	int num;
	char* str3;
	Hash hashKey3;
	int num2;

	str = "WEB_INBOX_OFFER";
	str2 = "WEB_INBOX_OFFER_DESC";
	hashKey = MISC::GET_HASH_KEY("toasts_mp_generic");
	hashKey2 = MISC::GET_HASH_KEY("TOAST_MP_BENEFITS");
	num = joaat("hub");
	str3 = "HB_TOAST_BENEFITS_HOLD";
	hashKey3 = MISC::GET_HASH_KEY("default" /*_*/);
	num2 = func_187(str, str2, hashKey, hashKey2, num, str3, hashKey3, 8000, 0, 0, 0, 0, true, true);
	num2 == 0;
	return;
}

void func_112(int iParam0) // Position - 0x4C28
{
	int num;
	int BitIndex;
	int Variable;

	func_186(iParam0, &num, &BitIndex);
	Variable = Global_17418.f_3116[num];
	MISC::SET_BIT(&Variable, BitIndex);
	Global_17418.f_3116[num] = Variable;
	return;
}

void func_113(int iParam0, var uParam1, var uParam2) // Position - 0x4C5A
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_114(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x4C76
{
	if (iParam1 < 0 || iParam1 > 32)
		return false;

	if (func_188(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_189(iParam0))
		return false;

	if (func_190(iParam0))
		return false;

	if (Global_1900460.f_67 && !func_45(iParam0, 1) || func_191(32768))
		if (!func_45(iParam0, 262144) || !Global_1904402.f_8875)
			return false;

	if (!func_192())
		return false;

	return true;
}

void func_115(int iParam0, int iParam1) // Position - 0x4D18
{
	int Variable;

	Variable = Global_1904402[iParam0];
	MISC::SET_BIT(&Variable, iParam1);
	Global_1904402[iParam0] = Variable;
	return;
}

void func_116(Ped pedParam0, var uParam1, int iParam2) // Position - 0x4D3C
{
	Vector3 vector;
	Vector3 offsetFromEntityInWorldCoords;
	Object EntityIndex;
	int carriableSlot;
	int num;
	Ped EntityIndex2;
	Hash suboutfit;
	Hash drawable;
	Hash albedo;
	Hash normal;
	Hash material;
	Hash palette;
	int tint0;
	int tint1;
	int tint2;
	int i;
	int carriableSlot2;
	Ped ped;
	Hash hash;
	int num2;

	Global_1290271.f_1171.f_241[iParam2] = 0;

	if (!STREAMING::IS_MODEL_VALID(*uParam1))
		return;

	switch (iParam2)
	{
		case 0:
			vector = { 0f, -1f, 0f };
			break;
	
		case 1:
			vector = { -1f, 0f, 0f };
			break;
	
		case 2:
			vector = { 1f, 0f, 0f };
			break;
	}

	offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(pedParam0, vector) };

	if (STREAMING::_IS_MODEL_AN_OBJECT(*uParam1))
	{
		EntityIndex = OBJECT::CREATE_OBJECT(*uParam1, offsetFromEntityInWorldCoords, true, false, false, false, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(*uParam1);
	
		if (!ENTITY::DOES_ENTITY_EXIST(EntityIndex))
			return;
	
		carriableSlot = func_193(iParam2);
		TASK::TASK_CARRIABLE(EntityIndex, uParam1->f_3, pedParam0, carriableSlot, 256);
		ENTITY::_SET_ENTITY_CARCASS_TYPE(EntityIndex, uParam1->f_1);
		ENTITY::_0xEF259AA1E097E0AD(EntityIndex, uParam1->f_93);
		num = func_194(pedParam0, EntityIndex);
	}
	else if (STREAMING::IS_MODEL_A_PED(*uParam1))
	{
		EntityIndex2 = func_195(*uParam1, offsetFromEntityInWorldCoords, 0, true, false, 0, true, true, false, false, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(*uParam1);
	
		if (!ENTITY::DOES_ENTITY_EXIST(EntityIndex2))
			return;
	
		if (uParam1->f_8 != 0)
		{
			PED::_EQUIP_META_PED_OUTFIT(EntityIndex2, uParam1->f_8);
		
			if (uParam1->f_92)
			{
				suboutfit = joaat("META_OUTFIT_FIELD_DRESSING_001");
			
				if (PED::_DOES_META_PED_SUBOUTFIT_EXIST_FOR_PED_MODEL(uParam1->f_8, suboutfit, *uParam1))
					PED::_EQUIP_META_PED_SUBOUTFIT(EntityIndex2, suboutfit, 0);
			}
		}
	
		for (i = 0; i < uParam1->f_9; i = i + 1)
		{
			drawable = uParam1->f_10[i /*8*/];
			albedo = uParam1->f_10[i /*8*/].f_1;
			normal = uParam1->f_10[i /*8*/].f_2;
			material = uParam1->f_10[i /*8*/].f_3;
			palette = uParam1->f_10[i /*8*/].f_4;
			tint0 = uParam1->f_10[i /*8*/].f_5;
			tint1 = uParam1->f_10[i /*8*/].f_6;
			tint2 = uParam1->f_10[i /*8*/].f_7;
			PED::_SET_META_PED_TAG(EntityIndex2, drawable, albedo, normal, material, palette, tint0, tint1, tint2);
		}
	
		PED::_UPDATE_PED_VARIATION(EntityIndex2, false, true, true, true, false);
	
		if (uParam1->f_2 == 2)
		{
			ENTITY::SET_ENTITY_HEALTH(EntityIndex2, 0, 0);
			PED::SET_PED_CONFIG_FLAG(EntityIndex2, 517, true);
			PERSISTENCE::_0xF5622FA6ACFCA7DB(EntityIndex2, uParam1->f_91);
		}
	
		if (ENTITY::GET_IS_ANIMAL(EntityIndex2))
		{
			PED::_SET_PED_QUALITY(EntityIndex2, uParam1->f_4);
			FLOCK::_SET_ANIMAL_RARITY(EntityIndex2, uParam1->f_5);
			PED::_SET_PED_DAMAGE_CLEANLINESS(EntityIndex2, uParam1->f_6);
			PED::_SET_PED_DAMAGED(EntityIndex2, uParam1->f_7);
		}
	
		if (uParam1->f_92 || uParam1->f_95)
		{
			ENTITY::_SET_ENTITY_FULLY_LOOTED(EntityIndex2, true);
			PED::SET_LOOTING_FLAG(EntityIndex2, 0, false);
		}
	
		if (uParam1->f_95)
			TASK::_0xF3C3503276F4A034(EntityIndex2, 1);
	
		carriableSlot2 = func_193(iParam2);
		TASK::TASK_CARRIABLE(EntityIndex2, uParam1->f_3, pedParam0, carriableSlot2, 256);
		ENTITY::_SET_ENTITY_CARCASS_TYPE(EntityIndex2, uParam1->f_1);
		ENTITY::_0xEF259AA1E097E0AD(EntityIndex2, uParam1->f_93);
	
		if (uParam1->f_94)
		{
			ENTITY::SET_ENTITY_RENDER_SCORCHED(EntityIndex2, true);
			FIRE::START_ENTITY_FIRE(EntityIndex2, 0, -1, 8);
		}
	
		ped = func_196(EntityIndex2);
		hash = func_197(ped);
	
		if (func_102(hash, 0))
			if (hash != uParam1->f_1)
				uParam1->f_1 = hash;
	
		num2 = func_194(pedParam0, EntityIndex2);
	}

	return;
}

BOOL func_117(var uParam0, BOOL bParam1) // Position - 0x500C
{
	var unk;
	var unk30;
	int num;
	int num2;
	var unk48;
	int i;

	unk.f_9 = -1591664384;
	unk30 = { func_198(0, -1591664384, -1591664384, -1591664384, joaat("CI_CATEGORY_HORSE"), 0, 0) };

	if (func_199(&unk30, &num, &num2, bParam1))
	{
		unk48.f_9 = -1591664384;
	
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_200(&unk48, i, num, num2))
			{
				if (func_176(&unk48, &unk, false))
				{
					if (func_184(&(unk.f_24), 16))
					{
						*uParam0 = { unk };
						func_201(num);
						return true;
					}
				}
			}
		}
	
		func_201(num);
	}

	return false;
}

struct<4> func_118() // Position - 0x50B7
{
	return Global_1290271.f_11.f_310;
}

BOOL func_119() // Position - 0x50CA
{
	return Global_1290271.f_11.f_318 > Global_1295666.f_16;
}

void func_120(var uParam0, BOOL bParam1) // Position - 0x50E2
{
	Global_1290271.f_11.f_310 = { *uParam0 };

	if (bParam1)
		Global_1290271.f_11.f_318 = Global_1295666.f_16 + 10;

	return;
}

int func_121(Player plParam0) // Position - 0x510F
{
	int num;
	BOOL flag;

	num = func_202(plParam0);
	flag = func_165(func_164(), 0, 0);

	if (!flag)
		return 3;

	return num;
}

BOOL func_122() // Position - 0x5137
{
	int i;
	var unk;

	for (i = 0; i < 32; i = i + 1)
	{
		unk = -1;
		unk.f_1 = -1;
		unk = { func_203(i) };
	
		if (func_204(unk) == 7)
			return 1;
	}

	return 0;
}

BOOL func_123(int iParam0) // Position - 0x517A
{
	return func_205(&(Global_3145858.f_6), iParam0);
}

// Unhandled jump detected. Output should be considered invalid
int func_124(int iParam0, int iParam1) // Position - 0x518E
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 0:
				return 0;
		
			case 1:
				return 1;
		
			case 2:
				return 2;
		
			case 3:
				return 3;
		
			default:
				goto 0x6E;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 4;
		
			case 1:
				return 5;
		
			case 2:
				return 6;
		
			case 3:
				return 7;
		
			default:
			
		}
	}

	return -1;
}

BOOL func_125(var uParam0, BOOL bParam1) // Position - 0x5200
{
	var unk;
	var unk30;
	int num;
	int num2;
	var unk48;
	int i;

	unk.f_9 = -1591664384;
	unk30 = { func_198(0, -1591664384, -1591664384, -1591664384, joaat("CI_CATEGORY_HORSE"), 0, 0) };

	if (func_199(&unk30, &num, &num2, bParam1))
	{
		unk48.f_9 = -1591664384;
	
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_200(&unk48, i, num, num2))
			{
				if (func_176(&unk48, &unk, false))
				{
					if (func_184(&(unk.f_24), 32))
					{
						*uParam0 = { unk };
						func_201(num);
						return true;
					}
				}
			}
		}
	
		func_201(num);
	}

	return false;
}

struct<4> func_126(BOOL bParam0) // Position - 0x52AB
{
	int num;
	int num2;
	var guid;
	int i;

	guid.f_9 = -1591664384;

	if (!func_206("ALL HORSES", &num, &num2, -1591664384, bParam0))
		return guid;

	for (i = 0; i < num2; i = i + 1)
	{
		if (!func_200(&guid, i, num, num2))
		{
		}
		else if (INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		{
			break;
		}
	}

	func_201(num);
	return guid;
}

BOOL func_127(BOOL bParam0) // Position - 0x531B
{
	if (func_207() && bParam0 || !func_208(false))
		if (func_209(-283002878))
			if (func_210(-283002878))
				return true;

	return false;
}

Vector3 func_128(Player plParam0) // Position - 0x535A
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false, false);
}

void func_129(int iParam0) // Position - 0x536E
{
	Global_1940252.f_11561 = Global_1940252.f_11561 || iParam0;
	return;
}

BOOL func_130(Any* panParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x5387
{
	if (!func_32(panParam0, iParam1, true))
		return false;

	if (!func_211(&Global_1903838))
		return false;

	func_212(&Global_1903838, 536870912);
	func_212(&Global_1903838, 268435456);
	func_212(&Global_1903838, -2147483648);
	func_212(&Global_1903838, 1073741824);
	func_212(&Global_1903838, 134217728);

	switch (iParam2)
	{
		case 0:
			func_213(&Global_1903838, 134217728);
			break;
	
		case 1:
			func_213(&Global_1903838, 268435456);
			break;
	
		case 2:
			func_213(&Global_1903838, 536870912);
			break;
	
		case 3:
			func_213(&Global_1903838, 1073741824);
			break;
	
		case 4:
			func_213(&Global_1903838, -2147483648);
			break;
	}

	if (!func_214(&Global_1903838))
		return false;

	if (bParam3)
		func_215();

	return true;
}

int func_131(var uParam0, Entity eParam1) // Position - 0x5481
{
	var unk;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam1))
		return 0;

	if (!HUD::IS_MP_GAMER_TAG_ACTIVE(*uParam0))
		return 0;

	if (HUD::_IS_MP_GAMER_TAG_ACTIVE_ON_ENTITY(*uParam0, eParam1))
		return 0;

	*uParam0 = unk;
	return 1;
}

BOOL func_132(int iParam0) // Position - 0x54BC
{
	return Global_17418.f_55.f_61.f_602 && iParam0 != false;
}

BOOL func_133(var uParam0) // Position - 0x54D3
{
	int num;

	num = uParam0->f_21;

	if (num == 255)
		return 0;

	if (num < 0 || num >= 32)
		return 0;

	if (!Global_1290271.f_1666.f_1)
		return 0;

	return 1;
}

int func_134(Entity eParam0, BOOL bParam1, var uParam2, Player plParam3, Player plParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x5514
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	float num;
	float num2;
	float num3;
	BOOL flag5;
	Entity EntityIndex;
	Ped pedIndexFromEntityIndex;
	Ped pedIndexFromEntityIndex2;
	BOOL flag6;

	flag = plParam4 != -1;

	if (HUD::_0x7EC0D68233E391AC(21) == 2)
	{
		func_216(uParam2);
		return 0;
	}

	if (func_217(Global_1295666, 65536))
		return 0;

	num3 = BUILTIN::VDIST(Global_34, ENTITY::GET_ENTITY_COORDS(eParam0, false, false));

	if (!PLAYER::IS_PLAYER_DEAD(Global_1295666.f_5) && ENTITY::IS_ENTITY_A_PED(eParam0))
	{
		if (Global_1072759.f_21889.f_580 <= 0f || num3 <= Global_1072759.f_21889.f_580)
		{
			PLAYER::GET_PLAYER_TARGET_ENTITY(Global_1295666.f_5, &EntityIndex);
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0);
		
			if (EntityIndex == eParam0 || PED::_GET_LASSOED_LASSOER(Global_1295666.f_3) == pedIndexFromEntityIndex || PED::GET_MELEE_TARGET_FOR_PED(Global_1295666.f_3) == pedIndexFromEntityIndex || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(Global_1295666.f_5, pedIndexFromEntityIndex))
				flag4 = true;
		}
	}

	if (flag)
	{
		pedIndexFromEntityIndex2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0);
	
		if (PED::IS_PED_IN_ANY_VEHICLE(pedIndexFromEntityIndex2, false) || PED::IS_PED_ON_MOUNT(pedIndexFromEntityIndex2))
			flag2 = true;
	
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_21353.f_258), plParam4) || SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_21353.f_259), plParam4))
			flag3 = true;
	
		if (HUD::_0x7EC0D68233E391AC(54) == 2)
		{
			func_216(uParam2);
			return 0;
		}
	
		if (!NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(Global_1295666.f_149[Global_1295666], Global_1295666.f_149[plParam4]))
			return 0;
	
		if (func_218(plParam4))
			return 0;
	
		if (func_218(PLAYER::NETWORK_PLAYER_ID_TO_INT()))
			if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1958639.f_2), plParam4))
				return 3;
	
		if (Global_1072759.f_21889[plParam4 /*18*/].f_3 != 0)
		{
			func_216(uParam2);
			return Global_1072759.f_21889[plParam4 /*18*/].f_3;
		}
	
		if (func_219(plParam4))
		{
			func_216(uParam2);
			return 0;
		}
	
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_21889.f_583), plParam4) && !flag3)
			if (!flag4 || !func_217(Global_1295666, 262144))
				return 0;
	
		if (func_220(plParam4))
			return 0;
	
		if (plParam3 != 255 && plParam3 == plParam4)
			return 3;
	
		if (func_217(plParam4, 32768))
			return 0;
	}
	else if (bParam7)
	{
		if (HUD::_0x7EC0D68233E391AC(55) == 2)
		{
			func_216(uParam2);
			return 0;
		}
	}

	if (bParam6 || Global_263042[Global_1295666 /*65*/].f_1.f_16.f_2 == -504335712 && func_221(*Global_524288.f_39632))
		flag5 = true;

	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		num2 = Global_1901671.f_101.f_11;
	}
	else if (flag5)
	{
		if (flag2)
			num2 = Global_1901671.f_101.f_10;
		else
			num2 = Global_1901671.f_101.f_9;
	}
	else
	{
		if (Global_1072759.f_21889.f_578 > 0f)
			num = Global_1072759.f_21889.f_578;
		else
			num = bParam1 ? Global_1901671.f_101.f_7 : Global_1901671.f_101.f_6;
	
		if (Global_1072759.f_21889.f_579 > 0f)
			num2 = Global_1072759.f_21889.f_579;
		else
			num2 = bParam1 ? Global_1901671.f_101.f_8 : Global_1901671.f_101.f_5;
	}

	if (!func_223(plParam4, eParam0, num3, num2, flag))
	{
		func_216(uParam2);
		return 0;
	}

	flag6 = HUD::_0x7EC0D68233E391AC(21) == 1;

	if (flag5)
	{
		if (flag4)
		{
			if (flag)
				return 3;
			else
				return 2;
		}
		else if (num3 <= num2)
		{
			if (flag6)
				if (flag)
					return 3;
				else
					return 2;
			else if (func_217(Global_1295666, 131072))
				if (flag && VOICE::_0xEF6F2A35FAAF2ED7(PLAYER::INT_TO_PLAYERINDEX(plParam4)))
					return 2;
			else if (func_224(uParam2) || func_225(iParam5) || flag && VOICE::_0xEF6F2A35FAAF2ED7(PLAYER::INT_TO_PLAYERINDEX(plParam4)) || flag3)
				return 2;
		}
		else
		{
			func_216(uParam2);
			return 0;
		}
	}
	else if (flag4)
	{
		if (flag)
			return 3;
		else
			return 2;
	}
	else if (num3 <= num)
	{
		if (flag6 && flag)
			return 3;
		else
			return 2;
	}
	else if (num3 <= num2)
	{
		return 1;
	}
	else
	{
		return 0;
	}

	return 0;
}

BOOL func_135(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5962
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

	return func_139(Global_1289643[plParam0 /*19*/].f_12, 1);
}

BOOL func_136(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x59AF
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

	return func_139(Global_1289643[plParam0 /*19*/].f_12, 2);
}

BOOL func_137(var uParam0) // Position - 0x59FC
{
	int i;
	int num;
	var unk;
	BOOL flag;
	BOOL flag2;
	Entity EntityIndex;

	flag = false;
	flag2 = true;

	if (func_6(uParam0, 2))
		flag = true;

	EntityIndex = uParam0->f_20;

	if (!ENTITY::DOES_ENTITY_EXIST(EntityIndex))
		return false;

	func_7(uParam0, 30);

	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_19))
		if (!ENTITY::_GET_ENTITY_CARRYING_FLAG(uParam0->f_19, 34))
			ENTITY::_SET_ENTITY_CARRYING_FLAG(uParam0->f_19, 34, true);
	else if (flag)
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_19);

	if (!ENTITY::_0x188736456D1DEDE6(uParam0->f_19, EntityIndex))
		flag2 = false;

	for (i = 0; i < 3; i = i + 1)
	{
		num = func_226(i);
	
		if (PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&unk, uParam0->f_19, num, 0))
		{
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(unk.f_3))
				if (flag)
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(unk.f_3);
		
			if (!ENTITY::_0x188736456D1DEDE6(unk.f_3, EntityIndex))
				flag2 = false;
		}
	}

	if (func_227())
		flag2 = false;

	if (!flag2)
		if (func_228(&(Global_1290271.f_11.f_788), 5f))
			return true;

	return flag2;
}

void func_138(var uParam0) // Position - 0x5AF5
{
	int i;
	int num;
	var unk;
	Entity EntityIndex;

	EntityIndex = uParam0->f_20;

	if (!ENTITY::DOES_ENTITY_EXIST(EntityIndex))
		return;

	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_19))
		if (ENTITY::_GET_ENTITY_CARRYING_FLAG(uParam0->f_19, 34))
			ENTITY::_SET_ENTITY_CARRYING_FLAG(uParam0->f_19, 34, false);

	ENTITY::_0xC6A1A3D63F122DE7(uParam0->f_19, EntityIndex);

	for (i = 0; i < 3; i = i + 1)
	{
		num = func_226(i);
	
		if (PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&unk, uParam0->f_19, num, 0))
			ENTITY::_0xC6A1A3D63F122DE7(unk.f_3, EntityIndex);
	}

	return;
}

BOOL func_139(BOOL bParam0, BOOL bParam1) // Position - 0x5B71
{
	return bParam0 && bParam1 != false;
}

BOOL func_140(var uParam0) // Position - 0x5B80
{
	float num;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_21))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(uParam0->f_21)))
		return false;

	num = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(uParam0->f_21), true, false), ENTITY::GET_ENTITY_COORDS(uParam0->f_19, true, false));

	if (num < 248f)
		return false;

	return true;
}

BOOL func_141(Player plParam0, BOOL bParam1) // Position - 0x5BDA
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

char* func_142(int iParam0) // Position - 0x5CDC
{
	var unk;

	if (iParam0 == -1)
		return "";

	func_90();
	Global_1903838.f_106.f_2 = 1292413058;
	Global_1903838.f_106.f_3 = func_91(iParam0);

	if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&unk, &(Global_1903838.f_106)))
		return "";

	return func_229(unk);
}

int func_143(int iParam0) // Position - 0x5D2C
{
	if (iParam0 == 255)
		return Global_1102813;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/];

	return 26;
}

BOOL func_144(Player plParam0) // Position - 0x5D73
{
	Player player;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0))
		return false;

	player = plParam0;

	if (player < 0 || player >= 32)
		return false;

	return Global_1108965.f_34[player /*11*/].f_6;
}

BOOL func_145(int iParam0, int iParam1) // Position - 0x5DAF
{
	return iParam0 && iParam1 != false;
}

BOOL func_146(var uParam0, Any* panParam1, int iParam2) // Position - 0x5DBE
{
	Player playerFromGamerHandle;
	Ped riderOfMount;
	Player playerIndexFromPed;
	int* p_num;
	int num;
	var unk;

	playerFromGamerHandle = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(panParam1);

	if (ENTITY::IS_ENTITY_A_PED(uParam0->f_19))
		riderOfMount = PED::_GET_RIDER_OF_MOUNT(uParam0->f_19, false);
	else
		riderOfMount = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_22, -1);

	if (!ENTITY::DOES_ENTITY_EXIST(riderOfMount))
		return false;

	playerIndexFromPed = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(riderOfMount);

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(playerIndexFromPed))
		return true;

	if (playerIndexFromPed == playerFromGamerHandle)
		return false;

	if (func_144(playerFromGamerHandle))
		return true;

	p_num = func_230(iParam2);

	if (func_231(iParam2))
	{
		num = func_232(p_num);
	
		if (num == 15 || num == 10)
			if (func_233(p_num, uParam0->f_19))
				return true;
	}

	if (Global_1289643[iParam2 /*19*/].f_8 & 16 != 0 || Global_1289642 & 32 != 0)
		return false;

	if (Global_1289643[iParam2 /*19*/].f_8 & 2 != 0 || Global_1289642 & 4 != 0)
		if (GANG::NETWORK_GET_GANG_ID(playerIndexFromPed) == GANG::NETWORK_GET_GANG_ID(playerFromGamerHandle))
			return false;

	unk = { func_234(playerIndexFromPed) };

	if (Global_1289643[iParam2 /*19*/].f_8 & 4 != 0 || Global_1289642 & 8 != 0)
		if (func_235(unk, *panParam1))
			return false;

	if (Global_1289643[iParam2 /*19*/].f_8 & 8 != 0 || Global_1289642 & 16 != 0)
		if (NETWORK::NETWORK_IS_FRIEND(panParam1))
			return false;

	return true;
}

void func_147(Entity eParam0) // Position - 0x5F2E
{
	BOOL isEntityAPed;
	Ped EntityIndex;
	var args;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return;

	isEntityAPed = ENTITY::IS_ENTITY_A_PED(eParam0);

	if (isEntityAPed)
		if (ENTITY::IS_ENTITY_DEAD(eParam0))
			return;
	else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(eParam0), false, false))
		return;

	EntityIndex = PLAYER::PLAYER_PED_ID();

	if (!ENTITY::DOES_ENTITY_EXIST(EntityIndex))
		return;

	if (ENTITY::IS_ENTITY_DEAD(EntityIndex))
		return;

	if (!PED::IS_PED_ON_MOUNT(EntityIndex))
		return;

	if (isEntityAPed)
		if (PED::GET_MOUNT(EntityIndex) != ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0))
			return;
	else if (AITRANSPORT::_GET_PED_IN_TRANSPORT_SEAT(eParam0, -1) == EntityIndex)
		return;

	if (AITRANSPORT::IS_PED_EXITING_TRANSPORT(EntityIndex, eParam0))
		return;

	args.f_5 = 1073741824;
	args.f_6 = 1;
	args.f_3 = EntityIndex;
	args.f_4 = eParam0;
	AITRANSPORT::TASK_EXIT_TRANSPORT(&args);
	return;
}

void func_148(int iParam0, BOOL bParam1) // Position - 0x5FFA
{
	func_236(iParam0, bParam1);
	return;
}

BOOL func_149() // Position - 0x600A
{
	return Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE");
}

void func_150(var uParam0) // Position - 0x602F
{
	if (!func_6(uParam0, 25) && !func_6(uParam0, 24))
	{
		func_7(uParam0, 0);
		func_7(uParam0, 25);
		func_237();
	}

	return;
}

float func_151(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3) // Position - 0x6064
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false), bParam2);
}

Player func_152(int iParam0) // Position - 0x60AC
{
	if (iParam0 < 0 || iParam0 >= 7)
		return 255;

	return Global_1102813.f_3675[iParam0];
}

void func_153(Ped pedParam0) // Position - 0x60D5
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 136, true);
	PED::SET_PED_CAN_BE_TARGETTED(pedParam0, false);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(pedParam0, 34, true);
	PED::SET_LOOTING_FLAG(pedParam0, 4, false);
	PED::SET_LOOTING_FLAG(pedParam0, 0, false);
	PED::SET_LOOTING_FLAG(pedParam0, 1, false);
	return;
}

void func_154(var uParam0, Ped pedParam1) // Position - 0x6124
{
	var Sequence;

	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_19))
		return;

	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_19, true);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_19, 288, true);
	TASK::OPEN_SEQUENCE_TASK(&Sequence);

	if (func_238(uParam0))
		TASK::TASK_HORSE_ACTION(0, 2, 0, 0);

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		TASK::TASK_SMART_FLEE_PED(0, pedParam1, 1000f, -1, 540928, 3f, 0);
	else
		TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(uParam0->f_19, true, false), 1000f, -1, 540928, 3f);

	TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
	func_239(uParam0->f_19, &Sequence, 0, 0, true, true);
	PED::SET_PED_KEEP_TASK(uParam0->f_19, true);
	return;
}

void func_155(var uParam0, float fParam1) // Position - 0x61C3
{
	uParam0->f_1 = func_157() - fParam1;
	func_240(uParam0, 1);
	func_241(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_156(var uParam0) // Position - 0x61E9
{
	return func_89(*uParam0, 2);
}

float func_157() // Position - 0x61F9
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

BOOL func_158(var uParam0, Any* panParam1, int iParam2, int iParam3) // Position - 0x622B
{
	switch (iParam3)
	{
		case 0:
			if (iParam2 == 1 || iParam2 == 2 || iParam2 == 3)
				return func_6(uParam0, 5);
		
			return func_6(uParam0, 5) && !func_6(uParam0, 7);
	
		case 1:
			if (iParam2 == 1 || iParam2 == 2 || iParam2 == 3)
				return func_6(uParam0, 6);
		
			return func_6(uParam0, 6) && !func_6(uParam0, 7);
	
		case 2:
			if (iParam2 == 1 || iParam2 == 2 || iParam2 == 3)
				return func_6(uParam0, 5);
		
			return func_6(uParam0, 5) && func_6(uParam0, 7);
	
		case 3:
			if (iParam2 == 1 || iParam2 == 2 || iParam2 == 3 || iParam2 == 6)
				return func_6(uParam0, 6);
		
			return func_6(uParam0, 6) && func_6(uParam0, 7);
	
		case 4:
			return func_6(uParam0, 5);
	
		case 5:
			return func_6(uParam0, 6);
	
		case 6:
			return true;
	
		default:
		
	}

	return panParam1->f_6 == iParam3;
}

void func_159(int iParam0) // Position - 0x637C
{
	int num;

	num = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	Global_1289643[num /*19*/].f_9 = Global_1289643[num /*19*/].f_9 || iParam0;
	return;
}

void func_160(var uParam0, var uParam1, BOOL bParam2) // Position - 0x63A1
{
	Ped riderOfMount;
	Ped PedIndex;
	Ped playerPed;

	if (uParam0->f_19 != PLAYER::GET_MOUNT_OWNED_BY_PLAYER(uParam1->f_1))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_19))
		return;

	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_19))
		return;

	riderOfMount = PED::_GET_RIDER_OF_MOUNT(uParam0->f_19, true);
	PedIndex = PLAYER::PLAYER_PED_ID();
	playerPed = PLAYER::GET_PLAYER_PED(uParam1->f_1);

	if (PED::GET_MOUNT(playerPed) == uParam0->f_19)
	{
		if (PedIndex != playerPed && PED::GET_MOUNT(PedIndex) == uParam0->f_19)
		{
			TASK::TASK_DISMOUNT_ANIMAL(PedIndex, 0, 0, 0, 0, 0);
			func_148(16, true);
		}
	
		if (bParam2 && PedIndex == playerPed)
			TASK::TASK_DISMOUNT_ANIMAL(PedIndex, 0, 0, 0, 0, 0);
	
		return;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(riderOfMount))
		return;

	TASK::TASK_HORSE_ACTION(uParam0->f_19, 10, 0, 0);

	if (riderOfMount == PedIndex)
		func_148(16, true);

	return;
}

void func_161(var uParam0, var uParam1) // Position - 0x646E
{
	if (PLAYER::GET_PLAYER_PED(uParam1->f_1) == PLAYER::PLAYER_PED_ID())
		return;

	if (uParam0->f_19 != PLAYER::GET_MOUNT_OWNED_BY_PLAYER(uParam1->f_1))
		return;

	if (AITRANSPORT::_GET_PED_IN_TRANSPORT_SEAT(uParam0->f_19, -2) == _INVALID_PLAYER_INDEX())
		return;

	func_147(uParam0->f_19);
	return;
}

void func_162(var uParam0, var uParam1) // Position - 0x64B7
{
	if (uParam0->f_19 != PLAYER::GET_MOUNT_OWNED_BY_PLAYER(uParam1->f_1))
		return;

	if (!func_242(uParam1, uParam0->f_19))
		return;

	TASK::CLEAR_PED_TASKS(uParam0->f_19, true, false);
	FLOCK::_0xFF1E339CE40EAAAF(uParam0->f_19, 0);
	TASK::TASK_FLEE_COORD(uParam0->f_19, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(uParam1->f_1), true, false), 6, 4718592, -1082130432, -1, 0);
	return;
}

void func_163(var uParam0, var uParam1) // Position - 0x6517
{
	if (uParam0->f_19 != PLAYER::GET_MOUNT_OWNED_BY_PLAYER(uParam1->f_1))
		return;

	if (!func_242(uParam1, uParam0->f_19))
		return;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_19))
	{
		TASK::CLEAR_PED_TASKS(uParam0->f_19, true, false);
	
		if (ENTITY::DOES_ENTITY_EXIST(PED::_GET_ACTIVE_ANIMAL_OWNER(uParam0->f_19)))
			FLOCK::_0xFF1E339CE40EAAAF(uParam0->f_19, 0);
	
		TASK::TASK_STAND_STILL(uParam0->f_19, -1);
	}

	return;
}

struct<2> func_164() // Position - 0x6578
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	return unk;
}

BOOL func_165(var uParam0, var uParam1, int iParam2, int iParam3) // Position - 0x6591
{
	if (Global_265213.f_122484.f_139 & 8 != 0)
	{
		Global_1072759.f_28307 = 1;
		return 1;
	}

	if (func_243(Global_1051268) && !func_244(Global_1051268, uParam0))
	{
		Global_1072759.f_28307 = 2;
		return 1;
	}

	if (iParam2 != 0 && func_245(iParam2))
		return 1;

	if (iParam3 != 0 && func_246(iParam3, 255))
	{
		Global_1072759.f_28307 = 4;
		return 1;
	}

	if (Global_263042[Global_1295666 /*65*/] > 2)
	{
		Global_1072759.f_28307 = 5;
		return 1;
	}

	if (Global_262155 >= 1)
	{
		Global_1072759.f_28307 = 6;
		return 1;
	}

	if (func_247())
	{
		Global_1072759.f_28307 = 7;
		return 1;
	}

	if (Global_1572887.f_8 & true != 0)
	{
		if (!func_243(Global_1051268))
		{
			Global_1072759.f_28307 = 8;
			return 1;
		}
	}

	if (*Global_265213.f_122646 != 0 && SCRIPTS::DOES_THREAD_EXIST(*Global_265213.f_122646))
	{
		Global_1072759.f_28307 = 9;
		return 1;
	}

	Global_1072759.f_28307 = 0;
	return 0;
}

BOOL func_166(Ped pedParam0) // Position - 0x66BA
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!ENTITY::IS_ENTITY_A_PED(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(entityModel);
}

void func_167(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x66EC
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (bParam1)
			AUDIO::DISABLE_PED_PAIN_AUDIO(pedParam0, true);
	
		if (bParam2)
			PED::SET_PED_CONFIG_FLAG(pedParam0, 243, true);
	
		Global_33 == pedParam0;
		ENTITY::SET_ENTITY_HEALTH(pedParam0, 0, 0);
	}

	return;
}

int func_168(Any* panParam0, int iParam1, BOOL bParam2) // Position - 0x6728
{
	func_248(panParam0, 2, bParam2);

	if (!func_214(panParam0))
		return 0;

	func_249(panParam0, iParam1, bParam2);
	return 1;
}

void func_169() // Position - 0x6752
{
	int i;

	for (i = 0; i < 20; i = i + 1)
	{
		if (Global_1290271.f_11.f_162[i /*7*/].f_6 == 2)
		{
			Global_1290271.f_11.f_162[i /*7*/] = { func_92() };
			Global_1290271.f_11.f_162[i /*7*/].f_5 = 0;
			Global_1290271.f_11.f_162[i /*7*/].f_6 = -1;
		}
	}

	return;
}

int func_170(Any* panParam0, Hash hParam1, BOOL bParam2) // Position - 0x67AF
{
	return INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(func_250(bParam2), panParam0, hParam1);
}

int func_171(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5) // Position - 0x67C5
{
	var guid2;
	int i;

	if (func_251(&uParam0, 0, true) && iParam5 == 2)
		return 0;

	guid2 = { func_92() };

	for (i = 0; i < 20; i = i + 1)
	{
		if (!INVENTORY::_INVENTORY_COMPARE_GUIDS(&Global_1290271.f_11.f_162[i /*7*/], &uParam0) && !INVENTORY::_INVENTORY_COMPARE_GUIDS(&Global_1290271.f_11.f_162[i /*7*/], &guid2))
		{
		}
		else
		{
			Global_1290271.f_11.f_162[i /*7*/].f_5 = Global_1295666.f_16 + 120;
			Global_1290271.f_11.f_162[i /*7*/] = { uParam0 };
			Global_1290271.f_11.f_162[i /*7*/].f_6 = iParam5;
			Global_1290271.f_11.f_162[i /*7*/].f_4 = iParam4;
			return 1;
		}
	}

	return 0;
}

void func_172(BOOL bParam0, int iParam1) // Position - 0x687E
{
	*bParam0 = *bParam0 || iParam1;
	return;
}

void func_173(BOOL bParam0, int iParam1) // Position - 0x688F
{
	*bParam0 = *bParam0 - *bParam0 && iParam1;
	return;
}

BOOL func_174(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x68A4
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_250(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

void func_175(Any* panParam0) // Position - 0x68DE
{
	*panParam0 = 0;
	panParam0->f_1 = 0;
	panParam0->f_2 = 0;
	panParam0->f_3 = 0;
	return;
}

BOOL func_176(Any* panParam0, Any* panParam1, BOOL bParam2) // Position - 0x68F9
{
	int inventoryId;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return false;

	inventoryId = func_250(bParam2);

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam0, panParam1, 29, 1))
		return false;

	return true;
}

BOOL func_177(Any* panParam0, Any* panParam1) // Position - 0x692D
{
	*panParam0 = { *panParam1 };
	panParam0->f_4 = panParam1->f_4;
	panParam0->f_5 = { panParam1->f_5 };
	panParam0->f_9 = panParam1->f_9;
	panParam0->f_11 = panParam1->f_14;

	if (!STREAMING::IS_MODEL_VALID(panParam0->f_11))
		return false;

	panParam0->f_22 = func_23(panParam0->f_11);

	if (panParam0->f_22 == 0)
		return false;

	panParam0->f_12 = { panParam1->f_16 };
	panParam0->f_23 = panParam1->f_25;
	panParam0->f_20 = panParam1->f_24;
	panParam0->f_10 = 0;
	return true;
}

BOOL func_178(Any* panParam0, Any* panParam1, BOOL bParam2) // Position - 0x69AD
{
	int inventoryId;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return false;

	inventoryId = func_250(bParam2);

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam0, panParam1, 24, 1))
		return false;

	return true;
}

BOOL func_179(Any* panParam0, Any* panParam1) // Position - 0x69E1
{
	*panParam0 = { *panParam1 };
	panParam0->f_4 = panParam1->f_4;
	panParam0->f_5 = { panParam1->f_5 };
	panParam0->f_9 = panParam1->f_9;
	panParam0->f_11 = panParam1->f_14;

	if (!STREAMING::IS_MODEL_VALID(panParam0->f_11))
		return false;

	panParam0->f_22 = 0;
	panParam0->f_12 = { panParam1->f_15 };
	panParam0->f_20 = panParam1->f_23;
	panParam0->f_10 = 2;
	return true;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x6A46
{
	switch (iParam0)
	{
		case joaat("breed_arabian_black"):
			return "BREED_ARABIAN_BLACK";
	
		case joaat("breed_arabian_redchestnut"):
			return "BREED_ARABIAN_REDCHESTNUT";
	
		case joaat("breed_gang_sadie"):
			return "BREED_GANG_SADIE";
	
		case joaat("breed_shire_lightgrey"):
			return "BREED_SHIRE_LIGHTGREY";
	
		case joaat("BREED_KENTUCKYSADDLE_BLACK"):
			return "BREED_KENTUCKYSADDLE_BLACK1";
	
		case joaat("breed_americanstandardbred_lightbuckskin"):
			return "BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN";
	
		case joaat("breed_gang_trelawney"):
			return "BREED_GANG_TRELAWNEY";
	
		case joaat("breed_thoroughbred_dapplegrey"):
			return "BREED_THOROUGHBRED_DAPPLEGREY";
	
		case -1898310680:
			return "BREED_GYPSYCOB_SPLASHEDPIEBALD";
	
		case joaat("breed_turkoman_silver"):
			return "BREED_TURKOMAN_SILVER";
	
		case joaat("breed_norfolkroadster_dappledbuckskin"):
			return "BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN";
	
		case joaat("breed_mule_painted"):
			return "BREED_MULE_PAINTED";
	
		case joaat("breed_appaloosa_blanket"):
			return "BREED_APPALOOSA_BLANKET";
	
		case -1750687713:
			return "BREED_GYPSYCOB_PALOMINOBLAGDON";
	
		case joaat("breed_criollo_sorrelovero"):
			return "BREED_CRIOLLO_SORRELOVERO";
	
		case joaat("breed_nokota_reversedappleroan"):
			return "BREED_NOKOTA_REVERSEDAPPLEROAN";
	
		case -1712303883:
			return "BREED_MUSTANG_CHESTNUTTOVERO";
	
		case joaat("breed_kladruber_dapplerosegrey"):
			return "BREED_KLADRUBER_DAPPLEROSEGREY";
	
		case joaat("breed_mustang_grullodun"):
			return "BREED_MUSTANG_GRULLODUN";
	
		case joaat("breed_kladruber_white"):
			return "BREED_KLADRUBER_WHITE";
	
		case joaat("breed_dutchwarmblood_sootybuckskin"):
			return "BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN";
	
		case joaat("breed_mustang_tigerstripedbay"):
			return "BREED_MUSTANG_TIGERSTRIPEDBAY";
	
		case joaat("breed_arabian_grey"):
			return "BREED_ARABIAN_GREY";
	
		case joaat("breed_gang_hosea"):
			return "BREED_GANG_HOSEA";
	
		case joaat("breed_hungarianhalfbred_darkdapplegrey"):
			return "BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY";
	
		case joaat("breed_breton_steelgrey"):
			return "BREED_BRETON_STEELGREY";
	
		case joaat("breed_donkey"):
			return "BREED_DONKEY";
	
		case joaat("breed_andalusian_darkbay"):
			return "BREED_ANDALUSIAN_DARKBAY";
	
		case joaat("breed_hungarianhalfbred_liverchestnut"):
			return "BREED_HUNGARIANHALFBRED_LIVERCHESTNUT";
	
		case joaat("breed_appaloosa_leopard"):
			return "BREED_APPALOOSA_LEOPARD";
	
		case joaat("breed_gang_micah"):
			return "BREED_GANG_MICAH";
	
		case joaat("breed_thoroughbred_blackchestnut"):
			return "BREED_THOROUGHBRED_BLACKCHESTNUT";
	
		case joaat("breed_belgian_blondchestnut"):
			return "BREED_BELGIAN_BLONDCHESTNUT";
	
		case joaat("breed_appaloosa_leopardblanket"):
			return "BREED_APPALOOSA_LEOPARDBLANKET";
	
		case joaat("breed_missourifoxtrotter_sablechampagne"):
			return "BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE";
	
		case -1159865523:
			return "BREED_MISSOURIFOXTROTTER_BLUEROAN";
	
		case joaat("breed_gang_karen"):
			return "BREED_GANG_KAREN";
	
		case joaat("breed_eagleflies"):
			return "BREED_EAGLEFLIES";
	
		case joaat("breed_john_endlesssummer"):
			return "BREED_JOHN_ENDLESSSUMMER";
	
		case joaat("breed_murfreebrood_mange_03"):
			return "BREED_MURFREEBROOD_MANGE_03";
	
		case joaat("breed_americanpaint_overo"):
			return "BREED_AMERICANPAINT_OVERO";
	
		case -952011226:
			return "BREED_GYPSYCOB_PIEBALD";
	
		case joaat("breed_tennesseewalker_dapplebay"):
			return "BREED_TENNESSEEWALKER_DAPPLEBAY";
	
		case joaat("breed_tennesseewalker_chestnut"):
			return "BREED_TENNESSEEWALKER_CHESTNUT";
	
		case joaat("breed_arabian_rosegreybay"):
			return "BREED_ARABIAN_ROSEGREYBAY";
	
		case joaat("breed_tennesseewalker_redroan"):
			return "BREED_TENNESSEEWALKER_REDROAN";
	
		case joaat("breed_americanpaint_greyovero"):
			return "BREED_AMERICANPAINT_GREYOVERO";
	
		case joaat("breed_gang_uncle"):
			return "BREED_GANG_UNCLE";
	
		case joaat("breed_thoroughbred_bloodbay"):
			return "BREED_THOROUGHBRED_BLOODBAY";
	
		case joaat("breed_americanstandardbred_silvertailbuckskin"):
			return "BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN";
	
		case joaat("breed_gang_charles_endlesssummer"):
			return "BREED_GANG_CHARLES_ENDLESSSUMMER";
	
		case joaat("breed_norfolkroadster_rosegrey"):
			return "BREED_NORFOLKROADSTER_ROSEGREY";
	
		case joaat("breed_breton_redroan"):
			return "BREED_BRETON_REDROAN";
	
		case joaat("breed_americanstandardbred_buckskin"):
			return "BREED_AMERICANSTANDARDBRED_BUCKSKIN";
	
		case joaat("breed_nokota_whiteroan"):
			return "BREED_NOKOTA_WHITEROAN";
	
		case joaat("breed_kladruber_silver"):
			return "BREED_KLADRUBER_SILVER";
	
		case joaat("breed_appaloosa_blacksnowflake"):
			return "BREED_APPALOOSA_BLACKSNOWFLAKE";
	
		case joaat("breed_kladruber_cremello"):
			return "BREED_KLADRUBER_CREMELLO";
	
		case joaat("breed_gang_sadie_endlesssummer"):
			return "BREED_GANG_SADIE_ENDLESSSUMMER";
	
		case joaat("breed_gang_bill"):
			return "BREED_GANG_BILL";
	
		case joaat("breed_kladruber_grey"):
			return "BREED_KLADRUBER_GREY";
	
		case joaat("breed_mangy_backup"):
			return "BREED_MANGY_BACKUP";
	
		case -356470463:
			return "BREED_GYPSYCOB_WHITEBLAGDON";
	
		case joaat("breed_norfolkroadster_black"):
			return "BREED_NORFOLKROADSTER_BLACK";
	
		case -272192064:
			return "BREED_GYPSYCOB_SKEWBALD";
	
		case joaat("breed_murfreebrood_mange_01"):
			return "BREED_MURFREEBROOD_MANGE_01";
	
		case joaat("breed_turkoman_gold"):
			return "BREED_TURKOMAN_GOLD";
	
		case joaat("breed_criollo_bayframeovero"):
			return "BREED_CRIOLLO_BAYFRAMEOVERO";
	
		case joaat("breed_appaloosa_brownleopard"):
			return "BREED_APPALOOSA_BROWNLEOPARD";
	
		case joaat("breed_turkoman_darkbay"):
			return "BREED_TURKOMAN_DARKBAY";
	
		case joaat("breed_shire_ravenblack"):
			return "BREED_SHIRE_RAVENBLACK";
	
		case joaat("breed_shire_darkbay"):
			return "BREED_SHIRE_DARKBAY";
	
		case joaat("breed_arabian_white"):
			return "BREED_ARABIAN_WHITE";
	
		case -11223392:
			return "BREED_TURKOMAN_GREY";
	
		case joaat("breed_murfreebrood_mange_02"):
			return "BREED_MURFREEBROOD_MANGE_02";
	
		case joaat("breed_criollo_baybrindle"):
			return "BREED_CRIOLLO_BAYBRINDLE";
	
		case joaat("breed_americanpaint_splashedwhite"):
			return "BREED_AMERICANPAINT_SPLASHEDWHITE";
	
		case joaat("breed_tennesseewalker_blackrabicano"):
			return "BREED_TENNESSEEWALKER_BLACKRABICANO";
	
		case joaat("breed_mule"):
			return "BREED_MULE";
	
		case 139264677:
			return "BREED_TURKOMAN_CHESTNUT";
	
		case joaat("breed_ardennes_irongreyroan"):
			return "BREED_ARDENNES_IRONGREYROAN";
	
		case joaat("breed_nokota_blueroan"):
			return "BREED_NOKOTA_BLUEROAN";
	
		case joaat("breed_suffolkpunch_redchestnut"):
			return "BREED_SUFFOLKPUNCH_REDCHESTNUT";
	
		case joaat("breed_hungarianhalfbred_flaxenchestnut"):
			return "BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT";
	
		case joaat("breed_buell_warvets"):
			return "BREED_BUELL_WARVETS";
	
		case joaat("breed_gang_uncle_endlesssummer"):
			return "BREED_GANG_UNCLE_ENDLESSSUMMER";
	
		case joaat("breed_criollo_dun"):
			return "BREED_CRIOLLO_DUN";
	
		case 406093506:
			return "BREED_MUSTANG_REDDUNOVERO";
	
		case joaat("breed_kentuckysaddle_silverbay"):
			return "BREED_KENTUCKYSADDLE_SILVERBAY";
	
		case 577120648:
			return "BREED_MUSTANG_BLACKOVERO";
	
		case joaat("breed_morgan_palomino"):
			return "BREED_MORGAN_PALOMINO";
	
		case joaat("breed_gang_sean"):
			return "BREED_GANG_SEAN";
	
		case joaat("breed_dutchwarmblood_chocolateroan"):
			return "BREED_DUTCHWARMBLOOD_CHOCOLATEROAN";
	
		case joaat("breed_andalusian_rosegray"):
			return "BREED_ANDALUSIAN_ROSEGRAY";
	
		case joaat("breed_gang_john"):
			return "BREED_GANG_JOHN";
	
		case joaat("breed_mustang_goldendun"):
			return "BREED_MUSTANG_GOLDENDUN";
	
		case joaat("breed_norfolkroadster_piebaldroan"):
			return "BREED_NORFOLKROADSTER_PIEBALDROAN";
	
		case joaat("breed_ardennes_strawberryroan"):
			return "BREED_ARDENNES_STRAWBERRYROAN";
	
		case joaat("breed_criollo_marblesabino"):
			return "BREED_CRIOLLO_MARBLESABINO";
	
		case joaat("breed_kladruber_black"):
			return "BREED_KLADRUBER_BLACK";
	
		case joaat("breed_morgan_bayroan"):
			return "BREED_MORGAN_BAYROAN";
	
		case 956799610:
			return "BREED_TURKOMAN_BLACK";
	
		case joaat("breed_breton_sealbrown"):
			return "BREED_BRETON_SEALBROWN";
	
		case joaat("breed_breton_mealydapplebay"):
			return "BREED_BRETON_MEALYDAPPLEBAY";
	
		case joaat("breed_gang_javier"):
			return "BREED_GANG_JAVIER";
	
		case joaat("breed_andalusian_perlino"):
			return "BREED_ANDALUSIAN_PERLINO";
	
		case 1133580901:
			return "BREED_TURKOMAN_PERLINO";
	
		case 1147338535:
			return "BREED_MUSTANG_BUCKSKIN";
	
		case joaat("breed_gang_lenny"):
			return "BREED_GANG_LENNY";
	
		case joaat("breed_morgan_flaxenchestnut"):
			return "BREED_MORGAN_FLAXENCHESTNUT";
	
		case joaat("breed_morgan_bay"):
			return "BREED_MORGAN_BAY";
	
		case joaat("breed_norfolkroadster_speckledgrey"):
			return "BREED_NORFOLKROADSTER_SPECKLEDGREY";
	
		case joaat("breed_missourifoxtrotter_amberchampagne"):
			return "BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE";
	
		case 1323533737:
			return "BREED_MISSOURIFOXTROTTER_BLACKTOVERO";
	
		case joaat("breed_tennesseewalker_mahoganybay"):
			return "BREED_TENNESSEEWALKER_MAHOGANYBAY";
	
		case joaat("breed_kentuckysaddle_chestnutpinto"):
			return "BREED_KENTUCKYSADDLE_CHESTNUTPINTO";
	
		case joaat("breed_americanstandardbred_black"):
			return "BREED_AMERICANSTANDARDBRED_BLACK";
	
		case 1416158449:
			return "BREED_MISSOURIFOXTROTTER_DAPPLEGREY";
	
		case joaat("breed_americanpaint_tobiano"):
			return "BREED_AMERICANPAINT_TOBIANO";
	
		case joaat("breed_dutchwarmblood_sealbrown"):
			return "BREED_DUTCHWARMBLOOD_SEALBROWN";
	
		case joaat("breed_criollo_blueroanovero"):
			return "BREED_CRIOLLO_BLUEROANOVERO";
	
		case joaat("breed_americanstandardbred_palominodapple"):
			return "BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE";
	
		case joaat("breed_winter02_01"):
			return "BREED_WINTER02_01";
	
		case joaat("breed_norfolkroadster_spottedtricolor"):
			return "BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR";
	
		case joaat("breed_breton_grullodun"):
			return "BREED_BRETON_GRULLODUN";
	
		case joaat("breed_thoroughbred_brindle"):
			return "BREED_THOROUGHBRED_BRINDLE";
	
		case joaat("breed_suffolkpunch_sorrel"):
			return "BREED_SUFFOLKPUNCH_SORREL";
	
		case joaat("breed_tennesseewalker_flaxenroan"):
			return "BREED_TENNESSEEWALKER_FLAXENROAN";
	
		case joaat("breed_gang_dutch"):
			return "BREED_GANG_DUTCH";
	
		case joaat("breed_ardennes_bayroan"):
			return "BREED_ARDENNES_BAYROAN";
	
		case joaat("breed_hungarianhalfbred_piebaldtobiano"):
			return "BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO";
	
		case 1854655826:
			return "BREED_MISSOURIFOXTROTTER_BUCKSKINBRINDLE";
	
		case joaat("breed_breton_sorrel"):
			return "BREED_BRETON_SORREL";
	
		case 1935859332:
			return "BREED_GYPSYCOB_SPLASHEDBAY";
	
		case joaat("breed_kentuckysaddle_grey"):
			return "BREED_KENTUCKYSADDLE_GREY";
	
		case joaat("breed_mustang_wildbay"):
			return "BREED_MUSTANG_WILDBAY";
	
		case joaat("breed_gang_kieran"):
			return "BREED_GANG_KIERAN";
	
		case joaat("breed_thoroughbred_reversedappleblack"):
			return "BREED_THOROUGHBRED_REVERSEDAPPLEBLACK";
	
		case joaat("breed_missourifoxtrotter_silverdapplepinto"):
			return "BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO";
	
		case joaat("breed_gang_charles"):
			return "BREED_GANG_CHARLES";
	
		case joaat("breed_belgian_mealychestnut"):
			return "BREED_BELGIAN_MEALYCHESTNUT";
	
		default:
		
	}

	return "";
}

 func_181(var uParam0) // Position - 0x7184
{
	return uParam0;
}

Hash func_182(int iParam0, BOOL bParam1) // Position - 0x718E
{
	switch (iParam0)
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

Player _INVALID_PLAYER_INDEX() // Position - 0x7230
{
	return -1;
}

BOOL func_184(var uParam0, int iParam1) // Position - 0x7239
{
	return func_145(*uParam0, iParam1);
}

void func_185(int iParam0) // Position - 0x724A
{
	func_252(2, iParam0);
	return;
}

void func_186(int iParam0, var uParam1, var uParam2) // Position - 0x7259
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

int func_187(char* sParam0, char* sParam1, Hash hParam2, Hash hParam3, int iParam4, char* sParam5, Hash hParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, BOOL bParam12, BOOL bParam13) // Position - 0x7275
{
	int num;
	int num2;
	int num3;

	num = -2;
	num = iParam7;
	num.f_1 = iParam8;
	num.f_2 = iParam9;
	num.f_3 = iParam11;
	num.f_4 = iParam4;
	num.f_4.f_1 = hParam6;
	num.f_4.f_2 = sParam5;
	num2.f_7 = 1;
	num2 = iParam10;
	num2.f_1 = sParam0;
	num2.f_2 = sParam1;
	num2.f_3 = 0;
	num2.f_4 = hParam2;
	num2.f_5 = hParam3;
	num2.f_7 = 1;
	num3 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&num, &num2, bParam12, bParam13);
	return num3;
}

BOOL func_188(int iParam0, int iParam1) // Position - 0x72F1
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

BOOL func_189(int iParam0) // Position - 0x7309
{
	if (func_45(iParam0, 4))
		return false;

	return true;
}

BOOL func_190(int iParam0) // Position - 0x7320
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

BOOL func_191(int iParam0) // Position - 0x73EC
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_192() // Position - 0x73FF
{
	if (!func_253())
		return false;

	return Global_1904402.f_8873;
}

int func_193(int iParam0) // Position - 0x741A
{
	switch (iParam0)
	{
		case 0:
			return 5;
	
		case 1:
			return 6;
	
		case 2:
			return 7;
	}

	return 0;
}

int func_194(Ped pedParam0, Ped pedParam1) // Position - 0x7452
{
	int inventoryIdFromPed;
	Hash hash;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return 0;

	inventoryIdFromPed = INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(pedParam0);
	hash = func_197(pedParam1);
	num = func_254(inventoryIdFromPed, hash, 1);
	return num;
}

Ped func_195(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12) // Position - 0x7493
{
	Ped EntityIndex;

	EntityIndex = PED::CREATE_PED(eptParam0, vParam1, iParam4, bParam5, bParam6, false, false);

	if (!ENTITY::DOES_ENTITY_EXIST(EntityIndex))
		return 0;

	func_255(EntityIndex, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return EntityIndex;
}

Ped func_196(Ped pedParam0) // Position - 0x74D3
{
	return pedParam0;
}

Hash func_197(Ped pedParam0) // Position - 0x74DD
{
	Hash hash;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (ENTITY::GET_IS_ANIMAL(pedParam0) || ENTITY::_GET_IS_BIRD(pedParam0))
	{
		hash = func_256(&pedParam0);
	
		if (!func_102(hash, 0))
			hash = func_257(pedParam0);
	}
	else
	{
		hash = func_257(pedParam0);
	}

	return hash;
}

struct<18> func_198(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x7530
{
	int num;

	num = -1;
	num.f_1 = -1;
	num.f_2 = -1;
	num.f_3 = -1;
	num.f_4 = -1;
	num.f_5 = -1;
	num.f_6 = -1;
	num.f_7 = -1;
	num.f_8 = -1;
	num.f_13 = -1;
	num.f_14 = -1;
	num.f_15 = -1;
	num.f_16 = -1;
	num.f_17 = -1;

	if (iParam0 != 0)
		num = iParam0;

	if (iParam1 != 0 && iParam1 != -1591664384)
		num.f_1 = iParam1;

	if (iParam2 != 0 && iParam2 != -1591664384)
		num.f_2 = iParam2;

	if (iParam3 != 0 && iParam3 != -1591664384)
		num.f_3 = iParam3;

	if (iParam4 != 0)
		num.f_4 = iParam4;

	if (iParam5 != 0)
		num.f_5 = iParam5;

	if (iParam6 != 0)
		num.f_8 = iParam6;

	return num;
}

BOOL func_199(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x760E
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_250(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_200(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x7633
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

int func_201(int iParam0) // Position - 0x766E
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

int func_202(Player plParam0) // Position - 0x768F
{
	int num;
	int num2;
	int num3;

	if (!Global_1048577)
		return 3;

	num = Global_263042[plParam0 /*65*/].f_1.f_16.f_2;
	num2 = func_258(num);
	num3 = func_259(num, num2);
	return num3;
}

struct<2> func_203(int iParam0) // Position - 0x76C7
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

int func_204(int iParam0, var uParam1) // Position - 0x76DB
{
	return iParam0;
}

BOOL func_205(var uParam0, int iParam1) // Position - 0x76E5
{
	int num;
	int offset;

	num = iParam1 / 32;
	offset = iParam1 - (num * 32);
	return MISC::IS_BIT_SET(uParam0->[num], offset);
}

BOOL func_206(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x7709
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_250(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_207() // Position - 0x7730
{
	return Global_1940252.f_2 || Global_1940252 == 1;
}

BOOL func_208(BOOL bParam0) // Position - 0x774A
{
	if (bParam0)
		return Global_1915656.f_20638;

	return Global_1915656.f_20638 || Global_1915656.f_22504.f_1;
}

BOOL func_209(int iParam0) // Position - 0x777A
{
	if (iParam0 == Global_1940252.f_40)
		return true;

	return false;
}

BOOL func_210(int iParam0) // Position - 0x7792
{
	int i;

	for (i = 0; i < 12; i = i + 1)
	{
		if (Global_1940252.f_11564[i] == iParam0)
			return true;
	}

	return false;
}

BOOL func_211(Any* panParam0) // Position - 0x77C2
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return false;

	if (panParam0->f_10 == -1)
		return false;

	return true;
}

void func_212(Any* panParam0, int iParam1) // Position - 0x77E5
{
	func_260(&(panParam0->f_20), iParam1);
	return;
}

void func_213(Any* panParam0, int iParam1) // Position - 0x77F7
{
	func_261(&(panParam0->f_20), iParam1);
	return;
}

BOOL func_214(Any* panParam0) // Position - 0x7809
{
	if (!func_211(panParam0))
		return false;

	switch (panParam0->f_10)
	{
		case 0:
		case 1:
			if (!func_262(panParam0))
				return false;
			break;
	
		case 2:
			if (!func_263(panParam0))
				return false;
			break;
	}

	return true;
}

void func_215() // Position - 0x785E
{
	func_264(&(Global_1290271.f_1171));
	func_265(0);
	func_265(2);
	return;
}

void func_216(var uParam0) // Position - 0x787B
{
	if (*uParam0 != 0)
		*uParam0 = 0;

	return;
}

BOOL func_217(Player plParam0, int iParam1) // Position - 0x788E
{
	if (plParam0 < 0 || plParam0 >= 32)
		return false;

	return func_145(Global_1072759.f_21353.f_1[plParam0 /*8*/].f_7, iParam1);
}

BOOL func_218(int iParam0) // Position - 0x78C1
{
	if (Global_1572887.f_14 == -1)
		return false;

	return func_266(36, iParam0);
}

BOOL func_219(int iParam0) // Position - 0x78DF
{
	if (iParam0 == 255)
		return Global_1102813.f_3 & 32 != 0;

	return func_267(32, iParam0);
}

BOOL func_220(int iParam0) // Position - 0x7904
{
	return func_266(1, iParam0);
}

BOOL func_221(int iParam0) // Position - 0x7913
{
	return iParam0 == -1759663922 || iParam0 == -318976023 || iParam0 == 772881414 || iParam0 == 31269700 || iParam0 == -133550749;
}

var func_222(BOOL bParam0, var uParam1, var uParam2) // Position - 0x795B
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_223(Player plParam0, Entity eParam1, float fParam2, float fParam3, BOOL bParam4) // Position - 0x7972
{
	BOOL isEntityAPed;
	Ped pedIndexFromEntityIndex;
	float percent;

	if (fParam2 > fParam3)
		return false;

	if (!CAM::IS_GAMEPLAY_CAM_RENDERING() && !CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
		return false;

	isEntityAPed = ENTITY::IS_ENTITY_A_PED(eParam1);

	if (isEntityAPed)
		pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam1);

	if (bParam4)
	{
		if (Global_1072759.f_21889[plParam0 /*18*/].f_9 == 0)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(pedIndexFromEntityIndex, false))
				return CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(pedIndexFromEntityIndex, false, false), 1f);
		
			if (PED::IS_PED_INCAPACITATED(pedIndexFromEntityIndex) && TASK::_0x6C50B9DCCCA70023(pedIndexFromEntityIndex))
				return CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(eParam1, false, false), 1f);
			else if (PED::IS_PED_IN_COVER(pedIndexFromEntityIndex, true, false))
				percent = Global_1901671.f_101.f_13;
			else
				percent = Global_1901671.f_101.f_12;
		
			return func_268(Global_1295666, plParam0) && PED::_IS_PED_VISIBILITY_TRACKED(pedIndexFromEntityIndex) && PED::_IS_TRACKED_PED_VISIBILITY_PERCENTAGE_NOT_LESS_THAN(pedIndexFromEntityIndex, percent);
		}
		else if (!PED::_IS_PED_VISIBILITY_TRACKED(pedIndexFromEntityIndex))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(pedIndexFromEntityIndex);
		}
		else
		{
			return PED::IS_TRACKED_PED_VISIBLE(pedIndexFromEntityIndex);
		}
	}
	else if (isEntityAPed)
	{
		if (!PED::_IS_PED_VISIBILITY_TRACKED(pedIndexFromEntityIndex))
			PED::REQUEST_PED_VISIBILITY_TRACKING(pedIndexFromEntityIndex);
		else
			return PED::IS_TRACKED_PED_VISIBLE(pedIndexFromEntityIndex);
	}
	else
	{
		return CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(eParam1, false, false), 1f);
	}

	return false;
}

int func_224(var uParam0) // Position - 0x7AA6
{
	if (*uParam0 == 0)
		*uParam0 = Global_1295666.f_16;
	else if (Global_1295666.f_16 - *uParam0 < 5)
		return 1;

	return 0;
}

int func_225(int iParam0) // Position - 0x7AD4
{
	switch (iParam0)
	{
		case 1277358601:
		case joaat("posse_leader"):
			return 0;
	
		default:
		
	}

	return 1;
}

int func_226(int iParam0) // Position - 0x7AF5
{
	switch (iParam0)
	{
		case 0:
			return 4;
	
		case 1:
			return 5;
	
		case 2:
			return 6;
	}

	return 0;
}

BOOL func_227() // Position - 0x7B2D
{
	Ped mountOwnedByPlayer;

	mountOwnedByPlayer = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());

	if (!ENTITY::DOES_ENTITY_EXIST(mountOwnedByPlayer))
	{
		if (func_54(65536, 255))
			func_56(65536);
	
		return false;
	}

	if (func_54(65536, 255))
		return true;

	return false;
}

BOOL func_228(var uParam0, float fParam1) // Position - 0x7B74
{
	if (!func_19(uParam0))
		return false;

	if (func_79(uParam0) > fParam1)
		return true;

	return false;
}

char* func_229(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x7B9B
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int* func_230(int iParam0) // Position - 0x7BAF
{
	return Global_1283730[iParam0 /*2*/];
}

BOOL func_231(int iParam0) // Position - 0x7BBF
{
	return Global_1283730[iParam0 /*2*/].f_1;
}

int func_232(int* piParam0) // Position - 0x7BD1
{
	if (!(piParam0 > -1 && piParam0 < 180))
		return -1;

	switch (piParam0)
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

BOOL func_233(int* piParam0, Entity eParam1) // Position - 0x8500
{
	int num;
	var unk;
	float num2;
	float num3;

	num = func_232(piParam0);

	if (!func_269(num))
		return false;

	unk = { Global_1051832.f_92[num /*75*/].f_3 };

	if (piParam0 == 154)
		unk = { func_128(PLAYER::GET_PLAYER_INDEX()) };

	if (_IS_NULL_VECTOR(unk))
		return false;

	num2 = func_271(piParam0);

	if (num == 10 || num == 15 || num == 29)
	{
		num3 = func_272(eParam1, unk, false);
	
		if (num3 < num2)
			return true;
	}
	else if (num == 2)
	{
		if (func_272(eParam1, unk, false) < num2)
			return true;
	}

	return false;
}

struct<2> func_234(Player plParam0) // Position - 0x85B0
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle);
	return gamerHandle;
}

BOOL func_235(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x85C4
{
	var memberInfo;
	var memberInfo2;

	if (CREW::NETWORK_CLAN_SERVICE_IS_VALID() && CREW::NETWORK_CLAN_PLAYER_IS_ACTIVE(&uParam0))
		CREW::NETWORK_CLAN_PLAYER_GET_DESC(&memberInfo, 22, &uParam0);
	else
		return false;

	if (CREW::NETWORK_CLAN_SERVICE_IS_VALID() && CREW::NETWORK_CLAN_PLAYER_IS_ACTIVE(&uParam2))
		CREW::NETWORK_CLAN_PLAYER_GET_DESC(&memberInfo2, 22, &uParam2);
	else
		return false;

	if (memberInfo != memberInfo2)
		return false;

	return true;
}

void func_236(int iParam0, BOOL bParam1) // Position - 0x8620
{
	if (func_273(iParam0) && !bParam1)
		return;

	Global_1290271.f_11.f_755[iParam0] = func_275(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(iParam0), 10000, 0, 0, 0, true);
	return;
}

void func_237() // Position - 0x865A
{
	if (func_54(2, 255))
		return;

	func_276(2);
	return;
}

BOOL func_238(var uParam0) // Position - 0x8674
{
	var unk;

	if (!PED::_IS_MOUNT_SEAT_FREE(uParam0->f_19, -1) || !PED::_IS_MOUNT_SEAT_FREE(uParam0->f_19, 0) || !PED::_IS_MOUNT_SEAT_FREE(uParam0->f_19, -2))
		return true;

	if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&unk, uParam0->f_19, 4, 2))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(unk.f_3))
		return false;

	if (!ENTITY::IS_ENTITY_A_PED(unk.f_3))
		return false;

	if (!PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(unk.f_3)))
		return false;

	return true;
}

void func_239(Ped pedParam0, int* piParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5) // Position - 0x86F8
{
	TASK::CLOSE_SEQUENCE_TASK(*piParam1);

	if (!bParam5 || !ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (iParam2 > 0f)
		{
			if (iParam3 < iParam2)
				iParam3 = iParam2;
		
			TASK::_TASK_PERFORM_SEQUENCE_2(pedParam0, *piParam1, iParam2, iParam3);
		}
		else
		{
			TASK::TASK_PERFORM_SEQUENCE(pedParam0, *piParam1);
		}
	}

	if (bParam4)
		TASK::CLEAR_SEQUENCE_TASK(piParam1);

	return;
}

void func_240(var uParam0, int iParam1) // Position - 0x8751
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_241(var uParam0, int iParam1) // Position - 0x8762
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_242(var uParam0, Ped pedParam1) // Position - 0x8777
{
	Ped playerPed;
	Ped riderOfMount;

	playerPed = PLAYER::GET_PLAYER_PED(uParam0->f_1);

	if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
		return false;

	if (PED::IS_PED_DEAD_OR_DYING(playerPed, true))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return false;

	if (PED::IS_PED_DEAD_OR_DYING(pedParam1, true))
		return false;

	if (PED::IS_PED_INJURED(pedParam1))
		return false;

	if (func_151(playerPed, pedParam1, true, true) > 40f)
		return false;

	riderOfMount = PED::_GET_RIDER_OF_MOUNT(pedParam1, true);

	if (ENTITY::DOES_ENTITY_EXIST(riderOfMount))
		return false;

	return true;
}

BOOL func_243(var uParam0, var uParam1) // Position - 0x87FC
{
	if (!func_277(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_278(uParam0))
		return false;

	return true;
}

BOOL func_244(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x8830
{
	return uParam0 == uParam2 && uParam0.f_1 == uParam2.f_1;
}

BOOL func_245(BOOL bParam0) // Position - 0x884B
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1207339.f_1 && bParam0 != false;
}

BOOL func_246(BOOL bParam0, int iParam1) // Position - 0x886C
{
	if (!Global_1072759.f_3)
		return false;

	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return false;

	if (iParam1 == 255)
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	return Global_1206954[iParam1 /*12*/] && bParam0 != false;
}

BOOL func_247() // Position - 0x88A8
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_5)
		return true;

	if (Global_2883584)
		return true;

	if (Global_1048577)
		return true;

	if (!func_243(Global_1051268) && Global_1572887.f_8 & true != 0)
		return true;

	return false;
}

void func_248(Any* panParam0, int iParam1, BOOL bParam2) // Position - 0x8900
{
	if (bParam2)
		func_213(panParam0, iParam1);
	else
		func_212(panParam0, iParam1);

	return;
}

void func_249(Any* panParam0, int iParam1, BOOL bParam2) // Position - 0x8920
{
	int i;

	!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0);

	if (iParam1 == 0 || iParam1 == 1)
	{
		for (i = 0; i < 10; i = i + 1)
		{
			if (!INVENTORY::_INVENTORY_COMPARE_GUIDS(&Global_1290271.f_1171[i /*24*/], panParam0))
			{
			}
			else
			{
				Global_1290271.f_1171[i /*24*/].f_6 = bParam2;
				break;
			}
		}
	}
	else if (iParam1 == 2)
	{
		for (i = 0; i < 8; i = i + 1)
		{
			if (!INVENTORY::_INVENTORY_COMPARE_GUIDS(&Global_1290271.f_1171.f_275[i /*24*/], panParam0))
			{
			}
			else
			{
				Global_1290271.f_1171.f_275[i /*24*/].f_6 = bParam2;
				break;
			}
		}
	}

	return;
}

int func_250(BOOL bParam0) // Position - 0x89CC
{
	if (func_279() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

BOOL func_251(Any* panParam0, int iParam1, BOOL bParam2) // Position - 0x8A0D
{
	if (bParam2)
	{
		if (func_280(panParam0, iParam1))
			return true;
	
		return false;
	}

	func_32(panParam0, iParam1, false);

	if (func_107(&Global_1903838, 2))
		return true;

	return false;
}

void func_252(int iParam0, int iParam1) // Position - 0x8A48
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

BOOL func_253() // Position - 0x8B6C
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

int func_254(int iParam0, Hash hParam1, int iParam2) // Position - 0x8B80
{
	var guid2;
	var guid1;

	if (!func_102(hParam1, 0))
		return 0;

	guid2 = { func_281(iParam0) };
	guid1 = { func_282(iParam0, hParam1, guid2, guid2.f_4) };

	if (INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(iParam0, &guid1, &guid2, hParam1, guid2.f_4, iParam2, 752097756))
		return 1;

	return 0;
}

void func_255(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x8BD7
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	flag = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam1));

	if (!bParam7)
	{
		if (bParam5)
		{
			PED::_SET_RANDOM_OUTFIT_VARIATION(pedParam0, true);
			flag = true;
		}
	}

	if (PED::IS_PED_HUMAN(pedParam0))
	{
		if (bParam6)
			WEAPON::_GIVE_WEAPON_COLLECTION_TO_PED(pedParam0, WEAPON::_GET_DEFAULT_PED_WEAPON_COLLECTION(eptParam1));
	
		if (PED::IS_PED_MALE(pedParam0) && !bParam3)
			func_283(pedParam0, false, true);
	
		PED::SET_PED_CONFIG_FLAG(pedParam0, 502, true);
	}
	else if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(pedParam0)))
	{
		if (!bParam5)
		{
			PED::_EQUIP_META_PED_OUTFIT_PRESET(pedParam0, 0, false);
			flag = true;
		}
	
		if (bParam4)
		{
			func_284(pedParam0, false);
			flag = true;
		}
	
		func_285(pedParam0, iParam2);
	}

	if (flag)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

Hash func_256(var uParam0) // Position - 0x8CA1
{
	Ped pedIndexFromEntityIndex;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		return 0;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam0);
	return func_286(pedIndexFromEntityIndex);
}

Hash func_257(Object obParam0) // Position - 0x8CC7
{
	Hash carriableFromEntity;

	carriableFromEntity = 0;

	if (!ENTITY::DOES_ENTITY_EXIST(obParam0))
		return 0;

	if (ENTITY::IS_ENTITY_A_PED(obParam0) && TASK::_0x6DAC799857EF3F11(PLAYER::PLAYER_PED_ID(), ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(obParam0)))
		return 0;

	carriableFromEntity = ENTITY::_GET_CARRIABLE_FROM_ENTITY(obParam0);

	if (carriableFromEntity == 0)
		if (ENTITY::IS_ENTITY_A_PED(obParam0))
			carriableFromEntity = func_286(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(obParam0));

	return carriableFromEntity;
}

int func_258(int iParam0) // Position - 0x8D25
{
	if (iParam0 == 395262693 || iParam0 == -933924539)
		return 482206342;

	return *Global_524288.f_39632;
}

int func_259(int iParam0, int iParam1) // Position - 0x8D58
{
	int num;

	switch (iParam0)
	{
		case -933924539:
			num = 0;
			break;
	
		case -504335712:
			if (func_221(iParam1))
				num = 1;
			else
				num = 2;
			break;
	
		case 395262693:
			num = 2;
			break;
	
		default:
			num = 3;
			break;
	}

	return num;
}

void func_260(var uParam0, int iParam1) // Position - 0x8DA3
{
	if (!func_184(uParam0, iParam1))
		return;

	func_287(uParam0, iParam1);
	return;
}

void func_261(int iParam0, int iParam1) // Position - 0x8DC2
{
	if (func_184(iParam0, iParam1))
		return;

	func_288(iParam0, iParam1);
	return;
}

BOOL func_262(Any* panParam0) // Position - 0x8DE0
{
	func_289(&(Global_1903838.f_24));

	if (!func_94(*panParam0, &(Global_1903838.f_24), true, false, -1))
		return false;

	Global_1903838.f_24.f_14 = panParam0->f_11;
	Global_1903838.f_24.f_15 = panParam0->f_22;
	Global_1903838.f_24.f_16 = { panParam0->f_12 };
	Global_1903838.f_24.f_25 = panParam0->f_23;
	Global_1903838.f_24.f_24 = panParam0->f_20;
	func_290(panParam0, &(Global_1903838.f_24.f_24));

	if (!func_291(&(Global_1903838.f_24), false, true))
		return false;

	return true;
}

BOOL func_263(Any* panParam0) // Position - 0x8E70
{
	var unk;

	unk.f_9 = -1591664384;

	if (!func_94(*panParam0, &unk, false, false, -1))
		return false;

	unk.f_14 = panParam0->f_11;
	unk.f_15 = { panParam0->f_12 };
	func_290(panParam0, &(unk.f_23));
	return func_292(&unk, false, false);
}

void func_264(var uParam0) // Position - 0x8EC4
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		func_293(&uParam0->[i /*24*/]);
	}

	i = 0;

	for (i = 0; i < 8; i = i + 1)
	{
		func_293(&uParam0->f_275[i /*24*/]);
	}

	return;
}

void func_265(int iParam0) // Position - 0x8F0C
{
	int collectionId;
	int num;
	var unk;
	var unk19;
	var unk48;
	var itemData;
	var unk85;
	int i;
	int num2;

	if (iParam0 == 0)
	{
		if (!func_206("ALL HORSES", &collectionId, &num, -1591664384, false))
			return;
	}
	else if (iParam0 == 2)
	{
		unk = { func_198(0, -1591664384, -1591664384, -1591664384, 0, 0, joaat("coach")) };
	
		if (!func_199(&unk, &collectionId, &num, false))
			return;
	}

	if (num > 10)
		num = 10;

	unk19.f_9 = -1591664384;
	unk48.f_9 = -1591664384;
	itemData.f_9 = -1591664384;

	for (i = 0; i < num; i = i + 1)
	{
		if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(collectionId, i, &itemData))
		{
		}
		else if (!func_32(&itemData, iParam0, false))
		{
		}
		else
		{
			num2 = Global_1903838.f_10;
		
			switch (num2)
			{
				case 0:
				case 1:
					if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(&(Global_1903838.f_12)))
						if (func_176(&itemData, &unk19, true))
							if (func_291(&unk19, false, true))
								Global_1903838.f_12 = { unk19.f_16 };
					break;
			
				case 2:
					if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(&(Global_1903838.f_12)))
						if (func_178(&itemData, &unk48, true))
							if (func_292(&unk48, false, true))
								Global_1903838.f_12 = { unk48.f_15 };
					break;
			}
		
			unk85 = { itemData };
			unk85.f_4 = Global_1903838.f_11;
			unk85.f_6 = func_107(&Global_1903838, 2);
			unk85.f_7 = { Global_1903838.f_12 };
		
			if (num2 == 0 || num2 == 1)
			{
				unk85.f_15 = { Global_1290271.f_1171[i /*24*/].f_15 };
				unk85.f_23 = Global_1290271.f_1171[i /*24*/].f_23;
				Global_1290271.f_1171[i /*24*/] = { unk85 };
			}
			else if (num2 == 2)
			{
				unk85.f_15 = { Global_1290271.f_1171.f_275[i /*24*/].f_15 };
				unk85.f_23 = Global_1290271.f_1171.f_275[i /*24*/].f_23;
				Global_1290271.f_1171.f_275[i /*24*/] = { unk85 };
			}
		}
	}

	func_201(collectionId);
	return;
}

BOOL func_266(int iParam0, int iParam1) // Position - 0x9143
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_294(&(Global_1102813.f_4), num, 5);

	if (iParam1 == func_295())
		return func_294(&(Global_1102813.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1295666.f_17[iParam1])
		return func_294(&(Global_1101558[iParam1 /*38*/].f_4), num, 5);

	return false;
}

BOOL func_267(int iParam0, int iParam1) // Position - 0x91B7
{
	if (iParam1 == 255)
		return Global_1102813.f_3 && iParam0 != false;

	return Global_1101558[iParam1 /*38*/].f_3 && iParam0 != false;
}

BOOL func_268(Player plParam0, Player plParam1) // Position - 0x91E3
{
	if (plParam0 < 0 || plParam0 >= 32)
		return false;

	if (plParam1 < 0 || plParam1 >= 32)
		return false;

	if (plParam0 == plParam1)
		return true;

	if (!Global_1295666.f_17[plParam0])
		return false;

	if (!Global_1295666.f_17[plParam1])
		return false;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295666.f_149[plParam0]))
		return false;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295666.f_149[plParam1]))
		return false;

	return func_296(Global_1295666.f_149[plParam0], Global_1295666.f_149[plParam1]);
}

BOOL func_269(int iParam0) // Position - 0x928A
{
	return iParam0 > -1 && iParam0 < 40;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x92A0
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

float func_271(int* piParam0) // Position - 0x92CA
{
	int num;

	num = func_232(piParam0);

	switch (num)
	{
		case 2:
			return 75f;
	
		case 10:
			return 10f;
	
		case 15:
			if (piParam0 == 63)
				return 40f;
			else
				return 25f;
			break;
	
		case 29:
			return 70f;
	}

	return 10f;
}

float func_272(Entity eParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x9334
{
	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(eParam0, false, false), vParam1, bParam4);
}

BOOL func_273(int iParam0) // Position - 0x935C
{
	return func_297(Global_1290271.f_11.f_755[iParam0]);
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(int iParam0) // Position - 0x9375
{
	switch (iParam0)
	{
		case 0:
			return "NSHM_HORSE_CANNOT_CONTACT_STABLE";
	
		case 1:
			return "NSHM_HORSE_MOUNT_RESPAWNING";
	
		case 2:
			return "NSHM_HORSE_MOUNT_DISMISSED_RECENTLY";
	
		case 3:
			return "NSHM_HORSE_MOUNT_SWAPPED_RECENTLY";
	
		case 4:
			return "NSHM_HORSE_NO_HORSES_AVAILABLE";
	
		case 5:
			return "NSHM_HORSE_CANNOT_CONTACT_STABLE";
	
		case 6:
			return "NSHM_HORSE_CALL_HORSE_DISABLED";
	
		case 7:
			return "NSHM_HORSE_ACTIVE_HORSE_DEAD";
	
		case 8:
			return "NSHM_HORSE_ACTIVE_HORSE_DEAD_ALT";
	
		case 9:
			return "NSHM_HORSE_ACTIVE_HORSE_DEAD_VET_FEES";
	
		case 10:
			return "NSHM_HORSE_PLAYER_VEHICLE_NOT_DISMISSED";
	
		case 11:
			return "NSHM_HORSE_CALL_HORSE_VEHICLE";
	
		case 13:
			return "NSHM_VEHICLE_CANNOT_CONTACT_STABLE";
	
		case 14:
			return "NSHM_HORSE_YOU_DO_NOT_OWN_HORSE";
	
		case 15:
			return "NSHM_HORSE_PARLEYED_WITH_OWNER";
	
		case 16:
			return "NSHM_HORSE_OWNER_KICKED_YOU";
	
		case 17:
			return "NSHM_HORSE_DIED";
	
		case 18:
			return "NSHM_HORSE_DIED_INSURANCE";
	
		case 19:
			return "NSHM_HORSE_DIED_BY_HOSTILE_ACTION_INSURANCE";
	
		case 20:
			return "NSHM_HORSE_DIED_BY_HOSTILE_ACTION";
	
		case 21:
			return "NSHM_HORSE_REVIVE_COOLDOWN_COMPLETE";
	
		case 22:
			return "NSHM_HORSE_PENALTY_COOLDOWN";
	
		case 23:
			return "NSHM_HORSE_PENALTY_COOLDOWN_INSURANCE";
	
		case 24:
			return "NSHM_HORSE_PENALTY_COOLDOWN_COMPLETE";
	
		case 25:
			return "NSHM_HORSE_INSURANCE_EXPIRED";
	
		case 26:
			return "NSHM_HORSE_CANNOT_DISMISS_CARRYING_OBJECT";
	
		case 27:
			return "NSHM_HORSE_MOUNTED_POSSE_MEMBER";
	
		case 28:
			return "NSHM_HORSE_CANT_MOUNT_PLAYER_HORSE";
	
		case 29:
			return "NSHM_HORSE_BAD_SPORT_KILLED_ENEMY_HORSE";
	
		case 30:
			return "NSHM_VEHICLE_MOUNTED_POSSE_MEMBER";
	
		case 31:
			return "NSHM_VEHICLE_BAD_SPORT_DESTROYED_ENEMY_VEHICLE";
	
		default:
		
	}

	return "";
}

int func_275(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x951A
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

void func_276(int iParam0) // Position - 0x9555
{
	func_252(3, iParam0);
	return;
}

BOOL func_277(int iParam0) // Position - 0x9564
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

int func_278(int iParam0) // Position - 0x95A3
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

int func_279() // Position - 0x9639
{
	return Global_1572887.f_14;
}

BOOL func_280(Any* panParam0, int iParam1) // Position - 0x9647
{
	int i;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return false;

	if (iParam1 == 0 || iParam1 == 1)
	{
		for (i = 0; i < 10; i = i + 1)
		{
			if (!INVENTORY::_INVENTORY_COMPARE_GUIDS(&Global_1290271.f_1171[i /*24*/], panParam0))
			{
			}
			else
			{
				return Global_1290271.f_1171[i /*24*/].f_6;
			}
		}
	}
	else if (iParam1 == 2)
	{
		for (i = 0; i < 8; i = i + 1)
		{
			if (!INVENTORY::_INVENTORY_COMPARE_GUIDS(&Global_1290271.f_1171.f_275[i /*24*/], panParam0))
			{
			}
			else
			{
				return Global_1290271.f_1171.f_275[i /*24*/].f_6;
			}
		}
	}

	return false;
}

struct<5> func_281(int iParam0) // Position - 0x96F4
{
	var unk;

	unk = { func_282(iParam0, joaat("character"), func_92(), -1591664384) };
	unk.f_4 = 1084182731;
	return unk;
}

struct<4> func_282(int iParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, Hash hParam6) // Position - 0x9721
{
	var outGuid;

	if (!func_102(hParam1, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(iParam0, &uParam2, hParam1, hParam6, &outGuid);
	return outGuid;
}

void func_283(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x974E
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	if (bParam1)
		PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("HATS"), 0, true);
	else
		PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_284(Ped pedParam0, BOOL bParam1) // Position - 0x9793
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_285(Ped pedParam0, int iParam1) // Position - 0x97D8
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

Hash func_286(Ped pedParam0) // Position - 0x97FF
{
	Ped EntityIndex;
	int pedDamageCleanliness;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	EntityIndex = pedParam0;
	pedDamageCleanliness = PED::_GET_PED_DAMAGE_CLEANLINESS(EntityIndex);
	num = func_298(EntityIndex);

	if (!ENTITY::DOES_ENTITY_EXIST(EntityIndex))
		return 0;

	if (TASK::_0x7CB99FADDE73CD1B(EntityIndex))
		return 0;

	num2 = pedDamageCleanliness;
	num3 = num;

	if (num3 < num2)
		pedDamageCleanliness = num3;

	if (!PED::COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE(&num4, EntityIndex, pedDamageCleanliness))
		return 0;

	if (num4 != 0)
	{
		if (PED::_IS_META_PED_USING_COMPONENT(EntityIndex, 43391475) || ENTITY::_IS_ENTITY_FULLY_LOOTED(EntityIndex))
		{
			num5 = func_299(num4);
			return num5;
		}
	
		return num4;
	}

	switch (pedDamageCleanliness)
	{
		case 0:
			return joaat("PROVISION_ANIMAL_CARCASS_POOR");
	
		case 1:
			return joaat("PROVISION_ANIMAL_CARCASS_HIGH_QUALITY");
	
		case 2:
			return joaat("PROVISION_ANIMAL_CARCASS_PERFECT");
	
		default:
		
	}

	return joaat("PROVISION_ANIMAL_CARCASS_POOR");
}

void func_287(var uParam0, int iParam1) // Position - 0x98D2
{
	func_300(uParam0, iParam1);
	return;
}

void func_288(var uParam0, int iParam1) // Position - 0x98E2
{
	func_301(uParam0, iParam1);
	return;
}

void func_289(Any* panParam0) // Position - 0x98F2
{
	*panParam0 = 0;
	panParam0->f_1 = 0;
	panParam0->f_2 = 0;
	panParam0->f_3 = 0;
	panParam0->f_4 = 0;
	panParam0->f_5 = 0;
	panParam0->f_5.f_1 = 0;
	panParam0->f_5.f_2 = 0;
	panParam0->f_5.f_3 = 0;
	panParam0->f_9 = -1591664384;
	panParam0->f_10 = 0;
	panParam0->f_11 = 0;
	panParam0->f_12 = 0;
	panParam0->f_14 = 0;
	panParam0->f_15 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(panParam0->f_16), "", 64);
	panParam0->f_24 = 0;
	panParam0->f_25 = 0;
	panParam0->f_26 = 0;
	panParam0->f_27 = 0;
	panParam0->f_28 = 0;
	return;
}

void func_290(Any* panParam0, int iParam1) // Position - 0x996F
{
	if (func_107(panParam0, 4))
		func_261(iParam1, 4);

	if (func_107(panParam0, 2))
		func_261(iParam1, 2);

	return;
}

BOOL func_291(Any* panParam0, BOOL bParam1, BOOL bParam2) // Position - 0x9999
{
	var unk;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return false;

	if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(&(panParam0->f_16)))
		TEXT_LABEL_ASSIGN_STRING(&(panParam0->f_16), func_22(), 64);

	if (func_302(bParam2))
	{
		if (!INVENTORY::_INVENTORY_UPDATE_INVENTORY_ITEM(func_250(bParam2), panParam0, panParam0, 29))
			return false;
	}
	else
	{
		unk.f_9 = 1;
		unk.f_11 = -1591664384;
		unk = { func_303(panParam0, false) };
		unk.f_17 = { panParam0->f_16 };
		unk.f_26 = panParam0->f_27;
		unk.f_27 = panParam0->f_28;
		unk.f_25 = panParam0->f_25;
		unk.f_28 = panParam0->f_24;
	
		if (func_304(joaat("UPDATE"), &unk, bParam1) == -1)
			return false;
	}

	return true;
}

BOOL func_292(Any* panParam0, BOOL bParam1, BOOL bParam2) // Position - 0x9A4D
{
	var unk;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (func_302(bParam2))
	{
		if (!INVENTORY::_INVENTORY_UPDATE_INVENTORY_ITEM(func_250(bParam2), panParam0, panParam0, 24))
			return 0;
	}
	else
	{
		unk.f_9 = 1;
		unk.f_11 = -1591664384;
		unk = { func_303(panParam0, false) };
		unk.f_17 = { panParam0->f_15 };
		unk.f_25 = panParam0->f_23;
	
		if (func_305(joaat("UPDATE"), &unk, bParam1) == -1)
			return 0;
	}

	return 1;
}

void func_293(var uParam0) // Position - 0x9AD4
{
	*uParam0 = { func_92() };
	uParam0->f_4 = -1;
	uParam0->f_5 = -1;
	return;
}

BOOL func_294(Any* panParam0, int iParam1, int iParam2) // Position - 0x9AEE
{
	return MISC::IS_BIT_SET(panParam0->[iParam1 / 31], iParam1 % 31);
}

int func_295() // Position - 0x9B25
{
	return Global_1102813.f_3672;
}

BOOL func_296(Player plParam0, Player plParam1) // Position - 0x9B34
{
	Ped playerPed;

	if (plParam0 == PLAYER::PLAYER_ID())
	{
		playerPed = PLAYER::GET_PLAYER_PED(plParam1);
	
		if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
			return false;
	
		if (ENTITY::IS_ENTITY_DEAD(playerPed))
			return false;
	
		if (!PED::_IS_PED_VISIBILITY_TRACKED(playerPed))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(playerPed);
			return false;
		}
	}

	return NETWORK::_NETWORK_IS_TRACKED_PLAYER_VISIBLE(plParam0, plParam1);
}

BOOL func_297(int iParam0) // Position - 0x9B84
{
	if (iParam0 == 0)
		return false;

	return UIFEED::_UI_FEED_GET_MESSAGE_STATE(iParam0) == 4;
}

int func_298(Ped pedParam0) // Position - 0x9B9E
{
	int num;
	int pedQuality;

	num = 2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return num;

	pedQuality = PED::_GET_PED_QUALITY(pedParam0);

	switch (pedQuality)
	{
		case -1:
		case 2:
			num = 2;
			break;
	
		case 0:
			num = 0;
			break;
	
		case 1:
			num = 1;
			break;
	}

	return num;
}

int func_299(int iParam0) // Position - 0x9BF4
{
	switch (iParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CHICKEN_PERFECT");
	
		case -2092697195:
			return 777641606;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_PERFECT");
	
		case -2043601589:
			return 1815502722;
	
		case -2040849706:
			return -375348364;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PHEASANT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SKUNK_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SKUNK_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RABBIT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_DEER_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_TURKEY_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_POOR");
	
		case -1821314478:
			return 1135507073;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RAM_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_COYOTE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_COUGAR_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SHEEP_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_OWL_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_POOR");
	
		case -1638839614:
			return 213936563;
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_TURKEY_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_GOOSE_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RABBIT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BEAVER_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_HAWK_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_HAWK_PERFECT");
	
		case -1434083213:
			return -1671125008;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_EAGLE_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_EAGLE_POOR");
	
		case -1378208045:
			return 1586020612;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PARROT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_GOAT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BUCK_HIGH_QUALITY");
	
		case -1282621313:
			return 1718756614;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BADGER_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CRANE_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PHEASANT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RAM_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_FOX_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_LOON_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_IGUANA_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RAVEN_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ROOSTER_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RACOON_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_HERON_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SEAGULL_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PHEASANT_HIGH_QUALITY");
	
		case -885592109:
			return -132069363;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PELICAN_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CORMORANT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_HIGH_QUALITY");
	
		case -827518870:
			return -2115566177;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RAVEN_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CHICKEN_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BADGER_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RAVEN_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_GILA_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_GOAT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_VULTURE_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_WOLF_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_VULTURE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_OWL_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_GILA_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BUCK_POOR");
	
		case -229670230:
			return -352805801;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ROOSTER_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_COYOTE_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_HIGH_QUALITY");
	
		case -70954328:
			return 616254818;
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_GOAT_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_FOX_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PARROT_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_WOLF_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_DEER_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CORMORANT_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SKUNK_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_COYOTE_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CRANE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PIG_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_EAGLE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PANTHER_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SEAGULL_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RACOON_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_DEER_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_VULTURE_PERFECT");
	
		case 546758456:
			return 1491466288;
	
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_LOON_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_TURKEY_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_EGRET_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_HERON_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PELICAN_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_COUGAR_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_FOX_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BEAVER_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ROOSTER_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_LOON_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CORMORANT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BUCK_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_DUCK_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_EGRET_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_DUCK_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_IGUANA_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RABBIT_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_DUCK_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_OWL_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CRANE_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PIG_HIGH_QUALITY");
	
		case 1367447057:
			return -1886936864;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BEAVER_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PARROT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_POOR");
	
		case 1450608653:
			return 1892902297;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SHEEP_PERFECT");
	
		case 1493601140:
			return -438328437;
	
		case 1527400190:
			return 1020297399;
	
		case 1543592331:
			return 1920759986;
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_GOOSE_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_GILA_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CHICKEN_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_IGUANA_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_COUGAR_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_WOLF_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_GOOSE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RACOON_POOR");
	
		case 1705186999:
			return 897866285;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PANTHER_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SEAGULL_HIGH_QUALITY");
	
		case 1758585485:
			return 1518910503;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PIG_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_POOR");
	
		case 1842740532:
			return 1683741809;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PELICAN_PERFECT");
	
		case 1888419655:
			return -1066678466;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PANTHER_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RAM_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BADGER_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_POOR");
	
		case 2004357248:
			return 403588059;
	
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_EGRET_POOR");
	
		case 2014346813:
			return -101301217;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_HERON_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SHEEP_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_HAWK_POOR");
	
		default:
		
	}

	return 0;
}

void func_300(var uParam0, int iParam1) // Position - 0xA631
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_301(var uParam0, int iParam1) // Position - 0xA646
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_302(BOOL bParam0) // Position - 0xA657
{
	if (func_279() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_250(bParam0));
}

struct<17> func_303(Any* panParam0, BOOL bParam1) // Position - 0xA675
{
	var unk;

	unk.f_9 = 1;
	unk.f_11 = -1591664384;
	unk = { *panParam0 };
	unk.f_4 = { panParam0->f_5 };
	unk.f_8 = panParam0->f_4;
	unk.f_9 = panParam0->f_11;
	unk.f_11 = panParam0->f_9;
	unk.f_10 = panParam0->f_10;

	if (bParam1)
	{
		unk.f_15 = func_306(panParam0->f_4, joaat("DEFAULT"));
	
		if (unk.f_15 != 0)
		{
			unk.f_4 = { func_92() };
			unk.f_11 = 0;
		}
	}

	return unk;
}

int func_304(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0xA6F6
{
	int num;

	if (hParam0 == 0)
		return -1;

	if (!func_307(hParam0, panParam1))
		return -1;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_309(func_308(num, hParam0, panParam1), num, panParam1);
	else
		return func_310(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 29), num, panParam1);

	return -1;
}

int func_305(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0xA760
{
	int num;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_309(func_311(num, hParam0, panParam1), num, panParam1);
	else
		return func_310(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 26), num, panParam1);

	return -1;
}

int func_306(int iParam0, int iParam1) // Position - 0xA7B0
{
	if (iParam1 == 0)
		return 0;

	if (func_313(func_312(iParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(iParam0, iParam1);
}

BOOL func_307(Hash hParam0, Any* panParam1) // Position - 0xA7DC
{
	int num;

	num = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(hParam0, panParam1);

	if (hParam0 == joaat("use"))
		if (func_314(panParam1->f_8, hParam0, num, 2048) || func_314(panParam1->f_8, hParam0, num, 32768) || func_314(panParam1->f_8, hParam0, num, 65536))
			return false;
	else if (hParam0 == 1168099063)
		if (func_314(panParam1->f_8, hParam0, num, 4) || func_314(panParam1->f_8, hParam0, num, 256) || func_314(panParam1->f_8, hParam0, num, 65536) || func_314(panParam1->f_8, hParam0, num, 131072))
			return false;
	else if (hParam0 == joaat("spend"))
		if (func_314(panParam1->f_8, hParam0, num, 1) || func_314(panParam1->f_8, hParam0, num, 8) || func_314(panParam1->f_8, hParam0, num, 65536) || func_314(panParam1->f_8, hParam0, num, 32))
			return false;
	else if (hParam0 == joaat("Sell"))
		if (func_314(panParam1->f_8, hParam0, num, 1) || func_314(panParam1->f_8, hParam0, num, 16) || func_314(panParam1->f_8, hParam0, num, 2) || func_314(panParam1->f_8, hParam0, num, 65536))
			return false;
	else if (func_314(panParam1->f_8, hParam0, num, 8) || func_314(panParam1->f_8, hParam0, num, 4096) || func_314(panParam1->f_8, hParam0, num, 256) || func_314(panParam1->f_8, hParam0, num, 65536))
		return false;

	return true;
}

BOOL func_308(int iParam0, Hash hParam1, Any* panParam2) // Position - 0xA9B2
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 29, panParam2, 0);
}

int func_309(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0xA9C9
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_315(iParam1, 1, 0, 0);
			return iParam1;
		}
	
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}

	func_315(iParam1, 2, 0, 0);
	return -1;
}

int func_310(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0xAA12
{
	if (bParam0)
	{
		func_315(iParam1, 1, 0, 0);
		return iParam1;
	}

	return -1;
}

BOOL func_311(int iParam0, Hash hParam1, Any* panParam2) // Position - 0xAA2E
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 26, panParam2, 0);
}

int func_312(int iParam0) // Position - 0xAA45
{
	return iParam0;
}

BOOL func_313(int iParam0, int iParam1) // Position - 0xAA4F
{
	if (iParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(iParam0, iParam1);
}

BOOL func_314(var uParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0xAA69
{
	if (func_145(iParam2, iParam3))
		return true;

	return false;
}

void func_315(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0xAA81
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

	func_316(iParam0, iParam1, iParam2, iParam3);
	return;
}

void func_316(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0xAB1F
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

	func_317(&Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/]);
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/] = iParam0;
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_1 = iParam1;

	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_2 = iParam2;
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_3 = iParam3;
	}

	return;
}

void func_317(int iParam0) // Position - 0xABFB
{
	*iParam0 = -1;
	iParam0->f_1 = 0;
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	func_318(&(iParam0->f_4));
	return;
}

void func_318(var uParam0) // Position - 0xAC1E
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

