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
	var uLocal_21 = -1;
	var uLocal_22 = -1;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = -1;
	var uScriptParam_3 = -1;
#endregion

void main() // Position - 0x0
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	func_1();
	func_2(&uLocal_19, &uScriptParam_0);

	while (!func_3(true, true) && func_4(&uLocal_19))
	{
		BUILTIN::WAIT(0);
	}

	func_5(&uLocal_19);
	return;
}

void func_1() // Position - 0x3D
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	BRAIN::_0x4AA5EA1EDFB25786(0);
	BRAIN::_0xA6AC35DB4A7957A8(99999);
	return;
}

void func_2(var uParam0, var uParam1) // Position - 0x5B
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = { uParam1->f_2 };
	uParam0->f_6 = BRAIN::_GET_SCRIPT_BRAIN_ENTITY();
	return;
}

BOOL func_3(BOOL bParam0, BOOL bParam1) // Position - 0x85
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

BOOL func_4(var uParam0) // Position - 0x165
{
	if (func_6(uParam0))
		return false;

	if (func_7(uParam0))
	{
		func_8(uParam0->f_6);
		return true;
	}

	if (func_9(uParam0))
	{
		func_10(uParam0->f_6);
		return true;
	}

	func_11(uParam0);
	func_12(uParam0);

	if (func_13(*uParam0))
		func_14(uParam0);
	else if (func_15(*uParam0))
		func_16(uParam0);

	return true;
}

void func_5(var uParam0) // Position - 0x1D6
{
	func_17(&(uParam0->f_11), true, true);

	if (MAP::DOES_BLIP_EXIST(uParam0->f_7))
		MAP::REMOVE_BLIP(&(uParam0->f_7));

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_6(var uParam0) // Position - 0x1FF
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_6))
		return true;

	return false;
}

BOOL func_7(var uParam0) // Position - 0x218
{
	if (func_18(uParam0, 1))
		return true;
	else if (func_19() != 0)
		return true;
	else if (Global_1048576 || Global_2883584)
		return true;
	else if (Global_1048577)
		return true;
	else if (func_21(func_20(0)) == 7)
		return true;

	return false;
}

int func_8(Entity eParam0) // Position - 0x278
{
	if (ENTITY::DOES_ENTITY_EXIST(eParam0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(eParam0))
	{
		ENTITY::DELETE_ENTITY(&eParam0);
		return 1;
	}

	return 0;
}

BOOL func_9(var uParam0) // Position - 0x29F
{
	if (func_13(*uParam0))
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_6))
			return true;
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_6), false, false))
			return true;
	else if (func_15(*uParam0))
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_6))
			return true;

	return false;
}

int func_10(Entity eParam0) // Position - 0x2F6
{
	if (ENTITY::DOES_ENTITY_EXIST(eParam0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(eParam0))
	{
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&eParam0);
		return 1;
	}

	return 0;
}

void func_11(var uParam0) // Position - 0x31D
{
	int i;
	struct<4> data;
	var unk4;

	for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK); i = i + 1)
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i) == -507840394)
		{
			data = { unk4 };
			SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, i, &data, 4);
		
			if (data == 18)
				func_22(uParam0, i);
		}
	}

	return;
}

void func_12(var uParam0) // Position - 0x36C
{
	int num;

	if (!func_23(&(uParam0->f_8)))
		func_24(&(uParam0->f_8));

	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_6))
	{
		if (func_25(&(uParam0->f_8)) > 7000)
		{
			if (!func_26(uParam0))
			{
				func_27(uParam0->f_6, NETWORK::GET_NETWORK_TIME_ACCURATE());
			}
			else
			{
				num = func_28(uParam0->f_6);
			
				if (uParam0->f_5 != num)
					uParam0->f_5 = num;
				else
					func_29(uParam0, 1);
			}
		
			func_30(&(uParam0->f_8));
		}
	}
	else if (func_25(&(uParam0->f_8)) > 3000)
	{
		if (!func_26(uParam0))
			func_31(uParam0->f_6, NETWORK::GET_NETWORK_TIME_ACCURATE());
	
		func_30(&(uParam0->f_8));
	}

	return;
}

