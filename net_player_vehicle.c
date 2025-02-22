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
	int num;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	num.f_2 = 255;
	num.f_4 = 6;
	num.f_26 = -1;

	if (!func_1(&num, &uScriptParam_0))
		func_2(&num, "failed to launch the script.");

	if (uScriptParam_0.f_15)
		func_3();

	if (func_4(&(Global_1290271.f_814.f_72)))
		func_5(&(Global_1290271.f_814.f_72));

	while (true)
	{
		func_6(&num, &uScriptParam_0);
	
		if (func_7(&num, &uScriptParam_0))
			func_2(&num, "script should terminate.");
	
		if (!func_8(num, 2048))
		{
			if (func_9(&num, &uScriptParam_0))
			{
				func_10(&num, "script should terminate due to async update.");
			}
			else if (!func_11(&num))
			{
			}
			else
			{
				if (!func_8(num, 8))
					if (func_12(&num))
						func_13(&num, 8);
			
				if (func_8(num, 8))
					if (func_14(&num))
						if (num.f_26 != -1)
							if (!func_15(num.f_26))
								if (func_16())
									func_17(num.f_26, true);
			
				if (func_18(&num))
					func_10(&num, "update requested thread termination.");
			}
		}
		else if (NETWORK::GET_TIME_DIFFERENCE(num.f_25, NETWORK::GET_NETWORK_TIME_ACCURATE()) > &func_5)
		{
			if (func_14(&num))
			{
				num.f_25 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			
				if (func_8(num, 2))
					func_19();
				else
					func_20();
			}
		}
	
		if (func_21(&num, &uScriptParam_0) || func_8(num, 2048))
			func_2(&num, "event requested thread termination.");
	
		BUILTIN::WAIT(0);
	}

	func_2(&num, "end of thread.");
	return;
}

BOOL func_1(var uParam0, Any* panParam1) // Position - 0x187
{
	Entity scriptBrainEntity;
	int NetworkId;

	scriptBrainEntity = BRAIN::_GET_SCRIPT_BRAIN_ENTITY();

	if (!ENTITY::DOES_ENTITY_EXIST(scriptBrainEntity))
		return false;

	if (!ENTITY::IS_ENTITY_A_VEHICLE(scriptBrainEntity))
		return false;

	uParam0->f_3 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(scriptBrainEntity);

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
		return false;

	uParam0->f_2 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(panParam1);
	MISC::COPY_SCRIPT_STRUCT(&(uParam0->f_11), panParam1, 2);

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(uParam0->f_2))
		return false;

	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		func_13(uParam0, 1);
		NetworkId = NETWORK::VEH_TO_NET(uParam0->f_3);
	
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(NetworkId))
		{
		}
		else
		{
			NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(NetworkId, PLAYER::PLAYER_ID(), true);
		}
	}

	if (!func_22(uParam0, panParam1))
		return false;

	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	BRAIN::_0xA6AC35DB4A7957A8(275);
	return true;
}

void func_2(var uParam0, char* sParam1) // Position - 0x24A
{
	BOOL flag;

	if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(sParam1))
	{
	}

	VEHICLE::CLEAR_LAST_DRIVEN_VEHICLE();
	func_23(uParam0);
	func_24(uParam0);

	if (func_4(&(uParam0->f_13)))
		func_5(&(uParam0->f_13));

	if (func_4(&(uParam0->f_16)))
		func_5(&(uParam0->f_16));

	if (func_4(&(uParam0->f_19)))
		func_5(&(uParam0->f_19));

	if (func_4(&(Global_1290271.f_814.f_72)))
		func_5(&(Global_1290271.f_814.f_72));

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		flag = func_8(*uParam0, 2);
	
		if (!flag)
			if (func_25(uParam0->f_3))
				flag = true;
	
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
		{
			AITRANSPORT::SET_TRANSPORT_CONFIG_FLAG(uParam0->f_3, 17, true);
		
			if (flag)
			{
				func_26(uParam0->f_3, false);
			}
			else
			{
				func_26(uParam0->f_3, true);
				TASK::TASK_EVERYONE_LEAVE_VEHICLE_IN_ORDER(uParam0->f_3, false);
			}
		}
	
		!func_27(&(uParam0->f_11), uParam0->f_3, 2, !flag, func_14(uParam0));
	
		if (func_8(*uParam0, 4096))
			if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true) == uParam0->f_3)
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
	}

	if (func_14(uParam0))
	{
		PLAYER::_SET_PLAYER_OWNS_VEHICLE(PLAYER::PLAYER_ID(), 0);
		func_28(4);
		func_28(2);
		func_29();
	}
	else if (func_30())
	{
		func_31(11, uParam0->f_2, Global_1295666.f_149[Global_1295666], false);
		func_32(1649473200, 31, "NSTM_STABLE_DESTROYED_VEHICLE");
		func_33();
	}

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_3() // Position - 0x3BD
{
	if (func_34(8, 255))
		return;

	func_35(6, 3);
	return;
}

BOOL func_4(var uParam0) // Position - 0x3D8
{
	return func_36(*uParam0, 1);
}

void func_5(var uParam0) // Position - 0x3E8
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

void func_6(var uParam0, Any* panParam1) // Position - 0x3FE
{
	Vehicle EntityIndex;
	Player Plr;
	Entity vehicleOwner;
	Ped pedIndexFromEntityIndex;
	Ped ped;

	uParam0->f_2 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(panParam1);

	if (!func_14(uParam0))
		return;

	EntityIndex = uParam0->f_3;

	if (!ENTITY::DOES_ENTITY_EXIST(EntityIndex))
		return;

	Plr = PLAYER::PLAYER_ID();

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Plr))
		return;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Plr))
		return;

	if (PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(Plr) != EntityIndex)
		PLAYER::_SET_PLAYER_OWNS_VEHICLE(Plr, EntityIndex);

	vehicleOwner = VEHICLE::_GET_VEHICLE_OWNER(EntityIndex);

	if (ENTITY::IS_ENTITY_A_PED(vehicleOwner))
		pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vehicleOwner);

	ped = PLAYER::PLAYER_PED_ID();

	if (pedIndexFromEntityIndex != ped)
		VEHICLE::SET_PED_OWNS_VEHICLE(ped, EntityIndex);

	return;
}

BOOL func_7(var uParam0, var uParam1) // Position - 0x491
{
	if (func_37(true, true))
		return true;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
		return true;

	if (!func_14(uParam0))
	{
		if (!NETWORK::NETWORK_IS_HANDLE_VALID(&(uParam0->f_11)) || !NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam0->f_11)))
		{
			func_13(uParam0, 2);
			return true;
		}
	}

	if (func_38(uParam0, uParam1))
		return true;

	return false;
}

BOOL func_8(int iParam0, int iParam1) // Position - 0x4F6
{
	return iParam0 && iParam1 != false;
}

BOOL func_9(var uParam0, var uParam1) // Position - 0x505
{
	BOOL flag;

	func_39(uParam0);
	func_40(uParam0);

	if (func_41(uParam0, uParam1))
		return true;

	if (func_42(uParam0, uParam1))
		return true;

	if (func_14(uParam0))
	{
		if (func_43())
		{
			func_13(uParam0, 2);
			return true;
		}
	
		if (!func_8(*uParam0, 8192))
		{
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false)) > 250f)
			{
				func_13(uParam0, 8192);
				func_13(uParam0, 2);
				return true;
			}
			else
			{
				flag = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false)) >= 188f;
			
				if (!func_8(*uParam0, 16384))
				{
					if (flag)
					{
						func_17(933, true);
						func_44(&(uParam0->f_22));
						func_13(uParam0, 16384);
					}
				}
				else if (!flag && func_45(&(uParam0->f_22), 3f))
				{
					func_5(&(uParam0->f_22));
					func_46(uParam0, 16384);
				}
			}
		}
	}

	return false;
}

void func_10(var uParam0, char* sParam1) // Position - 0x60D
{
	if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(sParam1))
	{
	}

	if (!func_14(uParam0))
		return;

	func_13(uParam0, 2048);
	uParam0->f_25 = NETWORK::GET_NETWORK_TIME_ACCURATE();

	if (func_8(*uParam0, 2))
		func_19();
	else
		func_20();

	return;
}

BOOL func_11(var uParam0) // Position - 0x655
{
	if (!func_8(*uParam0, 16))
	{
		if (func_14(uParam0))
		{
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_3);
			}
			else
			{
				PLAYER::_SET_PLAYER_OWNS_VEHICLE(PLAYER::PLAYER_ID(), uParam0->f_3);
				VEHICLE::SET_PED_OWNS_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_3);
				func_13(uParam0, 16);
			}
		}
		else
		{
			func_13(uParam0, 16);
		}
	}

	if (!func_8(*uParam0, 32))
		if (func_47(uParam0))
			func_13(uParam0, 32);

	if (func_8(*uParam0, 16))
		if (func_8(*uParam0, 32))
			return true;

	return false;
}

BOOL func_12(var uParam0) // Position - 0x6F1
{
	BOOL num;

	num = 1;

	if (!func_48(uParam0))
		num = 0;

	if (!func_49(uParam0))
		num = 0;

	return num;
}

void func_13(var uParam0, int iParam1) // Position - 0x718
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_14(var uParam0) // Position - 0x729
{
	return func_8(*uParam0, 1);
}

BOOL func_15(int iParam0) // Position - 0x739
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_17418.f_2585[num2], offset);
}

BOOL func_16() // Position - 0x763
{
	if (!func_50() && func_51(true))
		return true;

	return false;
}

void func_17(int iParam0, BOOL bParam1) // Position - 0x782
{
	int num;
	int num2;

	func_52(iParam0, &num, &num2);

	if (!func_53(iParam0, num, num2, bParam1))
		return;

	func_54(num, num2);
	return;
}

BOOL func_18(var uParam0) // Position - 0x7AF
{
	if (func_55(uParam0))
		return true;

	func_56(uParam0);
	func_57(uParam0);
	func_58(uParam0);
	func_59(uParam0);

	if (func_14(uParam0))
		func_60(uParam0);

	return false;
}

void func_19() // Position - 0x7EC
{
	if (func_34(8, 255))
		return;

	func_61(3);
	return;
}

void func_20() // Position - 0x806
{
	if (func_34(8, 255))
		return;

	func_62(3);
	return;
}

BOOL func_21(var uParam0, var uParam1) // Position - 0x820
{
	int numberOfEvents;
	BOOL flag;
	struct<6> data;
	eEventType eventAtIndex;
	int i;

	numberOfEvents = SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK);
	flag = false;
	data.f_4 = -1;
	data.f_5 = -1;
	i = 0;

	for (i = 0; i < numberOfEvents; i = i + 1)
	{
		eventAtIndex = SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i);
	
		switch (eventAtIndex)
		{
			case -507840394:
				if (!SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, i, &data, 6))
					break;
			
				if (data != 47)
					break;
			
				flag = func_63(uParam0, uParam1, &data);
			
				if (flag)
					return true;
			
				flag = func_64(uParam0, uParam1, &data);
			
				if (flag)
					return true;
				break;
		}
	}

	return false;
}

