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
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	int iLocal_23 = 0;
	BOOL bLocal_24 = 0;
	var uLocal_25 = 4;
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
	var uLocal_38 = 4;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0
{
	Vector3 scenarioPointCoords;
	var unk66;
	int num;
	int num2;
	BOOL flag;
	var unk78;
	int num3;
	Player PlayerIndex;
	BOOL flag2;
	BOOL flag3;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	scenarioPointCoords.f_10 = 5;
	scenarioPointCoords.f_15 = 4;
	scenarioPointCoords.f_22 = 1;
	scenarioPointCoords.f_23 = 1;
	scenarioPointCoords.f_24 = 4;
	scenarioPointCoords.f_34 = 4;
	scenarioPointCoords.f_39 = 4;
	scenarioPointCoords.f_45 = 10;
	unk66.f_4 = -1;
	unk66.f_9 = -1082130432;
	unk66.f_10 = -1082130432;
	scenarioPointCoords.f_5 = uScriptParam_0;
	scenarioPointCoords.f_6 = uScriptParam_0.f_1;
	func_1(&scenarioPointCoords);

	if (func_2(scenarioPointCoords.f_20))
		func_3(&scenarioPointCoords);

	if (scenarioPointCoords.f_20 == 19)
		if (!(UNLOCK::UNLOCK_IS_UNLOCKED(391628971) && UNLOCK::UNLOCK_IS_VISIBLE(391628971)))
			func_3(&scenarioPointCoords);

	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();

	if (func_5(func_4(0)) == 7)
		if (func_6(19))
			if (func_6(20))
				func_7(&scenarioPointCoords, 0);
			else
				func_7(&scenarioPointCoords, 0);
		else
			func_7(&scenarioPointCoords, 1);

	num = func_8();
	num2 = func_9(num);

	if (num2 < 22 && num2 >= 5)
		if (func_10(scenarioPointCoords.f_20))
			func_3(&scenarioPointCoords);

	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		func_3(&scenarioPointCoords);

	if (!TASK::DOES_SCENARIO_POINT_EXIST(uScriptParam_0.f_1))
		func_3(&scenarioPointCoords);

	scenarioPointCoords = { TASK::_GET_SCENARIO_POINT_COORDS(uScriptParam_0.f_1, true) };
	scenarioPointCoords.f_3 = TASK::_GET_SCENARIO_POINT_HEADING(uScriptParam_0.f_1, true);
	scenarioPointCoords.f_4 = TASK::_GET_SCENARIO_POINT_RADIUS(uScriptParam_0.f_1);
	Global_26625[scenarioPointCoords.f_20] = Global_26625[scenarioPointCoords.f_20] + 1;
	scenarioPointCoords.f_26 = func_11(scenarioPointCoords.f_20, scenarioPointCoords);

	if (scenarioPointCoords.f_26 <= -1)
	{
		scenarioPointCoords.f_26 = func_12(scenarioPointCoords.f_20, scenarioPointCoords);
	
		if (func_13(&scenarioPointCoords))
			func_14(&scenarioPointCoords);
		else
			func_15(&scenarioPointCoords);
	}

	while (func_16(&scenarioPointCoords))
	{
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
			func_3(&scenarioPointCoords);
	
		BUILTIN::WAIT(0);
	}

	iLocal_16 = 0;
	PlayerIndex = Global_1295666.f_149[Global_1295666];
	flag3 = true;
	scenarioPointCoords.f_29 = BUILTIN::VDIST2(scenarioPointCoords, Global_34);

	while (flag3)
	{
		flag3 = func_17(&scenarioPointCoords);
		scenarioPointCoords.f_31 = ENTITY::IS_ENTITY_DEAD(Global_1295666.f_3);
		scenarioPointCoords.f_33 = scenarioPointCoords.f_33;
		func_18(&scenarioPointCoords);
		func_19(&scenarioPointCoords);
	
		if (iLocal_16 <= 0)
		{
			if (scenarioPointCoords.f_33 % 30 == 0)
				scenarioPointCoords.f_29 = BUILTIN::VDIST2(scenarioPointCoords, Global_34);
		
			switch (func_20(&scenarioPointCoords))
			{
				case 0:
					scenarioPointCoords.f_26 = func_11(scenarioPointCoords.f_20, scenarioPointCoords);
				
					if (scenarioPointCoords.f_26 <= -1)
					{
						scenarioPointCoords.f_26 = func_12(scenarioPointCoords.f_20, scenarioPointCoords);
					
						if (func_13(&scenarioPointCoords))
							func_14(&scenarioPointCoords);
						else
							func_15(&scenarioPointCoords);
					}
				
					func_21(&scenarioPointCoords, 1);
					break;
			
				case 1:
					if (scenarioPointCoords.f_29 < 4900f)
						func_21(&scenarioPointCoords, 2);
					break;
			
				case 2:
					if (func_22(scenarioPointCoords.f_26, scenarioPointCoords.f_4))
						func_23(scenarioPointCoords.f_26, false);
				
					flag = func_24(scenarioPointCoords.f_26, scenarioPointCoords.f_20, scenarioPointCoords.f_6);
					Global_1207476 = false;
				
					if (flag)
						func_21(&scenarioPointCoords, 3);
					else
						func_21(&scenarioPointCoords, 4);
				
					func_25(&scenarioPointCoords);
					break;
			
				case 3:
					if (func_26(&scenarioPointCoords))
					{
						num3 = func_27(&scenarioPointCoords);
					
						if (num3 == 1)
							func_21(&scenarioPointCoords, 6);
						else if (num3 != 0)
							func_3(&scenarioPointCoords);
						else
							iLocal_16 = 1000;
					}
					break;
			
				case 4:
					if (func_26(&scenarioPointCoords))
					{
						num3 = func_27(&scenarioPointCoords);
					
						if (num3 == 1)
							func_21(&scenarioPointCoords, 5);
						else if (num3 != 0)
							func_3(&scenarioPointCoords);
						else
							iLocal_16 = 1000;
					}
					break;
			
				case 5:
					if (func_28(&scenarioPointCoords))
						func_21(&scenarioPointCoords, 9);
					break;
			
				case 6:
					if (func_28(&scenarioPointCoords))
					{
						scenarioPointCoords.f_30 = func_24(scenarioPointCoords.f_26, scenarioPointCoords.f_20, scenarioPointCoords.f_6);
						func_21(&scenarioPointCoords, 7);
					}
					break;
			
				case 7:
					if (!scenarioPointCoords.f_31 && ENTITY::HAS_ANIM_EVENT_FIRED(Global_1295666.f_3, 174961811) || Global_1207476.f_1 && func_29(scenarioPointCoords.f_20) || scenarioPointCoords.f_20 == 19)
					{
						unk78 = { Global_34 };
					
						if (TASK::DOES_SCENARIO_POINT_EXIST(Global_1207476.f_2))
						{
							PERSISTENCE::PERSISTENCE_ADD_SCENARIO_LOOTED(Global_1207476.f_2);
							func_30(&unk66);
							Global_1207476.f_1 = 0;
							Global_1207476.f_2 = 0;
						}
					
						if (func_31(scenarioPointCoords.f_20, unk78, &(scenarioPointCoords.f_26), &iLocal_23, true, false, 25))
							func_21(&scenarioPointCoords, 11);
					}
					else
					{
						if (scenarioPointCoords.f_33 % 30 == 0)
							scenarioPointCoords.f_30 = func_24(scenarioPointCoords.f_26, scenarioPointCoords.f_20, scenarioPointCoords.f_6);
					
						if (!scenarioPointCoords.f_30)
							func_21(&scenarioPointCoords, 12);
						else if (func_29(scenarioPointCoords.f_20))
							func_32(&unk66, scenarioPointCoords, true, true, true, true);
					}
				
					if (!bLocal_24)
					{
						if (scenarioPointCoords.f_29 < 625f && !PED::IS_PED_ON_MOUNT(PLAYER::GET_PLAYER_PED(PlayerIndex)))
						{
							func_33(692, false);
							bLocal_24 = true;
						}
					}
				
					if (scenarioPointCoords.f_29 > 8100f || func_34(scenarioPointCoords.f_26, 1))
					{
						func_35(scenarioPointCoords.f_26, 1);
						func_21(&scenarioPointCoords, 10);
					}
					break;
			
				case 8:
					if (scenarioPointCoords.f_31)
						func_21(&scenarioPointCoords, 9);
				
					if (func_42(&uLocal_18, &uLocal_19, flag2, &uLocal_20))
						if (func_24(scenarioPointCoords.f_26, scenarioPointCoords.f_20, scenarioPointCoords.f_6))
							func_21(&scenarioPointCoords, 7);
						else
							func_21(&scenarioPointCoords, 9);
					break;
			
				case 9:
					if (scenarioPointCoords.f_29 > 8100f || func_34(scenarioPointCoords.f_26, 1))
					{
						func_35(scenarioPointCoords.f_26, 1);
						func_21(&scenarioPointCoords, 10);
					}
					break;
			
				case 10:
					func_43(&scenarioPointCoords);
					func_21(&scenarioPointCoords, 1);
					break;
			
				case 11:
					func_36(scenarioPointCoords.f_26);
				
					if (!func_37(scenarioPointCoords.f_26, iLocal_23))
						func_38(scenarioPointCoords.f_26, iLocal_23);
				
					if (func_2(scenarioPointCoords.f_20))
						COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(BUILTIN::FLOOR(scenarioPointCoords.f_4), 1777389635, 0), 1);
				
					func_39(scenarioPointCoords, unk78, 0);
					Global_1940085.f_98 = 1;
				
					if (MAP::DOES_BLIP_EXIST(scenarioPointCoords.f_11))
						MAP::REMOVE_BLIP(&(scenarioPointCoords.f_11));
				
					func_21(&scenarioPointCoords, 12);
					break;
			
				case 12:
					if (func_40(scenarioPointCoords.f_20))
					{
						if (func_41(scenarioPointCoords, unk78, iLocal_23, &uLocal_18, &uLocal_19, &uLocal_20, &flag2))
						{
							if (flag2)
							{
								flag2 = false;
								func_21(&scenarioPointCoords, 8);
							}
							else if (func_24(scenarioPointCoords.f_26, scenarioPointCoords.f_20, scenarioPointCoords.f_6))
							{
								func_21(&scenarioPointCoords, 7);
							}
							else
							{
								func_21(&scenarioPointCoords, 9);
							}
						}
					}
				
					if (Global_1207476)
					{
						Global_1207476 = false;
					
						if (TASK::DOES_SCENARIO_POINT_EXIST(Global_1207476.f_2))
						{
							PERSISTENCE::PERSISTENCE_ADD_SCENARIO_LOOTED(Global_1207476.f_2);
							func_30(&unk66);
							Global_1207476.f_1 = 0;
							Global_1207476.f_2 = 0;
						}
					
						if (func_24(scenarioPointCoords.f_26, scenarioPointCoords.f_20, scenarioPointCoords.f_6))
							func_21(&scenarioPointCoords, 7);
						else
							func_21(&scenarioPointCoords, 9);
					}
				
					if (scenarioPointCoords.f_29 > 8100f || func_34(scenarioPointCoords.f_26, 1))
					{
						func_35(scenarioPointCoords.f_26, 1);
						func_21(&scenarioPointCoords, 10);
					}
					break;
			}
		}
	
		if (scenarioPointCoords.f_33 % 30 != 0)
		{
		}
		else if (func_45(func_44(&scenarioPointCoords)))
		{
			if (func_46(&scenarioPointCoords) == func_44(&scenarioPointCoords))
			{
			}
			else
			{
				func_47(&scenarioPointCoords, func_44(&scenarioPointCoords));
			}
		}
		else if (func_46(&scenarioPointCoords) == Global_17359)
		{
		}
		else
		{
			func_47(&scenarioPointCoords, Global_17359);
		}
	
		func_48(&scenarioPointCoords);
		func_49(&scenarioPointCoords, iLocal_23);
		iLocal_16 = iLocal_16 - 1;
	
		if (iLocal_16 < 0)
			iLocal_16 = 0;
	
		BUILTIN::WAIT(0);
	}

	func_30(&unk66);
	func_3(&scenarioPointCoords);
	return;
}

void func_1(var uParam0) // Position - 0x7B0
{
	func_50(uParam0, 23);
	return;
}

BOOL func_2(int iParam0) // Position - 0x7C0
{
	switch (iParam0)
	{
		case 1:
		case 9:
		case 10:
		case 14:
		case 17:
		case 22:
		case 23:
		case 25:
		case 26:
		case 31:
		case 33:
		case 36:
		case 37:
			return true;
	
		default:
			return false;
	}

	return false;
}

void func_3(var uParam0) // Position - 0x82D
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_11))
		MAP::REMOVE_BLIP(&(uParam0->f_11));

	Global_26625[uParam0->f_20] = Global_26625[uParam0->f_20] - 1;
	SCRIPTS::_0xE7282390542F570D(uParam0->f_5);

	if (func_46(uParam0) == 1 && TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_6))
		Global_1915603 = uParam0->f_6;

	func_43(uParam0);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

struct<2> func_4(int iParam0) // Position - 0x88F
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

int func_5(int iParam0, var uParam1) // Position - 0x8A3
{
	return iParam0;
}

BOOL func_6(int iParam0) // Position - 0x8AD
{
	return func_51(&(Global_3145858.f_6), iParam0);
}

void func_7(var uParam0, int iParam1) // Position - 0x8C1
{
	if (!func_45(iParam1))
		return;

	if (func_44(uParam0) == iParam1)
		return;

	uParam0->f_10 = iParam1;
	return;
}

int func_8() // Position - 0x8EA
{
	return Global_1902569;
}

int func_9(int iParam0) // Position - 0x8F6
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

BOOL func_10(int iParam0) // Position - 0x909
{
	switch (iParam0)
	{
		case 40:
		case 43:
			return true;
	
		default:
			return false;
	}

	return false;
}

// Unhandled jump detected. Output should be considered invalid
int func_11(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x934
{
	float num;
	float num2;
	int num3;
	int i;

	if (_IS_NULL_VECTOR(uParam1))
		return -1;

	num2 = 25f;
	num3 = -1;

	for (i = 0; i < 500; i = i + 1)
	{
		if (!func_53(i))
		{
			return num3;
		}
		else
		{
			if (func_54(i) != iParam0)
				goto 0x6C;
		
			num = func_56(uParam1, func_55(i));
		
			if (num < num2)
			{
				num2 = num;
				num3 = i;
			}
		}
	}

	return num3;
}

int func_12(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x9AE
{
	int num;

	if (iParam0 <= 0)
		return -1;

	if (_IS_NULL_VECTOR(uParam1))
		return -1;

	if (Global_20536 >= 500)
		Global_20536 = 0;

	num = Global_20536;
	func_57(&Global_20537[num /*9*/], iParam0, uParam1, -15);
	Global_20536 = Global_20536 + 1;
	return num;
}

BOOL func_13(var uParam0) // Position - 0x9FF
{
	return uParam0->f_22 != 3;
}

void func_14(var uParam0) // Position - 0xA0D
{
	var unk;
	var unk8;
	int randomIntInRange;
	int i;
	int value;
	int randomIntInRange2;
	int num;

	unk = 6;
	unk8 = 3;
	func_58(uParam0->f_22, &unk, &unk8);

	if (uParam0->f_24 > 4)
		uParam0->f_24 = 4;

	if (uParam0->f_23 <= 0)
		uParam0->f_23 = 1;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(uParam0->f_23, uParam0->f_24 + 1);

	for (i = 0; i <= randomIntInRange - 1; i = i + 1)
	{
		if (unk[i] == 0)
			value = 0;
		else
			value = unk8[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)];
	
		if (uParam0->f_25 > 0)
			randomIntInRange2 = MISC::GET_RANDOM_INT_IN_RANGE(0, uParam0->f_25);
	
		num = unk[i] || BUILTIN::SHIFT_LEFT(value, 9) || BUILTIN::SHIFT_LEFT(randomIntInRange2, 13) | 1073741824;
		func_59(uParam0->f_26, i, num);
	}

	return;
}

void func_15(var uParam0) // Position - 0xAC5
{
	var unk;
	var unk8;
	int randomIntInRange;
	int num;

	unk = 6;
	unk8 = 3;
	func_58(uParam0->f_22, &unk, &unk8);

	if (uParam0->f_25 > 0)
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, uParam0->f_25);

	num = unk[0] || BUILTIN::SHIFT_LEFT(0, 9) || BUILTIN::SHIFT_LEFT(randomIntInRange, 13) | 1073741824;
	func_59(uParam0->f_26, 0, num);
	return;
}

BOOL func_16(var uParam0) // Position - 0xB1F
{
	if (func_60(Global_33) && func_61())
		return true;

	func_19(uParam0);

	if (func_45(func_44(uParam0)))
		if (func_46(uParam0) != func_44(uParam0))
			func_47(uParam0, func_44(uParam0));
	else if (func_46(uParam0) != Global_17359)
		func_47(uParam0, Global_17359);

	if (func_46(uParam0) == 1)
		return true;

	return false;
}

BOOL func_17(var uParam0) // Position - 0xB93
{
	if (func_62(false, false))
		return 0;

	if (func_46(uParam0) == 1)
		if (Global_1915603 == 0)
			return 0;

	return 1;
}

void func_18(var uParam0) // Position - 0xBC2
{
	BOOL flag;
	int i;

	flag = false;

	if (uParam0->f_33 % 30 == 0)
		if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4) && func_63() && func_64(PLAYER::PLAYER_ID(), 1, false) && func_65(0) == joaat("herbalist"))
			uParam0->f_28 = 1;
		else
			uParam0->f_28 = 0;

	if (uParam0->f_28)
		flag = true;

	if (!flag && !(uParam0->f_20 == 11 || uParam0->f_20 == 27))
		return;

	if (func_66(uParam0->f_20))
		flag = true;

	if (func_46(uParam0) == 1)
		flag = true;

	if (func_46(uParam0) == 2)
		flag = true;

	if (func_46(uParam0) == 3)
		flag = true;

	if (flag)
	{
		for (i = 0; i < uParam0->f_24; i = i + 1)
		{
			if (func_67(uParam0->f_15[i]))
				MISC::DISABLE_LOOTING_COMPOSITE_LOOTABLE_THIS_FRAME(uParam0->f_15[i], false);
		}
	}

	return;
}

void func_19(var uParam0) // Position - 0xCAD
{
	if (uParam0->f_33 % 30 != 0 && uParam0->f_27 == 0)
		return;

	if (func_68(Global_17360[uParam0->f_27 /*2*/], *uParam0))
		func_7(uParam0, Global_17360[uParam0->f_27 /*2*/].f_1);

	uParam0->f_27 = uParam0->f_27 + 1;

	if (uParam0->f_27 >= 10)
		uParam0->f_27 = 0;

	return;
}