BOOL func_13(int iParam0) // Position - 0x415
{
	return iParam0 >= 1 && iParam0 <= 1;
}

void func_14(var uParam0) // Position - 0x42A
{
	func_32(uParam0);
	func_33(uParam0);
	return;
}

BOOL func_15(int iParam0) // Position - 0x43E
{
	return iParam0 >= 2 && iParam0 <= 2;
}

void func_16(var uParam0) // Position - 0x453
{
	func_34(uParam0);
	func_35(uParam0);
	return;
}

void func_17(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x467
{
	int num;

	if (bParam1 && !func_36(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_37(*uParam0);

	if (Global_1951910[num /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_38(num);
	*uParam0 = 0;
	return;
}

BOOL func_18(var uParam0, int iParam1) // Position - 0x4BB
{
	return func_39(uParam0->f_4, iParam1);
}

int func_19() // Position - 0x4CD
{
	return Global_1572887.f_14;
}

struct<2> func_20(int iParam0) // Position - 0x4DB
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

int func_21(int iParam0, var uParam1) // Position - 0x4EF
{
	return iParam0;
}

void func_22(var uParam0, int iParam1) // Position - 0x4F9
{
	struct<12> data;

	if (SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam1, &data, 12))
	{
		if (data.f_5 == *uParam0 && data.f_6 == uParam0->f_1)
		{
			switch (data.f_4)
			{
				case 0:
					func_40(uParam0->f_6, data.f_9);
					break;
			
				case 1:
					func_41(uParam0->f_6, data.f_9);
					break;
			
				case 2:
					func_27(uParam0->f_6, data.f_10);
					break;
			
				case 3:
					func_42(uParam0->f_6, data.f_10);
					break;
			
				case 4:
					func_43(uParam0->f_6, data.f_8);
					break;
			
				case 5:
					func_8(uParam0->f_6);
					break;
			
				case 6:
					func_10(uParam0->f_6);
					break;
			}
		}
	}

	return;
}

BOOL func_23(var uParam0) // Position - 0x5C4
{
	return func_44(*uParam0, 1);
}

void func_24(var uParam0) // Position - 0x5D4
{
	func_45(uParam0, 0);
	return;
}

int func_25(var uParam0) // Position - 0x5E3
{
	if (!func_23(uParam0))
		return 0;

	if (func_46(uParam0))
		return uParam0->f_2;

	return func_47(uParam0->f_1);
}

BOOL func_26(var uParam0) // Position - 0x614
{
	if (func_18(uParam0, 2) || func_18(uParam0, 4))
		return false;

	if (BUILTIN::VDIST(Global_34, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false)) < func_48(*uParam0))
		return false;

	if (func_49(uParam0->f_2) && func_50(uParam0->f_2) || func_51(uParam0->f_2))
		return false;

	return true;
}

BOOL func_27(Entity eParam0, int iParam1) // Position - 0x68A
{
	if (ENTITY::DOES_ENTITY_EXIST(eParam0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(eParam0))
	{
		if (func_28(eParam0) != iParam1)
			DECORATOR::DECOR_SET_INT(eParam0, func_52(), iParam1);
	
		return true;
	}

	return false;
}

int func_28(Entity eParam0) // Position - 0x6C3
{
	if (!ENTITY::DOES_ENTITY_EXIST(eParam0) || !DECORATOR::DECOR_EXIST_ON(eParam0, func_52()))
		return 0;

	return DECORATOR::DECOR_GET_INT(eParam0, func_52());
}

void func_29(var uParam0, int iParam1) // Position - 0x6F4
{
	func_53(&(uParam0->f_4), iParam1);
	return;
}

void func_30(var uParam0) // Position - 0x706
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
	return;
}

void func_31(Entity eParam0, int iParam1) // Position - 0x71C
{
	var unk;

	if (!func_27(eParam0, iParam1))
	{
		unk.f_4 = 2;
		unk.f_5 = func_54(eParam0);
		unk.f_6 = func_55(eParam0);
		unk.f_10 = iParam1;
		func_57(&unk, func_56(0, 8));
	}

	return;
}

void func_32(var uParam0) // Position - 0x75C
{
	Vehicle vehicleIndexFromEntityIndex;

	vehicleIndexFromEntityIndex = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_6);

	if (PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
	{
		if (PED::GET_VEHICLE_PED_IS_IN(Global_33, false) == vehicleIndexFromEntityIndex)
		{
			if (!func_18(uParam0, 4))
				func_29(uParam0, 4);
		
			if (VEHICLE::GET_DRIVER_OF_VEHICLE(vehicleIndexFromEntityIndex) == Global_33)
				if (!func_18(uParam0, 8))
					func_29(uParam0, 8);
			else if (func_18(uParam0, 8))
				func_58(uParam0, 8);
		}
		else
		{
			if (func_18(uParam0, 4))
				func_58(uParam0, 4);
		
			if (func_18(uParam0, 8))
				func_58(uParam0, 8);
		}
	}
	else
	{
		if (func_18(uParam0, 4))
			func_58(uParam0, 4);
	
		if (func_18(uParam0, 8))
			func_58(uParam0, 8);
	}

	return;
}

void func_33(var uParam0) // Position - 0x81C
{
	if (!MAP::DOES_BLIP_EXIST(uParam0->f_7))
	{
		if (func_59(uParam0))
		{
			uParam0->f_7 = MAP::BLIP_ADD_FOR_ENTITY(203020899, uParam0->f_6);
			MAP::SET_BLIP_SPRITE(uParam0->f_7, joaat("blip_ambient_wagon"), true);
		}
	}
	else if (!func_59(uParam0))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_7));
	}

	return;
}