BOOL func_22(var uParam0, Any* panParam1) // Position - 0x8B7
{
	return true;
}

void func_23(var uParam0) // Position - 0x8C0
{
	return;
}

void func_24(var uParam0) // Position - 0x8C8
{
	int i;

	for (i = 0; i < 6; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4[i]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_4[i]))
			{
				PED::SET_PED_CONFIG_FLAG(uParam0->f_4[i], 467, false);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_4[i], 277, false);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_4[i], 209, false);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_4[i], 208, false);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uParam0->f_4[i]);
			}
		}
	}

	return;
}

BOOL func_25(Vehicle veParam0) // Position - 0x94A
{
	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return false;
	else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false, false))
		return false;

	if (func_65(veParam0, 0) && func_65(veParam0, 1))
		return false;

	return true;
}

void func_26(Vehicle veParam0, BOOL bParam1) // Position - 0x98E
{
	Ped pedInVehicleSeat;
	int i;

	if (func_66(veParam0))
	{
		for (i = 0; i < 9; i = i + 1)
		{
			pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, i);
		
			if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat))
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedInVehicleSeat))
					if (!bParam1 || ENTITY::IS_ENTITY_DEAD(pedInVehicleSeat))
						PED::_WARP_PED_OUT_OF_VEHICLE(pedInVehicleSeat);
		}
	}

	return;
}

BOOL func_27(var uParam0, Entity eParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x9E6
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
			Global_1290271.f_11.f_323[i /*6*/] = { *uParam0 };
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

void func_28(int iParam0) // Position - 0xB16
{
	int num;

	num = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	Global_1289643[num /*19*/].f_10 = Global_1289643[num /*19*/].f_10 - Global_1289643[num /*19*/].f_10 && iParam0;
	return;
}

void func_29() // Position - 0xB46
{
	func_67(97);
	func_67(98);
	func_67(99);
	func_67(100);
	Global_1290271.f_814.f_77 = { func_68() };
	Global_1290271.f_814.f_81 = -1;
	Global_1903838.f_536 = 0;
	Global_1903838.f_537 = MISC::GET_GAME_TIMER();
	return;
}

BOOL func_30() // Position - 0xB92
{
	return Global_1149432.f_5568.f_132;
}

void func_31(int iParam0, Player plParam1, Player plParam2, BOOL bParam3) // Position - 0xBA3
{
	BOOL flag;
	Player bitIndex;
	var value;
	var unk;

	flag = true;

	if (bParam3)
		flag = false;

	if (func_69(plParam1, flag))
		return;

	if (Global_1901671.f_740.f_41 < 1)
	{
		if (func_70(Global_1295666.f_149[Global_1295666], plParam1))
		{
			if (2 == iParam0 || 3 == iParam0)
				func_17(767, false);
		
			return;
		}
	}

	if (!func_71(iParam0) && Global_1149432.f_5568.f_2 == iParam0)
		if (Global_17418.f_2641.f_1 >= Global_1295666.f_16 - func_72(iParam0))
			return;

	if (iParam0 == 1 && Global_1149432.f_5568.f_1 != 1 && Global_1149432.f_5568.f_1 != 0 && Global_1149432.f_5568.f_9 == Global_1295666.f_16)
		return;

	if (iParam0 == 1 || iParam0 == 9)
	{
		bitIndex = plParam1;
		SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, bitIndex);
		unk.f_6 = 255;
		unk.f_4 = 4;
		unk.f_6 = plParam1;
		unk.f_7 = 3;
		func_73(&unk, value);
	}

	if (plParam1 != 255)
	{
		Global_1149432.f_5568.f_3 = func_74(plParam1, true);
		Global_1149432.f_5568.f_4 = func_75(plParam1, false, true);
		Global_1149432.f_5568.f_5 = plParam1;
	}
	else
	{
		Global_1149432.f_5568.f_3 = 0f;
		Global_1149432.f_5568.f_4 = 0;
		Global_1149432.f_5568.f_5 = 255;
	}

	Global_1149432.f_5568.f_1 = iParam0;
	Global_1149432.f_5568.f_9 = Global_1295666.f_16;
	return;
}

void func_32(Hash hParam0, int iParam1, char* sParam2) // Position - 0xD26
{
	int cashBalance;
	int num;

	cashBalance = func_76(hParam0, true, 59806960);

	if (cashBalance <= 0)
		return;

	if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(cashBalance, 0))
		return;

	if (!func_77(hParam0, 1, 59806960))
		return;

	num = func_78(hParam0, sParam2, 1, true, false, 59806960);

	if (num == -1)
		return;

	func_79(iParam1, cashBalance, false);
	return;
}

void func_33() // Position - 0xD8A
{
	Global_1149432.f_5568.f_132 = 0;
	return;
}

BOOL func_34(int iParam0, int iParam1) // Position - 0xD9C
{
	if (iParam1 == 255)
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	return Global_1289643[iParam1 /*19*/].f_10 && iParam0 != false;
}

void func_35(int iParam0, int iParam1) // Position - 0xDD6
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

BOOL func_36(int iParam0, int iParam1) // Position - 0xEFA
{
	return iParam0 && iParam1 != false;
}

BOOL func_37(BOOL bParam0, BOOL bParam1) // Position - 0xF09
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

BOOL func_38(var uParam0, var uParam1) // Position - 0xFE9
{
	return false;
}

void func_39(var uParam0) // Position - 0xFF2
{
	BOOL flag;

	flag = false;

	if (func_80(255) == 1)
		flag = true;

	if (flag)
	{
		if (func_81(uParam0->f_2))
		{
			if (!func_8(*uParam0, 256))
			{
				NETWORK::KEEP_NETWORK_ID_IN_FAST_INSTANCE(NETWORK::_0xF260AF6F43953316(uParam0->f_3), true, 256);
				func_13(uParam0, 256);
			}
		
			NETWORK::PREVENT_NETWORK_ID_MIGRATION(NETWORK::_0xF260AF6F43953316(uParam0->f_3));
		}
		else if (func_8(*uParam0, 256))
		{
			NETWORK::KEEP_NETWORK_ID_IN_FAST_INSTANCE(NETWORK::_0xF260AF6F43953316(uParam0->f_3), false, 256);
			func_46(uParam0, 256);
		}
	}
	else if (func_8(*uParam0, 256))
	{
		func_46(uParam0, 256);
	}

	return;
}

void func_40(var uParam0) // Position - 0x108F
{
	Player player;
	Any gangId;
	Any gangId2;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(uParam0->f_2))
	{
		func_46(uParam0, 512);
		return;
	}

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_2))
	{
		func_46(uParam0, 512);
		return;
	}

	if (func_14(uParam0))
	{
		func_46(uParam0, 512);
		return;
	}

	player = PLAYER::PLAYER_ID();

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(uParam0->f_2) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_2))
	{
		func_46(uParam0, 512);
		return;
	}

	gangId = GANG::NETWORK_GET_GANG_ID(uParam0->f_2);
	gangId2 = GANG::NETWORK_GET_GANG_ID(player);

	if (gangId == gangId2)
	{
		if (!func_8(*uParam0, 512))
		{
			func_13(uParam0, 512);
			func_46(uParam0, 1024);
		}
	}
	else
	{
		if (func_8(*uParam0, 512))
		{
			func_46(uParam0, 512);
		
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_3, true))
				func_13(uParam0, 1024);
		}
	
		if (func_8(*uParam0, 1024))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_3, false))
			{
				if (!func_82(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_LEAVE_VEHICLE))
					TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_3, 64, 0);
			}
			else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_3, true))
			{
			}
			else
			{
				func_46(uParam0, 1024);
			}
		}
	}

	return;
}

BOOL func_41(var uParam0, var uParam1) // Position - 0x11D0
{
	return false;
}

BOOL func_42(var uParam0, var uParam1) // Position - 0x11D9
{
	if (!func_8(*uParam0, 128))
	{
		if (!func_83(uParam0))
			return false;
	
		if (func_25(uParam0->f_3))
			return false;
	
		func_84(&(uParam0->f_19), false);
		func_13(uParam0, 128);
		func_85(uParam0, uParam1);
		func_57(uParam0);
		func_86(uParam0);
	}

	if (!func_14(uParam0))
		return false;

	if (!func_45(&(uParam0->f_19), 5f))
		return false;

	return true;
}

BOOL func_43() // Position - 0x1250
{
	return Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE");
}

void func_44(var uParam0) // Position - 0x1275
{
	func_87(uParam0, 0f);
	return;
}

BOOL func_45(var uParam0, int iParam1) // Position - 0x1284
{
	if (!func_4(uParam0))
		return false;

	if (func_88(uParam0) > iParam1)
		return true;

	return false;
}

void func_46(var uParam0, int iParam1) // Position - 0x12AB
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_47(var uParam0) // Position - 0x12C0
{
	return true;
}

BOOL func_48(var uParam0) // Position - 0x12C9
{
	int expected;
	var actual;
	int i;
	int num;

	if (!func_83(uParam0))
	{
		if (VEHICLE::GET_DRAFT_ANIMAL_COUNT(uParam0->f_3, &expected, &actual))
		{
			num = 0;
		
			for (i = 0; i < 6; i = i + 1)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4[i]))
				{
					uParam0->f_4[i] = func_89(uParam0->f_3, i);
				
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4[i]))
					{
						num = num + 1;
						PED::SET_PED_OWNS_ANIMAL(PLAYER::GET_PLAYER_PED(uParam0->f_2), uParam0->f_4[i], false);
					
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_4[i]))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_4[i], true, false);
							PED::SET_PED_CONFIG_FLAG(uParam0->f_4[i], 467, true);
							PED::SET_PED_CONFIG_FLAG(uParam0->f_4[i], 277, true);
							PED::SET_PED_CONFIG_FLAG(uParam0->f_4[i], 209, true);
							PED::SET_PED_CONFIG_FLAG(uParam0->f_4[i], 208, true);
						}
					}
				}
			}
		
			if (num < expected)
			{
			}
			else if (num == expected)
			{
				func_13(uParam0, 64);
				return true;
			}
			else if (num > expected)
			{
				func_13(uParam0, 64);
				return true;
			}
		}
	}
	else
	{
		return true;
	}

	return false;
}

BOOL func_49(var uParam0) // Position - 0x13E1
{
	return true;
}

BOOL func_50() // Position - 0x13EA
{
	int i;

	if (func_90())
		return true;

	for (i = 0; i < 32; i = i + 1)
	{
		if (Global_1904402[i] != 0)
			return true;
	}

	return false;
}