int func_20(var uParam0) // Position - 0xD0C
{
	return uParam0->f_13;
}

void func_21(var uParam0, int iParam1) // Position - 0xD18
{
	uParam0->f_13 = iParam1;
	return;
}

BOOL func_22(int iParam0, var uParam1) // Position - 0xD26
{
	int num;

	if (iParam0 <= -1)
		return false;

	if (!func_69(iParam0))
		return false;

	if (func_70(iParam0, uParam1))
		return false;

	num = func_71(iParam0);
	func_72(&num, 0, 0, 0, 0, 3, 0, false);

	if (func_73(num, true))
		return true;

	return false;
}

void func_23(int iParam0, BOOL bParam1) // Position - 0xD79
{
	int i;

	if (iParam0 <= -1)
		return;

	for (i = 0; i <= 3; i = i + 1)
	{
		if (func_74(iParam0, i))
			func_75(iParam0, i);
	}

	if (bParam1)
		func_76(iParam0, 1);

	return;
}

BOOL func_24(int iParam0, int iParam1, int iParam2) // Position - 0xDBB
{
	int i;

	if (iParam0 <= -1)
		return 0;

	if (func_29(iParam1) || iParam1 == 19 && TASK::DOES_SCENARIO_POINT_EXIST(iParam2))
		if (PERSISTENCE::_PERSISTENCE_IS_SCENARIO_MARKED_AS_LOOTED(iParam2))
			return 0;

	i = 0;

	for (i = 0; i <= 3; i = i + 1)
	{
		if (!func_74(iParam0, i))
		{
		}
		else if (Global_20537[iParam0 /*9*/].f_4[i] & 4096 == 0)
		{
			return 1;
		}
	}

	return 0;
}

void func_25(var uParam0) // Position - 0xE37
{
	TASK::_REQUEST_HERB_COMPOSITE_ASSET(uParam0->f_44);
	return;
}

BOOL func_26(var uParam0) // Position - 0xE48
{
	if (!TASK::ARE_COMPOSITE_LOOTABLE_ENTITY_DEF_ASSETS_LOADED(uParam0->f_44))
		return false;

	return true;
}

int func_27(var uParam0) // Position - 0xE61
{
	int i;
	int num;
	int value;
	var unk;
	var ReturnZ;

	ReturnZ = uParam0->f_2;

	if (!MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam0, uParam0->f_1, uParam0->f_2 + 2f, &ReturnZ, false))
	{
		if (!MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam0, uParam0->f_1, uParam0->f_2 + 10f, &ReturnZ, false))
		{
			uParam0->f_14 = uParam0->f_14 + 1;
		
			if (uParam0->f_14 >= 50)
			{
				uParam0->f_14 = 0;
				return -1;
			}
			else
			{
				return 0;
			}
		}
	}

	uParam0->f_2 = ReturnZ;

	for (i = 0; i <= 3; i = i + 1)
	{
		if (!func_74(uParam0->f_26, i))
		{
		}
		else
		{
			func_77(uParam0->f_26, i, &num, &value, &unk);
			uLocal_25[i /*3*/] = *uParam0 + ((float)num * BUILTIN::COS(BUILTIN::TO_FLOAT(value)));
			uLocal_25[i /*3*/].f_1 = uParam0->f_1 + ((float)num * BUILTIN::SIN(BUILTIN::TO_FLOAT(value)));
			uLocal_25[i /*3*/].f_2 = uParam0->f_2;
		
			if (uParam0->f_25 > 0)
				uLocal_38[i] = unk;
			else
				uLocal_38[i] = -1;
		
			if (!MISC::GET_GROUND_Z_FOR_3D_COORD(uLocal_25[i /*3*/], uLocal_25[i /*3*/].f_1, uLocal_25[i /*3*/].f_2 + 10f, &(uLocal_25[i /*3*/].f_2), false))
			{
				uParam0->f_14 = 0;
				return -1;
			}
		}
	}

	uParam0->f_14 = 0;
	return 1;
}

BOOL func_28(var uParam0) // Position - 0xF94
{
	var unk;
	int groundSetting;

	if (iLocal_17 < 4)
	{
		if (!_IS_NULL_VECTOR(uLocal_25[iLocal_17 /*3*/]))
		{
			if (!Global_1915602)
			{
				groundSetting = 0;
			
				if (uParam0->f_20 == 1 || uParam0->f_20 == 9 || uParam0->f_20 == 10 || uParam0->f_20 == 17 || uParam0->f_20 == 22 || uParam0->f_20 == 26 || uParam0->f_20 == 33 || uParam0->f_20 == 37)
				{
					groundSetting = groundSetting | 2;
					uLocal_25[iLocal_17 /*3*/] = { uLocal_25[iLocal_17 /*3*/] + func_78(0f, 0.737008f, 1.81999f, uParam0->f_3) };
				}
			
				if (func_29(uParam0->f_20) || uParam0->f_20 == 19 && !func_24(uParam0->f_26, uParam0->f_20, uParam0->f_6))
					groundSetting = groundSetting | 1;
			
				if (uParam0->f_20 == 38)
				{
					groundSetting = groundSetting | 2;
					uLocal_25[iLocal_17 /*3*/] = { uLocal_25[iLocal_17 /*3*/] + func_78(0f, 0.5f, 1.81999f, uParam0->f_3) };
				}
			
				if (func_37(uParam0->f_26, iLocal_17))
					groundSetting = groundSetting | 1;
			
				uParam0->f_15[iLocal_17] = TASK::_CREATE_HERB_COMPOSITES(uParam0->f_44, uLocal_25[iLocal_17 /*3*/], func_79(uParam0->f_3 + ((float)iLocal_17 * MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 90f))), groundSetting, &unk, uLocal_38[iLocal_17]);
			
				if (func_80(uParam0->f_20))
					uParam0->f_34[iLocal_17] = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(uLocal_25[iLocal_17 /*3*/], 0.37f, 4, 27, 0);
			
				if (uParam0->f_20 == 39)
					func_81(&uParam0->f_39[iLocal_17], uLocal_25[iLocal_17 /*3*/], 0.15f);
			
				iLocal_17 = iLocal_17 + 1;
				Global_1915602 = true;
			}
		}
		else
		{
			func_82(uParam0, 255, 255, 0);
			return true;
		}
	
		return false;
	}

	return true;
}

BOOL func_29(int iParam0) // Position - 0x116F
{
	switch (iParam0)
	{
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
			return true;
	}

	return false;
}

void func_30(var uParam0) // Position - 0x11BD
{
	func_83(uParam0);
	func_84(&(uParam0->f_6), 1);
	return;
}

BOOL func_31(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, BOOL bParam6, BOOL bParam7, int iParam8) // Position - 0x11D4
{
	int i;
	int num;
	int value;
	var unk;
	int num2;
	float num3;
	float num4;
	var unk6;
	float num5;
	float num6;

	if (_IS_NULL_VECTOR(uParam1))
		return false;

	if (*uParam4 <= -1)
		*uParam4 = func_11(iParam0, uParam1);

	if (*uParam4 <= -1)
		return false;

	num5 = -1f;

	for (i = 0; i <= 3; i = i + 1)
	{
		if (func_74(*uParam4, i))
		{
			if (bParam6 && func_37(*uParam4, i))
			{
			}
			else if (bParam7 && !func_37(*uParam4, i))
			{
			}
			else
			{
				num4 = { func_55(*uParam4) };
				func_77(*uParam4, i, &num, &value, &unk);
				num3 = num4 + ((float)num * BUILTIN::COS(BUILTIN::TO_FLOAT(value)));
				num3.f_1 = num4.f_1 + ((float)num * BUILTIN::SIN(BUILTIN::TO_FLOAT(value)));
				num6 = func_56(uParam1, num3);
			
				if (num5 < 0f || num5 >= 0f && num6 < num5)
				{
					num5 = num6;
					num2 = i;
					unk6 = { num3 };
				}
			}
		}
	}

	if (func_56(uParam1, unk6) < (float)iParam8)
	{
		*uParam5 = num2;
		return true;
	}

	return false;
}

void func_32(var uParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x12F8
{
	BOOL flag;
	BOOL flag2;
	float num;
	int n;
	int Frequency;

	if (!_IS_NULL_VECTOR(Global_1222323))
	{
		if (MISC::GET_FRAME_COUNT() % 30 == 0 || uParam0->f_10 == -1f)
			uParam0->f_10 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_1222323, vParam1, true);
	
		if (uParam0->f_10 <= 5f)
			flag = true;
	}

	flag2 = func_85(uParam0, bParam4, flag);

	if (!flag2)
		if (uParam0->f_8)
			uParam0->f_8 = 0;

	if (uParam0->f_11 < 8)
		uParam0->f_11 = uParam0->f_11 + 1;
	else
		uParam0->f_11 = 0;

	if (!uParam0->f_8)
	{
		if (uParam0->f_11 == 0)
			uParam0->f_8 = 1;
	
		return;
	}

	if (MISC::GET_FRAME_COUNT() % 30 == 0 || uParam0->f_9 == -1f)
		uParam0->f_9 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34, vParam1, true);

	num = 10f;
	num = num * (1f + func_86());

	switch (*uParam0)
	{
		case 0:
			if (uParam0->f_9 < num)
			{
				if (bParam5)
				{
					if (AUDIO::PREPARE_SOUNDSET("RDRO_Collectible_Sounds_Travelling_Saleswoman", false))
					{
						uParam0->f_4 = AUDIO::GET_SOUND_ID();
					
						if (Global_1940199.f_38 != joaat("weapon_kit_metal_detector"))
							AUDIO::_PLAY_SOUND_FROM_POSITION_WITH_ID(uParam0->f_4, "collectible_lure", vParam1, "RDRO_Collectible_Sounds_Travelling_Saleswoman", false, 0, bParam6);
					
						func_87(uParam0, 1);
					}
				}
				else
				{
					func_87(uParam0, 1);
				}
			}
			break;
	
		case 1:
			n = BUILTIN::FLOOR(500f * ((num - uParam0->f_9) / num));
			Frequency = BUILTIN::FLOOR(256f * ((num - uParam0->f_9) / num));
		
			if (n < 0)
				n = MISC::ABSI(n);
		
			if (n > 9999)
				n = 9999;
		
			if (uParam0->f_9 < 3f && bParam7)
				func_88(250);
		
			PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, n, Frequency);
			func_89(&(uParam0->f_1));
			func_87(uParam0, 2);
			break;
	
		case 2:
			if (uParam0->f_9 >= num + 5f || !bParam4 || flag)
			{
				if (bParam5)
					func_83(uParam0);
			
				func_87(uParam0, 0);
			}
			else if (func_90(&(uParam0->f_1)) >= 2f)
			{
				func_87(uParam0, 1);
			}
			else if (uParam0->f_9 < 3f && bParam7)
			{
				func_88(250);
			}
			break;
	}

	return;
}

void func_33(int iParam0, BOOL bParam1) // Position - 0x151F
{
	int num;
	int num2;

	func_91(iParam0, &num, &num2);

	if (!func_92(iParam0, num, num2, bParam1))
		return;

	func_93(num, num2);
	return;
}

BOOL func_34(int iParam0, int iParam1) // Position - 0x154C
{
	if (iParam0 == -1)
		return false;

	return Global_20537[iParam0 /*9*/].f_3 && iParam1 != false;
}

void func_35(int iParam0, int iParam1) // Position - 0x156C
{
	if (iParam0 == -1)
		return;

	Global_20537[iParam0 /*9*/].f_3 = Global_20537[iParam0 /*9*/].f_3 - Global_20537[iParam0 /*9*/].f_3 && iParam1;
	return;
}

void func_36(int iParam0) // Position - 0x159C
{
	if (iParam0 <= -1 || iParam0 >= 500)
		return;

	Global_20537[iParam0 /*9*/].f_2 = func_8();
	return;
}

BOOL func_37(int iParam0, int iParam1) // Position - 0x15C7
{
	if (iParam0 <= -1)
		return false;

	return Global_20537[iParam0 /*9*/].f_4[iParam1] & 4096 != 0;
}

void func_38(int iParam0, int iParam1) // Position - 0x15EC
{
	if (iParam0 <= -1)
		return;

	Global_20537[iParam0 /*9*/].f_4[iParam1] = Global_20537[iParam0 /*9*/].f_4[iParam1] | 4096;
	return;
}

BOOL func_39(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, Vector3 vParam66, var uParam67, var uParam68, int iParam69) // Position - 0x161B
{
	Hash herbType;

	if (func_56(uParam0, vParam66) > 26f)
		return false;

	if (!uParam0.f_31)
	{
		herbType = func_94(uParam0.f_20);
		TELEMETRY::_TELEMETRY_HERB_PICKED(herbType);
		COMPENDIUM::COMPENDIUM_HERB_PICKED(herbType, vParam66);
	}

	func_36(uParam0.f_26);

	if (!func_95(uParam0.f_20))
		func_96(uParam0.f_20, false, false);

	if (iParam69 == 1)
		func_97(uParam0.f_20, 1);
	else
		func_98(uParam0.f_20, 1);

	return true;
}

BOOL func_40(int iParam0) // Position - 0x1698
{
	return !func_2(iParam0);
}

BOOL func_41(Vector3 vParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, Vector3 vParam66, var uParam67, var uParam68, int iParam69, var uParam70, var uParam71, var uParam72, var uParam73) // Position - 0x16A7
{
	int num;
	int num2;
	float distanceBetweenCoords;
	int randomIntInRange;

	num = vParam0.f_20;
	num2 = vParam0.f_26;

	if (vParam0.f_31)
		return false;

	if (num2 != -1)
	{
		distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vParam66, true);
	
		if (distanceBetweenCoords > 25f)
			return false;
	
		if (!ENTITY::HAS_ANIM_EVENT_FIRED(Global_1295666.f_3, 1027129856))
			return false;
	
		if (func_39(vParam0, vParam66, 1))
		{
			if (PED::IS_PED_ON_FOOT(Global_1295666.f_3))
			{
				if (num == 27 || num == 11)
				{
					*uParam73 = 1;
				}
				else if (num == 30)
				{
					randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
				
					if (randomIntInRange == 3)
						*uParam73 = 1;
				}
				else
				{
					*uParam73 = 0;
				}
			}
		
			func_38(num2, iParam69);
			func_99(num, true, 1);
			func_101(func_100(num));
			func_102(func_100(num), 1, true, 0, 0, false, false);
			func_42(uParam70, uParam71, *uParam73, uParam72);
			return true;
		}
	}

	return false;
}

BOOL func_42(var uParam0, var uParam1, BOOL bParam2, var uParam3) // Position - 0x1799
{
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ENTER"), false);

	switch (*uParam0)
	{
		case 0:
			if (bParam2)
			{
				func_103(uParam3, false);
				bParam2 = false;
			}
		
			if (func_104(uParam3) && func_90(uParam3) > 2f)
			{
				func_105(uParam0, 1);
				func_106(uParam3);
			}
			break;
	
		case 1:
			*uParam1 = ANIMSCENE::_CREATE_ANIM_SCENE("script@MPSTORY@MP_PoisonHerb@IG@IG1_CommonBullrush@IG1_CommonBullrush", 0, "Herb_PL", true, false);
			func_105(uParam0, 2);
			break;
	
		case 2:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam1))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(*uParam1);
				func_105(uParam0, 3);
			}
			break;
	
		case 3:
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam1, true, false) && ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(*uParam1, false))
			{
				if (PED::IS_PED_MALE(Global_33))
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "MP_Male", Global_33, 0);
				else
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "MP_Female", Global_33, 0);
			
				ANIMSCENE::START_ANIM_SCENE(*uParam1);
				func_105(uParam0, 5);
			}
			break;
	
		case 5:
			if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(*uParam1, false) || PED::IS_PED_FALLING(Global_33) || ENTITY::IS_ENTITY_IN_WATER(Global_33))
			{
				if (PED::IS_PED_MALE(Global_33))
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(*uParam1, "MP_Male", Global_33);
				else
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(*uParam1, "MP_Female", Global_33);
			
				func_105(uParam0, 0);
				return true;
			}
			break;
	}

	return false;
}

void func_43(var uParam0) // Position - 0x18F2
{
	var unk;
	int i;
	int j;

	for (i = 0; i <= 3; i = i + 1)
	{
		if (func_74(uParam0->f_26, i) && uParam0->f_15[i] != unk)
		{
			TASK::_DELETE_PATCH_OBJECTS_FROM_HERB_COMPOSITES(uParam0->f_15[i], false);
			uParam0->f_15[i] = 0;
		}
	}

	for (j = 0; j < 4; j = j + 1)
	{
		if (func_107(&uParam0->f_34[j]))
		{
			GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(&uParam0->f_34[j], 1);
			uParam0->f_34[j] = -1;
		}
	
		if (func_107(&uParam0->f_39[j]))
		{
			GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(&uParam0->f_39[j], 1);
			uParam0->f_39[j] = -1;
		}
	}

	iLocal_17 = 0;
	return;
}

int func_44(var uParam0) // Position - 0x199E
{
	return uParam0->f_10;
}

BOOL func_45(int iParam0) // Position - 0x19AA
{
	return iParam0 != 5;
}

int func_46(var uParam0) // Position - 0x19B6
{
	return uParam0->f_9;
}

void func_47(var uParam0, int iParam1) // Position - 0x19C2
{
	if (!func_45(iParam1))
		return;

	if (func_46(uParam0) == iParam1)
		return;

	uParam0->f_9 = iParam1;
	return;
}

void func_48(var uParam0) // Position - 0x19EB
{
	BOOL flag;
	int i;

	flag = false;

	if (func_108(Global_1940199, 4194304))
		flag = true;

	if (func_46(uParam0) == 2)
		flag = true;

	if (!uParam0->f_31)
	{
		if (uParam0->f_33 % 5 == 0)
			uParam0->f_32 = TASK::IS_PED_SPRINTING(Global_33);
	
		if (uParam0->f_32 || func_104(&(Global_1958675.f_2)) && func_90(&(Global_1958675.f_2)) < 5f)
			flag = true;
	}

	if (!flag)
		return;

	for (i = 0; i < uParam0->f_24; i = i + 1)
	{
		if (func_67(uParam0->f_15[i]))
		{
			MISC::_0x082C043C7AFC3747(uParam0->f_15[i], true);
			MISC::DISABLE_LOOTING_COMPOSITE_LOOTABLE_THIS_FRAME(uParam0->f_15[i], true);
		}
	}

	return;
}