void func_34(var uParam0) // Position - 0x86D
{
	if (PED::_GET_RIDER_OF_MOUNT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6), false) == Global_33)
		if (!func_18(uParam0, 4))
			func_60(uParam0);
	else if (func_18(uParam0, 4))
		func_61(uParam0);

	return;
}

void func_35(var uParam0) // Position - 0x8AC
{
	if (func_18(uParam0, 4) && !func_18(uParam0, 32))
		func_29(uParam0, 32);
	else if (!func_18(uParam0, 4))
		func_58(uParam0, 32);

	if (!MAP::DOES_BLIP_EXIST(uParam0->f_7))
	{
		if (func_62(uParam0))
		{
			uParam0->f_7 = MAP::BLIP_ADD_FOR_ENTITY(203020899, uParam0->f_6);
			MAP::SET_BLIP_SPRITE(uParam0->f_7, joaat("blip_ambient_horse"), true);
		}
	}
	else if (!func_62(uParam0))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_7));
	}

	return;
}

BOOL func_36(int iParam0) // Position - 0x933
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 60)
		return false;

	if (Global_1951910[iParam0 /*23*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3);
}

int func_37(var uParam0) // Position - 0x972
{
	return uParam0;
}

void func_38(int iParam0) // Position - 0x97C
{
	if (!func_63(iParam0))
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

BOOL func_39(int iParam0, int iParam1) // Position - 0xA2F
{
	return iParam0 && iParam1 != false;
}

int func_40(Entity eParam0, BOOL bParam1) // Position - 0xA3E
{
	if (ENTITY::DOES_ENTITY_EXIST(eParam0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(eParam0))
	{
		if (func_64(eParam0) != bParam1)
			DECORATOR::DECOR_SET_BOOL(eParam0, func_65(), bParam1);
	
		return 1;
	}

	return 0;
}

int func_41(Entity eParam0, BOOL bParam1) // Position - 0xA77
{
	if (ENTITY::DOES_ENTITY_EXIST(eParam0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(eParam0))
	{
		if (func_66(eParam0) != bParam1)
		{
			DECORATOR::DECOR_SET_BOOL(eParam0, func_67(), bParam1);
		
			if (TASK::GET_IS_CARRIABLE_ENTITY(eParam0))
			{
				ENTITY::_SET_ENTITY_CARRYING_FLAG(eParam0, 2, !bParam1);
				ENTITY::_SET_ENTITY_CARRYING_FLAG(eParam0, 3, !bParam1);
				ENTITY::_SET_ENTITY_CARRYING_FLAG(eParam0, 11, !bParam1);
				ENTITY::_SET_ENTITY_CARRYING_FLAG(eParam0, 12, !bParam1);
			}
		}
	
		return 1;
	}

	return 0;
}

int func_42(Entity eParam0, int iParam1) // Position - 0xAE3
{
	if (ENTITY::DOES_ENTITY_EXIST(eParam0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(eParam0))
	{
		if (func_68(eParam0) != iParam1)
			DECORATOR::DECOR_SET_INT(eParam0, func_69(), iParam1);
	
		return 1;
	}

	return 0;
}

int func_43(Entity eParam0, int iParam1) // Position - 0xB1C
{
	if (ENTITY::DOES_ENTITY_EXIST(eParam0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(eParam0))
	{
		if (func_70(eParam0) != iParam1)
		{
			if (iParam1 == 255)
			{
			}
		
			DECORATOR::_DECOR_SET_UINT8(eParam0, func_71(), iParam1);
		}
	
		return 1;
	}

	return 0;
}

BOOL func_44(int iParam0, int iParam1) // Position - 0xB5F
{
	return iParam0 && iParam1 != false;
}

void func_45(var uParam0, int iParam1) // Position - 0xB6E
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();

	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}

	func_72(uParam0, 1);
	func_73(uParam0, 2);
	uParam0->f_2 = 0;
	return;
}

BOOL func_46(var uParam0) // Position - 0xBAA
{
	return func_44(*uParam0, 2);
}

int func_47(int iParam0) // Position - 0xBBA
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

float func_48(int iParam0) // Position - 0xBCC
{
	if (func_13(iParam0))
		return func_74();
	else if (func_15(iParam0))
		return func_75();

	return 0f;
}

BOOL func_49(var uParam0, var uParam1) // Position - 0xBF8
{
	if (!func_76(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_77(uParam0))
		return false;

	return true;
}

BOOL func_50(var uParam0, var uParam1) // Position - 0xC2C
{
	int num;

	num = func_78(uParam0);
	return num == 1 || num == 2;
}

BOOL func_51(var uParam0, var uParam1) // Position - 0xC4C
{
	int num;

	num = func_78(uParam0);
	return num == 3 || num == 4;
}

char* func_52() // Position - 0xC6C
{
	return "brain_timeStamp";
}

void func_53(var uParam0, int iParam1) // Position - 0xC76
{
	func_79(uParam0, iParam1);
	return;
}

int func_54(Entity eParam0) // Position - 0xC86
{
	if (!ENTITY::DOES_ENTITY_EXIST(eParam0) || !DECORATOR::DECOR_EXIST_ON(eParam0, func_80()))
		return 0;

	return DECORATOR::DECOR_GET_INT(eParam0, func_80());
}

int func_55(Entity eParam0) // Position - 0xCB7
{
	if (!ENTITY::DOES_ENTITY_EXIST(eParam0) || !DECORATOR::DECOR_EXIST_ON(eParam0, func_81()))
		return 0;

	return DECORATOR::DECOR_GET_INT(eParam0, func_81());
}

var func_56(int iParam0, int iParam1) // Position - 0xCE8
{
	return func_82(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("volCylinder"), iParam0, iParam1);
}

void func_57(Any* panParam0, var uParam1) // Position - 0xD06
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
		return;

	*panParam0 = 18;
	panParam0->f_1 = PLAYER::PLAYER_ID();
	panParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, panParam0, 12, 10, &uParam1);
	return;
}

void func_58(var uParam0, int iParam1) // Position - 0xD3D
{
	func_83(&(uParam0->f_4), iParam1);
	return;
}

BOOL func_59(var uParam0) // Position - 0xD4F
{
	if (*uParam0 == 1)
		return ENTITY::DOES_ENTITY_EXIST(uParam0->f_6) && !func_64(uParam0->f_6) && !func_18(uParam0, 4) && BUILTIN::VDIST(Global_34, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false)) < func_74() && func_51(uParam0->f_2);

	return false;
}

void func_60(var uParam0) // Position - 0xDB1
{
	func_29(uParam0, 4);
	return;
}

void func_61(var uParam0) // Position - 0xDC0
{
	func_58(uParam0, 4);
	return;
}

BOOL func_62(var uParam0) // Position - 0xDCF
{
	return ENTITY::DOES_ENTITY_EXIST(uParam0->f_6) && !func_64(uParam0->f_6) && !func_18(uParam0, 4) && BUILTIN::VDIST(Global_34, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false)) < func_75() && func_51(uParam0->f_2);
}

BOOL func_63(int iParam0) // Position - 0xE26
{
	return func_84(iParam0, 2);
}

BOOL func_64(Entity eParam0) // Position - 0xE35
{
	return ENTITY::DOES_ENTITY_EXIST(eParam0) && DECORATOR::DECOR_EXIST_ON(eParam0, func_65()) && DECORATOR::DECOR_GET_BOOL(eParam0, func_65());
}

char* func_65() // Position - 0xE61
{
	return "brain_isHidden";
}

BOOL func_66(Entity eParam0) // Position - 0xE6C
{
	return ENTITY::DOES_ENTITY_EXIST(eParam0) && DECORATOR::DECOR_EXIST_ON(eParam0, func_67()) && DECORATOR::DECOR_GET_BOOL(eParam0, func_67());
}

char* func_67() // Position - 0xE98
{
	return "brain_isDisabled";
}

int func_68(Entity eParam0) // Position - 0xEA3
{
	if (!ENTITY::DOES_ENTITY_EXIST(eParam0) || !DECORATOR::DECOR_EXIST_ON(eParam0, func_69()))
		return 0;

	return DECORATOR::DECOR_GET_INT(eParam0, func_69());
}

char* func_69() // Position - 0xED4
{
	return "brain_value";
}

int func_70(Entity eParam0) // Position - 0xEDF
{
	if (!ENTITY::DOES_ENTITY_EXIST(eParam0) || !DECORATOR::DECOR_EXIST_ON(eParam0, func_71()))
		return 255;

	return DECORATOR::_DECOR_GET_UINT8(eParam0, func_71());
}

char* func_71() // Position - 0xF11
{
	return "brain_player";
}

void func_72(var uParam0, int iParam1) // Position - 0xF1C
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_73(var uParam0, int iParam1) // Position - 0xF2D
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

float func_74() // Position - 0xF42
{
	return 100f;
}

float func_75() // Position - 0xF4F
{
	return 100f;
}

BOOL func_76(int iParam0) // Position - 0xF5C
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

int func_77(int iParam0) // Position - 0xF9B
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

int func_78(var uParam0, var uParam1) // Position - 0x1031
{
	int num;

	if (!func_49(uParam0))
		return -1;

	num = func_85(uParam0);

	if (num < 0)
		return 0;

	return Global_1072759.f_19487.f_1[num /*3*/].f_2;
}