BOOL func_51(BOOL bParam0) // Position - 0x1421
{
	if (func_91())
		return false;

	if (!CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN() || CAM::IS_SCREEN_FADING_OUT())
		return false;

	if (func_92(&(Global_1102813.f_4), 1, 5))
		return false;

	if (!bParam0)
		if (!func_50())
			return false;

	if (Global_13 || Global_1048584 || func_93())
		return false;

	if (!func_94())
		return false;

	if (func_95())
		return false;

	if (MISC::_IS_MISSION_CREATOR_ACTIVE())
		return false;

	if (HUD::IS_PAUSE_MENU_ACTIVE())
		return false;

	if (Global_1915656.f_20638 && Global_1915656.f_20241.f_43 == 2 && Global_1940252.f_2)
		return false;

	if (func_96())
		return false;

	return true;
}

void func_52(int iParam0, var uParam1, var uParam2) // Position - 0x14F9
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_53(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x1515
{
	if (iParam1 < 0 || iParam1 > 32)
		return false;

	if (func_97(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_98(iParam0))
		return false;

	if (func_99(iParam0))
		return false;

	if (Global_1900460.f_67 && !func_100(iParam0, 1) || func_101(32768))
		if (!func_100(iParam0, 262144) || !Global_1904402.f_8875)
			return false;

	if (!func_94())
		return false;

	return true;
}

void func_54(int iParam0, int iParam1) // Position - 0x15B7
{
	int Variable;

	Variable = Global_1904402[iParam0];
	MISC::SET_BIT(&Variable, iParam1);
	Global_1904402[iParam0] = Variable;
	return;
}

BOOL func_55(var uParam0) // Position - 0x15DB
{
	return false;
}

void func_56(var uParam0) // Position - 0x15E4
{
	if (!func_102(uParam0->f_2))
		return;

	switch (func_103(uParam0))
	{
		case 0:
			break;
	
		case 1:
			if (func_14(uParam0))
			{
				func_104(uParam0);
				func_28(4);
				func_28(2);
			}
			break;
	
		case 2:
			if (func_14(uParam0))
			{
				func_104(uParam0);
				func_17(79, true);
				func_28(4);
				func_28(2);
			}
			break;
	}

	return;
}

void func_57(var uParam0) // Position - 0x165B
{
	func_105(uParam0);
	return;
}

void func_58(var uParam0) // Position - 0x1669
{
	Vehicle EntityIndex;
	int num;
	int flags;
	int flags2;

	EntityIndex = uParam0->f_3;
	num = uParam0->f_2;

	if (num < 0 || num >= 32)
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(EntityIndex))
		return;

	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(EntityIndex))
		return;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(EntityIndex, false, false))
		return;

	flags2 = 0;
	AITRANSPORT::_GET_TRANSPORT_USAGE_FLAGS(EntityIndex, &flags);

	if (Global_1289643[num /*19*/].f_8 & 1 != 0)
	{
		if (!func_106(flags, 1))
			flags2 = 1;
	
		if (Global_1289643[num /*19*/].f_8 & 32 != 0)
			if (!func_106(flags, 32))
				flags2 = flags2 | 32;
	}
	else
	{
		if (Global_1289643[num /*19*/].f_8 & 2 != 0)
			if (!func_106(flags, 2))
				flags2 = flags2 | 2;
	
		if (Global_1289643[num /*19*/].f_8 & 4 != 0)
			if (!func_106(flags, 4))
				flags2 = flags2 | 4;
	
		if (Global_1289643[num /*19*/].f_8 & 8 != 0)
			if (!func_106(flags, 8))
				flags2 = flags2 | 8;
	
		if (Global_1289643[num /*19*/].f_8 & 64 != 0)
			if (!func_106(flags, 64))
				flags2 = flags2 | 64;
	
		if (Global_1289643[num /*19*/].f_8 & 128 != 0)
			if (!func_106(flags, 128))
				flags2 = flags2 | 128;
	
		if (Global_1289643[num /*19*/].f_8 & 256 != 0)
			if (!func_106(flags, 256))
				flags2 = flags2 | 256;
	
		if (Global_1289643[num /*19*/].f_8 & 16 != 0)
			if (!func_106(flags, 16))
				flags2 = 16;
	
		if (Global_1289643[num /*19*/].f_8 & 512 != 0)
			if (!func_106(flags, 512))
				flags2 = flags2 | 512;
	
		if (func_106(flags, 1024))
			if (!func_106(flags, 1024))
				flags2 = flags2 | 1024;
	}

	if (flags2 != 0)
		AITRANSPORT::_SET_TRANSPORT_USAGE_FLAGS(EntityIndex, flags2);

	return;
}

void func_59(var uParam0) // Position - 0x1858
{
	Vehicle EntityIndex;
	Ped ped;
	var unk;
	int num;

	if (!func_107(uParam0))
		return;

	EntityIndex = uParam0->f_3;

	if (!ENTITY::DOES_ENTITY_EXIST(EntityIndex))
		return;

	ped = PLAYER::PLAYER_PED_ID();

	if (!func_108(EntityIndex, ped, &unk))
		return;

	func_109(EntityIndex);
	num = uParam0->f_2;

	if (Global_1289643[num /*19*/].f_8 & 16 != 0 || Global_1289642 & 32 != 0)
		if (func_16())
			func_17(80, true);
	else if (func_16())
		func_17(81, true);

	return;
}

void func_60(var uParam0) // Position - 0x18E3
{
	Vehicle EntityIndex;
	Ped EntityIndex2;
	Player playerOwnerOfVehicle;
	Ped playerPed;
	int i;
	Ped EntityIndex3;
	Entity vehicleOwner;
	Ped pedIndexFromEntityIndex;

	EntityIndex = uParam0->f_3;

	if (!ENTITY::DOES_ENTITY_EXIST(EntityIndex))
		return;

	EntityIndex2 = PLAYER::PLAYER_PED_ID();

	if (!ENTITY::DOES_ENTITY_EXIST(EntityIndex2))
		return;

	playerOwnerOfVehicle = PLAYER::_GET_PLAYER_OWNER_OF_VEHICLE(EntityIndex);

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(playerOwnerOfVehicle))
		return;

	playerPed = PLAYER::GET_PLAYER_PED(playerOwnerOfVehicle);

	if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
		return;

	for (i = 0; i < 6; i = i + 1)
	{
		EntityIndex3 = uParam0->f_4[i];
	
		if (ENTITY::DOES_ENTITY_EXIST(EntityIndex3))
			func_110(playerPed, EntityIndex3);
	}

	vehicleOwner = VEHICLE::_GET_VEHICLE_OWNER(EntityIndex);

	if (ENTITY::IS_ENTITY_A_PED(vehicleOwner))
	{
		pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vehicleOwner);
	
		if (pedIndexFromEntityIndex == playerPed)
			return;
	}

	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(EntityIndex))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(EntityIndex);
		return;
	}

	VEHICLE::SET_PED_OWNS_VEHICLE(playerPed, EntityIndex);
	return;
}

void func_61(int iParam0) // Position - 0x19A7
{
	func_35(2, iParam0);
	return;
}

void func_62(int iParam0) // Position - 0x19B6
{
	func_35(3, iParam0);
	return;
}

BOOL func_63(var uParam0, var uParam1, var uParam2) // Position - 0x19C5
{
	return 0;
}

BOOL func_64(var uParam0, var uParam1, var uParam2) // Position - 0x19CE
{
	int num;

	num = uParam2->f_4;

	switch (uParam2->f_5)
	{
		case -1:
		case 0:
		case 2:
		case 4:
			return 0;
	}

	switch (num)
	{
		case 0:
		case 3:
			if (func_111(uParam0, uParam2))
			{
				func_112(uParam0);
				return 1;
			}
			break;
	
		case 1:
		case 2:
			if (func_111(uParam0, uParam2))
			{
				func_113(uParam0);
				return 1;
			}
			break;
	
		case 4:
			break;
	
		case 5:
			break;
	
		case 6:
			if (func_111(uParam0, uParam2))
				func_114(uParam0, uParam1);
			break;
	
		case 12:
			func_115(uParam0, uParam2, false);
			break;
	
		case 13:
			func_115(uParam0, uParam2, true);
			break;
	
		case 14:
			func_116(uParam0, uParam2);
			break;
	
		case 15:
			if (func_111(uParam0, uParam2))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
				{
					if (!func_66(uParam0->f_3))
					{
						TASK::_0x141BC64C8D7C5529(uParam0->f_3);
						TASK::_0xEBA2081E0A5F4D17(uParam0->f_3);
					}
				}
			}
			break;
	
		case 16:
			if (func_111(uParam0, uParam2))
			{
				func_13(uParam0, 4096);
				func_112(uParam0);
				return 1;
			}
			break;
	}

	return 0;
}

int func_65(Vehicle veParam0, int iParam1) // Position - 0x1B1B
{
	Ped pedInDraftHarness;

	pedInDraftHarness = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(veParam0, iParam1);

	if (ENTITY::IS_ENTITY_DEAD(pedInDraftHarness))
		return 1;

	return 0;
}

BOOL func_66(Vehicle veParam0) // Position - 0x1B3B
{
	int vehicleNumberOfPassengers;

	vehicleNumberOfPassengers = VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(veParam0);

	if (vehicleNumberOfPassengers > 0)
		return true;

	return false;
}

void func_67(int iParam0) // Position - 0x1B56
{
	int num;
	int BitIndex;

	if (!func_117(iParam0))
		return;

	num = iParam0 / 32;
	BitIndex = iParam0 % 32;
	MISC::CLEAR_BIT(&Global_1903838.f_496[num], BitIndex);
	return;
}

struct<4> func_68() // Position - 0x1B8A
{
	var unk;

	return unk;
}

BOOL func_69(Player plParam0, BOOL bParam1) // Position - 0x1B96
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_5)
		return true;

	if (Global_1048577)
		return true;

	if (Global_1572887.f_72.f_40 > 10)
		return true;

	if (!func_118(Global_1051268) && Global_1572887.f_8 & true != 0)
		return true;

	if (func_118(func_119()))
		if (!func_75(Global_1295666.f_149[Global_1295666], false, true) && func_120(plParam0, bParam1))
			return true;

	return false;
}

BOOL func_70(Player plParam0, Player plParam1) // Position - 0x1C26
{
	Player bitIndex;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam1))
		return false;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0))
		return false;

	bitIndex = plParam1;

	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), bitIndex))
		return false;

	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28306), bitIndex))
		return false;

	if (NETWORK::_0xFE53B1F8D43F19BF(plParam0, plParam1) == 2 || Global_1108965.f_34[bitIndex /*11*/].f_10)
		return true;

	return false;
}

BOOL func_71(int iParam0) // Position - 0x1C9A
{
	switch (iParam0)
	{
		case 7:
			return false;
	
		case 9:
			return false;
	
		case 10:
			return false;
	
		case 11:
			return false;
	
		case 12:
			return false;
	
		default:
		
	}

	return true;
}