void func_49(var uParam0, int iParam1) // Position - 0x1AA4
{
	switch (uParam0->f_7)
	{
		case 0:
			if (Global_17359 == 4)
				func_109(uParam0, 1);
			break;
	
		case 1:
			if (!func_37(uParam0->f_26, iParam1))
				if (!MAP::DOES_BLIP_EXIST(uParam0->f_11))
					uParam0->f_11 = MAP::BLIP_ADD_FOR_COORDS(1425226969, *uParam0);
		
			func_109(uParam0, 2);
			break;
	
		case 2:
			if (Global_17359 != 4)
				func_109(uParam0, 3);
			break;
	
		case 3:
			if (MAP::DOES_BLIP_EXIST(uParam0->f_11))
				MAP::REMOVE_BLIP(&(uParam0->f_11));
		
			func_109(uParam0, 4);
			break;
	
		case 4:
			Global_17359 = 0;
			func_109(uParam0, 0);
			break;
	}

	return;
}

void func_50(var uParam0, int iParam1) // Position - 0x1B56
{
	uParam0->f_20 = func_110(iParam1);
	uParam0->f_21 = func_100(uParam0->f_20);
	uParam0->f_22 = func_111(uParam0->f_20);
	uParam0->f_25 = func_112(uParam0->f_20);
	uParam0->f_23 = func_113(uParam0->f_20);
	uParam0->f_24 = func_114(uParam0->f_20);
	uParam0->f_44 = func_115(uParam0->f_20);
	return;
}

BOOL func_51(var uParam0, int iParam1) // Position - 0x1BB0
{
	int num;
	int offset;

	num = iParam1 / 32;
	offset = iParam1 - (num * 32);
	return MISC::IS_BIT_SET(uParam0->[num], offset);
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x1BD4
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_53(int iParam0) // Position - 0x1BFE
{
	if (iParam0 == -1)
		return false;

	return Global_20537[iParam0 /*9*/] > 0;
}

int func_54(int iParam0) // Position - 0x1C19
{
	if (iParam0 == -1)
		return 0;

	return Global_20537[iParam0 /*9*/];
}

Vector3 func_55(int iParam0) // Position - 0x1C32
{
	if (iParam0 == -1)
		return -1f, -1f, -1f;

	return func_116(Global_20537[iParam0 /*9*/].f_1);
}

float func_56(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x1C53
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_57(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5) // Position - 0x1C71
{
	var SourceStruct;

	SourceStruct.f_2 = -15;
	SourceStruct.f_4 = 4;
	MISC::COPY_SCRIPT_STRUCT(iParam0, &SourceStruct, 9);
	*iParam0 = iParam1;
	iParam0->f_1 = func_117(uParam2);
	iParam0->f_2 = iParam5;
	return;
}

void func_58(int iParam0, var uParam1, var uParam2) // Position - 0x1CAB
{
	int i;
	int randomIntInRange;
	var unk;

	switch (iParam0)
	{
		case 0:
			uParam2->[0] = 1;
			uParam2->[1] = 2;
			uParam2->[2] = 3;
			break;
	
		case 1:
			uParam2->[0] = 2;
			uParam2->[1] = 3;
			uParam2->[2] = 4;
			break;
	
		case 2:
			uParam2->[0] = 3;
			uParam2->[1] = 4;
			uParam2->[2] = 5;
			break;
	
		case 3:
			uParam2->[0] = 2;
			uParam2->[1] = 3;
			uParam2->[2] = 4;
			break;
	
		default:
			uParam2->[0] = 2;
			uParam2->[1] = 3;
			uParam2->[2] = 4;
			break;
	}

	uParam1->[0] = 0;
	uParam1->[1] = 67;
	uParam1->[2] = 139;
	uParam1->[3] = 223;
	uParam1->[4] = 293;
	uParam1->[5] = 359;

	for (i = 5; i >= 1; i = i + -1)
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, i + 1);
		unk = uParam1->[randomIntInRange];
		uParam1->[randomIntInRange] = uParam1->[i];
		uParam1->[i] = unk;
	}

	return;
}

void func_59(int iParam0, int iParam1, int iParam2) // Position - 0x1DA0
{
	if (iParam0 > 500)
		return;

	Global_20537[iParam0 /*9*/].f_4[iParam1] = iParam2;
	return;
}

BOOL func_60(Ped pedParam0) // Position - 0x1DC2
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		return PED::IS_PED_FULLY_ON_MOUNT(pedParam0, true);

	return false;
}

BOOL func_61() // Position - 0x1DDF
{
	return Global_1893611 & true != 0 && func_118() != -1;
}

BOOL func_62(BOOL bParam0, BOOL bParam1) // Position - 0x1DFA
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

BOOL func_63() // Position - 0x1EDA
{
	return func_119(Global_1572887.f_8, 1);
}

BOOL func_64(Player plParam0, int iParam1, BOOL bParam2) // Position - 0x1EED
{
	Player player;
	int i;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0) && iParam1 != -1)
	{
		player = plParam0;
	
		for (i = 0; i <= 7; i = i + 1)
		{
			if (Global_1205938.f_1[i /*26*/].f_1 == iParam1 && func_120(i, 64, player))
				if (bParam2)
					if (Global_1206497.f_78[i /*20*/] >= 2)
						return true;
				else if (Global_1206497.f_78[i /*20*/] >= 5)
					return true;
		}
	}

	return false;
}

int func_65(int iParam0) // Position - 0x1F6B
{
	return Global_1205938.f_1[iParam0 /*26*/].f_3;
}

BOOL func_66(int iParam0) // Position - 0x1F7F
{
	if (!func_121(iParam0))
		return false;

	return func_122(iParam0, 4, true);
}

BOOL func_67(int iParam0) // Position - 0x1F9D
{
	return iParam0 != -1;
}

BOOL func_68(Volume volParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0x1FA9
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return false;

	return VOLUME::IS_POINT_IN_VOLUME(volParam0, vParam1);
}

BOOL func_69(int iParam0) // Position - 0x1FC9
{
	return Global_20537[iParam0 /*9*/].f_2 != -15;
}

BOOL func_70(int iParam0, var uParam1) // Position - 0x1FDE
{
	return false;
}

int func_71(int iParam0) // Position - 0x1FE7
{
	return Global_20537[iParam0 /*9*/].f_2;
}

void func_72(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x1FF8
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_123(*iParam0);
	i = func_124(*iParam0);
	num2 = func_125(*iParam0);
	j = func_9(*iParam0);
	k = func_126(*iParam0);
	l = func_127(*iParam0);

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

	for (m = func_128(i, num); num2 > m; m = func_128(i, num))
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

	func_129(iParam0, l, k, j, num2, i, num);
	return;
}

BOOL func_73(int iParam0, BOOL bParam1) // Position - 0x2180
{
	return func_130(func_8(), iParam0, bParam1);
}

BOOL func_74(int iParam0, int iParam1) // Position - 0x2194
{
	if (iParam0 == -1)
		return false;

	return Global_20537[iParam0 /*9*/].f_4[iParam1] & 1073741824 != 0;
}

void func_75(int iParam0, int iParam1) // Position - 0x21BB
{
	if (iParam0 <= -1)
		return;

	Global_20537[iParam0 /*9*/].f_4[iParam1] = Global_20537[iParam0 /*9*/].f_4[iParam1] - Global_20537[iParam0 /*9*/].f_4[iParam1] & 4096;
	return;
}

void func_76(int iParam0, int iParam1) // Position - 0x21F8
{
	if (iParam0 == -1)
		return;

	Global_20537[iParam0 /*9*/].f_3 = Global_20537[iParam0 /*9*/].f_3 || iParam1;
	return;
}

void func_77(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4) // Position - 0x221E
{
	if (iParam0 <= -1)
		return;

	func_131(&Global_20537[iParam0 /*9*/], iParam1, uParam2, uParam3, uParam4);
	return;
}

Vector3 func_78(float fParam0, float fParam1, float fParam2, float fParam3) // Position - 0x2242
{
	float num;
	float num2;
	float num3;

	num2 = BUILTIN::SIN(fParam3);
	num3 = BUILTIN::COS(fParam3);
	num = (fParam0 * num3) - (fParam0.f_1 * num2);
	num.f_1 = (fParam0 * num2) + (fParam0.f_1 * num3);
	num.f_2 = fParam0.f_2;
	return num;
}

float func_79(float fParam0) // Position - 0x2286
{
	return fParam0 * 0.017453292f;
}

BOOL func_80(int iParam0) // Position - 0x2296
{
	switch (iParam0)
	{
		case 4:
		case 8:
		case 29:
		case 32:
			return true;
	
		default:
		
	}

	return false;
}

void func_81(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4) // Position - 0x22C3
{
	int num;

	num = -1;
	func_132(uParam0, uParam1, fParam4, 4, num, 0);
	return;
}

void func_82(var uParam0, int iParam1, int iParam2, int iParam3) // Position - 0x22DE
{
	int i;
	int herbCompositeNumEntities;
	int j;

	if (uParam0->f_20 == 40 || uParam0->f_20 == 42 || uParam0->f_20 == 43 || uParam0->f_20 == 41 || uParam0->f_20 == 44 || uParam0->f_20 == 45 || uParam0->f_20 == 46 || uParam0->f_20 == 47 || uParam0->f_20 == 48 || uParam0->f_20 == 19)
	{
		if (iLocal_17 > 0)
		{
			for (i = 0; i < iLocal_17; i = i + 1)
			{
				herbCompositeNumEntities = TASK::_GET_HERB_COMPOSITE_NUM_ENTITIES(uParam0->f_15[i], &(uParam0->f_45));
			
				if (herbCompositeNumEntities > 0 && herbCompositeNumEntities <= 10)
				{
					for (j = 0; j < herbCompositeNumEntities; j = j + 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_45[j /*2*/]))
						{
							PLAYER::EAGLE_EYE_SET_CUSTOM_ENTITY_TINT(uParam0->f_45[j /*2*/], iParam1, iParam2, iParam3);
						
							if (uParam0->f_20 == 19)
								MAP::_0x7563CBCA99253D1A(uParam0->f_45[j /*2*/], -1017650267);
							else
								MAP::_0x7563CBCA99253D1A(uParam0->f_45[j /*2*/], joaat("blip_mp_role_collector_ilo"));
						}
					}
				}
			}
		}
	}

	return;
}

void func_83(var uParam0) // Position - 0x2403
{
	if (uParam0->f_4 != -1)
	{
		AUDIO::_STOP_SOUND_WITH_NAME("collectible_lure", "RDRO_Collectible_Sounds_Travelling_Saleswoman");
		AUDIO::RELEASE_SOUND_ID(uParam0->f_4);
		PAD::STOP_CONTROL_SHAKE(PLAYER_CONTROL);
		uParam0->f_4 = -1;
	}

	AUDIO::_RELEASE_SOUNDSET("RDRO_Collectible_Sounds_Travelling_Saleswoman");
	return;
}

void func_84(int iParam0, int iParam1) // Position - 0x2434
{
	if (func_107(iParam0))
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(iParam0, iParam1);

	return;
}

BOOL func_85(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x244D
{
	switch (uParam0->f_11)
	{
		case 0:
			if (func_133(joaat("kit_collectors_bag"), false, false, false) <= 0)
				return 0;
			break;
	
		case 1:
			if (func_134(false))
				return 0;
			break;
	
		case 2:
			if (func_135())
				return 0;
			break;
	
		case 3:
			if (Global_1048576)
				return 0;
			break;
	
		case 4:
			if (func_136())
				return 0;
			break;
	
		case 5:
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				return 0;
			break;
	
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(Global_33) && TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33))
				return 0;
			break;
	
		case 7:
			if (!bParam1 && *uParam0 == 0)
				return 0;
			break;
	
		case 8:
			if (bParam2 && *uParam0 == 0)
				return 0;
			break;
	
		default:
			uParam0->f_11 = 0;
			break;
	}

	return 1;
}

float func_86() // Position - 0x254C
{
	return Global_1156111.f_2169[89 /*205*/].f_201;
}

void func_87(var uParam0, int iParam1) // Position - 0x2561
{
	*uParam0 = iParam1;
	return;
}

void func_88(int iParam0) // Position - 0x256E
{
	if (iParam0 <= 0)
		return;

	Global_1896762.f_3648 = MISC::GET_GAME_TIMER();
	Global_1896762.f_3648.f_1 = iParam0;
	return;
}

void func_89(var uParam0) // Position - 0x2595
{
	func_137(uParam0, 0f);
	return;
}

float func_90(var uParam0) // Position - 0x25A4
{
	if (!func_104(uParam0))
		return uParam0->f_1;

	if (func_138(uParam0))
		return uParam0->f_2;

	return func_139() - uParam0->f_1;
}