void func_79(var uParam0, int iParam1) // Position - 0x106C
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

char* func_80() // Position - 0x107D
{
	return "brain_type";
}

char* func_81() // Position - 0x1088
{
	return "brain_id";
}

var func_82(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, BOOL bParam10, int iParam11) // Position - 0x1093
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

	if (func_86() != 0)
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
				volume = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_87());
				break;
		
			case joaat("volSphere"):
				volume = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_87());
				break;
		
			case joaat("volCylinder"):
				volume = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_87());
				break;
		}
	}

	if (flag4 & 8 != 0)
		flag4 = flag4 || func_88(PLAYER::GET_PLAYER_TEAM(PlayerIndex));

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
		
			if (func_89(i))
				flag = true;
		
			playerPed = PLAYER::GET_PLAYER_PED(PlayerIndex2);
		
			if (!flag)
				if (flag4 & 2 != 0)
					if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
						flag = true;
					else if (Global_1295666.f_83[i])
						flag = true;
		
			if (!flag)
				if (flag4 & 8192 != 0 && func_90(i) != 1)
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
					if (!func_91(PlayerIndex2))
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

void func_83(var uParam0, int iParam1) // Position - 0x1426
{
	func_92(uParam0, iParam1);
	return;
}

BOOL func_84(int iParam0, int iParam1) // Position - 0x1436
{
	if (iParam0 < 0)
		return false;

	return Global_1951910[iParam0 /*23*/].f_1 && iParam1 != false;
}