int func_72(int iParam0) // Position - 0x1CE1
{
	switch (iParam0)
	{
		case 7:
			return 5;
	
		case 9:
			return 10;
	
		case 10:
			return 5;
	
		case 11:
			return 10;
	
		case 12:
			return 5;
	
		default:
		
	}

	return 0;
}

void func_73(Any* panParam0, var uParam1) // Position - 0x1D2A
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
		return;

	*panParam0 = 186;
	panParam0->f_1 = PLAYER::PLAYER_ID();
	panParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, panParam0, 8, 2, &uParam1);
	func_121(*panParam0);
	return;
}

float func_74(Player plParam0, BOOL bParam1) // Position - 0x1D6A
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

BOOL func_75(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1E0A
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

int func_76(Hash hParam0, BOOL bParam1, Hash hParam2) // Position - 0x1ED3
{
	if (!func_122(hParam0, 0))
		return 0;

	return func_123(hParam0, hParam2, true, bParam1, true, 0);
}

BOOL func_77(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x1EF7
{
	int num;
	BOOL flag;

	num = func_76(hParam0, false, hParam2) * iParam1;
	flag = false;
	num == 0;

	if (num >= 0)
		flag = func_124(num);

	return flag;
}

int func_78(Hash hParam0, char* sParam1, int iParam2, BOOL bParam3, BOOL bParam4, Hash hParam5) // Position - 0x1F26
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

	if (!func_122(hParam0, 0))
		return -1;

	if (func_125(hParam0) != joaat("fee"))
		return -1;

	if (func_126())
		bParam3 = true;

	unk = 15;

	if (hParam5 == -570078785 || hParam5 == -915411861)
	{
		cashBalance = func_123(hParam0, hParam5, true, false, true, joaat("currency_cash")) * iParam2;
		goldBarBalance = 0;
	
		if (cashBalance <= 0)
		{
			goldBarBalance = func_123(hParam0, hParam5, true, false, true, joaat("currency_gold_bar")) * iParam2;
		
			if (goldBarBalance <= 0)
				return -1;
		}
	
		if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(cashBalance, goldBarBalance))
			return -1;
	}
	else if (func_127(hParam0, hParam5, &unk, &num, true, false))
	{
		for (i = 0; i < num; i = i + 1)
		{
			num2 = unk[i /*2*/].f_1 * iParam2;
		
			if (!(func_128(unk[i /*2*/], false, bParam3, false) >= num2))
				return -1;
		}
	}
	else
	{
		return -1;
	}

	if (!bParam3 && func_129(false))
	{
		if (cashBalance > 0)
		{
			func_130(joaat("currency_cash"), cashBalance, -142743235, 0, false);
		}
		else if (goldBarBalance > 0)
		{
			func_130(joaat("currency_gold_bar"), goldBarBalance, -142743235, 0, false);
		}
		else if (func_131(hParam5))
		{
			for (i = 0; i < num; i = i + 1)
			{
				num2 = unk[i /*2*/].f_1 * iParam2;
				func_130(unk[i /*2*/], num2, -142743235, 0, false);
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
	num3 = func_132(joaat("spend"), &unk32, bParam4);

	if (num3 == -1)
	{
	}
	else
	{
		unk49.f_7 = -142743235;
		unk49.f_16 = -1;
		TEXT_LABEL_ASSIGN_STRING(&(unk49.f_12), sParam1, 32);
		func_133(num3, unk49);
	}

	return num3;
}

void func_79(int iParam0, int iParam1, BOOL bParam2) // Position - 0x2116
{
	char* str;

	str = func_134(iParam0);

	if (func_135(iParam0) && !bParam2)
		return;

	Global_1290271.f_11.f_755[iParam0] = func_136(MISC::VAR_STRING(2, str, iParam1), 10000, 0, 0, 0, true);
	return;
}

int func_80(int iParam0) // Position - 0x215B
{
	if (iParam0 == 255)
		return Global_1102813;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/];

	return 26;
}

BOOL func_81(int iParam0) // Position - 0x21A2
{
	if (func_34(32, iParam0))
		return true;

	return false;
}

BOOL func_82(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x21BA
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		if (!PED::IS_PED_INJURED(pedParam0))
		{
			if (esthParam1 == SCRIPT_TASK_DRIVE_BY && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(pedParam0))
				return true;
		
			if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true) == 0)
				return true;
		}
	}

	return false;
}

BOOL func_83(var uParam0) // Position - 0x2213
{
	return func_8(*uParam0, 64);
}

void func_84(var uParam0, BOOL bParam1) // Position - 0x2224
{
	if (bParam1 || !func_4(uParam0))
		func_44(uParam0);

	return;
}

void func_85(var uParam0, var uParam1) // Position - 0x2244
{
	return;
}

void func_86(var uParam0) // Position - 0x224C
{
	if (func_14(uParam0))
		func_17(70, true);

	return;
}

void func_87(var uParam0, float fParam1) // Position - 0x2264
{
	uParam0->f_1 = func_137() - fParam1;
	func_138(uParam0, 1);
	func_139(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

float func_88(var uParam0) // Position - 0x228A
{
	if (!func_4(uParam0))
		return uParam0->f_1;

	if (func_140(uParam0))
		return uParam0->f_2;

	return func_137() - uParam0->f_1;
}

Ped func_89(Vehicle veParam0, int iParam1) // Position - 0x22BF
{
	Ped pedInDraftHarness;

	pedInDraftHarness = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(veParam0, iParam1);
	!ENTITY::DOES_ENTITY_EXIST(pedInDraftHarness);
	ENTITY::IS_ENTITY_DEAD(pedInDraftHarness);
	return pedInDraftHarness;
}

BOOL func_90() // Position - 0x22E6
{
	return Global_1904402.f_8872 != -1;
}

BOOL func_91() // Position - 0x22F7
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return currentMessage != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(currentMessage) <= 4;
}

BOOL func_92(Any* panParam0, int iParam1, int iParam2) // Position - 0x2317
{
	return MISC::IS_BIT_SET(panParam0->[iParam1 / 31], iParam1 % 31);
}

BOOL func_93() // Position - 0x234E
{
	return Global_1072759.f_28644.f_23.f_3 != 0;
}

BOOL func_94() // Position - 0x2363
{
	if (!func_141())
		return false;

	return Global_1904402.f_8873;
}

BOOL func_95() // Position - 0x237E
{
	return Global_1896762.f_352;
}

BOOL func_96() // Position - 0x238D
{
	BOOL num;

	if (!func_141())
		return false;

	num = Global_1904402.f_8874;
	Global_1904402.f_8874 = 0;
	return num;
}

BOOL func_97(int iParam0, int iParam1) // Position - 0x23B4
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

BOOL func_98(int iParam0) // Position - 0x23CC
{
	if (func_100(iParam0, 4))
		return false;

	return true;
}

BOOL func_99(int iParam0) // Position - 0x23E3
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

BOOL func_100(int iParam0, int iParam1) // Position - 0x24AF
{
	return Global_1904402.f_33[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_101(int iParam0) // Position - 0x24C8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_102(int iParam0) // Position - 0x24DB
{
	if (func_34(4, iParam0))
		return true;

	return false;
}

int func_103(var uParam0) // Position - 0x24F2
{
	return func_142(uParam0, 1086324736, 1094713344, 1077936128, 1090519040);
}

void func_104(var uParam0) // Position - 0x2514
{
	if (func_14(uParam0))
		func_35(15, 3);

	return;
}

void func_105(var uParam0) // Position - 0x252C
{
	Ped pedInTransportSeat;
	Player playerIndexFromPed;
	Hash entityModel;
	Hash hash;

	if (!func_14(uParam0))
	{
		func_143(uParam0);
		return;
	}

	pedInTransportSeat = AITRANSPORT::_GET_PED_IN_TRANSPORT_SEAT(uParam0->f_3, -1);

	if (ENTITY::DOES_ENTITY_EXIST(pedInTransportSeat))
	{
		if (pedInTransportSeat == PLAYER::PLAYER_PED_ID())
		{
			func_143(uParam0);
			return;
		}
	}

	if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
	{
		if (func_102(uParam0->f_2))
			MAP::BLIP_ADD_MODIFIER(uParam0->f_1, -272772079);
		else
			MAP::BLIP_REMOVE_MODIFIER(uParam0->f_1, -272772079);
	
		if (!ENTITY::DOES_ENTITY_EXIST(pedInTransportSeat))
		{
			MAP::BLIP_REMOVE_MODIFIER(uParam0->f_1, -1380599892);
			MAP::BLIP_REMOVE_MODIFIER(uParam0->f_1, 453356795);
			return;
		}
	
		if (!PED::IS_PED_A_PLAYER(pedInTransportSeat))
		{
			MAP::BLIP_REMOVE_MODIFIER(uParam0->f_1, -1380599892);
			MAP::BLIP_REMOVE_MODIFIER(uParam0->f_1, 453356795);
			return;
		}
	
		playerIndexFromPed = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(pedInTransportSeat);
	
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(playerIndexFromPed))
		{
			MAP::BLIP_REMOVE_MODIFIER(uParam0->f_1, 453356795);
			return;
		}
	
		if (func_144(playerIndexFromPed, false))
		{
			MAP::BLIP_REMOVE_MODIFIER(uParam0->f_1, -1380599892);
			MAP::BLIP_ADD_MODIFIER(uParam0->f_1, 453356795);
		}
	
		return;
	}

	if (MAP::_DOES_ENTITY_HAVE_BLIP(uParam0->f_3))
		return;

	uParam0->f_1 = MAP::BLIP_ADD_FOR_ENTITY(768962966, uParam0->f_3);
	entityModel = ENTITY::GET_ENTITY_MODEL(uParam0->f_3);

	if (STREAMING::IS_MODEL_VALID(entityModel))
	{
		hash = func_145(entityModel);
	
		if (func_122(hash, 0))
			MAP::_SET_BLIP_NAME(uParam0->f_1, MISC::VAR_STRING(0, func_146(hash, false)));
		else
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_1, func_147(2));
	}
	else
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_1, func_147(2));
	}

	MAP::BLIP_ADD_MODIFIER(uParam0->f_1, 580546400);
	return;
}

BOOL func_106(int iParam0, int iParam1) // Position - 0x26C6
{
	return iParam0 && iParam1 != false;
}