void func_91(int iParam0, var uParam1, var uParam2) // Position - 0x25D9
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_92(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x25F5
{
	if (iParam1 < 0 || iParam1 > 32)
		return false;

	if (func_140(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_141(iParam0))
		return false;

	if (func_142(iParam0))
		return false;

	if (Global_1900460.f_67 && !func_143(iParam0, 1) || func_144(32768))
		if (!func_143(iParam0, 262144) || !Global_1904402.f_8875)
			return false;

	if (!func_145())
		return false;

	return true;
}

void func_93(int iParam0, int iParam1) // Position - 0x2697
{
	int Variable;

	Variable = Global_1904402[iParam0];
	MISC::SET_BIT(&Variable, iParam1);
	Global_1904402[iParam0] = Variable;
	return;
}

Hash func_94(int iParam0) // Position - 0x26BB
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

BOOL func_95(int iParam0) // Position - 0x2A51
{
	if (!func_121(iParam0))
		return false;

	return func_122(iParam0, true, true);
}

void func_96(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2A6F
{
	if (!func_121(iParam0))
		return;

	if (func_95(iParam0))
		return;

	if (!bParam1)
		bParam1 = func_2(iParam0);

	if (!bParam1)
		func_146(iParam0);

	func_147(iParam0, 1);
	func_148(iParam0, true);

	if (bParam2)
		if (!func_149(0, false, true))
			func_150(true, 6);

	return;
}

void func_97(int iParam0, int iParam1) // Position - 0x2AD1
{
	var statId;

	statId = { func_151(joaat("eaten"), func_94(iParam0)) };
	STATS::_STAT_ID_INCREMENT_INT(&statId, iParam1);
	func_153(func_152(joaat("herbs_eaten")), iParam1);
	return;
}

void func_98(int iParam0, int iParam1) // Position - 0x2B03
{
	func_153(func_151(joaat("Pick"), func_94(iParam0)), iParam1);
	func_153(func_152(joaat("herbs_picked_total")), iParam1);

	if (func_154(iParam0))
		func_153(func_152(joaat("herbs_picked_mushrooms")), iParam1);

	return;
}

void func_99(int iParam0, BOOL bParam1, int iParam2) // Position - 0x2B47
{
	Hash num;
	int num2;

	num = func_100(iParam0);
	num2 = func_155(num);

	if (num2 != iParam0)
		func_147(num2, 4);

	if (!func_121(iParam0))
		return;

	if (func_66(iParam0))
		return;

	func_147(iParam0, 4);
	func_148(iParam0, bParam1);

	if (!func_95(iParam0))
		func_96(iParam0, true, false);

	if (bParam1)
		if (!func_149(0, false, true))
			func_150(true, 6);

	return;
}

Hash func_100(int iParam0) // Position - 0x2BBD
{
	switch (iParam0)
	{
		case 2:
			return joaat("consumable_herb_ginseng");
	
		case 3:
			return joaat("consumable_herb_ginseng");
	
		case 4:
			return joaat("consumable_herb_bay_bolete");
	
		case 5:
			return joaat("consumable_herb_black_berry");
	
		case 6:
			return joaat("consumable_herb_currant");
	
		case 7:
			return joaat("consumable_herb_burdock_root");
	
		case 8:
			return joaat("consumable_herb_chanterelles");
	
		case 11:
			return joaat("consumable_herb_common_bulrush");
	
		case 12:
			return joaat("consumable_herb_creeping_thyme");
	
		case 13:
			return joaat("consumable_herb_sage");
	
		case 15:
			return joaat("consumable_herb_english_mace");
	
		case 16:
			return joaat("consumable_herb_evergreen_huckleberry");
	
		case 18:
			return joaat("consumable_herb_currant");
	
		case 19:
			return -241666815;
	
		case 20:
			return joaat("consumable_herb_sage");
	
		case 21:
			return joaat("consumable_herb_indian_tobacco");
	
		case 24:
			return joaat("consumable_herb_milkweed");
	
		case 27:
			return joaat("consumable_herb_oleander_sage");
	
		case 28:
			return joaat("consumable_herb_oregano");
	
		case 29:
			return joaat("consumable_herb_parasol_mushroom");
	
		case 30:
			return joaat("consumable_herb_prairie_poppy");
	
		case 32:
			return joaat("consumable_herb_rams_head");
	
		case 34:
			return joaat("consumable_herb_red_raspberry");
	
		case 35:
			return joaat("consumable_herb_sage");
	
		case 38:
			return joaat("consumable_herb_vanilla_flower");
	
		case 39:
			return joaat("consumable_herb_violet_snowdrop");
	
		case 40:
			return joaat("provision_wldflwr_agarita");
	
		case 41:
			return joaat("provision_wldflwr_texas_blue_bonnet");
	
		case 42:
			return joaat("provision_wldflwr_bitterweed");
	
		case 43:
			return joaat("provision_wldflwr_blood_flower");
	
		case 44:
			return joaat("provision_wldflwr_cardinal_flower");
	
		case 45:
			return joaat("provision_wldflwr_chocolate_daisy");
	
		case 46:
			return joaat("provision_wldflwr_creek_plum");
	
		case 47:
			return joaat("provision_wldflwr_wild_rhubarb");
	
		case 48:
			return joaat("provision_wldflwr_wisteria");
	
		case 49:
			return joaat("consumable_herb_wild_carrots");
	
		case 50:
			return joaat("consumable_herb_wild_feverfew");
	
		case 51:
			return joaat("consumable_herb_wild_mint");
	
		case 52:
			return joaat("consumable_herb_wintergreen_berry");
	
		case 53:
			return joaat("consumable_herb_yarrow");
	
		default:
			break;
	}

	return 0;
}

void func_101(Hash hParam0) // Position - 0x2E78
{
	int num;
	var unk22;
	int i;
	float health;
	float deadeye;
	float stamina;
	float num2;
	float num3;
	float num4;
	float num5;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	num.f_1 = 20;

	if (func_156(hParam0, 1573112293) || func_156(hParam0, 672467738) || func_156(hParam0, -550842268))
		flag = true;

	if (func_157(hParam0) == joaat("consumable"))
	{
		ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(hParam0, &num);
		ATTRIBUTE::STOP_ITEM_PREVIEW();
	
		for (i = 0; i < num; i = i + 1)
		{
			if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(num.f_1[i], &unk22))
			{
			}
			else if (-943921969 == unk22.f_1)
			{
				health = func_158(0, unk22.f_2);
				func_159(unk22.f_2);
				flag3 = true;
			}
			else if (-1104847406 == unk22.f_1)
			{
				deadeye = func_158(2, unk22.f_2);
				func_160(unk22.f_2, false);
				flag2 = true;
			}
			else if (381158954 == unk22.f_1)
			{
				stamina = func_158(1, unk22.f_2);
				func_161(unk22.f_2);
			}
			else if (joaat("EFFECT_HEALTH_CORE") == unk22.f_1)
			{
				num2 = func_162(BUILTIN::TO_FLOAT(unk22.f_2), unk22.f_5);
				func_163(0, num2, true, true, flag);
				flag3 = true;
			}
			else if (joaat("EFFECT_DEADEYE_CORE") == unk22.f_1)
			{
				num3 = func_162(BUILTIN::TO_FLOAT(unk22.f_2), unk22.f_5);
				func_163(2, num3, true, true, flag);
				flag2 = true;
			}
			else if (joaat("EFFECT_STAMINA_CORE") == unk22.f_1)
			{
				num4 = func_162(BUILTIN::TO_FLOAT(unk22.f_2), unk22.f_5);
				func_163(1, num4, true, true, flag);
			}
			else if (joaat("Effect_Health_Core_Gold") == unk22.f_1)
			{
				num5 = func_164(BUILTIN::TO_FLOAT(unk22.f_3), unk22.f_4);
				func_165(19, num5, true, true);
				flag3 = true;
			}
			else if (joaat("Effect_Deadeye_Core_Gold") == unk22.f_1)
			{
				num5 = func_164(BUILTIN::TO_FLOAT(unk22.f_3), unk22.f_4);
				func_165(20, num5, true, true);
				flag2 = true;
			}
			else if (joaat("Effect_Stamina_Core_Gold") == unk22.f_1)
			{
				num5 = func_164(BUILTIN::TO_FLOAT(unk22.f_3), unk22.f_4);
				func_165(18, num5, true, true);
			}
			else if (1869697234 == unk22.f_1)
			{
				num5 = func_164(BUILTIN::TO_FLOAT(unk22.f_3), unk22.f_4);
				func_165(0, num5, true, true);
				flag3 = true;
			}
			else if (1342237631 == unk22.f_1)
			{
				num5 = func_164(BUILTIN::TO_FLOAT(unk22.f_3), unk22.f_4);
				func_165(2, num5, true, true);
				flag2 = true;
			}
			else if (-1240225157 == unk22.f_1)
			{
				num5 = func_164(BUILTIN::TO_FLOAT(unk22.f_3), unk22.f_4);
				func_165(1, num5, true, true);
			}
			else if (-816334026 == unk22.f_1)
			{
				func_166(BUILTIN::TO_FLOAT(unk22.f_2), true);
			}
		}
	
		if (flag3 || func_156(hParam0, -537818634))
			func_153(func_167(joaat("medicine_items_used")), 1);
	
		if (func_156(hParam0, -1457797660))
			func_153(func_167(joaat("provision_items_used")), 1);
	
		if (flag2)
			func_153(func_167(joaat("DEADEYE_ITEMS_USED")), 1);
	
		switch (hParam0)
		{
			case -1735850413:
			case -241345764:
				STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_SaloonSnack_00"), 1);
				break;
		}
	
		PLAYER::_SET_USED_ITEM_EFFECT(health, stamina, deadeye, BUILTIN::ROUND(num2 / 2f), BUILTIN::ROUND(num4 / 2f), BUILTIN::ROUND(num3 / 2f));
	}

	return;
}

void func_102(Hash hParam0, int iParam1, BOOL bParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0x31BC
{
	BOOL flag;
	int value;
	var unk;
	int num;
	char* InputString;
	int num2;
	int num3;
	int num4;
	int num5;
	char* str;
	char* str2;
	int num6;
	char* StringToTest;
	Hash hash;
	Hash hash2;
	int value2;
	const char* str3;
	var unk7;

	if (!func_168(hParam0, 0))
		return;
	else if (hParam0 == joaat("KIT_HANDHELD_CATALOG"))
		return;
	else if (iParam1 == 0)
		return;

	if (!func_169() || bParam6)
	{
		func_170(hParam0, iParam1, bParam2, iParam4, iParam3, bParam5);
		return;
	}

	flag = false;
	value = MISC::ABSI(iParam1);
	TEXT_LABEL_ASSIGN_STRING(&unk, value == 1 ? "ITEM_GET_PUMP" : "ITEM_GET_PUMP_MULT", 32);

	if (hParam0 == joaat("AMMO_MOONSHINEJUG_MP"))
		TEXT_LABEL_ASSIGN_STRING(&unk, "ITEM_GET_PUMP", 32);

	if (iParam1 > 0)
	{
	}
	else if (iParam3 || iParam4)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, value == 1 ? "ITEM_GET_PUMP" : "ITEM_GET_PUMP_MULT", 32);
		flag = true;
	}
	else if (bParam2 && func_172(hParam0, 2097152))
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		flag = true;
	}

	num = func_157(hParam0);
	num2 = 0;
	num3 = joaat("Inventory");

	if (num == joaat("AMMO") && hParam0 != joaat("ammo_hatchet") && hParam0 != joaat("ammo_hatchet_cleaver") && hParam0 != joaat("ammo_hatchet_hunter") && hParam0 != joaat("ammo_tomahawk_ancient") && hParam0 != joaat("ammo_poisonbottle") && hParam0 != joaat("AMMO_MOONSHINEJUG_MP") && !func_156(hParam0, -1982291600) && !func_156(hParam0, 137764179))
	{
		num2 = joaat("ammo_types");
		num3 = joaat("ammo_types");
	}

	num4 = func_173(hParam0);

	if (num == joaat("weapon_mod") || num == joaat("weapon_decoration") || num4 == -1674363638 || num4 == 252325943 || num4 == 829857647 || num4 == -636562458 || num4 == 1341188928 || num4 == 1216664798)
	{
		InputString = "ITEMTYPE_UPGRADES";
		InputString.f_1 = "itemtype_textures";
	}
	else if (!func_174(hParam0, &InputString, num3, num2, 0, joaat("ui_itemviewer")))
	{
		InputString = "_PLACEHOLDER";
		InputString.f_1 = "inventory_items";
	}

	if (MISC::GET_HASH_KEY(InputString) == 121560594)
		InputString = "DOCUMENT_MAP_GENERIC";

	if (bParam5)
	{
		InputString = "ITEMTYPE_ORDERED_ITEM";
		InputString.f_1 = "itemtype_textures";
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(InputString))
		return;

	num5 = joaat("COLOR_PURE_WHITE");
	str = "Transaction_Positive";
	str2 = "Transaction_Feed_Sounds";
	num6 = 0;

	if (flag)
	{
		num5 = joaat("color_greymid");
		str = "Transaction_Negative";
		num6 = 1;
	}

	if (func_156(hParam0, 474910316))
	{
		StringToTest = func_175(hParam0);
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(StringToTest))
		{
			str = StringToTest;
			str2 = "RDRO_Collectible_Sounds_Travelling_Saleswoman";
		}
	}

	if (ITEMDATABASE::_ITEMDATABASE_IS_OVERPOWERED_ITEM(hParam0))
		if (!flag && !bParam2)
			num5 = joaat("color_rpg_special_1");
		else
			num5 = joaat("color_yellowdark");

	if (func_156(hParam0, 1816585950))
		num5 = joaat("color_objective");

	if (func_176(hParam0))
		if (!flag && !bParam2)
			num5 = joaat("color_yellow");
		else
			num5 = joaat("color_yellowdark");

	hash = func_177(hParam0, false);

	if (func_178(num4) && func_156(hParam0, -306684263) && hash != 0)
	{
		hash = func_179(hParam0);
	}
	else if (func_157(hParam0) == joaat("CLOTHING"))
	{
		hash2 = func_180(hParam0);
	
		if (func_168(hash2, 0))
			hash = func_177(hash2, false);
	}

	if (func_181(hParam0, 1443104131) && iParam3)
	{
		value2 = 1;
		func_182(hParam0, -915411861, &value2, false);
		value = BUILTIN::CEIL(BUILTIN::TO_FLOAT(value) / BUILTIN::TO_FLOAT(value2));
		iParam1 = BUILTIN::CEIL(BUILTIN::TO_FLOAT(iParam1) / BUILTIN::TO_FLOAT(value2));
	}

	str3 = func_183(MISC::VAR_STRING(10, &unk, MISC::VAR_STRING(0, hash), value), num5);

	if (iParam1 == 1)
		str3 = MISC::VAR_STRING(0, hash);

	if (num4 == -1839668642 && hParam0 != joaat("clothing_item_hair_none") && hParam0 != 1326838792 && hParam0 != -230310728 || num4 == 231148558 && hParam0 != joaat("clothing_item_m_beard_stubble") && hParam0 != joaat("clothing_item_beard_none") || num4 == 252325943 && hParam0 != joaat("clothing_blend_lipstick_none") || num4 == -636562458 && hParam0 != joaat("clothing_blend_eyeshadow_none"))
		str3 = MISC::VAR_STRING(0, func_184(hParam0, -442898163));

	if (num4 == -126813555 || num4 == 1946043663)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk7, "", 128);
	
		if (func_185(hParam0, &unk7))
			str3 = func_187(func_186(unk7), joaat("COLOR_PURE_WHITE"));
	}

	func_188(str3, InputString.f_1, MISC::GET_HASH_KEY(InputString), num6, num5, str2, str, 0, true);
	return;
}

void func_103(var uParam0, BOOL bParam1) // Position - 0x368B
{
	if (bParam1 || !func_104(uParam0))
		func_89(uParam0);

	return;
}

BOOL func_104(var uParam0) // Position - 0x36AB
{
	return func_189(*uParam0, 1);
}

void func_105(var uParam0, int iParam1) // Position - 0x36BB
{
	*uParam0 = iParam1;
	return;
}

void func_106(var uParam0) // Position - 0x36C8
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

BOOL func_107(int iParam0) // Position - 0x36DE
{
	if (*iParam0 == 0)
		return false;

	return *iParam0 != -1;
}

BOOL func_108(int iParam0, int iParam1) // Position - 0x36F6
{
	return iParam0 && iParam1 != false;
}

void func_109(var uParam0, int iParam1) // Position - 0x3705
{
	uParam0->f_7 = iParam1;
	return;
}

int func_110(int iParam0) // Position - 0x3713
{
	var unk;
	int i;
	BOOL flag;

	if (Global_1915438.f_163)
	{
		unk = 54;
	
		for (i = 0; i <= 1; i = i + 1)
		{
			if (Global_1915438[iParam0 /*3*/][i] != 0)
			{
				flag = true;
				break;
			}
		}
	
		if (!flag)
			return iParam0;
	
		func_190(&unk, 54, true);
	
		for (i = 0; i <= 53; i = i + 1)
		{
			if (i == iParam0)
			{
			}
			else if (func_191(&Global_1915438[iParam0 /*3*/], i, 54))
			{
				return i;
			}
		}
	
		return iParam0;
	}

	return iParam0;
}

int func_111(int iParam0) // Position - 0x37A5
{
	switch (iParam0)
	{
		case 1:
			return 3;
	
		case 2:
			return 3;
	
		case 3:
			return 3;
	
		case 4:
			return 0;
	
		case 5:
			return 1;
	
		case 6:
			return 0;
	
		case 7:
			return 0;
	
		case 8:
			return 0;
	
		case 9:
			return 3;
	
		case 10:
			return 3;
	
		case 11:
			return 0;
	
		case 12:
			return 0;
	
		case 13:
			return 0;
	
		case 14:
			return 3;
	
		case 15:
			return 0;
	
		case 16:
			return 1;
	
		case 17:
			return 3;
	
		case 18:
			return 0;
	
		case 19:
			return 0;
	
		case 20:
			return 0;
	
		case 21:
			return 0;
	
		case 22:
			return 3;
	
		case 23:
			return 3;
	
		case 24:
			return 0;
	
		case 25:
			return 3;
	
		case 26:
			return 3;
	
		case 27:
			return 0;
	
		case 28:
			return 0;
	
		case 29:
			return 0;
	
		case 30:
			return 0;
	
		case 31:
			return 3;
	
		case 32:
			return 0;
	
		case 33:
			return 3;
	
		case 34:
			return 1;
	
		case 35:
			return 0;
	
		case 36:
			return 3;
	
		case 37:
			return 3;
	
		case 38:
			return 3;
	
		case 39:
			return 0;
	
		case 40:
			return 3;
	
		case 41:
			return 3;
	
		case 42:
			return 3;
	
		case 43:
			return 3;
	
		case 44:
			return 3;
	
		case 45:
			return 3;
	
		case 46:
			return 3;
	
		case 47:
			return 3;
	
		case 48:
			return 3;
	
		case 49:
			return 0;
	
		case 50:
			return 0;
	
		case 51:
			return 0;
	
		case 52:
			return 1;
	
		case 53:
			return 0;
	
		default:
			break;
	}

	return -1;
}

int func_112(int iParam0) // Position - 0x3A6A
{
	switch (iParam0)
	{
		case 1:
			return 0;
	
		case 2:
			return 0;
	
		case 3:
			return 0;
	
		case 4:
			return 0;
	
		case 5:
			return 0;
	
		case 6:
			return 0;
	
		case 7:
			return 0;
	
		case 8:
			return 0;
	
		case 9:
			return 0;
	
		case 10:
			return 0;
	
		case 11:
			return 0;
	
		case 12:
			return 0;
	
		case 13:
			return 0;
	
		case 14:
			return 0;
	
		case 15:
			return 0;
	
		case 16:
			return 0;
	
		case 17:
			return 0;
	
		case 18:
			return 0;
	
		case 19:
			return 0;
	
		case 20:
			return 0;
	
		case 21:
			return 0;
	
		case 22:
			return 0;
	
		case 23:
			return 0;
	
		case 24:
			return 0;
	
		case 25:
			return 0;
	
		case 26:
			return 0;
	
		case 27:
			return 0;
	
		case 28:
			return 0;
	
		case 29:
			return 0;
	
		case 30:
			return 0;
	
		case 31:
			return 0;
	
		case 32:
			return 0;
	
		case 33:
			return 0;
	
		case 34:
			return 0;
	
		case 35:
			return 0;
	
		case 36:
			return 0;
	
		case 37:
			return 0;
	
		case 38:
			return 0;
	
		case 39:
			return 0;
	
		case 40:
			return 0;
	
		case 41:
			return 0;
	
		case 42:
			return 0;
	
		case 43:
			return 0;
	
		case 44:
			return 0;
	
		case 45:
			return 0;
	
		case 46:
			return 0;
	
		case 47:
			return 0;
	
		case 48:
			return 0;
	
		case 49:
			return 0;
	
		case 50:
			return 0;
	
		case 51:
			return 0;
	
		case 52:
			return 0;
	
		case 53:
			return 4;
	
		default:
			break;
	}

	return 0;
}

int func_113(int iParam0) // Position - 0x3D2F
{
	switch (iParam0)
	{
		case 1:
			return 1;
	
		case 2:
			return 1;
	
		case 3:
			return 1;
	
		case 4:
			return 2;
	
		case 5:
			return 1;
	
		case 6:
			return 2;
	
		case 7:
			return 2;
	
		case 8:
			return 2;
	
		case 9:
			return 1;
	
		case 10:
			return 1;
	
		case 11:
			return 3;
	
		case 12:
			return 3;
	
		case 13:
			return 2;
	
		case 14:
			return 1;
	
		case 15:
			return 2;
	
		case 16:
			return 1;
	
		case 17:
			return 1;
	
		case 18:
			return 2;
	
		case 19:
			return 1;
	
		case 20:
			return 2;
	
		case 21:
			return 2;
	
		case 22:
			return 1;
	
		case 23:
			return 1;
	
		case 24:
			return 2;
	
		case 25:
			return 1;
	
		case 26:
			return 1;
	
		case 27:
			return 2;
	
		case 28:
			return 3;
	
		case 29:
			return 2;
	
		case 30:
			return 2;
	
		case 31:
			return 1;
	
		case 32:
			return 2;
	
		case 33:
			return 1;
	
		case 34:
			return 1;
	
		case 35:
			return 2;
	
		case 36:
			return 1;
	
		case 37:
			return 1;
	
		case 38:
			return 1;
	
		case 39:
			return 2;
	
		case 40:
			return 1;
	
		case 41:
			return 1;
	
		case 42:
			return 1;
	
		case 43:
			return 1;
	
		case 44:
			return 1;
	
		case 45:
			return 1;
	
		case 46:
			return 1;
	
		case 47:
			return 1;
	
		case 48:
			return 1;
	
		case 49:
			return 2;
	
		case 50:
			return 2;
	
		case 51:
			return 3;
	
		case 52:
			return 1;
	
		case 53:
			return 2;
	
		default:
			break;
	}

	return 0;
}

int func_114(int iParam0) // Position - 0x3FF4
{
	switch (iParam0)
	{
		case 1:
			return 1;
	
		case 2:
			return 1;
	
		case 3:
			return 1;
	
		case 4:
			return 4;
	
		case 5:
			return 2;
	
		case 6:
			return 3;
	
		case 7:
			return 3;
	
		case 8:
			return 4;
	
		case 9:
			return 1;
	
		case 10:
			return 1;
	
		case 11:
			return 4;
	
		case 12:
			return 4;
	
		case 13:
			return 3;
	
		case 14:
			return 1;
	
		case 15:
			return 3;
	
		case 16:
			return 2;
	
		case 17:
			return 1;
	
		case 18:
			return 3;
	
		case 19:
			return 3;
	
		case 20:
			return 3;
	
		case 21:
			return 3;
	
		case 22:
			return 1;
	
		case 23:
			return 1;
	
		case 24:
			return 3;
	
		case 25:
			return 1;
	
		case 26:
			return 1;
	
		case 27:
			return 3;
	
		case 28:
			return 4;
	
		case 29:
			return 4;
	
		case 30:
			return 3;
	
		case 31:
			return 1;
	
		case 32:
			return 4;
	
		case 33:
			return 1;
	
		case 34:
			return 2;
	
		case 35:
			return 3;
	
		case 36:
			return 1;
	
		case 37:
			return 1;
	
		case 38:
			return 1;
	
		case 39:
			return 3;
	
		case 40:
			return 1;
	
		case 41:
			return 1;
	
		case 42:
			return 1;
	
		case 43:
			return 1;
	
		case 44:
			return 1;
	
		case 45:
			return 1;
	
		case 46:
			return 1;
	
		case 47:
			return 1;
	
		case 48:
			return 1;
	
		case 49:
			return 3;
	
		case 50:
			return 3;
	
		case 51:
			return 4;
	
		case 52:
			return 2;
	
		case 53:
			return 3;
	
		default:
			break;
	}

	return 0;
}