int func_85(var uParam0, var uParam1) // Position - 0x1457
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

	if (!func_93(uParam0, &unk))
		return -1;

	num = 0;
	num2 = Global_1072759.f_19487 - 1;

	while (num <= num2)
	{
		num3 = num + ((num2 - num) / 2);
		func_93(Global_1072759.f_19487.f_1[num3 /*3*/], &unk4);
	
		if (unk4 > unk)
			num2 = num3 - 1;
		else if (unk4 < unk)
			num = num3 + 1;
		else
			return num3;
	}

	return -1;
}

int func_86() // Position - 0x14FE
{
	return Global_1051645.f_12;
}

char* func_87() // Position - 0x150C
{
	return "unnamed";
}

BOOL func_88(int iParam0) // Position - 0x1517
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

BOOL func_89(int iParam0) // Position - 0x15A6
{
	if (Global_1572887.f_14 == -1)
		return false;

	return func_94(36, iParam0);
}

int func_90(int iParam0) // Position - 0x15C4
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

BOOL func_91(Player plParam0) // Position - 0x160F
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (func_95(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) != 1)
			func_96(plParam0);
	
		return true;
	}

	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) == 1;
}

void func_92(var uParam0, int iParam1) // Position - 0x1654
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_93(int iParam0, var uParam1, Any* panParam2) // Position - 0x1669
{
	if (!func_49(iParam0))
		return false;

	func_97(panParam2);

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

BOOL func_94(int iParam0, int iParam1) // Position - 0x1774
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_98(&(Global_1102813.f_4), num, 5);

	if (iParam1 == func_99())
		return func_98(&(Global_1102813.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1295666.f_17[iParam1])
		return func_98(&(Global_1101558[iParam1 /*38*/].f_4), num, 5);

	return false;
}

BOOL func_95(Player plParam0) // Position - 0x17E8
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), plParam0))
		return true;

	return false;
}

void func_96(Player plParam0) // Position - 0x1805
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (!Global_1295666.f_17[player])
	{
		func_100(plParam0);
		return;
	}

	if (Global_1072759.f_21353.f_1[player /*8*/] == 1)
		return;

	func_101(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 1);
	Global_1072759.f_21353.f_1[player /*8*/] = 1;
	return;
}

void func_97(Any* panParam0) // Position - 0x1888
{
	*panParam0 = 0;
	panParam0->f_1 = -1;
	panParam0->f_2 = -1;
	return;
}

BOOL func_98(Any* panParam0, int iParam1, int iParam2) // Position - 0x189E
{
	return MISC::IS_BIT_SET(panParam0->[iParam1 / 31], iParam1 % 31);
}

int func_99() // Position - 0x18D5
{
	return Global_1102813.f_3672;
}

void func_100(Player plParam0) // Position - 0x18E4
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (Global_1072759.f_21353.f_1[player /*8*/] == 0)
		return;

	func_101(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 0);
	Global_1072759.f_21353.f_1[player /*8*/] = 0;
	return;
}

void func_101(Player plParam0) // Position - 0x1950
{
	if (Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 = 0;
	}

	return;
}