BOOL func_107(var uParam0) // Position - 0x26D5
{
	Vehicle EntityIndex;
	Ped EntityIndex2;
	var unk;
	var gamerHandle;
	Player player;
	Player player2;
	Player player3;
	int num;
	int num2;
	var unk3;

	EntityIndex = uParam0->f_3;

	if (!ENTITY::DOES_ENTITY_EXIST(EntityIndex))
		return false;

	EntityIndex2 = PLAYER::PLAYER_PED_ID();

	if (!ENTITY::DOES_ENTITY_EXIST(EntityIndex2))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(EntityIndex2))
		return false;

	if (!func_108(EntityIndex, EntityIndex2, &unk))
		return false;

	gamerHandle = { uParam0->f_11 };
	player = uParam0->f_2;
	player2 = PLAYER::PLAYER_ID();

	if (player == player2)
		return false;

	player3 = player;
	num = func_148(player3);

	if (func_149(player3))
	{
		num2 = func_150(num);
	
		if (num2 == 15 || num2 == 10)
			if (func_151(num, EntityIndex))
				return true;
	}

	if (Global_1289643[player3 /*19*/].f_8 & 16 != 0 || Global_1289642 & 32 != 0)
		return false;

	if (Global_1289643[player3 /*19*/].f_8 & 2 != 0 || Global_1289642 & 4 != 0)
		if (GANG::NETWORK_GET_GANG_ID(player2) == GANG::NETWORK_GET_GANG_ID(player))
			return false;

	unk3 = { func_152(player) };

	if (Global_1289643[player3 /*19*/].f_8 & 4 != 0 || Global_1289642 & 8 != 0)
		if (func_153(unk3, gamerHandle))
			return false;

	if (Global_1289643[player3 /*19*/].f_8 & 8 != 0 || Global_1289642 & 16 != 0)
		if (NETWORK::NETWORK_IS_FRIEND(&gamerHandle))
			return false;

	return true;
}

BOOL func_108(Vehicle veParam0, Ped pedParam1, var uParam2) // Position - 0x2847
{
	Ped pedInTransportSeat;
	int seatIndex;
	int i;
	int num;
	int num2;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return false;

	num = -1;
	num2 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(veParam0) - 1;

	for (i = num; i <= num2; i = i + 1)
	{
		seatIndex = i;
		pedInTransportSeat = AITRANSPORT::_GET_PED_IN_TRANSPORT_SEAT(veParam0, seatIndex);
	
		if (!ENTITY::DOES_ENTITY_EXIST(pedInTransportSeat))
		{
		}
		else if (pedInTransportSeat == pedParam1)
		{
			*uParam2 = seatIndex;
			return true;
		}
	}

	return false;
}

void func_109(Vehicle veParam0) // Position - 0x28B8
{
	Ped EntityIndex;
	var unk;
	var args;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false, false))
		return;

	EntityIndex = PLAYER::PLAYER_PED_ID();

	if (!ENTITY::DOES_ENTITY_EXIST(EntityIndex))
		return;

	if (ENTITY::IS_ENTITY_DEAD(EntityIndex))
		return;

	if (!func_108(veParam0, EntityIndex, &unk))
		return;

	if (AITRANSPORT::IS_PED_EXITING_TRANSPORT(EntityIndex, veParam0))
		return;

	args.f_5 = 1073741824;
	args.f_6 = 1;
	args.f_3 = EntityIndex;
	args.f_4 = veParam0;
	AITRANSPORT::TASK_EXIT_TRANSPORT(&args);
	return;
}

void func_110(Ped pedParam0, Ped pedParam1) // Position - 0x293F
{
	Ped activeAnimalOwner;
	Ped pedIndexFromEntityIndex;

	activeAnimalOwner = PED::_GET_ACTIVE_ANIMAL_OWNER(pedParam1);

	if (ENTITY::IS_ENTITY_A_PED(activeAnimalOwner))
	{
		pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(activeAnimalOwner);
	
		if (pedIndexFromEntityIndex == pedParam0)
			return;
	}

	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedParam1))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedParam1);
		return;
	}

	PED::SET_PED_OWNS_ANIMAL(pedParam0, pedParam1, false);
	return;
}

BOOL func_111(var uParam0, var uParam1) // Position - 0x2987
{
	if (uParam0->f_2 != uParam1->f_1)
		return false;

	return true;
}

void func_112(var uParam0) // Position - 0x299F
{
	if (!func_8(*uParam0, 4))
		func_13(uParam0, 4);

	return;
}

void func_113(var uParam0) // Position - 0x29BA
{
	if (!func_8(*uParam0, 4))
		func_13(uParam0, 2);

	return;
}

void func_114(var uParam0, var uParam1) // Position - 0x29D5
{
	if (func_4(&(uParam0->f_13)))
		func_5(&(uParam0->f_13));

	if (func_4(&(uParam0->f_16)))
		func_5(&(uParam0->f_16));

	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
		func_154(uParam0, 0f, 0f, 0f);

	if (!func_14(uParam0))
		return;

	if (func_34(4, uParam0->f_2))
		return;

	TELEMETRY::_TELEMETRY_PERSONAL_VEHICLE_WAGON(joaat("CALL"), &(uParam1->f_2), 0);
	func_67(100);
	func_155(4);
	return;
}

void func_115(var uParam0, var uParam1, BOOL bParam2) // Position - 0x2A4D
{
	Vehicle EntityIndex;
	Player player;
	Ped ped;
	Player player2;
	Player player3;
	BOOL flag;
	var unk;

	EntityIndex = uParam0->f_3;

	if (!ENTITY::DOES_ENTITY_EXIST(EntityIndex))
		return;

	if (ENTITY::IS_ENTITY_DEAD(EntityIndex))
		return;

	player = PLAYER::PLAYER_ID();
	ped = PLAYER::PLAYER_PED_ID();
	player2 = uParam0->f_2;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player2))
		return;

	player3 = uParam1->f_1;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player3))
		return;

	if (player2 != player3)
		return;

	flag = false;

	if (player == player2)
		flag = true;

	if (flag && !bParam2)
		return;

	if (!func_108(EntityIndex, ped, &unk))
		return;

	func_156(EntityIndex);

	if (!flag)
		if (func_16())
			func_17(80, true);

	return;
}

void func_116(var uParam0, var uParam1) // Position - 0x2AF8
{
	Player player;
	Ped ped;
	Vehicle EntityIndex;
	Player player2;
	var unk;

	player = PLAYER::PLAYER_ID();
	ped = PLAYER::PLAYER_PED_ID();
	EntityIndex = uParam0->f_3;

	if (!ENTITY::DOES_ENTITY_EXIST(EntityIndex))
		return;

	player2 = uParam1->f_1;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player2))
		return;

	if (player == player2)
		return;

	if (EntityIndex != PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(player2))
		return;

	if (!func_108(EntityIndex, ped, &unk))
		return;

	func_156(EntityIndex);
	return;
}

BOOL func_117(int iParam0) // Position - 0x2B61
{
	if (iParam0 <= -1 || iParam0 >= 117)
		return false;

	return true;
}