int func_115(int iParam0) // Position - 0x42BE
{
	switch (iParam0)
	{
		case 1:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_ACUNA_STAR_DEF");
	
		case 2:
			return joaat("COMPOSITE_LOOTABLE_ALASKAN_GINSENG_ROOT_DEF");
	
		case 3:
			return joaat("COMPOSITE_LOOTABLE_AMERICAN_GINSENG_ROOT_DEF");
	
		case 4:
			return joaat("COMPOSITE_LOOTABLE_BAY_BOLETE_DEF");
	
		case 5:
			return joaat("COMPOSITE_LOOTABLE_BLACK_BERRY_DEF");
	
		case 6:
			return joaat("COMPOSITE_LOOTABLE_BLACK_CURRANT_DEF");
	
		case 7:
			return joaat("COMPOSITE_LOOTABLE_BURDOCK_ROOT_DEF");
	
		case 8:
			return joaat("COMPOSITE_LOOTABLE_CHANTERELLES_DEF");
	
		case 9:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_CIGAR_DEF");
	
		case 10:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_CLAM_SHELL_DEF");
	
		case 11:
			return joaat("COMPOSITE_LOOTABLE_COMMON_BULRUSH_DEF");
	
		case 12:
			return joaat("COMPOSITE_LOOTABLE_CREEPING_THYME_DEF");
	
		case 13:
			return joaat("COMPOSITE_LOOTABLE_DESERT_SAGE_DEF");
	
		case 14:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_DRAGONS_DEF");
	
		case 15:
			return joaat("COMPOSITE_LOOTABLE_ENGLISH_MACE_DEF");
	
		case 16:
			return joaat("COMPOSITE_LOOTABLE_EVERGREEN_HUCKLEBERRY_DEF");
	
		case 17:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_GHOST_DEF");
	
		case 18:
			return joaat("COMPOSITE_LOOTABLE_GOLDEN_CURRANT_DEF");
	
		case 19:
			return -839537088;
	
		case 20:
			return joaat("COMPOSITE_LOOTABLE_HUMMINGBIRD_SAGE_DEF");
	
		case 21:
			return joaat("COMPOSITE_LOOTABLE_INDIAN_TOBACCO_DEF");
	
		case 22:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_LADY_NIGHT_DEF");
	
		case 23:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_LADY_SLIPPER_DEF");
	
		case 24:
			return joaat("COMPOSITE_LOOTABLE_MILKWEED_DEF");
	
		case 25:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_MOCCASIN_DEF");
	
		case 26:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_NIGHT_SCENTED_DEF");
	
		case 27:
			return joaat("COMPOSITE_LOOTABLE_OLEANDER_SAGE_DEF");
	
		case 28:
			return joaat("COMPOSITE_LOOTABLE_OREGANO_DEF");
	
		case 29:
			return joaat("COMPOSITE_LOOTABLE_PARASOL_MUSHROOM_DEF");
	
		case 30:
			return joaat("COMPOSITE_LOOTABLE_PRAIRIE_POPPY_DEF");
	
		case 31:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_QUEENS_DEF");
	
		case 32:
			return joaat("COMPOSITE_LOOTABLE_RAMS_HEAD_DEF");
	
		case 33:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_RAT_TAIL_DEF");
	
		case 34:
			return joaat("COMPOSITE_LOOTABLE_RED_RASPBERRY_DEF");
	
		case 35:
			return joaat("COMPOSITE_LOOTABLE_RED_SAGE_DEF");
	
		case 36:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_SPARROWS_DEF");
	
		case 37:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_SPIDER_DEF");
	
		case 38:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_VANILLA_DEF");
	
		case 39:
			return joaat("COMPOSITE_LOOTABLE_VIOLET_SNOWDROP_DEF");
	
		case 40:
			return joaat("COMPOSITE_LOOTABLE_AGARITA_DEF");
	
		case 41:
			return joaat("COMPOSITE_LOOTABLE_TEXAS_BONNET_DEF");
	
		case 42:
			return joaat("COMPOSITE_LOOTABLE_BITTERWEED_DEF");
	
		case 43:
			return joaat("COMPOSITE_LOOTABLE_BLOODFLOWER_DEF");
	
		case 44:
			return joaat("COMPOSITE_LOOTABLE_CARDINAL_FLOWER_DEF");
	
		case 45:
			return joaat("COMPOSITE_LOOTABLE_CHOC_DAISY_DEF");
	
		case 46:
			return joaat("COMPOSITE_LOOTABLE_CREEKPLUM_DEF");
	
		case 47:
			return joaat("COMPOSITE_LOOTABLE_WILD_RHUBARB_DEF");
	
		case 48:
			return joaat("COMPOSITE_LOOTABLE_WISTERIA_DEF");
	
		case 49:
			return joaat("COMPOSITE_LOOTABLE_WILD_CARROT_DEF");
	
		case 50:
			return joaat("COMPOSITE_LOOTABLE_WILD_FEVERFEW_DEF");
	
		case 51:
			return joaat("COMPOSITE_LOOTABLE_WILD_MINT_DEF");
	
		case 52:
			return joaat("COMPOSITE_LOOTABLE_WINTERGREEN_BERRY_DEF");
	
		case 53:
			return joaat("COMPOSITE_LOOTABLE_YARROW_DEF");
	
		default:
		
	}

	return 0;
}

Vector3 func_116(int iParam0) // Position - 0x45B8
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

BOOL func_117(float fParam0, var uParam1, var uParam2) // Position - 0x4614
{
	BOOL flag;

	flag = BUILTIN::ROUND(MISC::ABSF(fParam0)) & 32767 || BUILTIN::SHIFT_LEFT(BUILTIN::ROUND(MISC::ABSF(fParam0.f_1)) & 32767, 15);

	if (fParam0 > 0f)
		flag = flag | 1073741824;

	if (fParam0.f_1 > 0f)
		flag = flag | -2147483648;

	return flag;
}

int func_118() // Position - 0x4669
{
	return Global_1893611.f_2;
}

BOOL func_119(BOOL bParam0, BOOL bParam1) // Position - 0x4677
{
	return bParam0 && bParam1 != false;
}

BOOL func_120(int iParam0, int iParam1, Player plParam2) // Position - 0x4686
{
	return func_192(Global_1206166[plParam2 /*10*/][iParam0], iParam1);
}

BOOL func_121(int iParam0) // Position - 0x46A0
{
	return !(iParam0 <= 0);
}

BOOL func_122(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x46AD
{
	if (bParam2)
		if (!func_121(iParam0))
			return false;

	if (Global_1572887.f_14 != -1)
		return Global_17418[iParam0] && bParam1 != false;

	return Global_38.f_4675[iParam0] && bParam1 != false;
}

int func_123(int iParam0) // Position - 0x46F0
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_124(int iParam0) // Position - 0x4715
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_125(int iParam0) // Position - 0x4728
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_126(int iParam0) // Position - 0x473B
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_127(int iParam0) // Position - 0x474D
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_128(int iParam0, int iParam1) // Position - 0x475F
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

void func_129(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x47F9
{
	func_194(uParam0, iParam6);
	func_195(uParam0, iParam5);
	func_196(uParam0, iParam4);
	func_197(uParam0, iParam3);
	func_198(uParam0, iParam2);
	func_199(uParam0, iParam1);
	return;
}

BOOL func_130(int iParam0, int iParam1, BOOL bParam2) // Position - 0x4831
{
	if (bParam2)
		if (!func_200(iParam1) || !func_200(iParam0))
			return true;

	return iParam0 > iParam1;
}

void func_131(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4) // Position - 0x485E
{
	*uParam3 = iParam0->f_4[iParam1] & 511;
	*uParam2 = BUILTIN::SHIFT_RIGHT(iParam0->f_4[iParam1] & 3584, 9);
	*uParam4 = BUILTIN::SHIFT_RIGHT(iParam0->f_4[iParam1] & 57344, 13);
	return;
}

void func_132(var uParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, int iParam5, int iParam6, int iParam7) // Position - 0x48A0
{
	if (!func_107(uParam0))
	{
		*uParam0 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(vParam1, fParam4, iParam5, iParam6, iParam7);
	
		if (func_107(uParam0))
		{
		}
	}

	return;
}

int func_133(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x48D4
{
	int inventoryItemCountWithItemid;
	int num;
	Hash AmmoType;
	var guid;

	inventoryItemCountWithItemid = 0;

	if (!func_168(hParam0, 0))
		return 0;

	num = func_157(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		AmmoType = func_201(hParam0, 1);
	
		if (AmmoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, AmmoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_202(hParam0, false);
	}

	if (func_203(hParam0, joaat("DEFAULT")) != 0)
	{
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_204(bParam2), hParam0, bParam3);
	}
	else
	{
		guid = { func_205(hParam0, bParam2) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_204(bParam2), &guid, bParam3);
	}

	return inventoryItemCountWithItemid;
}

BOOL func_134(BOOL bParam0) // Position - 0x4996
{
	if (bParam0)
		return Global_1915656.f_20638;

	return Global_1915656.f_20638 || Global_1915656.f_22504.f_1;
}

BOOL func_135() // Position - 0x49C6
{
	return func_206() != -1;
}

BOOL func_136() // Position - 0x49D4
{
	return Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE");
}

void func_137(var uParam0, float fParam1) // Position - 0x49F9
{
	uParam0->f_1 = func_139() - fParam1;
	func_207(uParam0, 1);
	func_208(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_138(var uParam0) // Position - 0x4A1F
{
	return func_189(*uParam0, 2);
}

float func_139() // Position - 0x4A2F
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

BOOL func_140(int iParam0, int iParam1) // Position - 0x4A61
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

BOOL func_141(int iParam0) // Position - 0x4A79
{
	if (func_143(iParam0, 4))
		return false;

	return true;
}

BOOL func_142(int iParam0) // Position - 0x4A90
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

BOOL func_143(int iParam0, int iParam1) // Position - 0x4B5C
{
	return Global_1904402.f_33[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_144(int iParam0) // Position - 0x4B75
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_145() // Position - 0x4B88
{
	if (!func_209())
		return false;

	return Global_1904402.f_8873;
}

void func_146(int iParam0) // Position - 0x4BA3
{
	switch (iParam0)
	{
		case 2:
			func_33(243, false);
			break;
	
		case 3:
			func_33(244, false);
			break;
	
		case 4:
			func_33(263, false);
			break;
	
		case 5:
			func_33(239, false);
			break;
	
		case 6:
			func_33(259, false);
			break;
	
		case 7:
			func_33(256, false);
			break;
	
		case 8:
			func_33(264, false);
			break;
	
		case 11:
			break;
	
		case 12:
			func_33(267, false);
			break;
	
		case 13:
			func_33(250, false);
			break;
	
		case 15:
			func_33(246, false);
			break;
	
		case 16:
			func_33(240, false);
			break;
	
		case 18:
			func_33(258, false);
			break;
	
		case 19:
			func_33(251, false);
			break;
	
		case 20:
			func_33(252, false);
			break;
	
		case 21:
			func_33(257, false);
			break;
	
		case 24:
			func_33(247, false);
			break;
	
		case 27:
			func_33(249, false);
			break;
	
		case 28:
			func_33(268, false);
			break;
	
		case 29:
			func_33(265, false);
			break;
	
		case 30:
			func_33(260, false);
			break;
	
		case 32:
			func_33(266, false);
			break;
	
		case 34:
			func_33(241, false);
			break;
	
		case 35:
			func_33(253, false);
			break;
	
		case 38:
			func_33(248, false);
			break;
	
		case 39:
			func_33(254, false);
			break;
	
		case 49:
			func_33(261, false);
			break;
	
		case 50:
			func_33(255, false);
			break;
	
		case 51:
			func_33(269, false);
			break;
	
		case 52:
			func_33(242, false);
			break;
	
		case 53:
			func_33(245, false);
			break;
	}

	return;
}

void func_147(int iParam0, BOOL bParam1) // Position - 0x4DA9
{
	if (!func_121(iParam0))
		return;

	Global_17418[iParam0] = Global_17418[iParam0] || bParam1;
	return;
}

void func_148(int iParam0, BOOL bParam1) // Position - 0x4DCF
{
	if (!func_121(iParam0))
		return;

	if (func_210(iParam0))
		return;

	func_147(iParam0, 2);

	if (bParam1)
		if (!func_149(0, false, true))
			func_211(true, 1017438712);

	return;
}

BOOL func_149(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4E12
{
	if (Global_1572887.f_14 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1900460.f_67;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1900460.f_68;
	
		if (func_212())
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

	if (iParam0 == 0 && func_213(func_4(0)))
		return true;

	if (Global_1940199 && 81919 & -1 - iParam0 != false)
		return true;

	if (!bParam1)
		if (MISC::GET_GAME_TIMER() - 5000 < Global_1900595)
			return true;

	switch (func_5(func_4(0)))
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

void func_150(BOOL bParam0, int iParam1) // Position - 0x4F88
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
		return;

	Global_0.f_1 = iParam1;

	if (bParam0)
		func_214(&Global_0, 8);

	if (!func_215() || func_216() != -1)
		return;

	func_214(&Global_0, 1);
	return;
}

struct<2> func_151(int iParam0, Hash hParam1) // Position - 0x4FCE
{
	int num;

	num = iParam0;
	num.f_1 = hParam1;
	return num;
}

struct<2> func_152(int iParam0) // Position - 0x4FE4
{
	var unk;

	unk.f_1 = iParam0;
	return unk;
}

void func_153(var uParam0, var uParam1, int iParam2) // Position - 0x4FF6
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
		return;

	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

BOOL func_154(int iParam0) // Position - 0x5013
{
	switch (iParam0)
	{
		case 4:
		case 8:
		case 29:
		case 32:
			return true;
	}

	return false;
}

int func_155(int iParam0) // Position - 0x5043
{
	switch (iParam0)
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

BOOL func_156(Hash hParam0, Hash hParam1) // Position - 0x521E
{
	if (!func_168(hParam0, 0))
		return func_218(func_217(hParam0), hParam1);

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, 1120943070))
		return true;

	return false;
}

int func_157(Hash hParam0) // Position - 0x525F
{
	var unk;

	if (!func_168(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk))
		return 0;

	return unk.f_2;
}

float func_158(int iParam0, int iParam1) // Position - 0x528A
{
	int num;
	float pedStamina;
	float pedMaxStamina;
	float num2;
	float num3;

	if (iParam1 == -1)
	{
		num2 = pedMaxStamina - pedStamina;
		return num2 / 2f;
	}

	switch (iParam0)
	{
		case 0:
			pedStamina = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_33));
			pedMaxStamina = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_33, false));
			num = 50;
			break;
	
		case 1:
			pedStamina = PED::_GET_PED_STAMINA(Global_33);
			pedMaxStamina = PED::_GET_PED_MAX_STAMINA(Global_33);
			num = 8;
			break;
	
		case 2:
			pedStamina = PLAYER::_GET_PLAYER_DEAD_EYE(PLAYER::GET_PLAYER_INDEX());
			pedMaxStamina = PLAYER::_GET_PLAYER_MAX_DEAD_EYE(PLAYER::GET_PLAYER_INDEX(), 0);
			num = 14;
			break;
	}

	num3 = (float)num * iParam1 + pedStamina;

	if (num3 > pedMaxStamina)
		num2 = pedMaxStamina - pedStamina;
	else
		num2 = num3 - pedStamina;

	return num2 / 2f;
}

void func_159(int iParam0) // Position - 0x533F
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PED::_GET_NUM_RESERVED_HEALTH(ped);

	num = func_219(2);
	func_220(BUILTIN::TO_FLOAT(iParam0 * num), 0);
	return;
}

void func_160(int iParam0, BOOL bParam1) // Position - 0x537C
{
	int num;

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = 10;

	num = func_221(2);
	func_222(BUILTIN::TO_FLOAT(iParam0 * num), false, bParam1);
	return;
}

void func_161(int iParam0) // Position - 0x53B1
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PED::_0xFC3B580C4380B5B7(ped);

	num = func_223(2);
	func_224(BUILTIN::TO_FLOAT(iParam0 * num), 0);
	return;
}

float func_162(float fParam0, float fParam1) // Position - 0x53EE
{
	if (fParam1 != 0f)
		return (fParam1 / 100f) * 100f;

	return (fParam0 / 8f) * 100f;
}

void func_163(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x541C
{
	if (fParam1 == 0f)
		return;

	if (bParam4)
		fParam1 = func_225(iParam0, fParam1, true);

	func_227(iParam0, func_226(iParam0, 2) + fParam1, bParam2, bParam3, true, 2);
	return;
}

float func_164(float fParam0, int iParam1) // Position - 0x5455
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

int func_165(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3) // Position - 0x54A7
{
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		return 0;

	return func_228(iParam0, fParam1, bParam2, bParam3);
}

void func_166(float fParam0, BOOL bParam1) // Position - 0x54CB
{
	if (fParam0 > 10f)
		fParam0 = 10f;

	if (func_229())
		func_230(fParam0, 0);

	if (bParam1)
	{
		Global_17418.f_55.f_2459.f_41 = Global_17418.f_55.f_2459.f_41 + 1;
	
		if (5 == Global_17418.f_55.f_2459.f_41)
			func_33(109, false);
	}

	return;
}

struct<2> func_167(int iParam0) // Position - 0x5523
{
	int num;

	num = iParam0;
	return num;
}

BOOL func_168(Hash hParam0, int iParam1) // Position - 0x5533
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

BOOL func_169() // Position - 0x554D
{
	return !Global_1913444;
}

void func_170(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x555A
{
	int i;

	for (i = 0; i < Global_1913444.f_3; i = i + 1)
	{
		if (Global_1913444.f_4[i /*6*/] == hParam0 && Global_1913444.f_4[i /*6*/].f_2 == bParam2 && Global_1913444.f_4[i /*6*/].f_3 == bParam3 && Global_1913444.f_4[i /*6*/].f_4 == bParam4 && Global_1913444.f_4[i /*6*/].f_5 == iParam5)
		{
			Global_1913444.f_4[i /*6*/].f_1 = Global_1913444.f_4[i /*6*/].f_1 + iParam1;
			return;
		}
	}

	if (Global_1913444.f_3 < 19)
	{
		Global_1913444.f_4[Global_1913444.f_3 /*6*/] = hParam0;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_1 = iParam1;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_2 = bParam2;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_3 = bParam3;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_4 = bParam4;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_5 = iParam5;
		Global_1913444.f_3 = Global_1913444.f_3 + 1;
	}

	return;
}

var func_171(BOOL bParam0, var uParam1, var uParam2) // Position - 0x567D
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_172(Hash hParam0, int iParam1) // Position - 0x5694
{
	if (!func_168(hParam0, 0))
		return false;

	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, iParam1);
}

int func_173(Hash hParam0) // Position - 0x56B3
{
	var unk;

	if (!func_168(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk))
		return 0;

	return unk.f_1;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_174(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x56DE
{
	int i;
	Hash hashKey;
	Hash hashKey2;
	var unk;

	unk.f_2 = 5;
	unk.f_18 = 8;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(hParam0, &unk))
	{
		for (i = 0; i < 5; i = i + 1)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(unk.f_2[i /*3*/]))
				goto 0xE3;
		
			if (MISC::IS_STRING_NULL_OR_EMPTY(unk.f_2[i /*3*/].f_1))
			{
			}
			else
			{
				hashKey = MISC::GET_HASH_KEY(unk.f_2[i /*3*/]);
				hashKey2 = MISC::GET_HASH_KEY(unk.f_2[i /*3*/].f_1);
			
				if (iParam2 != 0 && unk.f_2[i /*3*/].f_2 != iParam2)
					goto 0xE3;
			
				if (hParam3 != 0 && hashKey2 != hParam3)
					goto 0xE3;
			
				if (hParam4 != 0 && hashKey != hParam4)
					goto 0xE3;
			
				if (hParam5 != 0 && hashKey2 == hParam5)
				{
				}
				else
				{
					*uParam1 = { unk.f_2[i /*3*/] };
					return true;
				}
			}
		}
	}

	return false;
}

char* func_175(Hash hParam0) // Position - 0x57D1
{
	if (func_156(hParam0, -1995062316))
		return "collectible_arrowheads";

	if (func_156(hParam0, 1239889275))
		return "collectible_liquor_bottles";

	if (func_156(hParam0, 143267379))
		return "collectible_coins";

	if (func_156(hParam0, -944041124))
		return "colectible_heirlooms";

	if (func_156(hParam0, 1562621600))
		return "collectible_jewelry";

	if (func_156(hParam0, -149719013))
		return "collectible_bird_eggs";

	if (func_156(hParam0, 1940829793))
		return "collectible_tarot_cards";

	if (func_156(hParam0, 781094263))
		return "collectible_flowers";

	if (func_156(hParam0, -352095726) || func_156(hParam0, -2014783736) || func_156(hParam0, -545064757) || func_156(hParam0, 679186220))
		return "collectible_found_fossil";

	return "";
}

BOOL func_176(Hash hParam0) // Position - 0x58CD
{
	if (func_156(hParam0, -189374246))
		if (func_231(hParam0, -1305775593) || func_231(hParam0, 1384151091) || func_231(hParam0, 2075388272) || func_231(hParam0, -1738780413))
			return true;

	if (func_156(hParam0, -753854379) || func_156(hParam0, 173360570))
		return true;

	return false;
}

Hash func_177(Hash hParam0, BOOL bParam1) // Position - 0x594C
{
	Hash hash;

	if (!func_168(hParam0, 0))
		return 0;

	hash = func_232(hParam0, bParam1);

	if (hash != 0)
		return hash;

	return hParam0;
}

BOOL func_178(int iParam0) // Position - 0x597A
{
	switch (iParam0)
	{
		case -1696039442:
		case 688466329:
		case 759802290:
			return false;
	
		default:
		
	}

	return true;
}

Hash func_179(Hash hParam0) // Position - 0x59A1
{
	var unk;
	int i;

	if (!func_168(hParam0, 0))
		return 0;

	unk.f_2 = 5;
	unk.f_18 = 8;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(hParam0, &unk))
	{
		for (i = 0; i < 8; i = i + 1)
		{
			if (unk.f_18[i /*2*/].f_1 == 14460646)
				if (unk.f_18[i /*2*/] != 0)
					return unk.f_18[i /*2*/];
		}
	}

	return 0;
}

Hash func_180(Hash hParam0) // Position - 0x5A0F
{
	int num;
	var unk;
	int collectionId;
	int num2;
	int i;
	Hash hash;

	num = func_233(hParam0);

	if (num == 0)
		return 0;

	unk = { func_234(-1591664384, -1591664384, 0, 0, 0, 0, -1, num, 0) };

	if (func_235(unk, &collectionId, &num2, 0))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(collectionId, i, &hash) && func_236(hash))
			{
				func_237(collectionId);
				return hash;
			}
		}
	
		func_237(collectionId);
	}

	return 0;
}

int func_181(Hash hParam0, Hash hParam1) // Position - 0x5A94
{
	if (hParam0 == 0)
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, -949239683))
		return 1;

	return 0;
}

int func_182(Hash hParam0, int iParam1, var uParam2, BOOL bParam3) // Position - 0x5AC5
{
	var unk;

	if (!func_168(hParam0, 0) && !func_238(func_217(hParam0), 2))
		return 0;

	unk.f_4 = 15;
	unk.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(hParam0, iParam1, &unk))
	{
		!bParam3;
		return 0;
	}

	!bParam3;
	*uParam2 = unk.f_1;
	return 1;
}

const char* func_183(const char* sParam0, int iParam1) // Position - 0x5B24
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

 func_184(Hash hParam0, int iParam1) // Position - 0x5B3E
{
	 num;

	num = func_239(hParam0, iParam1);

	if (num == 0)
		return 0;

	return num;
}

BOOL func_185(Hash hParam0, char* sParam1) // Position - 0x5B5C
{
	int lengthOfLiteralString;
	var StringToTest;

	if (!func_168(hParam0, 0))
		return false;

	TEXT_LABEL_ASSIGN_STRING(sParam1, func_240(hParam0), 128);
	lengthOfLiteralString = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);

	if (!func_241(hParam0))
		return false;

	TEXT_LABEL_ASSIGN_STRING(&StringToTest, func_242(hParam0), 128);

	if (MISC::IS_STRING_NULL_OR_EMPTY(&StringToTest))
		return false;

	TEXT_LABEL_APPEND_STRING(&StringToTest, " - ", 128);
	lengthOfLiteralString = lengthOfLiteralString + HUD::GET_LENGTH_OF_LITERAL_STRING(&StringToTest);
	TEXT_LABEL_APPEND_STRING(&StringToTest, sParam1, 128);

	if (lengthOfLiteralString >= 127)
		return false;

	*sParam1 = { StringToTest };
	return true;
}

const char* func_186(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x5BD9
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

const char* func_187(const char* sParam0, int iParam1) // Position - 0x5BED
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);

	return func_183(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

int func_188(const char* sParam0, const char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0x5C23
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
	func_243(sParam0, sParam1, hParam2);
	return num2;
}

BOOL func_189(int iParam0, int iParam1) // Position - 0x5C86
{
	return iParam0 && iParam1 != false;
}

void func_190(var uParam0, int iParam1, BOOL bParam2) // Position - 0x5C95
{
	var unk;
	int randomIntInRange;
	int i;

	i = 0;

	if (bParam2)
	{
		for (i = 0; i <= iParam1 - 1; i = i + 1)
		{
			uParam0->[i] = i;
		}
	}

	i = iParam1 - 1;

	for (i = iParam1 - 1; i >= 0; i = i + -1)
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, i);
		unk = uParam0->[i];
		uParam0->[i] = uParam0->[randomIntInRange];
		uParam0->[randomIntInRange] = unk;
	}

	return;
}

BOOL func_191(Any* panParam0, int iParam1, int iParam2) // Position - 0x5D02
{
	return MISC::IS_BIT_SET(panParam0->[iParam1 / 31], iParam1 % 31);
}

BOOL func_192(int iParam0, int iParam1) // Position - 0x5D39
{
	return iParam0 && iParam1 != false;
}

var func_193(BOOL bParam0, var uParam1, var uParam2) // Position - 0x5D48
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_194(var uParam0, int iParam1) // Position - 0x5D5F
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