BOOL func_118(var uParam0, var uParam1) // Position - 0x2B80
{
	if (!func_157(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_158(uParam0))
		return false;

	return true;
}

struct<2> func_119() // Position - 0x2BB4
{
	if (Global_1205804.f_129 <= 0)
		return func_159(0);

	if (Global_1205804.f_130 < 0 || Global_1205804.f_131 == 0)
		return func_159(0);

	return Global_1205804[Global_1205804.f_130 /*4*/].f_1;
}

BOOL func_120(Player plParam0, BOOL bParam1) // Position - 0x2BFF
{
	Player player;

	if (!Global_1149432.f_5568)
		return false;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return false;

	player = plParam0;

	if (player < 0 || player >= 32)
		return false;

	if (func_106(Global_1101558[player /*38*/].f_35, 2))
		return false;

	if (bParam1)
		if (func_160())
			return true;

	if (func_161(Global_1056554[player /*491*/].f_2))
		return true;

	return false;
}

void func_121(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x2C7B
{
	return;
}

BOOL func_122(Hash hParam0, int iParam1) // Position - 0x2C83
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

// Unhandled jump detected. Output should be considered invalid
int func_123(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x2C9D
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (bParam4 && hParam1 == -915411861 && func_162(hParam0, 59806960))
		hParam1 = 59806960;

	if (func_163(hParam0) || func_164(hParam0, 1077060302))
		return func_166(func_165(hParam0, false), hParam1, bParam3, true);

	if (!func_127(hParam0, hParam1, &unk, &num, bParam2, bParam3))
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

BOOL func_124(int iParam0) // Position - 0x2D8D
{
	if (iParam0 < 0)
		return false;

	if (func_167() == 0)
		return func_168(iParam0);

	return iParam0 <= func_169();
}

int func_125(Hash hParam0) // Position - 0x2DBA
{
	var unk;

	if (!func_122(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk))
		return 0;

	return unk.f_2;
}

BOOL func_126() // Position - 0x2DE5
{
	if (INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) != 3)
		return false;

	return INVENTORY::_INVENTORY_IS_PLAYER_INVENTORY_MIRRORING_TRANSACTIONS();
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_127(Hash hParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x2E01
{
	int i;

	*uParam3 = 0;

	if (*uParam2 < 15)
		return false;

	if (!func_122(hParam0, 0))
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
		func_170(hParam0, hParam1, uParam2, *uParam3);

	return true;
}

int func_128(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2E91
{
	int inventoryItemCountWithItemid;
	int num;
	Hash AmmoType;
	var guid;

	inventoryItemCountWithItemid = 0;

	if (!func_122(hParam0, 0))
		return 0;

	num = func_125(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		AmmoType = func_171(hParam0, 1);
	
		if (AmmoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, AmmoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_172(hParam0, false);
	}

	if (func_173(hParam0, joaat("DEFAULT")) != 0)
	{
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_174(bParam2), hParam0, bParam3);
	}
	else
	{
		guid = { func_175(hParam0, bParam2) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_174(bParam2), &guid, bParam3);
	}

	return inventoryItemCountWithItemid;
}

BOOL func_129(BOOL bParam0) // Position - 0x2F53
{
	if (func_167() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_174(bParam0));
}

BOOL func_130(Hash hParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x2F71
{
	int num;
	var unk;
	var unk6;

	if (!func_122(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	num = func_173(hParam0, joaat("DEFAULT"));

	if (num != 0)
		return func_176(hParam0, iParam1, iParam2, iParam3, bParam4);

	unk = { func_177(hParam0, bParam4, 0) };
	unk6 = { func_178(hParam0, unk, unk.f_4, bParam4) };
	return func_179(hParam0, &unk6, &unk, iParam1, iParam2, iParam3, bParam4);
}

BOOL func_131(Hash hParam0) // Position - 0x2FE9
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

int func_132(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x3016
{
	int num;

	if (hParam0 == 0)
		return -1;

	if (!func_180(hParam0, panParam1))
		return -1;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_182(func_181(num, hParam0, panParam1), num, panParam1);
	else
		return func_183(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 17), num, panParam1);

	return -1;
}

void func_133(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17) // Position - 0x3080
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

char* func_134(int iParam0) // Position - 0x30FE
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

BOOL func_135(int iParam0) // Position - 0x32A2
{
	return func_184(Global_1290271.f_11.f_755[iParam0]);
}

int func_136(const char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x32BB
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

float func_137() // Position - 0x32F6
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_138(var uParam0, int iParam1) // Position - 0x3328
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_139(var uParam0, int iParam1) // Position - 0x3339
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_140(var uParam0) // Position - 0x334E
{
	return func_36(*uParam0, 2);
}

BOOL func_141() // Position - 0x335E
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

int func_142(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x3372
{
	var unk;
	var unk2;
	Vector3 vector;
	int NetworkId;
	Player playerOwnerOfNetworkId;

	vector = { func_185(uParam0) };

	if (!func_186(uParam0))
		return 2;

	if (func_14(uParam0))
	{
		if (func_187(uParam0, &unk, iParam2) || BUILTIN::VDIST(vector, ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false)) <= iParam3)
			return 1;
	
		if (func_188(uParam0, 1092616192))
			return 2;
	}

	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
	{
		if (func_189(uParam0, vector, &unk2))
		{
			if (!func_154(uParam0, unk2))
			{
			}
			else
			{
				vector = { unk2 };
			}
		}
	
		if (_IS_NULL_VECTOR(vector))
			if (func_191(uParam0, 1092616192) == 2)
				return 2;
		else if (!TASK::_0x583AE9AF9CEE0958(uParam0->f_3, vector))
			TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION_2(uParam0->f_3, vector, iParam1, 1147928963, 2, iParam4, iParam3);
		else if (func_191(uParam0, 1092616192) == 2)
			return 2;
	}
	else
	{
		NetworkId = NETWORK::VEH_TO_NET(uParam0->f_3);
	
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(NetworkId))
		{
		}
		else
		{
			playerOwnerOfNetworkId = NETWORK::_NETWORK_GET_PLAYER_OWNER_OF_NETWORK_ID(NetworkId);
		
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(playerOwnerOfNetworkId))
				if (func_191(uParam0, 1092616192) == 2)
					return 2;
		}
	}

	return 0;
}

void func_143(var uParam0) // Position - 0x34AB
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
		MAP::REMOVE_BLIP(&(uParam0->f_1));

	return;
}

BOOL func_144(Player plParam0, BOOL bParam1) // Position - 0x34C6
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

Hash func_145(Hash hParam0) // Position - 0x35C8
{
	if (!STREAMING::IS_MODEL_VALID(hParam0))
		return 0;

	switch (hParam0)
	{
		case joaat("wagonarmoured01x"):
			return joaat("coach_bounty_hunter");
	
		case joaat("huntercart01"):
			return joaat("coach_trader");
	
		default:
		
	}

	return 0;
}

Hash func_146(Hash hParam0, BOOL bParam1) // Position - 0x3606
{
	Hash hash;

	if (!func_122(hParam0, 0))
		return 0;

	hash = func_192(hParam0, bParam1);

	if (hash != 0)
		return hash;

	return hParam0;
}

char* func_147(int iParam0) // Position - 0x3634
{
	var unk;

	if (iParam0 == -1)
		return "";

	func_193();
	Global_1903838.f_106.f_2 = 1292413058;
	Global_1903838.f_106.f_3 = func_194(iParam0);

	if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&unk, &(Global_1903838.f_106)))
		return "";

	return func_195(unk);
}

int func_148(Player plParam0) // Position - 0x3688
{
	return Global_1283730[plParam0 /*2*/];
}

BOOL func_149(Player plParam0) // Position - 0x3698
{
	return Global_1283730[plParam0 /*2*/].f_1;
}

int func_150(int iParam0) // Position - 0x36AA
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

BOOL func_151(int iParam0, Vehicle veParam1) // Position - 0x3BC7
{
	int num;
	var unk;
	float num2;
	float num3;

	num = func_150(iParam0);
	unk = { Global_1051832.f_92[num /*75*/].f_3 };

	if (iParam0 == 154)
		unk = { func_196(PLAYER::GET_PLAYER_INDEX()) };

	if (_IS_NULL_VECTOR(unk))
		return false;

	num2 = func_197(iParam0);

	if (num == 10 || num == 15 || num == 29)
	{
		num3 = func_198(veParam1, unk, false);
	
		if (num3 < num2)
			return true;
	}
	else if (num == 2)
	{
		if (func_198(veParam1, unk, false) < num2)
			return true;
	}

	return false;
}

struct<2> func_152(Player plParam0) // Position - 0x3C69
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle);
	return gamerHandle;
}

BOOL func_153(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x3C7D
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

BOOL func_154(var uParam0, float fParam1, float fParam2, float fParam3) // Position - 0x3CD9
{
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
		return false;

	if (!DECORATOR::DECOR_SET_INT(uParam0->f_3, "SummonPosXY", func_199(fParam1)))
		return false;

	if (!DECORATOR::DECOR_SET_FLOAT(uParam0->f_3, "SummonPosZ", fParam1.f_2))
		return false;

	return true;
}

void func_155(int iParam0) // Position - 0x3D26
{
	int num;

	num = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	Global_1289643[num /*19*/].f_10 = Global_1289643[num /*19*/].f_10 || iParam0;
	return;
}

void func_156(Vehicle veParam0) // Position - 0x3D4B
{
	Ped EntityIndex;
	var unk;
	var args;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(veParam0))
		return;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false, false))
		return;

	EntityIndex = PLAYER::PLAYER_PED_ID();

	if (!ENTITY::DOES_ENTITY_EXIST(EntityIndex))
		return;

	if (ENTITY::IS_ENTITY_DEAD(EntityIndex))
		return;

	if (!func_108(veParam0, EntityIndex, &unk))
		return;

	args.f_5 = 1073741824;
	args.f_6 = 1;
	args.f_3 = EntityIndex;
	args.f_4 = veParam0;
	AITRANSPORT::TASK_EXIT_TRANSPORT(&args);
	return;
}

BOOL func_157(int iParam0) // Position - 0x3DD0
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

int func_158(int iParam0) // Position - 0x3E0F
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

struct<2> func_159(int iParam0) // Position - 0x3EA5
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

BOOL func_160() // Position - 0x3EB9
{
	if (Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE"))
		return true;

	return false;
}

BOOL func_161(int iParam0) // Position - 0x3EE6
{
	int i;

	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 7:
			if (Global_1572887.f_7)
			{
				if (func_200(Global_1108965.f_775.f_28))
					if (!Global_1108965.f_775.f_19)
						return false;
			
				if (!func_201())
					return true;
			}
			else if (Global_1048579 && !Global_1572887.f_10)
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(Global_1295666.f_149[Global_1295666]))
					return true;
			
				if (func_92(&(Global_1102813.f_4), 1, 5))
					return true;
			}
			break;
	
		case 6:
			for (i = 0; i <= 7; i = i + 1)
			{
				if (Global_1206497.f_78[i /*20*/].f_2 && Global_1206497.f_78[i /*20*/].f_1 == 2)
					return true;
			}
			break;
	}

	return false;
}

BOOL func_162(Hash hParam0, Hash hParam1) // Position - 0x3FD8
{
	if (!func_122(hParam0, 0))
		return false;

	if (func_163(hParam0) || func_164(hParam0, 1077060302))
		return func_202(func_165(hParam0, false), hParam1, false);

	return ITEMDATABASE::_0xDEE7B3C76ED664BE(hParam0, hParam1) > 0;
}

BOOL func_163(Hash hParam0) // Position - 0x4026
{
	if (func_164(hParam0, 75135761))
		return true;

	return false;
}

BOOL func_164(Hash hParam0, Hash hParam1) // Position - 0x4041
{
	if (!func_122(hParam0, 0))
		return func_204(func_203(hParam0), hParam1);

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, 1120943070))
		return true;

	return false;
}

int func_165(Hash hParam0, BOOL bParam1) // Position - 0x4082
{
	var unk;

	if (!func_122(hParam0, 0))
		return func_205(func_203(hParam0), bParam1);

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk) || unk.f_5 == 0)
		return 0;

	if (bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(unk.f_5))
		return 0;

	return unk.f_5;
}

int func_166(int iParam0, Hash hParam1, BOOL bParam2, BOOL bParam3) // Position - 0x40DA
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (!func_206(iParam0, hParam1, &unk, &num, bParam2, bParam3))
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

int func_167() // Position - 0x416E
{
	return Global_1572887.f_14;
}

BOOL func_168(int iParam0) // Position - 0x417C
{
	if (iParam0 < 0)
		return false;

	if (iParam0 == 0)
		return true;

	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iParam0, 0);
}

int func_169() // Position - 0x419F
{
	if (func_167() == 0)
		return MONEY::_NETWORK_GET_CASH_BALANCE();

	return MONEY::_MONEY_GET_CASH_BALANCE();
}

void func_170(Hash hParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0x41BA
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
		
			if (uParam2->[i /*2*/].f_1 == 0 && func_207(uParam2->[i /*2*/]) != -829303394)
				uParam2->[i /*2*/].f_1 = 1;
		}
	}

	return;
}

Hash func_171(Hash hParam0, int iParam1) // Position - 0x4390
{
	int num;
	var unk;
	Hash hash;

	if (!func_122(hParam0, 0))
		return 0;

	num = func_125(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_164(hParam0, 1399091007))
	{
		func_208(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

int func_172(Hash hParam0, BOOL bParam1) // Position - 0x440A
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_209(hParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };

	if (bParam1)
		func_211(&unk, func_210(false));

	if (!func_212(&unk, &num, &num2, false))
		return 0;

	func_213(num);
	return num2;
}

int func_173(Hash hParam0, int iParam1) // Position - 0x4469
{
	if (iParam1 == 0)
		return 0;

	if (func_214(func_203(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, iParam1);
}

int func_174(BOOL bParam0) // Position - 0x4495
{
	if (func_167() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

struct<4> func_175(Hash hParam0, BOOL bParam1) // Position - 0x44D6
{
	var unk;

	unk = { func_177(hParam0, bParam1, 0) };
	return func_178(hParam0, unk, unk.f_4, bParam1);
}

BOOL func_176(Hash hParam0, int iParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0x44FB
{
	int num;
	var unk;
	int num2;
	int i;
	int num3;
	var unk62;
	int num4;

	if (func_215(hParam0))
		return 0;

	if (iParam1 <= 0)
		return 0;

	num = func_173(hParam0, joaat("DEFAULT"));

	if (num == 0)
		return 0;

	if (!func_129(bParam4))
	{
		unk = 10;
	
		if (num == 0)
			return 0;
	
		if (!func_216(&unk, &num2, hParam0, num, iParam1, true) || num2 < 1)
			return 0;
	
		num3 = -1;
		unk62.f_9 = 1;
		unk62.f_11 = -1591664384;
	
		for (i = 0; i < num2; i = i + 1)
		{
			unk62 = { func_217(hParam0, &unk[i /*6*/]) };
			unk62.f_12 = hParam2;
			num3 = func_132(joaat("use"), &unk62, true);
		
			if (num3 == -1)
				return 0;
		}
	
		if (num3 != -1)
		{
			num4.f_7 = -142743235;
			num4.f_16 = -1;
			num4 = iParam3;
			num4.f_7 = hParam2;
			func_133(num3, num4);
			return 1;
		}
	
		return 0;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_174(bParam4), hParam0, iParam1, hParam2))
		return 0;

	return 1;
}

struct<5> func_177(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x4613
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_218(bParam1) };
	unk.f_4 = 1084182731;
	num = func_125(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_223(hParam0, -1823706425))
			{
				unk = { func_178(joaat("kit_camp"), unk, 1084182731, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_223(hParam0, -1483207246))
			{
				unk = { func_178(joaat("WARDROBE"), unk, 1034665895, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_178(joaat("kit_camp"), unk, 1084182731, bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1311702610))
			{
				unk.f_4 = -1311702610;
			}
			else if (func_223(hParam0, -1653629781))
			{
				unk = { func_178(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			break;
	
		case joaat("coach"):
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = -1591664384;
			unk = { func_222(bParam1) };
		
			switch (func_207(hParam0))
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
			unk = { func_178(joaat("WARDROBE"), unk, 1034665895, bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_210(bParam1) };
		
			if (iParam2 && func_219(hParam0, true))
			{
				unk6.f_9 = -1591664384;
			
				if (!func_220(hParam0, &unk, 1728382685, false, false))
					unk.f_4 = 1728382685;
				else if (!func_220(hParam0, &unk, -649335959, false, false))
					unk.f_4 = -649335959;
				else if (func_221(hParam0, &unk6, 1728382685))
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
			
				if (!func_224(unk, &unk28, bParam1, false, -1))
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
			else if (func_223(hParam0, -1653629781))
			{
				unk = { func_178(1384535894, unk, 1784584921, bParam1) };
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

struct<4> func_178(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x4987
{
	var outGuid;

	if (!func_122(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_174(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_179(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, int iParam5, BOOL bParam6) // Position - 0x49B8
{
	var unk;
	int num;
	var unk15;
	int num2;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_215(hParam0))
		return false;

	unk.f_9 = -1591664384;

	if (!func_224(*panParam1, &unk, bParam6, false, -1))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_129(bParam6))
	{
		num = -1;
	
		if (unk.f_13)
		{
		}
		else if (func_167() == 0)
		{
			unk15.f_9 = 1;
			unk15.f_11 = -1591664384;
			unk15.f_8 = hParam0;
			unk15 = { *panParam1 };
			unk15.f_4 = { *uParam2 };
			unk15.f_11 = uParam2->f_4;
			unk15.f_9 = iParam3;
			unk15.f_12 = hParam4;
			num = func_132(joaat("use"), &unk15, true);
		
			if (num != -1)
			{
				num2.f_7 = -142743235;
				num2.f_16 = -1;
				num2 = iParam5;
				num2.f_7 = hParam4;
				func_133(num, num2);
			}
		}
	
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_174(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

BOOL func_180(Hash hParam0, Any* panParam1) // Position - 0x4AD6
{
	int num;

	num = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(hParam0, panParam1);

	if (hParam0 == joaat("use"))
		if (func_225(panParam1->f_8, hParam0, num, 2048) || func_225(panParam1->f_8, hParam0, num, 32768) || func_225(panParam1->f_8, hParam0, num, 65536))
			return false;
	else if (hParam0 == 1168099063)
		if (func_225(panParam1->f_8, hParam0, num, 4) || func_225(panParam1->f_8, hParam0, num, 256) || func_225(panParam1->f_8, hParam0, num, 65536) || func_225(panParam1->f_8, hParam0, num, 131072))
			return false;
	else if (hParam0 == joaat("spend"))
		if (func_225(panParam1->f_8, hParam0, num, 1) || func_225(panParam1->f_8, hParam0, num, 8) || func_225(panParam1->f_8, hParam0, num, 65536) || func_225(panParam1->f_8, hParam0, num, 32))
			return false;
	else if (hParam0 == joaat("Sell"))
		if (func_225(panParam1->f_8, hParam0, num, 1) || func_225(panParam1->f_8, hParam0, num, 16) || func_225(panParam1->f_8, hParam0, num, 2) || func_225(panParam1->f_8, hParam0, num, 65536))
			return false;
	else if (func_225(panParam1->f_8, hParam0, num, 8) || func_225(panParam1->f_8, hParam0, num, 4096) || func_225(panParam1->f_8, hParam0, num, 256) || func_225(panParam1->f_8, hParam0, num, 65536))
		return false;

	return true;
}

BOOL func_181(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x4CAC
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 17, panParam2, 0);
}

int func_182(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0x4CC3
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_226(iParam1, 1, 0, 0);
			return iParam1;
		}
	
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}

	func_226(iParam1, 2, 0, 0);
	return -1;
}

int func_183(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0x4D0C
{
	if (bParam0)
	{
		func_226(iParam1, 1, 0, 0);
		return iParam1;
	}

	return -1;
}

BOOL func_184(int iParam0) // Position - 0x4D28
{
	if (iParam0 == 0)
		return false;

	return UIFEED::_UI_FEED_GET_MESSAGE_STATE(iParam0) == 4;
}

Vector3 func_185(var uParam0) // Position - 0x4D42
{
	int _int;
	var unk;

	_int = DECORATOR::DECOR_GET_INT(uParam0->f_3, "SummonPosXY");

	if (_int == 0)
		return 0f, 0f, 0f;

	unk = { func_227(_int) };
	unk.f_2 = DECORATOR::DECOR_GET_FLOAT(uParam0->f_3, "SummonPosZ");
	return unk;
}

BOOL func_186(var uParam0) // Position - 0x4D82
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
		return false;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_2))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(uParam0->f_2)))
		return false;

	return true;
}

BOOL func_187(var uParam0, var uParam1, int iParam2) // Position - 0x4DCE
{
	Ped playerPed;

	*uParam1 = 0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_2))
		return true;

	playerPed = PLAYER::GET_PLAYER_PED(uParam0->f_2);

	if (!ENTITY::DOES_ENTITY_EXIST(playerPed) || ENTITY::IS_ENTITY_DEAD(playerPed))
		return true;

	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(playerPed, true, false), ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false)) < iParam2)
		return true;

	if (func_66(uParam0->f_3))
		return true;

	return false;
}

BOOL func_188(var uParam0, int iParam1) // Position - 0x4E3E
{
	Ped playerPed;
	int num;

	playerPed = PLAYER::GET_PLAYER_PED(uParam0->f_2);

	if (ENTITY::DOES_ENTITY_EXIST(playerPed))
	{
		num = func_228(uParam0->f_3, playerPed, 1060437492);
	
		if (num == 1 && ENTITY::GET_ENTITY_SPEED(uParam0->f_3) > 0f)
			if (!func_4(&(uParam0->f_16)))
				func_44(&(uParam0->f_16));
		else if (func_4(&(uParam0->f_16)))
			func_5(&(uParam0->f_16));
	}

	if (!func_4(&(uParam0->f_16)))
		return false;

	if (!func_45(&(uParam0->f_16), iParam1))
		return false;

	return true;
}

BOOL func_189(var uParam0, Vector3 vParam1, var uParam2, var uParam3, Vector3* pvParam4) // Position - 0x4ECD
{
	var unk;

	if (!func_229(uParam0->f_2, uParam0->f_3, pvParam4, &unk))
		return false;

	if (BUILTIN::VDIST(*pvParam4, vParam1) >= 10f)
		return true;

	if (!TASK::_0x583AE9AF9CEE0958(uParam0->f_3, vParam1))
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false), vParam1) > 5f)
			return true;

	return false;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x4F32
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

int func_191(var uParam0, int iParam1) // Position - 0x4F5C
{
	if (ENTITY::GET_ENTITY_SPEED(uParam0->f_3) == 0f)
		if (!func_4(&(uParam0->f_13)))
			func_44(&(uParam0->f_13));
		else if (func_230(&(uParam0->f_13), iParam1))
			return 2;
	else if (func_4(&(uParam0->f_13)))
		func_5(&(uParam0->f_13));

	return 0;
}

Hash func_192(Hash hParam0, BOOL bParam1) // Position - 0x4FB0
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

void func_193() // Position - 0x5052
{
	Global_1903838.f_106 = Global_1072759.f_28418[49 /*4*/].f_3;
	Global_1903838.f_106.f_1 = 0;
	Global_1903838.f_106.f_2 = 0;
	Global_1903838.f_106.f_3 = 0;
	Global_1903838.f_106.f_4 = 0;
	return;
}

int func_194(int iParam0) // Position - 0x5091
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

char* func_195(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x5104
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

Vector3 func_196(Player plParam0) // Position - 0x5118
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false, false);
}

float func_197(int iParam0) // Position - 0x512C
{
	int num;

	num = func_150(iParam0);

	switch (num)
	{
		case 2:
			return 75f;
	
		case 10:
			return 10f;
	
		case 15:
			if (iParam0 == 63)
				return 40f;
			else
				return 25f;
			break;
	
		case 29:
			return 70f;
	}

	return 10f;
}

float func_198(Vehicle veParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x5196
{
	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(veParam0, false, false), vParam1, bParam4);
}

BOOL func_199(float fParam0, var uParam1, var uParam2) // Position - 0x51BE
{
	BOOL flag;

	flag = BUILTIN::ROUND(MISC::ABSF(fParam0)) & 32767 || BUILTIN::SHIFT_LEFT(BUILTIN::ROUND(MISC::ABSF(fParam0.f_1)) & 32767, 15);

	if (fParam0 > 0f)
		flag = flag | 1073741824;

	if (fParam0.f_1 > 0f)
		flag = flag | -2147483648;

	return flag;
}

BOOL func_200(int iParam0) // Position - 0x5213
{
	if (iParam0 == 1 || iParam0 == 2 || iParam0 == 3)
		return true;

	return false;
}

BOOL func_201() // Position - 0x523B
{
	if (Global_1572887.f_72.f_40 >= 10 && Global_1572887.f_72.f_40 <= 14)
		return true;

	return false;
}

BOOL func_202(int iParam0, Hash hParam1, BOOL bParam2) // Position - 0x5266
{
	if (!func_231(iParam0))
		return false;

	if (ITEMDATABASE::_0xF540239F9937033B(iParam0, hParam1) == 0)
		return false;

	if (bParam2)
		return !func_232(iParam0, hParam1);

	return true;
}

Hash func_203(Hash hParam0) // Position - 0x529E
{
	return hParam0;
}

BOOL func_204(Hash hParam0, Hash hParam1) // Position - 0x52A8
{
	if (!func_214(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, 1120943070))
		return 1;

	return 0;
}

int func_205(Hash hParam0, BOOL bParam1) // Position - 0x52DE
{
	int num;

	if (!func_214(hParam0, 2))
		return 0;

	num = 0;

	if (num != 0 && bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(num))
		return 0;

	return num;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_206(int iParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x5317
{
	int i;

	*uParam3 = 0;

	if (*uParam2 < 15)
		return false;

	if (!func_231(iParam0))
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
		func_233(iParam0, hParam1, uParam2, *uParam3);

	return true;
}

int func_207(Hash hParam0) // Position - 0x53A6
{
	var unk;

	if (!func_122(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk))
		return 0;

	return unk.f_1;
}

void func_208(Hash hParam0, var uParam1, var uParam2) // Position - 0x53D1
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

struct<18> func_209(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x55DD
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

struct<4> func_210(BOOL bParam0) // Position - 0x56BB
{
	int num;

	num = func_174(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_178(923904168, func_218(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_178(923904168, func_218(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_178(923904168, func_218(bParam0), -740156546, false);
}

void func_211(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x575C
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_212(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x5777
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_174(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

int func_213(int iParam0) // Position - 0x579C
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

BOOL func_214(Hash hParam0, int iParam1) // Position - 0x57BD
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

BOOL func_215(Hash hParam0) // Position - 0x57D7
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

BOOL func_216(Any anParam0, var uParam1, Hash hParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x57ED
{
	*uParam1 = 0;

	if (iParam4 < 1)
		return false;
	else if (*anParam0 != 10)
		return false;

	if (iParam3 == 0)
	{
		iParam3 = func_173(hParam2, joaat("DEFAULT"));
	
		if (iParam3 == 0)
			return false;
	}

	if (!NETSHOPPING::_0xD1555FBC96C88444(hParam2, iParam3, iParam4, anParam0, 10))
		return false;

	if (!func_234(anParam0, uParam1, iParam4, bParam5))
		return false;

	return true;
}

struct<17> func_217(Hash hParam0, var uParam1) // Position - 0x585A
{
	var unk;

	unk.f_9 = 1;
	unk.f_11 = -1591664384;
	unk = { func_178(hParam0, *uParam1, uParam1->f_4, true) };
	unk.f_4 = { *uParam1 };
	unk.f_8 = hParam0;
	unk.f_9 = uParam1->f_5;
	unk.f_11 = uParam1->f_4;
	return unk;
}

struct<4> func_218(BOOL bParam0) // Position - 0x58AD
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_174(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_178(joaat("character"), func_68(), -1591664384, bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_178(joaat("character"), func_68(), -1591664384, false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_178(joaat("character"), func_68(), -1591664384, bParam0);
}

int func_219(Hash hParam0, BOOL bParam1) // Position - 0x594D
{
	if (func_207(hParam0) == 1779021115)
		return 0;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_235();
		else
			return 1;

	return 0;
}

BOOL func_220(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x5984
{
	return func_236(hParam0, *uParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_221(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x599F
{
	var unk;

	if (func_237(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_222(BOOL bParam0) // Position - 0x59C0
{
	int num;

	num = func_174(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_178(271701509, func_218(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_178(271701509, func_218(bParam0), 12999093, false);
}

BOOL func_223(Hash hParam0, int iParam1) // Position - 0x5A2A
{
	Hash hash;
	int num;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || iParam1 == 0)
		return false;

	num = func_207(hParam0);

	if (num == -1015256479)
		return false;

	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(num);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(num, i, &hash))
			if (func_238(hParam0, iParam1, hash))
				return true;
	}

	return false;
}

BOOL func_224(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x5A97
{
	return func_239(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

BOOL func_225(var uParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0x5AAD
{
	if (func_106(iParam2, iParam3))
		return true;

	return false;
}

void func_226(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x5AC5
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

	func_240(iParam0, iParam1, iParam2, iParam3);
	return;
}

Vector3 func_227(int iParam0) // Position - 0x5B63
{
	float num;
	int value;
	int value2;

	value = iParam0 & 32767;
	value2 = BUILTIN::SHIFT_RIGHT(iParam0, 15) & 32767;
	num = BUILTIN::TO_FLOAT(value);
	num.f_1 = BUILTIN::TO_FLOAT(value2);

	if (iParam0 & 1073741824 == 0)
		num = num * -1f;

	if (iParam0 & -2147483648 == 0)
		num.f_1 = num.f_1 * -1f;

	return num;
}

int func_228(Entity eParam0, Ped pedParam1, int iParam2) // Position - 0x5BBF
{
	var entityCoords;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam1, false, false) };
	return func_241(eParam0, entityCoords, iParam2);
}

BOOL func_229(Player plParam0, Entity eParam1, Vector3* pvParam2, float* pfParam3) // Position - 0x5BDF
{
	Ped playerPed;
	Vector3 entityCoords;
	Vector3 entityCoords2;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return false;

	playerPed = PLAYER::GET_PLAYER_PED(plParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam1))
		return false;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(playerPed, true, false) };
	entityCoords2 = { ENTITY::GET_ENTITY_COORDS(eParam1, true, false) };

	if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(entityCoords, entityCoords2, 1, pvParam2, pfParam3, 1, 1077936128, 0))
		return true;

	if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(entityCoords, entityCoords2, 0, pvParam2, pfParam3, 1, 1077936128, 0))
		return true;

	if (PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(entityCoords, pvParam2, pfParam3, 1, 1077936128, 0))
		return true;

	if (!func_242(entityCoords, entityCoords2, pvParam2, pfParam3))
		return true;

	return false;
}

BOOL func_230(var uParam0, int iParam1) // Position - 0x5CA2
{
	if (func_45(uParam0, iParam1))
	{
		func_5(uParam0);
		return true;
	}

	return false;
}

BOOL func_231(int iParam0) // Position - 0x5CC0
{
	if (iParam0 == 0)
		return false;

	return ITEMDATABASE::ITEMDATABASE_IS_BUYABLE_AWARD_VALID(iParam0);
}

BOOL func_232(int iParam0, Hash hParam1) // Position - 0x5CD8
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

void func_233(int iParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0x5E21
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
		
			if (uParam2->[i /*2*/].f_1 == 0 && func_207(uParam2->[i /*2*/]) != -829303394)
				uParam2->[i /*2*/].f_1 = 1;
		}
	}

	return;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_234(Any anParam0, var uParam1, int iParam2, BOOL bParam3) // Position - 0x5FF7
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
	
		if (func_243(&anParam0->[i /*6*/]))
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
				anParam0->[i /*6*/] = { func_68() };
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

int func_235() // Position - 0x610E
{
	if (func_244(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

int func_236(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x612B
{
	int inventoryItemCountWithGuid;
	var guid;

	if (!func_122(hParam0, 0))
		return 0;

	if (!bParam7 && func_173(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_178(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_174(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_174(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

BOOL func_237(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x61AA
{
	int inventoryId;

	inventoryId = func_174(false);
	*panParam1 = { func_178(hParam0, func_210(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_238(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x61EF
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, iParam1, hParam2);
}

BOOL func_239(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x6222
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_174(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

void func_240(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x625C
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

	func_245(&Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/]);
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/] = iParam0;
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_1 = iParam1;

	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_2 = iParam2;
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_3 = iParam3;
	}

	return;
}

int func_241(Entity eParam0, var uParam1, var uParam2, var uParam3, int iParam4) // Position - 0x6338
{
	var entityCoords;
	var entityForwardVector;
	var unk5;
	float n;

	if (ENTITY::DOES_ENTITY_EXIST(eParam0) && !ENTITY::IS_ENTITY_DEAD(eParam0))
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(eParam0, false, false) };
		entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(eParam0) };
	}

	unk5 = { uParam1 - entityCoords };
	n = func_246(entityForwardVector, unk5);

	if (MISC::ABSF(n) > iParam4)
		if (n > 0f)
			return 0;
		else
			return 1;

	if (func_247(entityCoords, entityCoords + entityForwardVector, uParam1))
		return 3;

	return 2;
}

BOOL func_242(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5, Vector3* pvParam6, float* pfParam7) // Position - 0x63C7
{
	Vector3 SouthEndNode;
	Vector3 NorthEndNode;
	var LanesGoingSouth;
	var LanesGoingNorth;
	var CentralReservationWidth;

	if (_IS_NULL_VECTOR(vParam0))
		return false;

	if (PATHFIND::GET_CLOSEST_ROAD(vParam0, 2f, 1, &SouthEndNode, &NorthEndNode, &LanesGoingSouth, &LanesGoingNorth, &CentralReservationWidth, true))
	{
		*pvParam6 = { { 0.5f, 0.5f, 0.5f } * (SouthEndNode + NorthEndNode) };
	
		if (BUILTIN::VDIST(vParam3, SouthEndNode) < BUILTIN::VDIST(vParam3, NorthEndNode))
			*pfParam7 = func_248(NorthEndNode, SouthEndNode, 1);
		else
			*pfParam7 = func_248(SouthEndNode, NorthEndNode, 1);
	
		return true;
	}

	return false;
}

BOOL func_243(Any* panParam0) // Position - 0x6451
{
	if (!func_249(panParam0))
		return false;

	return INVENTORY::_INVENTORY_IS_ITEM_EXPIRED(panParam0);
}

int func_244(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x646D
{
	if (func_250(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_174(bParam1), hParam0, bParam3);
}

void func_245(int iParam0) // Position - 0x64A0
{
	*iParam0 = -1;
	iParam0->f_1 = 0;
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	func_251(&(iParam0->f_4));
	return;
}

float func_246(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5) // Position - 0x64C3
{
	float num;

	fParam0.f_2 = 0f;
	fParam3.f_2 = 0f;
	num = BUILTIN::VMAG(fParam0);

	if (num != 0f)
	{
		fParam0 = fParam0 / num;
		fParam0.f_1 = fParam0.f_1 / num;
	}

	num = BUILTIN::VMAG(fParam3);

	if (num != 0f)
	{
		fParam3 = fParam3 / num;
		fParam3.f_1 = fParam3.f_1 / num;
	}

	return (fParam0 * fParam3) + (fParam0.f_1 * fParam3.f_1);
}

BOOL func_247(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, float fParam6, var uParam7, var uParam8) // Position - 0x652A
{
	return ((fParam3 - uParam0) * (fParam6.f_1 - uParam0.f_1)) - ((fParam3.f_1 - uParam0.f_1) * (fParam6 - uParam0)) > 0f;
}

float func_248(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, int iParam6) // Position - 0x6553
{
	float num;
	float Y;
	float X;

	Y = fParam3 - uParam0;
	X = fParam3.f_1 - uParam0.f_1;

	if (X != 0f)
		num = MISC::ATAN2(Y, X);
	else if (Y < 0f)
		num = -90f;
	else
		num = 90f;

	if (iParam6 == 1)
	{
		num = num * -1f;
	
		if (num < 0f)
			num = num + 360f;
	}

	return num;
}

BOOL func_249(Any* panParam0) // Position - 0x65B8
{
	if (*panParam0 == 0 && panParam0->f_1 == 0 && panParam0->f_2 == 0 && panParam0->f_3 == 0)
		return false;

	return true;
}

BOOL func_250(Hash hParam0) // Position - 0x65EE
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

void func_251(var uParam0) // Position - 0x65FC
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