void func_195(var uParam0, int iParam1) // Position - 0x5DE5
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_196(var uParam0, int iParam1) // Position - 0x5E21
{
	int num;
	int num2;

	num = func_124(*uParam0);
	num2 = func_123(*uParam0);

	if (iParam1 < 1 || iParam1 > func_128(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_197(var uParam0, int iParam1) // Position - 0x5E74
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_198(var uParam0, int iParam1) // Position - 0x5EAF
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_199(var uParam0, int iParam1) // Position - 0x5EE8
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

BOOL func_200(int iParam0) // Position - 0x5F20
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_127(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_126(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_9(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_123(iParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_124(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_125(iParam0);

	if (num6 < 1 || num6 > func_128(num5, num4))
		return false;

	return true;
}

Hash func_201(Hash hParam0, int iParam1) // Position - 0x5FFC
{
	int num;
	var unk;
	Hash hash;

	if (!func_168(hParam0, 0))
		return 0;

	num = func_157(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_156(hParam0, 1399091007))
	{
		func_244(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

int func_202(Hash hParam0, BOOL bParam1) // Position - 0x6076
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_245(hParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };

	if (bParam1)
		func_247(&unk, func_246(false));

	if (!func_248(&unk, &num, &num2, false))
		return 0;

	func_249(num);
	return num2;
}

int func_203(Hash hParam0, int iParam1) // Position - 0x60D5
{
	if (iParam1 == 0)
		return 0;

	if (func_238(func_217(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, iParam1);
}

int func_204(BOOL bParam0) // Position - 0x6101
{
	if (func_216() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

struct<4> func_205(Hash hParam0, BOOL bParam1) // Position - 0x6142
{
	var unk;

	unk = { func_250(hParam0, bParam1, 0) };
	return func_251(hParam0, unk, unk.f_4, bParam1);
}

int func_206() // Position - 0x6167
{
	return Global_1149172.f_137;
}

void func_207(var uParam0, int iParam1) // Position - 0x6175
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_208(var uParam0, int iParam1) // Position - 0x6186
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_209() // Position - 0x619B
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

BOOL func_210(int iParam0) // Position - 0x61AF
{
	if (!func_121(iParam0))
		return false;

	return func_122(iParam0, 2, true);
}

int func_211(BOOL bParam0, int iParam1) // Position - 0x61CD
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return 0;

	if (!Global_1102813.f_16)
		return 0;

	if (!func_252())
		return 0;

	if (!func_209())
		return 0;

	Global_0 = iParam1;

	if (bParam0)
		func_214(&Global_0, 8);

	func_214(&Global_0, 1);
	return 1;
}

BOOL func_212() // Position - 0x6223
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_5)
		return true;

	if (Global_2883584)
		return true;

	if (Global_1048577)
		return true;

	if (!func_213(Global_1051268) && Global_1572887.f_8 & true != 0)
		return true;

	return false;
}

BOOL func_213(var uParam0, var uParam1) // Position - 0x627B
{
	if (!func_253(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_254(uParam0))
		return false;

	return true;
}

void func_214(int iParam0, int iParam1) // Position - 0x62AF
{
	iParam0->f_2 = iParam0->f_2 || iParam1;
	return;
}

BOOL func_215() // Position - 0x62C2
{
	return true;
}

int func_216() // Position - 0x62E1
{
	return Global_1572887.f_14;
}

Hash func_217(Hash hParam0) // Position - 0x62EF
{
	return hParam0;
}

BOOL func_218(Hash hParam0, Hash hParam1) // Position - 0x62F9
{
	if (!func_238(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, 1120943070))
		return 1;

	return 0;
}

int func_219(int iParam0) // Position - 0x632F
{
	if (iParam0 == 2)
		iParam0 = func_255(1);

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

void func_220(float fParam0, Ped pedParam1) // Position - 0x636F
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

int func_221(int iParam0) // Position - 0x63B3
{
	if (iParam0 == 2)
		iParam0 = func_255(1);

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

void func_222(float fParam0, BOOL bParam1, BOOL bParam2) // Position - 0x63F7
{
	Player player;
	Ped EntityIndex;
	float playerSpecialAbilityMultiplier;

	player = PLAYER::PLAYER_ID();

	if (fParam0 > 0f && func_256(player))
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

int func_223(int iParam0) // Position - 0x64A8
{
	if (iParam0 == 2)
		iParam0 = func_255(1);

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

void func_224(float fParam0, Ped pedParam1) // Position - 0x64EC
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

float func_225(int iParam0, float fParam1, BOOL bParam2) // Position - 0x652E
{
	int num;
	int num2;

	num = func_8();
	func_257(&num, 0, 0, 0, 1, 0, 0);
	num2 = func_258(iParam0, 2);

	if (func_130(num, func_259(iParam0, 2), true))
	{
		func_260(iParam0, 0, 2);
		num2 = 0;
	}

	if (num2 >= 2)
	{
		func_33(103, bParam2);
		return 0f;
	}

	func_261(iParam0, func_8(), 2);
	func_260(iParam0, num2 + 1, 2);
	return fParam1;
}

float func_226(int iParam0, int iParam1) // Position - 0x6597
{
	if (iParam1 == 2)
		iParam1 = func_255(2);

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

int func_227(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x65E3
{
	Ped ped;

	if (iParam5 == 2)
		iParam5 = func_255(2);

	ped = PLAYER::PLAYER_PED_ID();

	if (func_262(ped, iParam0, fParam1))
	{
		if (bParam2)
			if (fParam1 >= 100f)
				AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
			else
				AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
	
		if (bParam3)
			func_263(iParam0, 7000, iParam5);
	
		func_264(ped, iParam0, fParam1);
		func_265(iParam0, fParam1, bParam4, iParam5);
	}

	return 1;
}

int func_228(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3) // Position - 0x6661
{
	char* effectName;
	Ped ped;

	ped = PLAYER::PLAYER_PED_ID();

	if (fParam1 == -1f)
		if (func_266(iParam0))
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
				effectName = func_267(iParam0);
			
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
					GRAPHICS::ANIMPOSTFX_PLAY(effectName);
			}
		
			func_159(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[0 /*2*/] = fParam1;
			break;
	
		case 1:
			if (bParam2)
			{
				effectName = func_267(iParam0);
			
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
					GRAPHICS::ANIMPOSTFX_PLAY(effectName);
			}
		
			func_268(joaat("STATUS_EFFECT__TRACKING"));
			func_161(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[1 /*2*/] = fParam1;
			break;
	
		case 2:
			if (bParam2)
			{
				effectName = func_267(iParam0);
			
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
					GRAPHICS::ANIMPOSTFX_PLAY(effectName);
			}
		
			func_160(-1, false);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[2 /*2*/] = fParam1;
			break;
	
		case 18:
			func_269(1, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[1 /*2*/].f_1 = fParam1;
			break;
	
		case 19:
			func_268(joaat("STATUS_EFFECT__POISON"));
			func_269(0, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[0 /*2*/].f_1 = fParam1;
			break;
	
		case 20:
			func_269(2, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[2 /*2*/].f_1 = fParam1;
			break;
	
		default:
			return 0;
	}

	return 1;
}

BOOL func_229() // Position - 0x6817
{
	if (Global_1956875.f_1431.f_107 == -15)
		return true;

	return func_73(Global_1956875.f_1431.f_107, false);
}

void func_230(float fParam0, int iParam1) // Position - 0x6840
{
	float num;
	int num2;
	int num3;

	num = func_270(13, 2);
	num2 = func_271(num);
	num = num + fParam0;
	num = func_272(num, 0f, 100f);
	num3 = func_271(num);

	if (num2 != num3)
	{
		Global_1956875.f_1431.f_107 = func_8();
		func_72(&(Global_1956875.f_1431.f_107), 0, 0, 1, 0, 0, 0, false);
	}

	func_273(13, num, 2);
	Global_1956875.f_1431.f_99 = iParam1;
	return;
}

BOOL func_231(Hash hParam0, Hash hParam1) // Position - 0x68B3
{
	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, 1224357681))
		return true;

	return false;
}

Hash func_232(Hash hParam0, BOOL bParam1) // Position - 0x68DA
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

int func_233(Hash hParam0) // Position - 0x697C
{
	var unk;
	int num;

	if (!func_168(hParam0, 0))
		return 0;

	unk = 5;
	num = ITEMDATABASE::_0x8870895BA5ED9385(hParam0, -442898163, &unk);

	if (num > 0)
		return unk[0];

	return 0;
}

struct<10> func_234(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x69B6
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

	if (iParam0 != 0 && iParam0 != -1591664384)
		num = iParam0;

	if (iParam1 != 0 && iParam1 != -1591664384)
		num.f_1 = iParam1;

	if (iParam2 != 0 && iParam2 != -1)
		num.f_2 = iParam2;

	if (iParam3 != 0)
		num.f_3 = iParam3;

	if (iParam4 != 0)
		num.f_4 = iParam4;

	if (iParam5 != 0)
		num.f_5 = iParam5;

	if (iParam6 != -1)
		num.f_6 = iParam6;

	if (iParam7 != 0)
		num.f_8 = iParam7;

	if (iParam8 != 0)
		num.f_7 = iParam8;

	return num;
}

BOOL func_235(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int* piParam11, int iParam12) // Position - 0x6A8A
{
	*uParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, piParam11, iParam12);

	if (*uParam10 >= 0)
		return true;

	return false;
}

BOOL func_236(Hash hParam0) // Position - 0x6AAB
{
	!func_168(hParam0, 0);

	if (func_156(hParam0, -393037696))
		return true;

	return false;
}

int func_237(int iParam0) // Position - 0x6AD1
{
	if (iParam0 < 0)
		return 0;

	if (!ITEMDATABASE::_ITEMDATABASE_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

BOOL func_238(Hash hParam0, int iParam1) // Position - 0x6AF2
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

int func_239(Hash hParam0, int iParam1) // Position - 0x6B0C
{
	var unk;
	int num;
	int num2;
	int i;

	unk = 20;
	num = 0;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_TAG_DATA(hParam0, &unk, &num2, 20))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (unk[i /*2*/].f_1 == iParam1)
			{
				num = unk[i /*2*/];
				return num;
			}
		}
	}

	return 0;
}

char* func_240(Hash hParam0) // Position - 0x6B5A
{
	Hash labelHash;

	if (!func_168(hParam0, 0))
		return "";

	labelHash = func_177(hParam0, false);

	if (labelHash == 0)
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(labelHash);
}

BOOL func_241(Hash hParam0) // Position - 0x6B90
{
	if (func_173(hParam0) == -126813555 || func_173(hParam0) == 1946043663)
		return true;

	return false;
}

char* func_242(Hash hParam0) // Position - 0x6BBE
{
	Hash labelHash;

	if (!func_168(hParam0, 0))
		return "";

	labelHash = func_179(hParam0);

	if (labelHash == 0)
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(labelHash);
}

void func_243(const char* sParam0, const char* sParam1, Hash hParam2) // Position - 0x6BF3
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

void func_244(Hash hParam0, var uParam1, var uParam2) // Position - 0x6C24
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

struct<18> func_245(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x6E30
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

struct<4> func_246(BOOL bParam0) // Position - 0x6F0E
{
	int num;

	num = func_204(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_251(923904168, func_274(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_251(923904168, func_274(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_251(923904168, func_274(bParam0), -740156546, false);
}

void func_247(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x6FAF
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_248(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x6FCA
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_204(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

int func_249(int iParam0) // Position - 0x6FEF
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

struct<5> func_250(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x7010
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_274(bParam1) };
	unk.f_4 = 1084182731;
	num = func_157(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_279(hParam0, -1823706425))
			{
				unk = { func_251(joaat("kit_camp"), unk, 1084182731, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_279(hParam0, -1483207246))
			{
				unk = { func_251(joaat("WARDROBE"), unk, 1034665895, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_251(joaat("kit_camp"), unk, 1084182731, bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1311702610))
			{
				unk.f_4 = -1311702610;
			}
			else if (func_279(hParam0, -1653629781))
			{
				unk = { func_251(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			break;
	
		case joaat("coach"):
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = -1591664384;
			unk = { func_278(bParam1) };
		
			switch (func_173(hParam0))
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
			unk = { func_251(joaat("WARDROBE"), unk, 1034665895, bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_246(bParam1) };
		
			if (iParam2 && func_275(hParam0, true))
			{
				unk6.f_9 = -1591664384;
			
				if (!func_276(hParam0, &unk, 1728382685, false, false))
					unk.f_4 = 1728382685;
				else if (!func_276(hParam0, &unk, -649335959, false, false))
					unk.f_4 = -649335959;
				else if (func_277(hParam0, &unk6, 1728382685))
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
			
				if (!func_280(unk, &unk28, bParam1, false, -1))
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
			else if (func_279(hParam0, -1653629781))
			{
				unk = { func_251(1384535894, unk, 1784584921, bParam1) };
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

struct<4> func_251(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x7384
{
	var outGuid;

	if (!func_168(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_204(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_252() // Position - 0x73B5
{
	return !Global_1572887.f_10;
}

BOOL func_253(int iParam0) // Position - 0x73C4
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

int func_254(int iParam0) // Position - 0x7403
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

int func_255(int iParam0) // Position - 0x7499
{
	return func_282(func_281(iParam0));
}

BOOL func_256(Player plParam0) // Position - 0x74AB
{
	float num;

	num = func_283(plParam0) - PLAYER::_GET_PLAYER_CACHED_DEAD_EYE_AMOUNT(plParam0);
	return num <= 1f;
}

void func_257(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x74C6
{
	int num;
	int i;
	int j;
	int k;
	int l;
	int m;
	int num2;
	int num3;

	num = func_123(*uParam0);
	i = func_124(*uParam0);
	j = func_125(*uParam0);
	k = func_9(*uParam0);
	l = func_126(*uParam0);
	m = func_127(*uParam0);

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
	
		num3 = func_128(num2, num);
	}

	for (i = i - iParam5; i < 0; i = i + 12)
	{
		iParam6 = iParam6 + 1;
	}

	num = num - iParam6;
	func_129(uParam0, m, l, k, j, i, num);
	return;
}

int func_258(int iParam0, int iParam1) // Position - 0x7639
{
	if (iParam1 == 2)
		iParam1 = func_255(2);

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

int func_259(int iParam0, int iParam1) // Position - 0x7689
{
	if (iParam1 == 2)
		iParam1 = func_255(2);

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

void func_260(int iParam0, int iParam1, int iParam2) // Position - 0x76DB
{
	if (iParam2 == 2)
		iParam2 = func_255(2);

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

void func_261(int iParam0, int iParam1, int iParam2) // Position - 0x7731
{
	if (iParam2 == 2)
		iParam2 = func_255(2);

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

BOOL func_262(Ped pedParam0, int iParam1, float fParam2) // Position - 0x7787
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (fParam2 > 100f)
		fParam2 = 100f;
	else if (fParam2 < 0f)
		fParam2 = 0f;

	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(pedParam0, func_284(iParam1), BUILTIN::CEIL(fParam2));
	return true;
}

void func_263(int iParam0, int iParam1, int iParam2) // Position - 0x77DC
{
	if (iParam2 == 2)
		iParam2 = func_255(2);

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

void func_264(Ped pedParam0, int iParam1, float fParam2) // Position - 0x783D
{
	char* StringToTest;

	StringToTest = func_285(iParam1);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(StringToTest))
		PED::_SET_PED_BLACKBOARD_FLOAT(pedParam0, func_286(iParam1), fParam2, -1);

	return;
}

void func_265(int iParam0, float fParam1, BOOL bParam2, int iParam3) // Position - 0x7869
{
	int num;

	if (iParam3 == 2)
		iParam3 = func_255(2);

	num = Global_1295666.f_16;
	func_287(iParam0, fParam1, iParam3);

	if (bParam2)
		func_288(iParam0, num, iParam3);

	return;
}

BOOL func_266(int iParam0) // Position - 0x789F
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

char* func_267(int iParam0) // Position - 0x78CE
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

void func_268(int iParam0) // Position - 0x7909
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
		num3 = func_289(num, 1);
	
		if (Global_1156111.f_35859.f_919[num3 /*12*/] == iParam0)
		{
			func_290(num);
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

void func_269(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x79D9
{
	func_227(iParam0, 100f, bParam1, bParam2, true, 2);
	return;
}

float func_270(int iParam0, int iParam1) // Position - 0x79F3
{
	if (iParam1 == 2)
		iParam1 = func_255(1);

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

int func_271(float fParam0) // Position - 0x7A3F
{
	float num;

	num = fParam0;
	num = (2f * num) - 100f;
	return BUILTIN::ROUND((num / 100f) * BUILTIN::TO_FLOAT(10));
}

float func_272(float fParam0, float fParam1, float fParam2) // Position - 0x7A6A
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

int func_273(int iParam0, float fParam1, int iParam2) // Position - 0x7A91
{
	if (!func_291(iParam0))
		return 0;

	if (iParam2 == 2)
		iParam2 = func_255(2);

	func_292(iParam0, fParam1, iParam2);

	if (!ENTITY::IS_ENTITY_DEAD(Global_1295666.f_3))
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_1295666.f_3, iParam0, BUILTIN::FLOOR(fParam1));

	return 1;
}

struct<4> func_274(BOOL bParam0) // Position - 0x7AE2
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_204(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_251(joaat("character"), func_293(), -1591664384, bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_251(joaat("character"), func_293(), -1591664384, false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_251(joaat("character"), func_293(), -1591664384, bParam0);
}

int func_275(Hash hParam0, BOOL bParam1) // Position - 0x7B82
{
	if (func_173(hParam0) == 1779021115)
		return 0;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_294();
		else
			return 1;

	return 0;
}

BOOL func_276(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x7BB9
{
	return func_295(hParam0, *uParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_277(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x7BD4
{
	var unk;

	if (func_296(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_278(BOOL bParam0) // Position - 0x7BF5
{
	int num;

	num = func_204(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_251(271701509, func_274(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_251(271701509, func_274(bParam0), 12999093, false);
}

BOOL func_279(Hash hParam0, int iParam1) // Position - 0x7C5F
{
	Hash hash;
	int num;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || iParam1 == 0)
		return false;

	num = func_173(hParam0);

	if (num == -1015256479)
		return false;

	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(num);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(num, i, &hash))
			if (func_297(hParam0, iParam1, hash))
				return true;
	}

	return false;
}

BOOL func_280(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x7CCC
{
	return func_298(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

BOOL func_281(int iParam0) // Position - 0x7CE2
{
	return func_191(&(Global_1956875.f_1565), iParam0, 1);
}

int func_282(BOOL bParam0) // Position - 0x7CF8
{
	if (bParam0)
		return 1;

	return 0;
}

float func_283(Player plParam0) // Position - 0x7D0A
{
	return PLAYER::_GET_PLAYER_MAX_DEAD_EYE(plParam0, 0) - (float)func_299(2);
}

int func_284(int iParam0) // Position - 0x7D20
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

char* func_285(int iParam0) // Position - 0x7D4F
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

char* func_286(int iParam0) // Position - 0x7D8A
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

void func_287(int iParam0, float fParam1, int iParam2) // Position - 0x7DC5
{
	if (iParam2 == 2)
		iParam2 = func_255(2);

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

void func_288(int iParam0, int iParam1, int iParam2) // Position - 0x7E17
{
	if (iParam2 == 2)
		iParam2 = func_255(2);

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

int func_289(int iParam0, int iParam1) // Position - 0x7E6D
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

// Unhandled jump detected. Output should be considered invalid
int func_290(int iParam0) // Position - 0x87FA
{
	int num;
	int num2;
	int num3;
	int num4;
	int i;
	int j;
	int k;

	if (!func_300(iParam0))
		return 0;

	num = func_289(iParam0, 1);

	if (!func_301(Global_1156111.f_35859.f_919[num /*12*/]))
		return 1;

	num4 = func_302(Global_1156111.f_35859.f_919[num /*12*/], 1);

	for (i = 0; i < Global_1156111.f_35859[num4 /*6*/].f_5; i = i + 1)
	{
		num2 = Global_1156111.f_35859[num4 /*6*/][i];
	
		switch (func_303(iParam0, num2))
		{
			case 0:
				func_304(num2, iParam0, i);
				break;
		
			case 1:
				for (j = 0; j < Global_1156111.f_35859.f_11700; j = j + 1)
				{
					if (Global_1156111.f_35859.f_9503[j /*3*/] != num2 || Global_1156111.f_35859.f_9503[j /*3*/].f_1 != iParam0)
					{
					}
					else
					{
						func_304(num2, iParam0, i);
						func_305(&Global_1156111.f_35859.f_9503[j /*3*/]);
						Global_1156111.f_35859.f_11700 = Global_1156111.f_35859.f_11700 - 1;
						Global_1156111.f_35859.f_9503[j /*3*/] = { Global_1156111.f_35859.f_9503[Global_1156111.f_35859.f_11700 /*3*/] };
						func_305(&Global_1156111.f_35859.f_9503[Global_1156111.f_35859.f_11700 /*3*/]);
						break;
					}
				}
				break;
		
			case 2:
				goto 0x25E;
		}
	
		num3 = func_306(num2, 1);
		func_307(num3, -1);
	
		if (Global_1156111.f_35859.f_3116[num3 /*31*/].f_29 <= 0)
		{
			func_308(num3, 0);
		
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
	func_309(&Global_1156111.f_35859.f_919[num /*12*/]);
	return 1;
}

BOOL func_291(int iParam0) // Position - 0x8A8A
{
	if (func_266(iParam0))
		return true;
	else if (func_310(iParam0))
		return true;

	return false;
}

void func_292(int iParam0, float fParam1, int iParam2) // Position - 0x8AB0
{
	if (fParam1 < 0f)
		return;

	if (iParam2 == 2)
		iParam2 = func_255(1);

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

struct<4> func_293() // Position - 0x8B0C
{
	var unk;

	return unk;
}

int func_294() // Position - 0x8B18
{
	if (func_311(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

int func_295(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x8B35
{
	int inventoryItemCountWithGuid;
	var guid;

	if (!func_168(hParam0, 0))
		return 0;

	if (!bParam7 && func_203(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_251(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_204(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_204(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

BOOL func_296(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x8BB4
{
	int inventoryId;

	inventoryId = func_204(false);
	*panParam1 = { func_251(hParam0, func_246(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_297(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x8BF9
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, iParam1, hParam2);
}

BOOL func_298(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x8C2C
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_204(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

int func_299(int iParam0) // Position - 0x8C66
{
	switch (iParam0)
	{
		case 0:
			return func_219(2) * 2;
	
		case 1:
			return func_223(2) * 2;
	
		case 2:
			return func_221(2) * 2;
	
		default:
		
	}

	return -1;
}

BOOL func_300(int iParam0) // Position - 0x8CA7
{
	int num;

	num = func_289(iParam0, 1);

	if (num < 2 || num >= 183)
		return false;

	return true;
}

BOOL func_301(int iParam0) // Position - 0x8CCF
{
	int num;

	num = func_302(iParam0, 1);

	if (num < 1 || num >= 153)
		return false;

	return true;
}

int func_302(int iParam0, int iParam1) // Position - 0x8CF7
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

int func_303(int iParam0, int iParam1) // Position - 0x93AE
{
	Player player;
	Player player2;
	int num;

	player = func_312(iParam0);
	player2 = Global_1295666;
	num = func_306(iParam1, 1);

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

int func_304(int iParam0, int iParam1, int iParam2) // Position - 0x9431
{
	int num;
	int num2;

	if (!func_300(iParam1))
		return 0;

	if (!func_313(iParam0))
		return 0;

	num = func_306(iParam0, 1);
	func_314(iParam0, iParam1, iParam2);

	if (func_315(Global_1156111.f_35859.f_3116[num /*31*/]) && func_316(iParam0, Global_1156111.f_35859.f_3116[num /*31*/].f_4))
	{
		num2 = { func_317(Global_1156111.f_35859.f_3116[num /*31*/].f_4) };
	
		if (func_318(num2))
			if (func_319(num2, num2.f_1, num2.f_2))
				func_320(Global_1156111.f_35859.f_3116[num /*31*/].f_4, num2, num2.f_1, num2.f_2);
			else
				func_321(Global_1156111.f_35859.f_3116[num /*31*/].f_4);
		else
			func_321(Global_1156111.f_35859.f_3116[num /*31*/].f_4);
	}

	return 1;
}

void func_305(int iParam0) // Position - 0x9529
{
	*iParam0 = -1;
	iParam0->f_1 = 0;
	iParam0->f_2 = -1;
	return;
}

int func_306(int iParam0, int iParam1) // Position - 0x953F
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

void func_307(int iParam0, int iParam1) // Position - 0x9DF0
{
	Global_1156111.f_35859.f_3116[iParam0 /*31*/].f_29 = Global_1156111.f_35859.f_3116[iParam0 /*31*/].f_29 + iParam1;
	return;
}

void func_308(int iParam0, int iParam1) // Position - 0x9E1F
{
	Global_1156111.f_35859.f_3116[iParam0 /*31*/].f_29 = iParam1;
	return;
}

void func_309(int iParam0) // Position - 0x9E3B
{
	int i;

	for (i = 0; i < 4; i = i + 1)
	{
		iParam0->f_1[i /*2*/] = 0;
		iParam0->f_1[i /*2*/].f_1 = 0;
	}

	return;
}

BOOL func_310(int iParam0) // Position - 0x9E69
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

int func_311(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x9E8E
{
	if (func_322(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_204(bParam1), hParam0, bParam3);
}

Player func_312(int iParam0) // Position - 0x9EC1
{
	if (func_323(iParam0))
		return func_324(iParam0) % 32;

	return Global_1295666;
}

BOOL func_313(int iParam0) // Position - 0x9EE2
{
	int num;

	num = func_306(iParam0, 1);

	if (num < 1 || num >= 199)
		return false;

	return true;
}

int func_314(int iParam0, int iParam1, int iParam2) // Position - 0x9F0A
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

	num = func_289(iParam1, 1);
	num2 = func_306(iParam0, 1);
	num3 = func_302(Global_1156111.f_35859.f_919[num /*12*/], 1);

	if (Global_1156111.f_35859[num3 /*6*/][iParam2] != iParam0)
		return 0;

	if (!Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/])
		return 1;

	Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/] = false;

	for (i = 0; i < Global_1156111.f_35859.f_3116[num2 /*31*/].f_16; i = i + 1)
	{
		num4 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/];
		num5 = func_325(num4, 1);
	
		if (!func_326(num4))
		{
		}
		else
		{
			Global_1156111.f_2169[num5 /*205*/].f_1[num2] = Global_1156111.f_2169[num5 /*205*/].f_1[num2] - 1;
			Global_1156111.f_2169[num5 /*205*/].f_201 = Global_1156111.f_2169[num5 /*205*/].f_201 - func_327(&Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/]);
			func_328(num4);
		}
	}

	for (j = 0; j < Global_1156111.f_35859.f_3116[num2 /*31*/].f_28; j = j + 1)
	{
		num6 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_17[j /*2*/];
	
		if (!func_329(num6))
		{
		}
		else
		{
			num7 = func_330(num6, 1);
			Global_1156111.f_21645[num7 /*209*/][num2] = Global_1156111.f_21645[num7 /*209*/][num2] - 1;
		
			if (Global_1156111.f_21645[num7 /*209*/][num2] <= 0)
				MISC::_CLEAR_BIT_FLAG(&(Global_1156111.f_21645[num7 /*209*/].f_200), num2);
		
			if (!MISC::_IS_ANY_BIT_FLAG_SET(&(Global_1156111.f_21645[num7 /*209*/].f_200)))
			{
				Global_1156111.f_21645[num7 /*209*/].f_208 = 0;
				func_331(num6);
			}
		}
	}

	return 1;
}

BOOL func_315(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30) // Position - 0xA0FB
{
	return uParam0.f_4 != 0;
}

BOOL func_316(int iParam0, int iParam1) // Position - 0xA109
{
	int num;

	if (!func_313(iParam0))
		return false;

	if (!func_332(iParam1))
		return false;

	num = func_333(iParam1, 1);
	return Global_1156111.f_35859.f_9286[num /*3*/] == iParam0;
}

Vector3 func_317(int iParam0) // Position - 0xA149
{
	int num;
	var unk;

	num = func_334(iParam0);

	if (num == -1)
	{
		unk = -1;
		unk.f_2 = -1;
		return unk;
	}

	return Global_1156111.f_35859.f_9503[num /*3*/];
}

BOOL func_318(int iParam0, var uParam1, var uParam2) // Position - 0xA185
{
	if (!func_313(iParam0))
		return false;

	if (!func_300(iParam0.f_1))
		return false;

	if (!func_335(iParam0.f_2))
		return false;

	return true;
}

BOOL func_319(int iParam0, int iParam1, int iParam2) // Position - 0xA1BC
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

	num = func_289(iParam1, 1);
	num2 = func_306(iParam0, 1);
	num3 = func_302(Global_1156111.f_35859.f_919[num /*12*/], 1);

	if (Global_1156111.f_35859[num3 /*6*/][iParam2] != iParam0)
		return false;

	Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/].f_1 = Global_1295666.f_16;

	if (Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/])
		return true;

	Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/] = true;

	for (i = 0; i < Global_1156111.f_35859.f_3116[num2 /*31*/].f_16; i = i + 1)
	{
		num4 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/];
		num5 = func_325(num4, 1);
	
		if (!func_326(num4))
		{
		}
		else
		{
			Global_1156111.f_2169[num5 /*205*/].f_1[num2] = Global_1156111.f_2169[num5 /*205*/].f_1[num2] + 1;
			Global_1156111.f_2169[num5 /*205*/].f_201 = Global_1156111.f_2169[num5 /*205*/].f_201 + func_327(&Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/]);
			func_336(num4);
		}
	}

	for (j = 0; j < Global_1156111.f_35859.f_3116[num2 /*31*/].f_28; j = j + 1)
	{
		num6 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_17[j /*2*/];
	
		if (!func_329(num6))
		{
		}
		else if (!func_337(&Global_1156111.f_35859.f_3116[num2 /*31*/].f_17[j /*2*/]))
		{
		}
		else
		{
			num7 = func_330(num6, 1);
			Global_1156111.f_21645[num7 /*209*/][num2] = Global_1156111.f_21645[num7 /*209*/][num2] + 1;
			MISC::_SET_BIT_FLAG(&(Global_1156111.f_21645[num7 /*209*/].f_200), num2);
		
			if (!Global_1156111.f_21645[num7 /*209*/].f_208)
			{
				Global_1156111.f_21645[num7 /*209*/].f_208 = 1;
				func_338(num6);
			}
		}
	}

	func_339(Global_1156111.f_35859.f_3116[num2 /*31*/].f_2);
	return true;
}

void func_320(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0xA3EA
{
	int num;

	if (!func_332(iParam0))
		return;

	num = func_333(iParam0, 1);

	if (!func_313(iParam1))
		return;

	if (!func_300(iParam2))
		return;

	if (!func_335(iParam3))
		return;

	Global_1156111.f_35859.f_9286[num /*3*/] = iParam1;
	Global_1156111.f_35859.f_9286[num /*3*/].f_1 = iParam2;
	Global_1156111.f_35859.f_9286[num /*3*/].f_2 = iParam3;
	return;
}

void func_321(int iParam0) // Position - 0xA469
{
	int num;

	if (!func_332(iParam0))
		return;

	num = func_333(iParam0, 1);
	Global_1156111.f_35859.f_9286[num /*3*/] = -1;
	Global_1156111.f_35859.f_9286[num /*3*/].f_1 = 0;
	Global_1156111.f_35859.f_9286[num /*3*/].f_2 = -1;
	return;
}

BOOL func_322(Hash hParam0) // Position - 0xA4BE
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

BOOL func_323(int iParam0) // Position - 0xA4CC
{
	int num;

	num = func_289(iParam0, 1);

	if (num >= 2 && num <= 129)
		return true;

	return false;
}

int func_324(int iParam0) // Position - 0xA4F3
{
	int num;

	num = func_289(iParam0, 1);

	if (func_323(iParam0))
		return num - 2;
	else if (func_340(iParam0))
		return num - 130;
	else if (func_341(iParam0))
		return num - 166;
	else if (func_342(iParam0))
		return num - 167;
	else if (func_343(iParam0))
		return num - 172;
	else if (func_344(iParam0))
		return num - 180;
	else if (func_345(iParam0))
		return num - 150;

	return -1;
}

int func_325(int iParam0, int iParam1) // Position - 0xA58D
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

BOOL func_326(int iParam0) // Position - 0xA9C6
{
	int num;

	num = func_325(iParam0, 1);

	if (num < 1 || num >= 95)
		return false;

	return true;
}

float func_327(int iParam0) // Position - 0xA9EE
{
	float num;

	if (iParam0->f_2 != 0)
	{
		num = func_346(794259616, iParam0->f_2, iParam0->f_1, "");
		return num;
	}

	return iParam0->f_1;
}

void func_328(int iParam0) // Position - 0xAA1E
{
	int num;
	int num2;
	int i;

	if (!func_326(iParam0))
		return;

	num = func_325(iParam0, 1);

	if (!func_347(Global_1156111.f_2169[num /*205*/]))
		return;

	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] = Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] - 1;

	if (Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] > 0)
		return;

	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] = 0;
	Global_1156111.f_2169[num /*205*/].f_204 = 0;

	if (!func_348(Global_1156111.f_2169[num /*205*/].f_203))
		return;

	num2 = func_349(Global_1156111.f_2169[num /*205*/].f_203, 1);
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

BOOL func_329(int iParam0) // Position - 0xABFD
{
	int num;

	num = func_330(iParam0, 1);

	if (num < 1 || num >= 68)
		return false;

	return true;
}

int func_330(int iParam0, int iParam1) // Position - 0xAC25
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

void func_331(int iParam0) // Position - 0xAF35
{
	Ped ped;
	Player player;

	ped = PLAYER::PLAYER_PED_ID();
	player = PLAYER::PLAYER_ID();

	switch (iParam0)
	{
		case joaat("HEADSHOT_IMMUNITY"):
			func_351();
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
			func_350();
			break;
	
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
		case joaat("SLIPPERY_BASTARD_VFX"):
		case joaat("SLOW_AND_STEADY_VFX"):
			func_354(func_353(iParam0));
			break;
	
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_347(16);
			break;
	
		case joaat("OVERPOWER_INFINITE_HEALTH"):
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 19);
			break;
	
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_347(17);
			break;
	
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_352(iParam0));
			break;
	
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(ped, false, 0);
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_352(iParam0));
			break;
	
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(5);
			func_33(105, true);
			break;
	
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_352(iParam0));
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
			func_355();
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
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_352(iParam0));
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

BOOL func_332(int iParam0) // Position - 0xB145
{
	int num;

	num = func_333(iParam0, 1);

	if (num < 0 || num >= 5)
		return false;

	return true;
}

int func_333(int iParam0, int iParam1) // Position - 0xB16C
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

int func_334(int iParam0) // Position - 0xB1C9
{
	int num;
	var unk;
	var unk32;
	int num2;
	int num3;
	int i;

	num = func_356(iParam0);
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
		num3 = func_306(Global_1156111.f_35859.f_9503[i /*3*/], 1);
	
		if (Global_1156111.f_35859.f_3116[num3 /*31*/].f_4 != iParam0)
		{
		}
		else if (Global_1156111.f_35859.f_9503[i /*3*/] == num)
		{
		}
		else if (!func_357(Global_1156111.f_35859.f_9503[i /*3*/], Global_1156111.f_35859.f_9503[i /*3*/].f_1))
		{
		}
		else
		{
			unk = { func_358(Global_1156111.f_35859.f_9503[i /*3*/]) };
		
			if (unk.f_5 > unk32.f_5)
			{
				unk32 = { unk };
				num2 = i;
			}
		}
	}

	return num2;
}

BOOL func_335(int iParam0) // Position - 0xB30D
{
	if (iParam0 < 0 || iParam0 > 4)
		return false;

	return true;
}

void func_336(int iParam0) // Position - 0xB32B
{
	int num;
	int num2;
	int i;

	if (!func_326(iParam0))
		return;

	num = func_325(iParam0, 1);

	if (!func_347(Global_1156111.f_2169[num /*205*/]))
		return;

	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] = Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] + 1;
	Global_1156111.f_2169[num /*205*/].f_204 = 1;

	if (!func_348(Global_1156111.f_2169[num /*205*/].f_203))
		return;

	num2 = func_349(Global_1156111.f_2169[num /*205*/].f_203, 1);
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

BOOL func_337(int iParam0) // Position - 0xB480
{
	BOOL flag;

	if (iParam0->f_1 != 0)
	{
		flag = func_359(794259616, iParam0->f_1, true, "");
		return flag;
	}

	return true;
}

void func_338(int iParam0) // Position - 0xB4AA
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
			func_351();
			break;
	
		case joaat("SLOW_AND_STEADY_AURA"):
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(player, 1936842089);
			PLAYER::_0x2B12B6FC8B8772AB(player, 8);
			PLAYER::_0x131E294EF60160DF(player, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(player, 1);
			break;
	
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_350();
			break;
	
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			num = func_353(iParam0);
			func_361(num, 3, 1, -1, 1);
			break;
	
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_347(16);
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
			func_347(17);
			break;
	
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_352(iParam0));
			break;
	
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(EntityIndex, true, 0);
			GRAPHICS::ANIMPOSTFX_PLAY(func_352(iParam0));
			break;
	
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(5);
			func_33(104, true);
			break;
	
		case joaat("SLIPPERY_BASTARD_VFX"):
			num = func_353(iParam0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(EntityIndex, func_360(iParam0, 0));
			func_361(num, 0, 1, entityBoneIndexByName, 0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(EntityIndex, func_360(iParam0, 1));
			func_361(num, 1, 1, entityBoneIndexByName, 0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(EntityIndex, func_360(iParam0, 2));
			func_361(num, 2, 1, entityBoneIndexByName, 0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(EntityIndex, func_360(iParam0, 3));
			func_361(num, 2, 1, entityBoneIndexByName, 0);
			break;
	
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_352(iParam0));
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
			func_362();
			break;
	
		case joaat("SLOW_AND_STEADY_VFX"):
			num = func_353(iParam0);
			func_361(num, 4, 1, -1, 0);
			break;
	
		case joaat("OVERPOWER_PREDATOR"):
			break;
	
		case 1398483650:
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE(player, 0.5f);
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE_2(player, 2f);
			break;
	
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_352(iParam0));
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

void func_339(int iParam0) // Position - 0xB745
{
	char* StringToTest;
	char* StringToTest2;

	if (iParam0 == 0)
		return;

	StringToTest = func_363(iParam0);

	if (MISC::IS_STRING_NULL_OR_EMPTY(StringToTest))
		return;

	StringToTest2 = func_364(iParam0);

	if (MISC::IS_STRING_NULL_OR_EMPTY(StringToTest2))
		return;

	AUDIO::PLAY_SOUND_FROM_ENTITY(StringToTest, Global_1295666.f_3, StringToTest2, false, 0, 0);
	return;
}

BOOL func_340(int iParam0) // Position - 0xB78F
{
	int num;

	num = func_289(iParam0, 1);

	if (num >= 130 && num <= 149)
		return true;

	return false;
}

BOOL func_341(int iParam0) // Position - 0xB7B7
{
	int num;

	num = func_289(iParam0, 1);

	if (num >= 166 && num <= 166)
		return true;

	return false;
}

BOOL func_342(int iParam0) // Position - 0xB7DF
{
	int num;

	num = func_289(iParam0, 1);

	if (num >= 167 && num <= 171)
		return true;

	return false;
}

BOOL func_343(int iParam0) // Position - 0xB807
{
	int num;

	num = func_289(iParam0, 1);

	if (num >= 172 && num <= 179)
		return true;

	return false;
}

BOOL func_344(int iParam0) // Position - 0xB82F
{
	int num;

	num = func_289(iParam0, 1);

	if (num >= 180 && num <= 182)
		return true;

	return false;
}

BOOL func_345(int iParam0) // Position - 0xB857
{
	int num;

	num = func_289(iParam0, 1);

	if (num >= 150 && num <= 165)
		return true;

	return false;
}

float func_346(Hash hParam0, Hash hParam1, float fParam2, char* sParam3) // Position - 0xB87F
{
	var unk;
	float num;

	if (func_365(hParam0, hParam1, &unk))
		num = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(hParam0, hParam1, unk.f_10.f_1);
	else
		num = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(hParam0, hParam1, fParam2);

	return num;
}

BOOL func_347(int iParam0) // Position - 0xB8B5
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

BOOL func_348(int iParam0) // Position - 0xB924
{
	int num;

	num = func_349(iParam0, 1);

	if (num < 1 || num >= 5)
		return false;

	return true;
}

int func_349(int iParam0, int iParam1) // Position - 0xB94B
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

void func_350() // Position - 0xB9A8
{
	BOOL bTrue;
	BOOL bTrue2;

	if (Global_1156111.f_21645[3 /*209*/].f_208)
		bTrue = true;

	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 550, bTrue);

	if (Global_1156111.f_21645[4 /*209*/].f_208)
		if (!func_192(Global_1297600[Global_1295666 /*87*/].f_86, 1))
			bTrue2 = true;

	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 556, bTrue2);
	return;
}

void func_351() // Position - 0xBA0A
{
	BOOL bTrue;

	bTrue = false;

	if (Global_1156111.f_21645[12 /*209*/].f_208)
		bTrue = true;

	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 263, bTrue);
	return;
}

char* func_352(int iParam0) // Position - 0xBA3A
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

int func_353(int iParam0) // Position - 0xBA82
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

void func_354(int iParam0) // Position - 0xBABD
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

void func_355() // Position - 0xBAFD
{
	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 305, false);
	PED::_RESET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Global_1295666.f_3);
	return;
}

int func_356(int iParam0) // Position - 0xBB1D
{
	int num;

	if (!func_332(iParam0))
		return -1;

	num = func_333(iParam0, 1);
	return Global_1156111.f_35859.f_9286[num /*3*/];
}

BOOL func_357(int iParam0, int iParam1) // Position - 0xBB4C
{
	int num;
	Player player;
	int num2;
	int num3;
	var unk;

	if (!func_313(iParam0))
		return false;

	num = func_306(iParam0, 1);
	num2 = Global_1156111.f_35859.f_3116[num /*31*/].f_4;

	if (func_315(Global_1156111.f_35859.f_3116[num /*31*/]))
	{
		num3 = Global_1156111.f_35859.f_9286[func_333(num2, 1) /*3*/];
		unk = { func_358(num3) };
	
		if (num3 != iParam0 && Global_1156111.f_35859.f_3116[num /*31*/].f_5 <= unk.f_5)
			return false;
	}

	switch (Global_1156111.f_35859.f_3116[num /*31*/])
	{
		case joaat("ENTER_REVIVED_REMOTE"):
			player = func_312(iParam1);
		
			if (player == Global_1295666)
				return false;
		
			return true;
	
		case -2129621195:
			player = func_312(iParam1);
		
			if (player == Global_1295666)
				return false;
		
			if (!GANG::NETWORK_IS_GANG_LEADER(Global_1295666.f_149[Global_1295666]))
				return false;
		
			if (!GANG::_NETWORK_IS_IN_MY_GANG(Global_1295666.f_149[player]))
				return false;
		
			return true;
	
		case -2010146101:
			if (!func_366())
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
		
			player = func_312(iParam1);
		
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295666.f_149[player]))
				return false;
		
			if (PED::_GET_LASSOED_LASSOER(Global_1295666.f_3) != PLAYER::GET_PLAYER_PED(Global_1295666.f_149[player]))
				return false;
		
			return true;
	
		case joaat("ALLY_ENTER_DEADEYE"):
			player = func_312(iParam1);
		
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295666.f_149[player]))
				return false;
		
			if (player != Global_1295666 && !func_368(Global_1295666.f_149[player]))
				return false;
		
			if (!func_369(512, player))
				return false;
		
			return true;
	
		case joaat("ENTER_FREEROAM_OR_COOP"):
			if (!func_366() && !func_367())
				return false;
		
			return true;
	
		default:
		
	}

	return false;
}

struct<31> func_358(int iParam0) // Position - 0xBE21
{
	int num;

	num = func_306(iParam0, 1);
	return Global_1156111.f_35859.f_3116[num /*31*/];
}

BOOL func_359(Hash hParam0, Hash hParam1, BOOL bParam2, char* sParam3) // Position - 0xBE45
{
	var unk;
	BOOL flag;

	if (func_365(hParam0, hParam1, &unk))
		flag = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(hParam0, hParam1, unk.f_10.f_2);
	else
		flag = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(hParam0, hParam1, bParam2);

	return flag;
}

char* func_360(int iParam0, int iParam1) // Position - 0xBE7B
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

void func_361(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0xBED4
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

void func_362() // Position - 0xBF59
{
	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 305, true);
	PED::_SET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Global_1295666.f_3, 0.7f);
	return;
}

char* func_363(int iParam0) // Position - 0xBF7E
{
	switch (iParam0)
	{
		case -1822335806:
			return "Head_Shot_Ricco";
	
		default:
		
	}

	return "";
}

char* func_364(int iParam0) // Position - 0xBF9F
{
	switch (iParam0)
	{
		case -1822335806:
			return "RDRO_Ability_Cards_SFX_Sounds";
	
		default:
		
	}

	return "";
}

BOOL func_365(Hash hParam0, Hash hParam1, var uParam2) // Position - 0xBFC0
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
		uParam2->f_10.f_3 = func_370(num2);
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

BOOL func_366() // Position - 0xC1E4
{
	return Global_1572887.f_7;
}

BOOL func_367() // Position - 0xC1F2
{
	if (!Global_1048577)
		return false;

	if (!func_213(func_4(0)))
		return false;

	if (Global_3145858 != -504335712)
		return false;

	if (func_371(*Global_524288.f_39632))
		return true;

	return false;
}

BOOL func_368(Player plParam0) // Position - 0xC23D
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (func_372(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) != 1)
			func_373(plParam0);
	
		return true;
	}

	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) == 1;
}

BOOL func_369(int iParam0, Player plParam1) // Position - 0xC282
{
	if (plParam1 == 255)
		return Global_1102813.f_3 && iParam0 != false;

	return Global_1101558[plParam1 /*38*/].f_3 && iParam0 != false;
}

int func_370(int iParam0) // Position - 0xC2AE
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

BOOL func_371(int iParam0) // Position - 0xC2E4
{
	return iParam0 == -1759663922 || iParam0 == -318976023 || iParam0 == 772881414 || iParam0 == 31269700 || iParam0 == -133550749;
}

BOOL func_372(Player plParam0) // Position - 0xC32C
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), plParam0))
		return true;

	return false;
}

void func_373(Player plParam0) // Position - 0xC349
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (!Global_1295666.f_17[player])
	{
		func_374(plParam0);
		return;
	}

	if (Global_1072759.f_21353.f_1[player /*8*/] == 1)
		return;

	func_375(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 1);
	Global_1072759.f_21353.f_1[player /*8*/] = 1;
	return;
}

void func_374(Player plParam0) // Position - 0xC3CC
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (Global_1072759.f_21353.f_1[player /*8*/] == 0)
		return;

	func_375(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 0);
	Global_1072759.f_21353.f_1[player /*8*/] = 0;
	return;
}

void func_375(Player plParam0) // Position - 0xC438
{
	if (Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 = 0;
	}

	return;
}

