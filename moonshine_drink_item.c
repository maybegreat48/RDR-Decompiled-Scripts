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
	Player player;
	float num2;
	BOOL flag;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	num.f_1.f_2 = 1086324736;
	num.f_1.f_11.f_1 = 20;
	num.f_1.f_33 = 20;
	num.f_183 = 3;
	num.f_187 = 14;
	player = func_1();

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		func_2(&num);

	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(1);
	NETWORK::RESERVE_NETWORK_CLIENT_MISSION_OBJECTS(1);

	if (func_3(PLAYER::PLAYER_ID(), true))
		func_4(&(num.f_202), 16);

	if (ENTITY::DOES_ENTITY_EXIST(uScriptParam_0.f_1))
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uScriptParam_0.f_1, true, true);

	num.f_204 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_33);
	func_5(&uScriptParam_0, &(num.f_1));

	if (num.f_1 == 0)
		if (num.f_204 == joaat("WORLD_PLAYER_MOONSHINE_SELF_SERVE_BAR"))
			if (Global_1297600[player /*87*/].f_19.f_20 != 0)
				num.f_1 = Global_1297600[player /*87*/].f_19.f_20;
			else if (Global_1297600[player /*87*/].f_19.f_19 == 0)
				num.f_1 = -545779394;
			else if (Global_1297600[player /*87*/].f_19.f_19 == joaat("provision_role_moonshiner_mash_high") || Global_1297600[player /*87*/].f_19.f_19 == 1847740267)
				num.f_1 = 1847740267;
			else if (Global_1297600[player /*87*/].f_19.f_19 == joaat("provision_role_moonshiner_mash_medium") || Global_1297600[player /*87*/].f_19.f_19 == 1532695640)
				num.f_1 = 1532695640;
			else
				num.f_1 = -545779394;
		else
			num.f_1 = -545779394;

	num.f_179 = func_6();
	func_7(&num);
	func_8(&num);

	while (!SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		func_9();
		num2 = func_10(&num, uScriptParam_0.f_1);
		PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_ALCOHOL_BLOCK_CHUG_DISCARD", true, 1);
		PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_ALCOHOL_BLOCK_CHUG_PUT_AWAY", true, 1);
		PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_ALCOHOL_BLOCK_CHEERS_LO", true, 1);
		PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_ALCOHOL_BLOCK_CHEERS_HI_DISCARD", true, 1);
		PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_ALCOHOL_BLOCK_CHEERS_HI_PUTAWAY", true, 1);
		PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_ALCOHOL_BLOCK_DISCARD_PROMPT", true, 1);
		PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_ALCOHOL_BLOCK_PUTAWAY_PROMPT", true, 1);
	
		if (NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false) >= 1 && NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(uScriptParam_0.f_1) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(NETWORK::OBJ_TO_NET(uScriptParam_0.f_1)))
			NETWORK::PREVENT_NETWORK_ID_MIGRATION(NETWORK::OBJ_TO_NET(uScriptParam_0.f_1));
	
		if (!uScriptParam_0.f_3)
		{
			if (!num.f_181)
				if (!PED::IS_PED_DEAD_OR_DYING(Global_33, true))
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_33, 1.5f);
		
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ENTER"), false);
			func_11(&(num.f_1));
		}
	
		func_12();
		HUD::_UI_PROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_33, 1f, 2, 1, 0, func_13(&num), 0);
		PLAYER::_0xCD7CA3013FD12749(PLAYER::GET_PLAYER_INDEX(), HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(Global_33));
		func_14(&num);
		func_15(&num);
		func_16(&num);
	
		switch (num)
		{
			case 0:
				if (func_17(num.f_1, 0))
					func_18(&(num.f_1));
			
				if (uScriptParam_0.f_3)
				{
					num.f_1.f_2 = 1f;
					func_19(&num, 3);
				}
				else
				{
					func_19(&num, 1);
				}
				break;
		
			case 1:
				if (func_20(num.f_202, 4) && TASK::GET_ITEM_INTERACTION_STATE(Global_33) != num.f_187[7])
				{
					PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MOVE_LR"), false);
					PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MOVE_UD"), false);
				}
			
				func_21(&num);
			
				if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) == num.f_187[0] || TASK::GET_ITEM_INTERACTION_STATE(Global_33) == num.f_187[7] && func_22(num.f_183[0], true))
					if (func_20(num.f_202, 4))
						if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) != num.f_187[12])
							TASK::_0xB35370D5353995CB(Global_33, num.f_187[12], 1048576000);
					else if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) != num.f_187[2])
						TASK::_0xB35370D5353995CB(Global_33, num.f_187[2], 1048576000);
			
				if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) == num.f_187[2] || TASK::GET_ITEM_INTERACTION_STATE(Global_33) == num.f_187[12] && ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 745451196) && !func_22(num.f_183[0], true))
				{
					if (func_20(num.f_202, 4))
					{
						if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) == num.f_187[8])
						{
						}
						else
						{
							TASK::_0xB35370D5353995CB(Global_33, num.f_187[8], 1048576000);
						}
					}
					else if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) != num.f_187[3])
					{
						TASK::_0xB35370D5353995CB(Global_33, num.f_187[3], 1048576000);
					}
				}
			
				if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) == num.f_187[0] || TASK::GET_ITEM_INTERACTION_STATE(Global_33) == num.f_187[7] && func_22(num.f_183[1], true))
				{
					if (!func_23(&(num.f_205)))
						func_24(&(num.f_205), true);
				
					if (func_20(num.f_202, 4))
					{
						if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) == num.f_187[11])
						{
						}
						else
						{
							TASK::_0xB35370D5353995CB(Global_33, num.f_187[11], 1048576000);
						}
					}
					else if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) != num.f_187[4])
					{
						TASK::_0xB35370D5353995CB(Global_33, num.f_187[4], 1048576000);
					}
				}
			
				if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) == num.f_187[4] || TASK::GET_ITEM_INTERACTION_STATE(Global_33) == num.f_187[11])
				{
					flag = func_22(num.f_183[1], true);
				
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 1554542895) && !flag)
						num.f_180 = 1;
				
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 1243345447))
						num.f_180 = 2;
				
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 1349106419))
						num.f_180 = 3;
				
					if (num.f_180 == 2 && !flag)
					{
						if (func_20(num.f_202, 4))
							if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) != num.f_187[10])
								TASK::_0xB35370D5353995CB(Global_33, num.f_187[10], 1048576000);
						else if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) != num.f_187[6])
							TASK::_0xB35370D5353995CB(Global_33, num.f_187[6], 1048576000);
					
						num.f_180 = 0;
					}
					else if (num.f_180 == 1 && !flag)
					{
						if (func_20(num.f_202, 4))
						{
							if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) == num.f_187[9])
							{
							}
							else
							{
								TASK::_0xB35370D5353995CB(Global_33, num.f_187[9], 1048576000);
							}
						}
						else if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) == num.f_187[5])
						{
						}
						else
						{
							TASK::_0xB35370D5353995CB(Global_33, num.f_187[5], 1048576000);
						}
					
						num.f_180 = 0;
					}
				}
			
				if (func_25(num.f_183[2], true))
				{
					func_26(&num);
				
					if (ENTITY::DOES_ENTITY_EXIST(uScriptParam_0.f_1))
						OBJECT::_0xCAAF2BCCFEF37F77(uScriptParam_0.f_1, 80);
				
					func_19(&num, 2);
				}
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 442509369))
				{
					num.f_1.f_1 = num.f_1.f_1 + 1;
					func_27(num2);
					func_28(&(num.f_1), (float)num.f_1.f_1 >= num.f_1.f_2);
				}
			
				if ((float)num.f_1.f_1 >= num.f_1.f_2)
				{
					func_26(&num);
					func_29(&num, uScriptParam_0.f_1);
					func_30(num.f_1, false);
				
					if (ENTITY::DOES_ENTITY_EXIST(uScriptParam_0.f_1))
						OBJECT::_0xCAAF2BCCFEF37F77(uScriptParam_0.f_1, 80);
				
					func_19(&num, 2);
				}
				break;
		
			case 2:
				if (func_20(num.f_202, 4))
				{
					if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) == num.f_187[7])
					{
						TASK::_0xB35370D5353995CB(Global_33, num.f_187[13], 1048576000);
						func_19(&num, 4);
					}
				}
				else if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) == num.f_187[0])
				{
					TASK::_0xB35370D5353995CB(Global_33, num.f_187[1], 1048576000);
					func_19(&num, 4);
				}
				break;
		
			case 3:
				func_28(&(num.f_1), true);
				func_30(num.f_1, false);
				func_19(&num, 4);
				break;
		
			case 4:
				func_26(&num);
			
				if (uScriptParam_0.f_3)
					SCRIPTS::TERMINATE_THIS_THREAD();
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	func_26(&num);

	if (num <= 1 && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && num.f_181)
	{
		func_28(&(num.f_1), true);
		func_30(num.f_1, false);
	}

	return;
}

Player func_1() // Position - 0x804
{
	return Global_1297229.f_200;
}

void func_2(var uParam0) // Position - 0x812
{
	func_26(uParam0);

	if (!SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		SCRIPTS::TERMINATE_THIS_THREAD();

	return;
}

BOOL func_3(Player plParam0, BOOL bParam1) // Position - 0x82C
{
	if (bParam1)
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0))
			return false;

	return func_1() == plParam0;
}

void func_4(int iParam0, int iParam1) // Position - 0x84E
{
	func_31(iParam0, iParam1);
	return;
}

void func_5(var uParam0, var uParam1) // Position - 0x85E
{
	*uParam1 = uParam0->f_2;
	uParam1->f_174 = uParam0->f_1;
	uParam1->f_175 = Global_33;
	return;
}

int func_6() // Position - 0x87C
{
	switch (Global_1940026)
	{
		case 1:
			return 1;
	
		case 2:
			return 2;
	
		default:
		
	}

	return 0;
}

int func_7(var uParam0) // Position - 0x8A3
{
	int i;
	int num;

	for (i = 0; i < 3; i = i + 1)
	{
		num = i;
	
		if (func_32(uParam0->f_183[i]))
		{
			func_34(uParam0->f_183[i], func_33(num), false);
		}
		else
		{
			uParam0->f_183[i] = func_37(func_33(num), func_35(num), 2, 0, 0, func_36(num), 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), 0);
			func_38(uParam0->f_183[i], HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(Global_33), 0, true);
		}
	}

	return 1;
}

void func_8(var uParam0) // Position - 0x930
{
	switch (ENTITY::GET_ENTITY_MODEL(uParam0->f_1.f_174))
	{
		case joaat("mp006_s_tinmug_moonshine01x"):
			switch (Global_1940026)
			{
				case 0:
					uParam0->f_187[0] = joaat("mp_moonshine_drinking_sober_hold");
					uParam0->f_187[1] = joaat("MP_MOONSHINE_DRINKING_SOBER_PUT_AWAY");
					uParam0->f_187[2] = joaat("MP_MOONSHINE_DRINKING_SOBER_CHUG_PUT_AWAY");
					uParam0->f_187[3] = joaat("mp_moonshine_drinking_sober_sip_trans_base");
					uParam0->f_187[4] = joaat("MP_MOONSHINE_DRINKING_SOBER_CHEERS_PUT_AWAY");
					uParam0->f_187[5] = joaat("mp_moonshine_drinking_sober_cheers_lo_trans_sip_base");
					uParam0->f_187[6] = joaat("MP_MOONSHINE_DRINKING_SOBER_CHEERS_HI_TRANS_CHUG_PUTAWAY");
					uParam0->f_187[7] = joaat("mp_moonshine_drinking_sober_table_hold");
					uParam0->f_187[13] = joaat("MP_MOONSHINE_DRINKING_SOBER_TABLE_PUT_AWAY");
					uParam0->f_187[12] = joaat("MP_MOONSHINE_DRINKING_SOBER_TABLE_CHUG_PUT_AWAY");
					uParam0->f_187[8] = joaat("mp_moonshine_drinking_sober_table_sip_trans_base");
					uParam0->f_187[11] = joaat("MP_MOONSHINE_DRINKING_SOBER_TABLE_CHEERS_PUT_AWAY");
					uParam0->f_187[9] = joaat("mp_moonshine_drinking_sober_table_cheers_lo_trans_sip_base");
					uParam0->f_187[10] = joaat("MP_MOONSHINE_DRINKING_SOBER_TABLE_CHEERS_HI_TRANS_CHUG_PUTAWAY");
					break;
			
				case 1:
					uParam0->f_187[0] = joaat("mp_moonshine_drinking_drunk_hold");
					uParam0->f_187[1] = joaat("MP_MOONSHINE_DRINKING_DRUNK_PUT_AWAY");
					uParam0->f_187[2] = joaat("MP_MOONSHINE_DRINKING_DRUNK_CHUG_PUT_AWAY");
					uParam0->f_187[3] = joaat("mp_moonshine_drinking_drunk_sip_trans_base");
					uParam0->f_187[4] = joaat("MP_MOONSHINE_DRINKING_DRUNK_CHEERS_PUT_AWAY");
					uParam0->f_187[5] = joaat("mp_moonshine_drinking_drunk_cheers_lo_trans_sip_base");
					uParam0->f_187[6] = joaat("MP_MOONSHINE_DRINKING_DRUNK_CHEERS_HI_TRANS_CHUG_PUTAWAY");
					uParam0->f_187[7] = joaat("mp_moonshine_drinking_drunk_table_hold");
					uParam0->f_187[13] = joaat("MP_MOONSHINE_DRINKING_DRUNK_TABLE_PUT_AWAY");
					uParam0->f_187[12] = joaat("MP_MOONSHINE_DRINKING_DRUNK_TABLE_CHUG_PUT_AWAY");
					uParam0->f_187[8] = joaat("mp_moonshine_drinking_drunk_table_sip_trans_base");
					uParam0->f_187[11] = joaat("MP_MOONSHINE_DRINKING_DRUNK_TABLE_CHEERS_PUT_AWAY");
					uParam0->f_187[9] = joaat("mp_moonshine_drinking_drunk_table_cheers_lo_trans_sip_base");
					uParam0->f_187[10] = joaat("MP_MOONSHINE_DRINKING_DRUNK_TABLE_CHEERS_HI_TRANS_CHUG_PUTAWAY");
					break;
			
				case 2:
					uParam0->f_187[0] = joaat("mp_moonshine_drinking_wasted_hold");
					uParam0->f_187[1] = joaat("MP_MOONSHINE_DRINKING_WASTED_PUT_AWAY");
					uParam0->f_187[2] = joaat("MP_MOONSHINE_DRINKING_WASTED_CHUG_PUT_AWAY");
					uParam0->f_187[3] = joaat("mp_moonshine_drinking_wasted_sip_trans_base");
					uParam0->f_187[4] = joaat("MP_MOONSHINE_DRINKING_WASTED_CHEERS_PUT_AWAY");
					uParam0->f_187[5] = joaat("mp_moonshine_drinking_wasted_cheers_lo_trans_sip_base");
					uParam0->f_187[6] = joaat("MP_MOONSHINE_DRINKING_WASTED_CHEERS_HI_TRANS_CHUG_PUTAWAY");
					uParam0->f_187[7] = joaat("mp_moonshine_drinking_drunk_table_hold");
					uParam0->f_187[13] = joaat("MP_MOONSHINE_DRINKING_DRUNK_TABLE_PUT_AWAY");
					uParam0->f_187[12] = joaat("MP_MOONSHINE_DRINKING_DRUNK_TABLE_CHUG_PUT_AWAY");
					uParam0->f_187[8] = joaat("mp_moonshine_drinking_drunk_table_sip_trans_base");
					uParam0->f_187[11] = joaat("MP_MOONSHINE_DRINKING_DRUNK_TABLE_CHEERS_PUT_AWAY");
					uParam0->f_187[9] = joaat("mp_moonshine_drinking_drunk_table_cheers_lo_trans_sip_base");
					uParam0->f_187[10] = joaat("MP_MOONSHINE_DRINKING_DRUNK_TABLE_CHEERS_HI_TRANS_CHUG_PUTAWAY");
					break;
			}
			break;
	
		default:
			switch (Global_1940026)
			{
				case 0:
					uParam0->f_187[0] = joaat("mp_moonshine_drinking_sober_hold");
					uParam0->f_187[1] = joaat("mp_moonshine_drinking_sober_discard");
					uParam0->f_187[2] = joaat("MP_MOONSHINE_DRINKING_SOBER_CHUG_DISCARD");
					uParam0->f_187[3] = joaat("mp_moonshine_drinking_sober_sip_trans_base");
					uParam0->f_187[4] = joaat("MP_MOONSHINE_DRINKING_SOBER_CHEERS_DISCARD");
					uParam0->f_187[5] = joaat("mp_moonshine_drinking_sober_cheers_lo_trans_sip_base");
					uParam0->f_187[6] = joaat("MP_MOONSHINE_DRINKING_SOBER_CHEERS_HI_TRANS_CHUG_DISCARD");
					uParam0->f_187[7] = joaat("mp_moonshine_drinking_sober_table_hold");
					uParam0->f_187[13] = joaat("mp_moonshine_drinking_sober_table_discard");
					uParam0->f_187[12] = joaat("MP_MOONSHINE_DRINKING_SOBER_TABLE_CHUG_DISCARD");
					uParam0->f_187[8] = joaat("mp_moonshine_drinking_sober_table_sip_trans_base");
					uParam0->f_187[11] = joaat("MP_MOONSHINE_DRINKING_SOBER_TABLE_CHEERS_DISCARD");
					uParam0->f_187[9] = joaat("mp_moonshine_drinking_sober_table_cheers_lo_trans_sip_base");
					uParam0->f_187[10] = joaat("MP_MOONSHINE_DRINKING_SOBER_TABLE_CHEERS_HI_TRANS_CHUG_DISCARD");
					break;
			
				case 1:
					uParam0->f_187[0] = joaat("mp_moonshine_drinking_drunk_hold");
					uParam0->f_187[1] = joaat("mp_moonshine_drinking_drunk_discard");
					uParam0->f_187[2] = joaat("MP_MOONSHINE_DRINKING_DRUNK_CHUG_DISCARD");
					uParam0->f_187[3] = joaat("mp_moonshine_drinking_drunk_sip_trans_base");
					uParam0->f_187[4] = joaat("MP_MOONSHINE_DRINKING_DRUNK_CHEERS_DISCARD");
					uParam0->f_187[5] = joaat("mp_moonshine_drinking_drunk_cheers_lo_trans_sip_base");
					uParam0->f_187[6] = joaat("MP_MOONSHINE_DRINKING_DRUNK_CHEERS_HI_TRANS_CHUG_DISCARD");
					uParam0->f_187[7] = joaat("mp_moonshine_drinking_drunk_table_hold");
					uParam0->f_187[13] = joaat("mp_moonshine_drinking_drunk_table_discard");
					uParam0->f_187[12] = joaat("MP_MOONSHINE_DRINKING_DRUNK_TABLE_CHUG_DISCARD");
					uParam0->f_187[8] = joaat("mp_moonshine_drinking_drunk_table_sip_trans_base");
					uParam0->f_187[11] = joaat("MP_MOONSHINE_DRINKING_DRUNK_TABLE_CHEERS_DISCARD");
					uParam0->f_187[9] = joaat("mp_moonshine_drinking_drunk_table_cheers_lo_trans_sip_base");
					uParam0->f_187[10] = joaat("MP_MOONSHINE_DRINKING_DRUNK_TABLE_CHEERS_HI_TRANS_CHUG_DISCARD");
					break;
			
				case 2:
					uParam0->f_187[0] = joaat("mp_moonshine_drinking_wasted_hold");
					uParam0->f_187[1] = joaat("mp_moonshine_drinking_wasted_discard");
					uParam0->f_187[2] = joaat("MP_MOONSHINE_DRINKING_WASTED_CHUG_DISCARD");
					uParam0->f_187[3] = joaat("mp_moonshine_drinking_wasted_sip_trans_base");
					uParam0->f_187[4] = joaat("MP_MOONSHINE_DRINKING_WASTED_CHEERS_DISCARD");
					uParam0->f_187[5] = joaat("mp_moonshine_drinking_wasted_cheers_lo_trans_sip_base");
					uParam0->f_187[6] = joaat("MP_MOONSHINE_DRINKING_WASTED_CHEERS_HI_TRANS_CHUG_DISCARD");
					uParam0->f_187[7] = joaat("mp_moonshine_drinking_drunk_table_hold");
					uParam0->f_187[13] = joaat("mp_moonshine_drinking_drunk_table_discard");
					uParam0->f_187[12] = joaat("MP_MOONSHINE_DRINKING_DRUNK_TABLE_CHUG_DISCARD");
					uParam0->f_187[8] = joaat("mp_moonshine_drinking_drunk_table_sip_trans_base");
					uParam0->f_187[11] = joaat("MP_MOONSHINE_DRINKING_DRUNK_TABLE_CHEERS_DISCARD");
					uParam0->f_187[9] = joaat("mp_moonshine_drinking_drunk_table_cheers_lo_trans_sip_base");
					uParam0->f_187[10] = joaat("MP_MOONSHINE_DRINKING_DRUNK_TABLE_CHEERS_HI_TRANS_CHUG_DISCARD");
					break;
			}
			break;
	}

	return;
}

void func_9() // Position - 0xDB2
{
	if (!func_17(Global_1297600[func_1() /*87*/].f_19.f_19, 0))
		func_39();

	return;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
float func_10(var uParam0, Entity eParam1) // Position - 0xDD5
{
	Player player;

	player = func_1();

	switch (ENTITY::GET_ENTITY_MODEL(eParam1))
	{
		case joaat("mp006_s_tinmug_moonshine01x"):
			if (uParam0->f_204 == joaat("WORLD_PLAYER_MOONSHINE_SELF_SERVE_BAR"))
			{
				if (Global_1297600[player /*87*/].f_19.f_19 == 0)
				{
					switch (Global_1940026)
					{
						case 0:
							return 0.125f / uParam0->f_1.f_2;
					
						case 1:
						case 2:
							return 0.0625f / uParam0->f_1.f_2;
					
						default:
							goto 0x1AB;
					}
				}
				else
				{
					if (Global_1297600[player /*87*/].f_19.f_19 == joaat("provision_role_moonshiner_mash_low") || Global_1297600[player /*87*/].f_19.f_19 == -545779394)
					{
						switch (Global_1940026)
						{
							case 0:
								return 0.125f / uParam0->f_1.f_2;
						
							case 1:
							case 2:
								return 0.0625f / uParam0->f_1.f_2;
						
							default:
							
						}
					}
				
					if (Global_1297600[player /*87*/].f_19.f_19 == joaat("provision_role_moonshiner_mash_medium") || Global_1297600[player /*87*/].f_19.f_19 == 1532695640)
					{
						switch (Global_1940026)
						{
							case 0:
								return 0.167f / uParam0->f_1.f_2;
						
							case 1:
							case 2:
								return 0.083f / uParam0->f_1.f_2;
						
							default:
							
						}
					}
				
					if (Global_1297600[player /*87*/].f_19.f_19 == joaat("provision_role_moonshiner_mash_high") || Global_1297600[player /*87*/].f_19.f_19 == 1847740267)
					{
						switch (Global_1940026)
						{
							case 0:
								return 0.25f / uParam0->f_1.f_2;
						
							case 1:
							case 2:
								return 0.125f / uParam0->f_1.f_2;
						
							default:
								goto 0x1E8;
						}
					}
				}
			}
			else
			{
				switch (Global_1940026)
				{
					case 0:
						return 0.125f / uParam0->f_1.f_2;
				
					case 1:
					case 2:
						return 0.0625f / uParam0->f_1.f_2;
				
					default:
						break;
				}
			}
			break;
	
		default:
			if (Global_1297600[player /*87*/].f_19.f_19 == 0)
			{
				switch (Global_1940026)
				{
					case 0:
						return 0.125f / uParam0->f_1.f_2;
				
					case 1:
					case 2:
						return 0.0625f / uParam0->f_1.f_2;
				
					default:
						goto 0x36D;
				}
			}
			else
			{
				if (Global_1297600[player /*87*/].f_19.f_19 == joaat("provision_role_moonshiner_mash_low") || Global_1297600[player /*87*/].f_19.f_19 == -545779394)
				{
					switch (Global_1940026)
					{
						case 0:
							return 0.125f / uParam0->f_1.f_2;
					
						case 1:
						case 2:
							return 0.0625f / uParam0->f_1.f_2;
					
						default:
						
					}
				}
			
				if (Global_1297600[player /*87*/].f_19.f_19 == joaat("provision_role_moonshiner_mash_medium") || Global_1297600[player /*87*/].f_19.f_19 == 1532695640)
				{
					switch (Global_1940026)
					{
						case 0:
							return 0.167f / uParam0->f_1.f_2;
					
						case 1:
						case 2:
							return 0.083f / uParam0->f_1.f_2;
					
						default:
						
					}
				}
			
				if (Global_1297600[player /*87*/].f_19.f_19 == joaat("provision_role_moonshiner_mash_high") || Global_1297600[player /*87*/].f_19.f_19 == 1847740267)
				{
					switch (Global_1940026)
					{
						case 0:
							return 0.25f / uParam0->f_1.f_2;
					
						case 1:
						case 2:
							return 0.125f / uParam0->f_1.f_2;
					
						default:
							break;
					}
				}
			}
			break;
	}

	return 0.125f / uParam0->f_1.f_2;
}

int func_11(var uParam0) // Position - 0x1154
{
	if (ENTITY::IS_ENTITY_DEAD(Global_33))
		return 0;

	if (!uParam0->f_176)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_174))
		{
			uParam0->f_174 = TASK::_GET_ITEM_INTERACTION_ENTITY_FROM_PED(Global_33, 0);
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -1234314267))
		{
			func_40(uParam0);
			return 1;
		}
	}

	if (!uParam0->f_177)
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -1895155945))
			uParam0->f_177 = 1;

	return 0;
}

void func_12() // Position - 0x11C3
{
	func_41(&(Global_1072759.f_28313.f_1), 1073741824);
	return;
}

char* func_13(var uParam0) // Position - 0x11DD
{
	switch (uParam0->f_1)
	{
		case joaat("provision_role_moonshiner_moonshine_flavor_tropical_punch"):
			return "MSHINE_FLAVOR_TROPICAL_PUNCH";
	
		case joaat("provision_role_moonshiner_moonshine_flavor_wild_creek"):
			return "MSHINE_FLAVOR_WILD_CREEK";
	
		case joaat("provision_role_moonshiner_moonshine_flavor_berry_cobbler"):
			return "MSHINE_FLAVOR_BERRY_COBBLER";
	
		case joaat("provision_role_moonshiner_moonshine_flavor_poison_poppys"):
			return "MSHINE_FLAVOR_POISON_POPPYS";
	
		case joaat("provision_role_moonshiner_moonshine_flavor_berry_mint"):
			return "MSHINE_FLAVOR_BERRY_MINT";
	
		case joaat("provision_role_moonshiner_moonshine_flavor_apple_berry_crumb"):
			return "MSHINE_FLAVOR_APPLE_BERRY_CRUMB";
	
		case joaat("provision_role_moonshiner_moonshine_flavor_wild_cider"):
			return "MSHINE_FLAVOR_WILD_CIDER";
	
		case 1532695640:
			return "MOONSHINE_MEDIUM_GROUP_LABEL";
	
		case joaat("provision_role_moonshiner_moonshine_flavor_spiced_island"):
			return "MSHINE_FLAVOR_SPICED_ISLAND";
	
		case 1847740267:
			return "MOONSHINE_STRONG_GROUP_LABEL";
	
		case joaat("provision_role_moonshiner_moonshine_flavor_agarita_sunrise"):
			return "MSHINE_FLAVOR_AGARITA_SUNRISE";
	
		case joaat("provision_role_moonshiner_moonshine_flavor_evergreen"):
			return "MSHINE_FLAVOR_EVERGREEN";
	
		default:
		
	}

	return "MOONSHINE_WEAK_GROUP_LABEL";
}

void func_14(var uParam0) // Position - 0x128F
{
	if (!func_42() && uParam0->f_179 != 0)
	{
		uParam0->f_179 = 0;
		func_4(&(uParam0->f_202), 1);
	}

	if (func_43() && uParam0->f_179 != 1)
	{
		uParam0->f_179 = 1;
		func_4(&(uParam0->f_202), 1);
	}

	if (func_44() && uParam0->f_179 != 2)
	{
		uParam0->f_179 = 2;
		func_4(&(uParam0->f_202), 1);
	
		if (!func_20(uParam0->f_202, 8) && func_20(uParam0->f_202, 16))
		{
			if (STATS::CHAL_IS_GOAL_ACTIVE(joaat("mpac_role_moonshiner"), joaat("mpac_role_moonshiner_003")))
				STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("mpac_role_moonshiner"), joaat("mpac_role_moonshiner_003"), 1);
		
			func_4(&(uParam0->f_202), 8);
		}
	}

	if (func_20(uParam0->f_202, 1))
	{
		if (func_20(uParam0->f_202, 4) && TASK::GET_ITEM_INTERACTION_STATE(Global_33) == uParam0->f_187[7])
		{
			func_45(&(uParam0->f_202), 1);
			func_8(uParam0);
			func_7(uParam0);
			func_46(uParam0);
		}
		else if (!func_20(uParam0->f_202, 4) && TASK::GET_ITEM_INTERACTION_STATE(Global_33) == uParam0->f_187[0])
		{
			func_45(&(uParam0->f_202), 1);
			func_8(uParam0);
			func_7(uParam0);
		}
	}

	return;
}

void func_15(var uParam0) // Position - 0x13C1
{
	if (*uParam0 > 1)
		return;

	if (!func_20(uParam0->f_202, 4))
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1) && TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_33) == joaat("prop_player_dynamic_seat_chair_table") || TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_33) == joaat("prop_player_seat_chair_dynamic") || TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_33) == joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER") || TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_33) == joaat("WORLD_PLAYER_MOONSHINE_SERVING"))
		{
			func_4(&(uParam0->f_202), 4);
			func_46(uParam0);
		
			if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) != uParam0->f_187[7])
				TASK::_0xB35370D5353995CB(Global_33, uParam0->f_187[7], 1048576000);
		}
	}
	else if (func_20(uParam0->f_202, 4))
	{
		if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1) && !TASK::IS_PED_EXITING_SCENARIO(Global_33, false))
		{
			func_45(&(uParam0->f_202), 4);
		
			if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) != uParam0->f_187[0])
				TASK::_0xB35370D5353995CB(Global_33, uParam0->f_187[0], 1048576000);
		}
	}

	return;
}

void func_16(var uParam0) // Position - 0x14BF
{
	if (*uParam0 > 1)
		return;

	if (func_20(uParam0->f_202, 4))
	{
		if (uParam0->f_179 == 0 && uParam0->f_203 != func_47())
		{
			if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) == func_48())
			{
				uParam0->f_203 = joaat("mp_moonshine_drinking_sober_table_hold");
				TASK::_0xB35370D5353995CB(Global_33, func_47(), 1048576000);
			}
		}
	
		if (uParam0->f_179 == 1 || uParam0->f_179 == 2 && uParam0->f_203 != func_48())
		{
			if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) == func_47())
			{
				uParam0->f_203 = joaat("mp_moonshine_drinking_drunk_table_hold");
				TASK::_0xB35370D5353995CB(Global_33, func_48(), 1048576000);
			}
		}
	}
	else
	{
		if (uParam0->f_179 == 0 && uParam0->f_203 != joaat("mp_moonshine_drinking_sober_hold"))
		{
			if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) == joaat("mp_moonshine_drinking_wasted_hold") || TASK::GET_ITEM_INTERACTION_STATE(Global_33) == joaat("mp_moonshine_drinking_drunk_hold"))
			{
				uParam0->f_203 = joaat("mp_moonshine_drinking_sober_hold");
				TASK::_0xB35370D5353995CB(Global_33, joaat("mp_moonshine_drinking_sober_hold"), 1048576000);
			}
		}
	
		if (uParam0->f_179 == 1 && uParam0->f_203 != joaat("mp_moonshine_drinking_drunk_hold"))
		{
			if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) == joaat("mp_moonshine_drinking_wasted_hold") || TASK::GET_ITEM_INTERACTION_STATE(Global_33) == joaat("mp_moonshine_drinking_sober_hold"))
			{
				uParam0->f_203 = joaat("mp_moonshine_drinking_drunk_hold");
				TASK::_0xB35370D5353995CB(Global_33, joaat("mp_moonshine_drinking_drunk_hold"), 1048576000);
			}
		}
	
		if (uParam0->f_179 == 2 && uParam0->f_203 != joaat("mp_moonshine_drinking_wasted_hold"))
		{
			if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) == joaat("mp_moonshine_drinking_sober_hold") || TASK::GET_ITEM_INTERACTION_STATE(Global_33) == joaat("mp_moonshine_drinking_drunk_hold"))
			{
				uParam0->f_203 = joaat("mp_moonshine_drinking_wasted_hold");
				TASK::_0xB35370D5353995CB(Global_33, joaat("mp_moonshine_drinking_wasted_hold"), 1048576000);
			}
		}
	}

	return;
}

BOOL func_17(Hash hParam0, int iParam1) // Position - 0x1667
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

void func_18(var uParam0) // Position - 0x1681
{
	int i;

	ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(*uParam0, &(uParam0->f_11));

	for (i = 0; i < uParam0->f_11; i = i + 1)
	{
		ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(uParam0->f_11.f_1[i], &uParam0->f_33[i /*7*/]);
	}

	return;
}

void func_19(var uParam0, int iParam1) // Position - 0x16C1
{
	*uParam0 = iParam1;
	return;
}

BOOL func_20(int iParam0, int iParam1) // Position - 0x16CE
{
	return iParam0 && iParam1 != false;
}

void func_21(var uParam0) // Position - 0x16DD
{
	if (*uParam0 > 1)
		return;

	if (!func_20(uParam0->f_202, 32) && TASK::GET_ITEM_INTERACTION_STATE(Global_33) != uParam0->f_187[7] && TASK::GET_ITEM_INTERACTION_STATE(Global_33) != uParam0->f_187[0])
	{
		func_4(&(uParam0->f_202), 32);
		func_49(uParam0, false);
	}
	else if (func_20(uParam0->f_202, 32) && TASK::GET_ITEM_INTERACTION_STATE(Global_33) == uParam0->f_187[7] || TASK::GET_ITEM_INTERACTION_STATE(Global_33) == uParam0->f_187[0])
	{
		func_45(&(uParam0->f_202), 32);
		func_49(uParam0, true);
	}

	return;
}

BOOL func_22(int iParam0, BOOL bParam1) // Position - 0x1780
{
	int num;

	if (bParam1 && !func_32(iParam0))
		return false;

	num = func_50(iParam0);

	if (!HUD::_UI_PROMPT_HAS_HOLD_MODE(Global_1951910[num /*23*/].f_3))
		return PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, Global_1951910[num /*23*/].f_4);

	return HUD::_UI_PROMPT_IS_HOLD_MODE_RUNNING(Global_1951910[num /*23*/].f_3);
}

BOOL func_23(var uParam0) // Position - 0x17D7
{
	return func_51(*uParam0, 1);
}

void func_24(var uParam0, BOOL bParam1) // Position - 0x17E7
{
	if (bParam1 || !func_23(uParam0))
		func_52(uParam0);

	return;
}

BOOL func_25(int iParam0, BOOL bParam1) // Position - 0x1807
{
	int num;

	if (bParam1 && !func_32(iParam0))
		return false;

	num = func_50(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1951910[num /*23*/].f_3);
}

void func_26(var uParam0) // Position - 0x183A
{
	func_53(&(uParam0->f_183));
	return;
}

void func_27(float fParam0) // Position - 0x184A
{
	if (fParam0 > 0f)
	{
		if (func_54())
			func_55(fParam0, true);
	
		Global_1940026.f_3 = MISC::GET_GAME_TIMER();
	}

	return;
}

void func_28(var uParam0, BOOL bParam1) // Position - 0x1871
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

	if (func_56(*uParam0, 1573112293) || func_56(*uParam0, 672467738) || func_56(*uParam0, -550842268))
		flag3 = true;

	flag4 = func_57(*uParam0);
	ATTRIBUTE::STOP_ITEM_PREVIEW();
	Global_1940085.f_26 = 0;

	for (i = 0; i < uParam0->f_11; i = i + 1)
	{
		switch (uParam0->f_33[i /*7*/].f_1)
		{
			case -1104847406:
				num2 = func_58(2, (float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2);
				func_60((float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2, false);
				flag = true;
				break;
		
			case -943921969:
				num = func_58(0, (float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2);
				func_59((float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2);
				flag2 = true;
				break;
		
			case -816334026:
				func_64(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_2) / uParam0->f_2, 1 == uParam0->f_1);
				break;
		
			case joaat("EFFECT_HEALTH_CORE"):
				num4 = func_62((float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2, uParam0->f_33[i /*7*/].f_5 / uParam0->f_2);
				func_63(0, num4, true, true, flag3);
				flag2 = true;
				break;
		
			case 381158954:
				num3 = func_58(1, (float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2);
				func_61((float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2);
				break;
		
			case joaat("EFFECT_STAMINA_CORE"):
				num6 = func_62((float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2, uParam0->f_33[i /*7*/].f_5 / uParam0->f_2);
				func_63(1, num6, true, true, flag3);
				break;
		
			case joaat("EFFECT_DEADEYE_CORE"):
				num5 = func_62((float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2, uParam0->f_33[i /*7*/].f_5 / uParam0->f_2);
				func_63(2, num5, true, true, flag3);
				flag = true;
				break;
		
			default:
				if (bParam1)
				{
					switch (uParam0->f_33[i /*7*/].f_1)
					{
						case -1240225157:
							num7 = func_65(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_3), uParam0->f_33[i /*7*/].f_4);
							func_66(1, num7, flag4, true);
							break;
					
						case joaat("Effect_Stamina_Core_Gold"):
							num7 = func_65(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_3), uParam0->f_33[i /*7*/].f_4);
							func_66(18, num7, flag4, true);
							break;
					
						case joaat("Effect_Deadeye_Core_Gold"):
							num7 = func_65(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_3), uParam0->f_33[i /*7*/].f_4);
							func_66(20, num7, flag4, true);
							flag = true;
							break;
					
						case 1342237631:
							num7 = func_65(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_3), uParam0->f_33[i /*7*/].f_4);
							func_66(2, num7, flag4, true);
							flag = true;
							break;
					
						case 1869697234:
							num7 = func_65(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_3), uParam0->f_33[i /*7*/].f_4);
							func_66(0, num7, flag4, true);
							flag2 = true;
							break;
					
						case joaat("Effect_Health_Core_Gold"):
							num7 = func_65(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_3), uParam0->f_33[i /*7*/].f_4);
							func_66(19, num7, flag4, true);
							flag2 = true;
							break;
					}
				}
				break;
		}
	}

	if (bParam1)
	{
		func_67(uParam0);
		func_68(*uParam0, flag, flag2, 562618531);
	}

	func_40(uParam0);
	uParam0->f_3 = uParam0->f_3 + num;
	uParam0->f_4 = uParam0->f_4 + num2;
	uParam0->f_5 = uParam0->f_5 + num3;
	uParam0->f_6 = uParam0->f_6 + num4;
	uParam0->f_7 = uParam0->f_7 + num5;
	uParam0->f_8 = uParam0->f_8 + num6;
	return;
}

void func_29(var uParam0, Entity eParam1) // Position - 0x1C18
{
	Player player;
	Hash hash;

	if (func_20(uParam0->f_202, 16))
	{
		player = func_1();
	
		switch (ENTITY::GET_ENTITY_MODEL(eParam1))
		{
			case joaat("mp006_s_tinmug_moonshine01x"):
				if (uParam0->f_204 == joaat("WORLD_PLAYER_MOONSHINE_SELF_SERVE_BAR"))
				{
					func_69(player);
				
					if (func_20(uParam0->f_202, 16) && STATS::CHAL_IS_GOAL_ACTIVE(joaat("mpac_role_moonshiner"), joaat("mpac_role_moonshiner_006")) && func_3(PLAYER::PLAYER_ID(), true) && Global_1297600[player /*87*/].f_19.f_17 != 0)
					{
						hash = Global_1297600[player /*87*/].f_19.f_17;
						STATS::CHAL_ADD_GOAL_PROGRESS_FLOAT_BY_SCORE_ID(hash, 1f);
					}
				}
				else
				{
					func_71(func_70(joaat("drank_by_player"), joaat("moonshine_strength_weak")), 1);
				}
				break;
		
			default:
				func_69(player);
				break;
		}
	}

	return;
}

void func_30(int iParam0, BOOL bParam1) // Position - 0x1CCF
{
	var unk;
	var unk11;

	switch (iParam0)
	{
		case joaat("consumable_herb_common_bulrush"):
		case joaat("consumable_herb_oleander_sage"):
		case joaat("consumable_herb_prairie_poppy"):
			if (bParam1 || !func_79() || !PED::IS_PED_ON_FOOT(Global_33))
				return;
		
			if (iParam0 != joaat("consumable_herb_prairie_poppy") || MISC::GET_RANDOM_INT_IN_RANGE(0, 3000) < 1000)
			{
				unk11 = { unk };
				TEXT_LABEL_ASSIGN_STRING(&(unk11.f_10), "generic_puking_item", 32);
				unk11.f_14 = 512;
				func_77(unk11, 0);
			}
			break;
	
		case -2067647508:
		case -912678731:
		case -464445204:
		case 470703221:
		case 1051259759:
		case 1324459658:
			func_73(func_72(iParam0));
			break;
	
		case -1706054699:
		case -1004468971:
		case -605086052:
		case -187002287:
			unk.f_1 = iParam0;
			unk11.f_15 = 1;
			unk11 = { unk };
			TEXT_LABEL_ASSIGN_STRING(&(unk11.f_10), "generic_weight_control_item", 32);
			unk11.f_14 = 512;
			func_77(unk11, 0);
			break;
	
		case joaat("consumable_herb_english_mace"):
		case joaat("consumable_herb_yarrow"):
		case joaat("consumable_herb_milkweed"):
		case joaat("consumable_herb_ginseng"):
		case joaat("consumable_herb_vanilla_flower"):
			func_78(joaat("STATUS_EFFECT__POISON"));
			break;
	
		case -1088257729:
			func_74(-1685270562, -2038430863, 1800);
		
			if (func_75() || func_76())
				func_71(func_70(joaat("USED"), 1001560750), 1);
			break;
	
		case -611782825:
			func_74(-813902658, -2082434331, 1800);
			break;
	
		case joaat("consumable_valerian_root"):
			break;
	
		case joaat("consumable_aged_pirate_rum"):
			break;
	
		case joaat("consumable_ginseng_elixier"):
			break;
	
		case joaat("consumable_potent_antidote"):
		case joaat("consumable_antidote"):
			if (iParam0 == joaat("consumable_antidote"))
			{
			}
			else
			{
				iParam0 == joaat("consumable_potent_antidote");
			}
		
			func_80();
			break;
	}

	return;
}

void func_31(var uParam0, int iParam1) // Position - 0x1E9C
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_32(int iParam0) // Position - 0x1EAD
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 60)
		return false;

	if (Global_1951910[iParam0 /*23*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3);
}

char* func_33(int iParam0) // Position - 0x1EEC
{
	int randomIntInRange;
	var unk;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);

	switch (Global_1940026)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return "MOONSHINE_DRINK";
			
				case 1:
					return "MOONSHINE_CHEERS";
			
				case 2:
					return "MOONSHINE_DISCARD";
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 0:
					TEXT_LABEL_ASSIGN_STRING(&unk, "MOONSHINE_DRINK_DRUNK_", 32);
					TEXT_LABEL_APPEND_STRING(&unk, func_81(randomIntInRange), 32);
					return func_82(unk);
			
				case 1:
					TEXT_LABEL_ASSIGN_STRING(&unk, "MOONSHINE_CHEERS_DRUNK_", 32);
					TEXT_LABEL_APPEND_STRING(&unk, func_81(randomIntInRange), 32);
					return func_82(unk);
			
				case 2:
					TEXT_LABEL_ASSIGN_STRING(&unk, "MOONSHINE_DISCARD_DRUNK_", 32);
					TEXT_LABEL_APPEND_STRING(&unk, func_81(randomIntInRange), 32);
					return func_82(unk);
			}
			break;
	
		case 2:
			switch (iParam0)
			{
				case 0:
					TEXT_LABEL_ASSIGN_STRING(&unk, "MOONSHINE_DRINK_WASTED_", 32);
					TEXT_LABEL_APPEND_STRING(&unk, func_81(randomIntInRange), 32);
					return func_82(unk);
			
				case 1:
					TEXT_LABEL_ASSIGN_STRING(&unk, "MOONSHINE_CHEERS_WASTED_", 32);
					TEXT_LABEL_APPEND_STRING(&unk, func_81(randomIntInRange), 32);
					return func_82(unk);
			
				case 2:
					TEXT_LABEL_ASSIGN_STRING(&unk, "MOONSHINE_DISCARD_WASTED_", 32);
					TEXT_LABEL_APPEND_STRING(&unk, func_81(randomIntInRange), 32);
					return func_82(unk);
			}
			break;
	}

	return "";
}

void func_34(int iParam0, char* sParam1, BOOL bParam2) // Position - 0x2051
{
	int num;

	if (bParam2 && !func_32(iParam0))
		return;

	num = func_50(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951910[num /*23*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_TEXT(Global_1951910[num /*23*/].f_3, sParam1);
	return;
}

Hash func_35(int iParam0) // Position - 0x209A
{
	switch (iParam0)
	{
		case 0:
			return joaat("INPUT_CONTEXT_RT");
	
		case 1:
			return joaat("INPUT_CONTEXT_X");
	
		case 2:
			return joaat("INPUT_CONTEXT_B");
	
		default:
		
	}

	return 0;
}

int func_36(int iParam0) // Position - 0x20D5
{
	switch (iParam0)
	{
		case 0:
			return 3;
	
		case 1:
			return 3;
	
		case 2:
			return 0;
	
		default:
		
	}

	return 0;
}

int func_37(char* sParam0, Hash hParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, Hash hParam10, int iParam11) // Position - 0x2104
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	for (i = 0; i < 60; i = i + 1)
	{
		if (func_83(i, 2))
		{
		}
		else if (num == 0)
		{
			num = i;
		}
	}

	if (num != 0)
	{
		func_84(num, hParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216, false, false, 0, hParam10, iParam11);
		return num;
	}

	return 0;
}

void func_38(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x218D
{
	int num;

	if (bParam3 && !func_32(iParam0))
		return;

	num = func_50(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951910[num /*23*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_GROUP(Global_1951910[num /*23*/].f_3, iParam1, iParam2);
	return;
}

void func_39() // Position - 0x21D8
{
	int num;
	int num2;

	num = func_85();
	num2 = func_86();

	if (num == joaat("provision_role_moonshiner_mash_low") || num2 == -545779394)
	{
		func_87(joaat("provision_role_moonshiner_mash_low"));
		func_88(1024);
	}
	else if (num == joaat("provision_role_moonshiner_mash_medium") || num2 == 1532695640)
	{
		func_87(joaat("provision_role_moonshiner_mash_medium"));
		func_88(2048);
	}
	else if (num == joaat("provision_role_moonshiner_mash_high") || num2 == 1847740267)
	{
		func_87(1847740267);
		func_88(4096);
	}

	return;
}

void func_40(var uParam0) // Position - 0x2270
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

void func_41(BOOL bParam0, int iParam1) // Position - 0x229A
{
	*bParam0 = *bParam0 || iParam1;
	return;
}

BOOL func_42() // Position - 0x22AB
{
	return func_43() || func_44();
}

BOOL func_43() // Position - 0x22C1
{
	return Global_1940026 == 1;
}

BOOL func_44() // Position - 0x22CF
{
	return Global_1940026 == 2;
}

void func_45(var uParam0, int iParam1) // Position - 0x22DD
{
	func_89(uParam0, iParam1);
	return;
}

void func_46(var uParam0) // Position - 0x22ED
{
	switch (PED::_GET_ACTIVE_DYNAMIC_SCENARIO(Global_33))
	{
		case joaat("world_player_moonshine_customer_drunk_female_c"):
		case joaat("world_player_moonshine_customer_sober_male_f"):
		case joaat("world_player_moonshine_customer_drunk_male_f"):
		case joaat("world_player_moonshine_customer_sober_female_f"):
		case joaat("world_player_moonshine_customer_drunk_male_c"):
		case joaat("world_player_moonshine_customer_drunk_female_f"):
		case joaat("world_player_moonshine_customer_drunk_male_d"):
		case joaat("world_player_moonshine_customer_sober_female_d"):
		case joaat("world_player_moonshine_customer_drunk_female_d"):
		case joaat("world_player_moonshine_customer_sober_female_c"):
		case joaat("world_player_moonshine_customer_sober_male_c"):
		case joaat("world_player_moonshine_customer_sober_male_d"):
			switch (Global_1940026)
			{
				case 0:
					uParam0->f_187[7] = joaat("mp_moonshine_drinking_sober_table_lh_hold");
					uParam0->f_187[8] = joaat("mp_moonshine_drinking_sober_table_lh_sip_trans_base");
					uParam0->f_187[9] = joaat("mp_moonshine_drinking_sober_table_lh_cheers_lo_trans_sip_base");
				
					if (ENTITY::GET_ENTITY_MODEL(uParam0->f_1.f_174) == joaat("mp006_s_tinmug_moonshine01x"))
					{
						uParam0->f_187[13] = joaat("MP_MOONSHINE_DRINKING_SOBER_TABLE_LH_PUT_AWAY");
						uParam0->f_187[12] = joaat("MP_MOONSHINE_DRINKING_SOBER_TABLE_LH_CHUG_PUT_AWAY");
						uParam0->f_187[11] = joaat("MP_MOONSHINE_DRINKING_SOBER_TABLE_LH_CHEERS_PUT_AWAY");
						uParam0->f_187[10] = -30676417;
					}
					else
					{
						uParam0->f_187[10] = joaat("MP_MOONSHINE_DRINKING_SOBER_TABLE_LH_CHEERS_HI_TRANS_CHUG_DISCARD");
						uParam0->f_187[13] = joaat("mp_moonshine_drinking_sober_table_lh_discard");
						uParam0->f_187[12] = joaat("MP_MOONSHINE_DRINKING_SOBER_TABLE_LH_CHUG_DISCARD");
						uParam0->f_187[11] = joaat("MP_MOONSHINE_DRINKING_SOBER_TABLE_LH_CHEERS_DISCARD");
					}
					break;
			
				case 1:
				case 2:
					uParam0->f_187[7] = joaat("mp_moonshine_drinking_drunk_table_lh_hold");
					uParam0->f_187[8] = joaat("mp_moonshine_drinking_drunk_table_lh_sip_trans_base");
					uParam0->f_187[9] = joaat("mp_moonshine_drinking_drunk_table_lh_cheers_lo_trans_sip_base");
				
					if (ENTITY::GET_ENTITY_MODEL(uParam0->f_1.f_174) == joaat("mp006_s_tinmug_moonshine01x"))
					{
						uParam0->f_187[13] = joaat("MP_MOONSHINE_DRINKING_DRUNK_TABLE_LH_PUT_AWAY");
						uParam0->f_187[12] = joaat("MP_MOONSHINE_DRINKING_DRUNK_TABLE_LH_CHUG_PUT_AWAY");
						uParam0->f_187[11] = joaat("MP_MOONSHINE_DRINKING_DRUNK_TABLE_LH_CHEERS_PUT_AWAY");
						uParam0->f_187[10] = joaat("MP_MOONSHINE_DRINKING_DRUNK_TABLE_LH_CHEERS_HI_TRANS_CHUG_PUTAWAY");
					}
					else
					{
						uParam0->f_187[10] = joaat("MP_MOONSHINE_DRINKING_DRUNK_TABLE_LH_CHEERS_HI_TRANS_CHUG_DISCARD");
						uParam0->f_187[13] = joaat("mp_moonshine_drinking_drunk_table_lh_discard");
						uParam0->f_187[12] = joaat("MP_MOONSHINE_DRINKING_DRUNK_TABLE_LH_CHUG_DISCARD");
						uParam0->f_187[11] = joaat("MP_MOONSHINE_DRINKING_DRUNK_TABLE_LH_CHEERS_DISCARD");
					}
					break;
			}
			break;
	
		case joaat("world_player_moonshine_customer_drunk_female_a"):
		case joaat("world_player_moonshine_customer_drunk_male_a"):
		case joaat("world_player_moonshine_customer_sober_female_a"):
		case joaat("world_player_moonshine_customer_sober_male_a"):
			switch (Global_1940026)
			{
				case 0:
					uParam0->f_187[7] = joaat("mp_moonshine_drinking_sober_table_rh_hold");
					uParam0->f_187[8] = joaat("mp_moonshine_drinking_sober_table_rh_sip_trans_base");
					uParam0->f_187[9] = joaat("mp_moonshine_drinking_sober_table_rh_cheers_lo_trans_sip_base");
				
					if (ENTITY::GET_ENTITY_MODEL(uParam0->f_1.f_174) == joaat("mp006_s_tinmug_moonshine01x"))
					{
						uParam0->f_187[13] = joaat("MP_MOONSHINE_DRINKING_SOBER_TABLE_RH_PUT_AWAY");
						uParam0->f_187[12] = joaat("MP_MOONSHINE_DRINKING_SOBER_TABLE_RH_CHUG_PUT_AWAY");
						uParam0->f_187[11] = joaat("MP_MOONSHINE_DRINKING_SOBER_TABLE_RH_CHEERS_PUT_AWAY");
						uParam0->f_187[10] = 1484522584;
					}
					else
					{
						uParam0->f_187[10] = joaat("MP_MOONSHINE_DRINKING_SOBER_TABLE_RH_CHEERS_HI_TRANS_CHUG_DISCARD");
						uParam0->f_187[13] = joaat("mp_moonshine_drinking_sober_table_rh_discard");
						uParam0->f_187[12] = joaat("MP_MOONSHINE_DRINKING_SOBER_TABLE_RH_CHUG_DISCARD");
						uParam0->f_187[11] = joaat("MP_MOONSHINE_DRINKING_SOBER_TABLE_RH_CHEERS_DISCARD");
					}
					break;
			
				case 1:
				case 2:
					uParam0->f_187[7] = joaat("mp_moonshine_drinking_drunk_table_rh_hold");
					uParam0->f_187[8] = joaat("mp_moonshine_drinking_drunk_table_rh_sip_trans_base");
					uParam0->f_187[9] = joaat("mp_moonshine_drinking_drunk_table_rh_cheers_lo_trans_sip_base");
				
					if (ENTITY::GET_ENTITY_MODEL(uParam0->f_1.f_174) == joaat("mp006_s_tinmug_moonshine01x"))
					{
						uParam0->f_187[13] = joaat("MP_MOONSHINE_DRINKING_DRUNK_TABLE_RH_PUT_AWAY");
						uParam0->f_187[12] = joaat("MP_MOONSHINE_DRINKING_DRUNK_TABLE_RH_CHUG_PUT_AWAY");
						uParam0->f_187[11] = joaat("MP_MOONSHINE_DRINKING_DRUNK_TABLE_RH_CHEERS_PUT_AWAY");
						uParam0->f_187[10] = joaat("MP_MOONSHINE_DRINKING_DRUNK_TABLE_RH_CHEERS_HI_TRANS_CHUG_PUTAWAY");
					}
					else
					{
						uParam0->f_187[10] = joaat("MP_MOONSHINE_DRINKING_DRUNK_TABLE_RH_CHEERS_HI_TRANS_CHUG_DISCARD");
						uParam0->f_187[13] = joaat("mp_moonshine_drinking_drunk_table_rh_discard");
						uParam0->f_187[12] = joaat("MP_MOONSHINE_DRINKING_DRUNK_TABLE_RH_CHUG_DISCARD");
						uParam0->f_187[11] = joaat("MP_MOONSHINE_DRINKING_DRUNK_TABLE_RH_CHEERS_DISCARD");
					}
					break;
			}
			break;
	
		default:
			switch (Global_1940026)
			{
				case 0:
					uParam0->f_187[7] = joaat("mp_moonshine_drinking_sober_table_hold");
					uParam0->f_187[8] = joaat("mp_moonshine_drinking_sober_table_sip_trans_base");
					uParam0->f_187[9] = joaat("mp_moonshine_drinking_sober_table_cheers_lo_trans_sip_base");
				
					if (ENTITY::GET_ENTITY_MODEL(uParam0->f_1.f_174) == joaat("mp006_s_tinmug_moonshine01x"))
					{
						uParam0->f_187[13] = joaat("MP_MOONSHINE_DRINKING_SOBER_TABLE_PUT_AWAY");
						uParam0->f_187[12] = joaat("MP_MOONSHINE_DRINKING_SOBER_TABLE_CHUG_PUT_AWAY");
						uParam0->f_187[11] = joaat("MP_MOONSHINE_DRINKING_SOBER_TABLE_CHEERS_PUT_AWAY");
						uParam0->f_187[10] = joaat("MP_MOONSHINE_DRINKING_SOBER_TABLE_CHEERS_HI_TRANS_CHUG_PUTAWAY");
					}
					else
					{
						uParam0->f_187[10] = joaat("MP_MOONSHINE_DRINKING_SOBER_TABLE_CHEERS_HI_TRANS_CHUG_DISCARD");
						uParam0->f_187[13] = joaat("mp_moonshine_drinking_sober_table_discard");
						uParam0->f_187[12] = joaat("MP_MOONSHINE_DRINKING_SOBER_TABLE_CHUG_DISCARD");
						uParam0->f_187[11] = joaat("MP_MOONSHINE_DRINKING_SOBER_TABLE_CHEERS_DISCARD");
					}
					break;
			
				case 1:
				case 2:
					uParam0->f_187[7] = joaat("mp_moonshine_drinking_drunk_table_hold");
					uParam0->f_187[8] = joaat("mp_moonshine_drinking_drunk_table_sip_trans_base");
					uParam0->f_187[9] = joaat("mp_moonshine_drinking_drunk_table_cheers_lo_trans_sip_base");
				
					if (ENTITY::GET_ENTITY_MODEL(uParam0->f_1.f_174) == joaat("mp006_s_tinmug_moonshine01x"))
					{
						uParam0->f_187[13] = joaat("MP_MOONSHINE_DRINKING_DRUNK_TABLE_PUT_AWAY");
						uParam0->f_187[12] = joaat("MP_MOONSHINE_DRINKING_DRUNK_TABLE_CHUG_PUT_AWAY");
						uParam0->f_187[11] = joaat("MP_MOONSHINE_DRINKING_DRUNK_TABLE_CHEERS_PUT_AWAY");
						uParam0->f_187[10] = joaat("MP_MOONSHINE_DRINKING_DRUNK_TABLE_CHEERS_HI_TRANS_CHUG_PUTAWAY");
					}
					else
					{
						uParam0->f_187[10] = joaat("MP_MOONSHINE_DRINKING_DRUNK_TABLE_CHEERS_HI_TRANS_CHUG_DISCARD");
						uParam0->f_187[13] = joaat("mp_moonshine_drinking_drunk_table_discard");
						uParam0->f_187[12] = joaat("MP_MOONSHINE_DRINKING_DRUNK_TABLE_CHUG_DISCARD");
						uParam0->f_187[11] = joaat("MP_MOONSHINE_DRINKING_DRUNK_TABLE_CHEERS_DISCARD");
					}
					break;
			}
			break;
	}

	return;
}

Hash func_47() // Position - 0x27A2
{
	switch (PED::_GET_ACTIVE_DYNAMIC_SCENARIO(Global_33))
	{
		case joaat("world_player_moonshine_customer_drunk_female_c"):
		case joaat("world_player_moonshine_customer_sober_male_f"):
		case joaat("world_player_moonshine_customer_drunk_male_f"):
		case joaat("world_player_moonshine_customer_sober_female_f"):
		case joaat("world_player_moonshine_customer_drunk_male_c"):
		case joaat("world_player_moonshine_customer_drunk_female_f"):
		case joaat("world_player_moonshine_customer_drunk_male_d"):
		case joaat("world_player_moonshine_customer_sober_female_d"):
		case joaat("world_player_moonshine_customer_drunk_female_d"):
		case joaat("world_player_moonshine_customer_sober_female_c"):
		case joaat("world_player_moonshine_customer_sober_male_c"):
		case joaat("world_player_moonshine_customer_sober_male_d"):
			return joaat("mp_moonshine_drinking_sober_table_lh_hold");
	
		case joaat("world_player_moonshine_customer_drunk_female_a"):
		case joaat("world_player_moonshine_customer_drunk_male_a"):
		case joaat("world_player_moonshine_customer_sober_female_a"):
		case joaat("world_player_moonshine_customer_sober_male_a"):
			return joaat("mp_moonshine_drinking_sober_table_rh_hold");
	
		default:
		
	}

	return joaat("mp_moonshine_drinking_sober_table_hold");
}

Hash func_48() // Position - 0x282B
{
	switch (PED::_GET_ACTIVE_DYNAMIC_SCENARIO(Global_33))
	{
		case joaat("world_player_moonshine_customer_drunk_female_c"):
		case joaat("world_player_moonshine_customer_sober_male_f"):
		case joaat("world_player_moonshine_customer_drunk_male_f"):
		case joaat("world_player_moonshine_customer_sober_female_f"):
		case joaat("world_player_moonshine_customer_drunk_male_c"):
		case joaat("world_player_moonshine_customer_drunk_female_f"):
		case joaat("world_player_moonshine_customer_drunk_male_d"):
		case joaat("world_player_moonshine_customer_sober_female_d"):
		case joaat("world_player_moonshine_customer_drunk_female_d"):
		case joaat("world_player_moonshine_customer_sober_female_c"):
		case joaat("world_player_moonshine_customer_sober_male_c"):
		case joaat("world_player_moonshine_customer_sober_male_d"):
			return joaat("mp_moonshine_drinking_drunk_table_lh_hold");
	
		case joaat("world_player_moonshine_customer_drunk_female_a"):
		case joaat("world_player_moonshine_customer_drunk_male_a"):
		case joaat("world_player_moonshine_customer_sober_female_a"):
		case joaat("world_player_moonshine_customer_sober_male_a"):
			return joaat("mp_moonshine_drinking_drunk_table_rh_hold");
	
		default:
		
	}

	return joaat("mp_moonshine_drinking_drunk_table_hold");
}

void func_49(var uParam0, BOOL bParam1) // Position - 0x28B5
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (func_32(uParam0->f_183[i]) && !func_22(uParam0->f_183[i], true) && !func_25(uParam0->f_183[i], true))
			func_90(uParam0->f_183[i], bParam1, false, true);
	}

	return;
}

int func_50(int iParam0) // Position - 0x2914
{
	return iParam0;
}

BOOL func_51(int iParam0, int iParam1) // Position - 0x291E
{
	return iParam0 && iParam1 != false;
}

void func_52(var uParam0) // Position - 0x292D
{
	func_91(uParam0, 0);
	return;
}

void func_53(var uParam0) // Position - 0x293C
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		func_92(&uParam0->[i], true, true);
	}

	return;
}

BOOL func_54() // Position - 0x2964
{
	if (func_93())
		return false;

	return true;
}

void func_55(float fParam0, BOOL bParam1) // Position - 0x2978
{
	func_94(Global_1940026.f_9 + fParam0, bParam1);
	return;
}

BOOL func_56(Hash hParam0, Hash hParam1) // Position - 0x298F
{
	if (!func_17(hParam0, 0))
		return func_96(func_95(hParam0), hParam1);

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, 1120943070))
		return true;

	return false;
}

BOOL func_57(int iParam0) // Position - 0x29D0
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

float func_58(int iParam0, float fParam1) // Position - 0x2A48
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

void func_59(float fParam0) // Position - 0x2AD9
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (fParam0 == 0f)
		return;
	else if (fParam0 == -1f)
		fParam0 = BUILTIN::TO_FLOAT(PED::_GET_NUM_RESERVED_HEALTH(ped));

	num = func_97(2);
	func_98(fParam0 * (float)num, 0);
	return;
}

void func_60(float fParam0, BOOL bParam1) // Position - 0x2B19
{
	int num;

	if (fParam0 == 0f)
		return;
	else if (fParam0 == -1f)
		fParam0 = BUILTIN::TO_FLOAT(10);

	num = func_99(2);
	func_100(fParam0 * (float)num, false, bParam1);
	return;
}

void func_61(float fParam0) // Position - 0x2B51
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (fParam0 == 0f)
		return;
	else if (fParam0 == -1f)
		fParam0 = BUILTIN::TO_FLOAT(PED::_0xFC3B580C4380B5B7(ped));

	num = func_101(2);
	func_102(fParam0 * (float)num, 0);
	return;
}

float func_62(float fParam0, float fParam1) // Position - 0x2B91
{
	if (fParam1 != 0f)
		return (fParam1 / 100f) * 100f;

	return (fParam0 / 8f) * 100f;
}

void func_63(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x2BBF
{
	if (fParam1 == 0f)
		return;

	if (bParam4)
		fParam1 = func_103(iParam0, fParam1, true);

	func_105(iParam0, func_104(iParam0, 2) + fParam1, bParam2, bParam3, true, 2);
	return;
}

void func_64(float fParam0, BOOL bParam1) // Position - 0x2BF8
{
	if (fParam0 > 10f)
		fParam0 = 10f;

	if (func_106())
		func_107(fParam0, 0);

	if (bParam1)
	{
		Global_17418.f_55.f_2459.f_41 = Global_17418.f_55.f_2459.f_41 + 1;
	
		if (5 == Global_17418.f_55.f_2459.f_41)
			func_108(109, false);
	}

	return;
}

float func_65(float fParam0, int iParam1) // Position - 0x2C50
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

int func_66(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2CA2
{
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		return 0;

	return func_109(iParam0, fParam1, bParam2, bParam3);
}

void func_67(var uParam0) // Position - 0x2CC6
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
			func_74(-1196069774, joaat("CONSUMABLE__DAILY_STEW"), 8100);
			break;
	}

	return;
}

void func_68(Hash hParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0x2D46
{
	if (bParam2 || func_56(hParam0, -537818634))
		func_71(func_110(joaat("medicine_items_used")), 1);

	if (func_56(hParam0, -1457797660))
		func_71(func_110(joaat("provision_items_used")), 1);

	if (func_56(hParam0, 1573112293))
		func_112(func_111(hParam0), 1);

	if (func_56(hParam0, 1939071949))
		func_71(func_70(joaat("USED"), joaat("tonic")), 1);

	if (func_56(hParam0, 1992556171))
		func_71(func_110(joaat("camp_stews_consumed")), 1);

	if (func_56(hParam0, 1239889275))
		func_71(func_110(joaat("antique_bottles_drunk")), 1);

	switch (hParam0)
	{
		case joaat("consumable_oat_cakes"):
		case joaat("consumable_sugarcube"):
		case joaat("consumable_haycube"):
			func_71(func_70(joaat("USED"), joaat("feed_bag")), 1);
			break;
	}

	switch (hParam0)
	{
		case joaat("consumable_horse_medicine"):
		case joaat("consumable_special_horse_medicine"):
		case joaat("consumable_horse_medicine_used"):
		case joaat("consumable_potent_horse_medicine"):
			func_71(func_70(joaat("USED"), joaat("horse_pills")), 1);
			break;
	
		case joaat("consumable_whiskey_used"):
		case joaat("consumable_whiskey"):
			func_71(func_70(joaat("USED"), joaat("Whiskey")), 1);
			break;
	
		case joaat("consumable_predator_bait"):
		case joaat("consumable_potent_predator_bait"):
			func_71(func_70(joaat("USED"), joaat("potent_predator_bait")), 1);
			break;
	
		case joaat("consumable_snake_oil"):
		case joaat("consumable_potent_snake_oil"):
		case joaat("consumable_snake_oil_used"):
			func_71(func_70(joaat("USED"), joaat("Snake_Oil")), 1);
			break;
	
		case -611782825:
			func_71(func_70(joaat("USED"), -1875859641), 1);
			break;
	
		case joaat("consumable_cocaine_chewing_gum_used"):
		case joaat("consumable_cocaine_chewing_gum"):
			func_71(func_70(joaat("USED"), joaat("cocaine_gum")), 1);
			break;
	
		case joaat("consumable_chewing_tobacco"):
		case joaat("consumable_chewing_tobacco_used"):
			func_71(func_70(joaat("USED"), joaat("chewing_tobacco")), 1);
			break;
	
		case joaat("consumable_moonshine"):
			func_71(func_70(joaat("USED"), joaat("moonshine")), 1);
			break;
	
		case joaat("consumable_herbivore_bait"):
		case joaat("consumable_potent_herbivore_bait"):
			func_71(func_70(joaat("USED"), joaat("potent_herbivore_bait")), 1);
			break;
	}

	if (func_113() == -1)
		if (hParam0 == joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"))
			func_71(func_70(joaat("USED"), joaat("special_tonic")), 1);

	if (bParam1)
		func_71(func_110(joaat("DEADEYE_ITEMS_USED")), 1);

	func_114(hParam0, iParam3);
	return;
}

void func_69(Player plParam0) // Position - 0x2FB0
{
	if (Global_1297600[plParam0 /*87*/].f_19.f_19 == joaat("provision_role_moonshiner_mash_high") || Global_1297600[plParam0 /*87*/].f_19.f_19 == 1847740267)
		func_71(func_70(joaat("drank_by_player"), joaat("moonshine_strength_strong")), 1);
	else if (Global_1297600[plParam0 /*87*/].f_19.f_19 == joaat("provision_role_moonshiner_mash_medium") || Global_1297600[plParam0 /*87*/].f_19.f_19 == 1532695640)
		func_71(func_70(joaat("drank_by_player"), joaat("moonshine_strength_average")), 1);
	else
		func_71(func_70(joaat("drank_by_player"), joaat("moonshine_strength_weak")), 1);

	return;
}

struct<2> func_70(int iParam0, int iParam1) // Position - 0x3051
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

void func_71(var uParam0, var uParam1, int iParam2) // Position - 0x3067
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
		return;

	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

int func_72(int iParam0) // Position - 0x3084
{
	var unk;

	if (!func_115(&unk))
		return 0;

	if (!func_116(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_116(&unk, 37, 0, 0, 1))
		return 0;

	if (!func_116(&unk, 39, iParam0, 0, 1))
		return 0;

	return func_117(unk);
}

void func_73(int iParam0) // Position - 0x30DC
{
	func_118(iParam0);
	func_119(true, true);
	return;
}

int func_74(int iParam0, int iParam1, int iParam2) // Position - 0x30F0
{
	int num;

	if (!func_120(iParam1))
		return 0;

	if (!func_121(iParam1))
		return 0;

	if (!func_122(iParam0))
		return 0;

	if (!func_123(iParam0))
		return 0;

	if (!func_124(iParam0))
		func_125(iParam0);

	if (func_126(iParam0, iParam1))
	{
		num = func_127(iParam0);
		Global_1156111.f_47689.f_63[num /*2*/] = iParam0;
		Global_1156111.f_47689.f_63[num /*2*/].f_1 = Global_1295666.f_16 + iParam2;
		return 1;
	}

	return 0;
}

BOOL func_75() // Position - 0x3184
{
	if (func_128())
		return false;

	return Global_1956875.f_1431.f_96 == 0;
}

BOOL func_76() // Position - 0x31A2
{
	if (func_128())
		return false;

	return Global_1956875.f_1431.f_96 == 2;
}

void func_77(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, int iParam16) // Position - 0x31C0
{
	int i;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0.f_10)))
		return;

	if (Global_1939434.f_161 >= 10)
		return;

	if (!func_129(iParam16, 2))
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&(uParam0.f_10))) > 0 || func_130(&(uParam0.f_10)))
			return;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1939434[i /*16*/].f_10)))
		{
			Global_1939434[i /*16*/] = { uParam0 };
			Global_1939434.f_161 = Global_1939434.f_161 + 1;
			func_131(iParam16);
			return;
		}
	}

	return;
}

void func_78(int iParam0) // Position - 0x325C
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
		num3 = func_132(num, 1);
	
		if (Global_1156111.f_35859.f_919[num3 /*12*/] == iParam0)
		{
			func_125(num);
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

BOOL func_79() // Position - 0x332C
{
	return func_133(1);
}

void func_80() // Position - 0x3339
{
	func_78(joaat("STATUS_EFFECT__POISON"));
	func_78(joaat("STATUS_EFFECT__TRACKING"));
	return;
}

const char* func_81(int iParam0) // Position - 0x3353
{
	return MISC::_GET_STRING_FROM_FLOAT(BUILTIN::TO_FLOAT(iParam0), 0);
}

char* func_82(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x3366
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

BOOL func_83(int iParam0, int iParam1) // Position - 0x337A
{
	if (iParam0 < 0)
		return false;

	return Global_1951910[iParam0 /*23*/].f_1 && iParam1 != false;
}

void func_84(int iParam0, Hash hParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, Volume volParam10, Volume volParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0x339B
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
	func_134(iParam0, true);
	func_135(iParam0, true);
	func_136(iParam0, 128);
	return;
}

int func_85() // Position - 0x36B5
{
	int num;

	if (!func_137(&(Global_1297441.f_62)))
		return 0;

	num = func_138(Global_1297441.f_62, 1039159916, 0, true);
	return num;
}

int func_86() // Position - 0x36E6
{
	int num;

	if (!func_137(&(Global_1297441.f_62)))
		return 0;

	num = func_138(Global_1297441.f_62, 1111816631, 0, true);
	return num;
}

void func_87(int iParam0) // Position - 0x3717
{
	Global_1297600[Global_1295666 /*87*/].f_19.f_19 = iParam0;
	return;
}

void func_88(int iParam0) // Position - 0x372F
{
	if (!func_20(Global_1297600[Global_1295666 /*87*/].f_19, iParam0))
		func_4(&(Global_1297600[Global_1295666 /*87*/].f_19), iParam0);

	return;
}

void func_89(var uParam0, int iParam1) // Position - 0x3762
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_90(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x3777
{
	int num;

	if (bParam2 && !func_32(iParam0))
		return;

	num = func_50(iParam0);

	if (bParam1)
	{
		func_139(iParam0, 4);
	
		if (bParam3)
			func_134(num, true);
	
		func_135(num, true);
	}
	else
	{
		func_136(iParam0, 4);
		func_135(num, false);
	}

	return;
}

void func_91(var uParam0, int iParam1) // Position - 0x37CB
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();

	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}

	func_140(uParam0, 1);
	func_141(uParam0, 2);
	uParam0->f_2 = 0;
	return;
}

void func_92(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3807
{
	int num;

	if (bParam1 && !func_32(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_50(*uParam0);

	if (Global_1951910[num /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_142(num);
	*uParam0 = 0;
	return;
}

BOOL func_93() // Position - 0x385B
{
	return func_144(func_143(0));
}

void func_94(float fParam0, BOOL bParam1) // Position - 0x386C
{
	if (PED::IS_PED_ON_MOUNT(Global_33) || PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
	{
		if (fParam0 >= func_145())
		{
			Global_1940026.f_9 = func_145() - 0.01f;
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

Hash func_95(Hash hParam0) // Position - 0x390F
{
	return hParam0;
}

BOOL func_96(Hash hParam0, Hash hParam1) // Position - 0x3919
{
	if (!func_146(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, 1120943070))
		return 1;

	return 0;
}

int func_97(int iParam0) // Position - 0x394F
{
	if (iParam0 == 2)
		iParam0 = func_147(1);

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

void func_98(float fParam0, Ped pedParam1) // Position - 0x398F
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

int func_99(int iParam0) // Position - 0x39D3
{
	if (iParam0 == 2)
		iParam0 = func_147(1);

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

void func_100(float fParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3A17
{
	Player player;
	Ped EntityIndex;
	float playerSpecialAbilityMultiplier;

	player = PLAYER::PLAYER_ID();

	if (fParam0 > 0f && func_148(player))
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

int func_101(int iParam0) // Position - 0x3AC8
{
	if (iParam0 == 2)
		iParam0 = func_147(1);

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

void func_102(float fParam0, Ped pedParam1) // Position - 0x3B0C
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

float func_103(int iParam0, float fParam1, BOOL bParam2) // Position - 0x3B4E
{
	int num;
	int num2;

	num = func_149();
	func_150(&num, 0, 0, 0, 1, 0, 0);
	num2 = func_151(iParam0, 2);

	if (func_153(num, func_152(iParam0, 2), true))
	{
		func_154(iParam0, 0, 2);
		num2 = 0;
	}

	if (num2 >= 2)
	{
		func_108(103, bParam2);
		return 0f;
	}

	func_155(iParam0, func_149(), 2);
	func_154(iParam0, num2 + 1, 2);
	return fParam1;
}

float func_104(int iParam0, int iParam1) // Position - 0x3BB7
{
	if (iParam1 == 2)
		iParam1 = func_147(2);

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

int func_105(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x3C03
{
	Ped ped;

	if (iParam5 == 2)
		iParam5 = func_147(2);

	ped = PLAYER::PLAYER_PED_ID();

	if (func_156(ped, iParam0, fParam1))
	{
		if (bParam2)
			if (fParam1 >= 100f)
				AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
			else
				AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
	
		if (bParam3)
			func_157(iParam0, 7000, iParam5);
	
		func_158(ped, iParam0, fParam1);
		func_159(iParam0, fParam1, bParam4, iParam5);
	}

	return 1;
}

BOOL func_106() // Position - 0x3C81
{
	if (Global_1956875.f_1431.f_107 == -15)
		return true;

	return func_160(Global_1956875.f_1431.f_107, false);
}

void func_107(float fParam0, int iParam1) // Position - 0x3CAA
{
	float num;
	int num2;
	int num3;

	num = func_161(13, 2);
	num2 = func_162(num);
	num = num + fParam0;
	num = func_163(num, 0f, 100f);
	num3 = func_162(num);

	if (num2 != num3)
	{
		Global_1956875.f_1431.f_107 = func_149();
		func_164(&(Global_1956875.f_1431.f_107), 0, 0, 1, 0, 0, 0, false);
	}

	func_165(13, num, 2);
	Global_1956875.f_1431.f_99 = iParam1;
	return;
}

void func_108(int iParam0, BOOL bParam1) // Position - 0x3D1D
{
	int num;
	int num2;

	func_166(iParam0, &num, &num2);

	if (!func_167(iParam0, num, num2, bParam1))
		return;

	func_168(num, num2);
	return;
}

int func_109(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3) // Position - 0x3D4A
{
	char* effectName;
	Ped ped;

	ped = PLAYER::PLAYER_PED_ID();

	if (fParam1 == -1f)
		if (func_169(iParam0))
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
				effectName = func_170(iParam0);
			
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
					GRAPHICS::ANIMPOSTFX_PLAY(effectName);
			}
		
			func_171(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[0 /*2*/] = fParam1;
			break;
	
		case 1:
			if (bParam2)
			{
				effectName = func_170(iParam0);
			
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
					GRAPHICS::ANIMPOSTFX_PLAY(effectName);
			}
		
			func_78(joaat("STATUS_EFFECT__TRACKING"));
			func_172(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[1 /*2*/] = fParam1;
			break;
	
		case 2:
			if (bParam2)
			{
				effectName = func_170(iParam0);
			
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
					GRAPHICS::ANIMPOSTFX_PLAY(effectName);
			}
		
			func_173(-1, false);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[2 /*2*/] = fParam1;
			break;
	
		case 18:
			func_174(1, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[1 /*2*/].f_1 = fParam1;
			break;
	
		case 19:
			func_78(joaat("STATUS_EFFECT__POISON"));
			func_174(0, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[0 /*2*/].f_1 = fParam1;
			break;
	
		case 20:
			func_174(2, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[2 /*2*/].f_1 = fParam1;
			break;
	
		default:
			return 0;
	}

	return 1;
}

struct<2> func_110(int iParam0) // Position - 0x3F00
{
	int num;

	num = iParam0;
	return num;
}

int func_111(Hash hParam0) // Position - 0x3F10
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

void func_112(int iParam0, int iParam1) // Position - 0x40ED
{
	var statId;

	statId = { func_70(joaat("eaten"), func_175(iParam0)) };
	STATS::_STAT_ID_INCREMENT_INT(&statId, iParam1);
	func_71(func_176(joaat("herbs_eaten")), iParam1);
	return;
}

int func_113() // Position - 0x411F
{
	return Global_1572887.f_14;
}

void func_114(Hash hParam0, int iParam1) // Position - 0x412D
{
	int num;

	if (func_113() == 0)
	{
		num = func_177(hParam0, -949239683);
	
		if (iParam1 == -1387038764)
			return;
	
		if (func_56(hParam0, -136654233))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_CannedGoodsEaten_00"), 1);
	
		if (func_56(hParam0, 1765172170) || 1443104131 == num || -1919515848 == num)
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_TobaccoSmokedChewed_00"), 1);
	
		if (func_56(hParam0, 1573112293))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_HerbsTasted_00"), 1);
	
		if (func_56(hParam0, -2085281117) && !func_56(hParam0, -1237028043))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_FreshProduceEaten_00"), 1);
	
		if (func_56(hParam0, 200705431))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_DryGoodsEaten_00"), 1);
	
		if (func_56(hParam0, joaat("ci_tag_item_meat_animal")) || func_56(hParam0, -839724752) || func_56(hParam0, 1264218912) || hParam0 == joaat("consumable_offal"))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_MeatEaten_00"), 1);
	
		if (func_56(hParam0, -764700608))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_TonicOilUsed_00"), 1);
	
		if (hParam0 == joaat("consumable_candy_bag") || hParam0 == joaat("consumable_chocolate_bar") || hParam0 == joaat("consumable_peppermint"))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), -1075364325, 1);
	
		if (hParam0 == joaat("consumable_coffee"))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), 2024753712, 1);
	}

	return;
}

BOOL func_115(Any* panParam0) // Position - 0x42CE
{
	var SourceStruct;

	MISC::COPY_SCRIPT_STRUCT(panParam0, &SourceStruct, 5);

	if (!func_178(1))
		return false;

	*panParam0 = Global_1072759.f_28418[51 /*4*/].f_3;
	return true;
}

BOOL func_116(Any* panParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x42FD
{
	var unk;

	panParam0->f_2 = iParam1;
	panParam0->f_3 = iParam2;
	panParam0->f_4 = iParam3;
	unk = panParam0->f_1;

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0))
	{
		panParam0->f_1 = unk;
		return false;
	}

	return true;
}

int func_117(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x4336
{
	return func_179(&uParam0, 61, 1);
}

void func_118(int iParam0) // Position - 0x4347
{
	int num;

	func_180(iParam0);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), false, 0, false, false);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), false, 1, false, false);
	func_181();
	func_182(8388608);

	if (func_183(iParam0, &num))
		func_185(func_184(num));

	return;
}

void func_119(BOOL bParam0, BOOL bParam1) // Position - 0x4396
{
	if (func_186(255) == 4)
		return;

	if (_IS_NULL_VECTOR(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
		return;

	if (!bParam0)
	{
		func_188(0);
	}
	else
	{
		if (bParam1)
			func_189(0, false, 0, true);
	
		func_190(0);
		func_191(&(Global_1102813.f_3839));
		Global_1102813.f_3839 = 0f;
		Global_1102813.f_3839.f_5 = 1;
		Global_1102813.f_3839.f_16 = 0;
		Global_1102813.f_3839.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102813.f_3839.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102813.f_3839.f_17 = { Global_1901671.f_51.f_1, Global_1901671.f_51.f_1, Global_1901671.f_51.f_1 };
		Global_1102813.f_3839.f_17.f_9 = joaat("volSphere");
		func_192(&(Global_1102813.f_3878));
		Global_1102813.f_3878.f_6 = { Global_1102813.f_3839.f_17.f_6 };
		Global_1102813.f_3878 = Global_1102813.f_3839;
		Global_1102813.f_3878.f_5 = 1;
	
		if (bParam1)
		{
			Global_1102813.f_26.f_3341 = 0;
			Global_1102813.f_26.f_3342 = 0;
		}
	}

	func_193(Global_1102813.f_3839, 36);
	func_194(Global_1102813.f_3878, 36);
	return;
}

BOOL func_120(int iParam0) // Position - 0x44E1
{
	int num;

	num = func_195(iParam0, 1);

	if (num >= 150 && num <= 152)
		return true;

	return false;
}

BOOL func_121(int iParam0) // Position - 0x4509
{
	int num;

	num = func_195(iParam0, 1);

	if (num < 1 || num >= 153)
		return false;

	return true;
}

BOOL func_122(int iParam0) // Position - 0x4531
{
	int num;

	num = func_132(iParam0, 1);

	if (num >= 180 && num <= 182)
		return true;

	return false;
}

BOOL func_123(int iParam0) // Position - 0x4559
{
	int num;

	num = func_132(iParam0, 1);

	if (num < 2 || num >= 183)
		return false;

	return true;
}

BOOL func_124(int iParam0) // Position - 0x4581
{
	if (!func_123(iParam0))
		return false;

	return Global_1156111.f_35859.f_919[func_132(iParam0, 1) /*12*/] == -1;
}

// Unhandled jump detected. Output should be considered invalid
int func_125(int iParam0) // Position - 0x45AE
{
	int num;
	int num2;
	int num3;
	int num4;
	int i;
	int j;
	int k;

	if (!func_123(iParam0))
		return 0;

	num = func_132(iParam0, 1);

	if (!func_121(Global_1156111.f_35859.f_919[num /*12*/]))
		return 1;

	num4 = func_195(Global_1156111.f_35859.f_919[num /*12*/], 1);

	for (i = 0; i < Global_1156111.f_35859[num4 /*6*/].f_5; i = i + 1)
	{
		num2 = Global_1156111.f_35859[num4 /*6*/][i];
	
		switch (func_196(iParam0, num2))
		{
			case 0:
				func_197(num2, iParam0, i);
				break;
		
			case 1:
				for (j = 0; j < Global_1156111.f_35859.f_11700; j = j + 1)
				{
					if (Global_1156111.f_35859.f_9503[j /*3*/] != num2 || Global_1156111.f_35859.f_9503[j /*3*/].f_1 != iParam0)
					{
					}
					else
					{
						func_197(num2, iParam0, i);
						func_198(&Global_1156111.f_35859.f_9503[j /*3*/]);
						Global_1156111.f_35859.f_11700 = Global_1156111.f_35859.f_11700 - 1;
						Global_1156111.f_35859.f_9503[j /*3*/] = { Global_1156111.f_35859.f_9503[Global_1156111.f_35859.f_11700 /*3*/] };
						func_198(&Global_1156111.f_35859.f_9503[Global_1156111.f_35859.f_11700 /*3*/]);
						break;
					}
				}
				break;
		
			case 2:
				goto 0x25E;
		}
	
		num3 = func_199(num2, 1);
		func_200(num3, -1);
	
		if (Global_1156111.f_35859.f_3116[num3 /*31*/].f_29 <= 0)
		{
			func_201(num3, 0);
		
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
	func_202(&Global_1156111.f_35859.f_919[num /*12*/]);
	return 1;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_126(int iParam0, int iParam1) // Position - 0x483E
{
	int num;
	int num2;
	int num3;
	int num4;
	int i;

	if (!func_123(iParam0))
		return false;

	num = func_132(iParam0, 1);

	if (!func_121(iParam1))
		return false;

	num2 = func_195(iParam1, 1);

	if (Global_1156111.f_35859.f_919[num /*12*/] == iParam1)
		return true;

	if (func_121(Global_1156111.f_35859.f_919[num /*12*/]))
		func_125(iParam0);

	Global_1156111.f_35859.f_919[num /*12*/] = iParam1;

	for (i = 0; i < Global_1156111.f_35859[num2 /*6*/].f_5; i = i + 1)
	{
		num3 = Global_1156111.f_35859[num2 /*6*/][i];
		num4 = func_199(num3, 1);
	
		switch (func_203(iParam0, num3))
		{
			case 0:
				func_204(num3, iParam0, i);
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
	
		func_200(num4, 1);
	}

	return true;
}

int func_127(int iParam0) // Position - 0x49F6
{
	int num;

	num = func_132(iParam0, 1);

	if (func_205(iParam0))
		return num - 2;
	else if (func_206(iParam0))
		return num - 130;
	else if (func_207(iParam0))
		return num - 166;
	else if (func_208(iParam0))
		return num - 167;
	else if (func_209(iParam0))
		return num - 172;
	else if (func_122(iParam0))
		return num - 180;
	else if (func_210(iParam0))
		return num - 150;

	return -1;
}

BOOL func_128() // Position - 0x4A90
{
	return Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE");
}

BOOL func_129(int iParam0, int iParam1) // Position - 0x4AB5
{
	return iParam0 && iParam1 != false;
}

BOOL func_130(const char* sParam0) // Position - 0x4AC4
{
	int i;

	i = 0;

	for (i = 0; i < Global_1939434.f_161; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_1939434[i /*16*/].f_10), sParam0))
			return true;
	}

	return false;
}

void func_131(int iParam0) // Position - 0x4AFE
{
	if (func_129(iParam0, 1))
		func_211(1);

	return;
}

int func_132(int iParam0, int iParam1) // Position - 0x4B15
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

BOOL func_133(int iParam0) // Position - 0x5316
{
	return func_212(iParam0);
}

void func_134(int iParam0, BOOL bParam1) // Position - 0x5324
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		if (Global_1951910[iParam0 /*23*/].f_5 == 5 && !func_83(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[iParam0 /*23*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[iParam0 /*23*/].f_3, bParam1);

	return;
}

void func_135(int iParam0, BOOL bParam1) // Position - 0x537C
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951910[iParam0 /*23*/].f_3, bParam1);

	return;
}

void func_136(int iParam0, int iParam1) // Position - 0x53A5
{
	if (iParam0 < 0)
		return;

	Global_1951910[iParam0 /*23*/].f_1 = Global_1951910[iParam0 /*23*/].f_1 || iParam1;
	return;
}

BOOL func_137(Any* panParam0) // Position - 0x53CD
{
	if (*panParam0 == 0 && panParam0->f_1 == 0 && panParam0->f_2 == 0 && panParam0->f_3 == 0)
		return false;

	return true;
}

int func_138(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, int iParam5, BOOL bParam6) // Position - 0x5403
{
	var unk;

	unk.f_9 = -1591664384;

	if (func_213(uParam0, hParam4, &unk, iParam5, bParam6))
		return unk.f_4;

	return 0;
}

void func_139(int iParam0, int iParam1) // Position - 0x5433
{
	if (iParam0 < 0)
		return;

	Global_1951910[iParam0 /*23*/].f_1 = Global_1951910[iParam0 /*23*/].f_1 - Global_1951910[iParam0 /*23*/].f_1 && iParam1;
	return;
}

void func_140(var uParam0, int iParam1) // Position - 0x5466
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_141(var uParam0, int iParam1) // Position - 0x5477
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_142(int iParam0) // Position - 0x548C
{
	if (!func_214(iParam0))
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

struct<2> func_143(int iParam0) // Position - 0x553F
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

BOOL func_144(var uParam0, var uParam1) // Position - 0x5553
{
	return func_215(uParam0, 1, 4);
}

float func_145() // Position - 0x5565
{
	return 0.75f;
}

BOOL func_146(Hash hParam0, int iParam1) // Position - 0x5572
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

int func_147(int iParam0) // Position - 0x558C
{
	return func_217(func_216(iParam0));
}

BOOL func_148(Player plParam0) // Position - 0x559E
{
	float num;

	num = func_218(plParam0) - PLAYER::_GET_PLAYER_CACHED_DEAD_EYE_AMOUNT(plParam0);
	return num <= 1f;
}

int func_149() // Position - 0x55B9
{
	return Global_1902569;
}

void func_150(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x55C5
{
	int num;
	int i;
	int j;
	int k;
	int l;
	int m;
	int num2;
	int num3;

	num = func_219(*iParam0);
	i = func_220(*iParam0);
	j = func_221(*iParam0);
	k = func_222(*iParam0);
	l = func_223(*iParam0);
	m = func_224(*iParam0);

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
	
		num3 = func_225(num2, num);
	}

	for (i = i - iParam5; i < 0; i = i + 12)
	{
		iParam6 = iParam6 + 1;
	}

	num = num - iParam6;
	func_226(iParam0, m, l, k, j, i, num);
	return;
}

int func_151(int iParam0, int iParam1) // Position - 0x5738
{
	if (iParam1 == 2)
		iParam1 = func_147(2);

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

int func_152(int iParam0, int iParam1) // Position - 0x5788
{
	if (iParam1 == 2)
		iParam1 = func_147(2);

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

BOOL func_153(int iParam0, int iParam1, BOOL bParam2) // Position - 0x57DA
{
	if (bParam2)
		if (!func_227(iParam1) || !func_227(iParam0))
			return true;

	return iParam0 > iParam1;
}

void func_154(int iParam0, int iParam1, int iParam2) // Position - 0x5807
{
	if (iParam2 == 2)
		iParam2 = func_147(2);

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

void func_155(int iParam0, int iParam1, int iParam2) // Position - 0x585D
{
	if (iParam2 == 2)
		iParam2 = func_147(2);

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

BOOL func_156(Ped pedParam0, int iParam1, float fParam2) // Position - 0x58B3
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (fParam2 > 100f)
		fParam2 = 100f;
	else if (fParam2 < 0f)
		fParam2 = 0f;

	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(pedParam0, func_228(iParam1), BUILTIN::CEIL(fParam2));
	return true;
}

void func_157(int iParam0, int iParam1, int iParam2) // Position - 0x5908
{
	if (iParam2 == 2)
		iParam2 = func_147(2);

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

void func_158(Ped pedParam0, int iParam1, float fParam2) // Position - 0x5969
{
	char* StringToTest;

	StringToTest = func_229(iParam1);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(StringToTest))
		PED::_SET_PED_BLACKBOARD_FLOAT(pedParam0, func_230(iParam1), fParam2, -1);

	return;
}

void func_159(int iParam0, float fParam1, BOOL bParam2, int iParam3) // Position - 0x5995
{
	int num;

	if (iParam3 == 2)
		iParam3 = func_147(2);

	num = Global_1295666.f_16;
	func_231(iParam0, fParam1, iParam3);

	if (bParam2)
		func_232(iParam0, num, iParam3);

	return;
}

BOOL func_160(int iParam0, BOOL bParam1) // Position - 0x59CB
{
	return func_153(func_149(), iParam0, bParam1);
}

float func_161(int iParam0, int iParam1) // Position - 0x59DF
{
	if (iParam1 == 2)
		iParam1 = func_147(1);

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

int func_162(float fParam0) // Position - 0x5A2B
{
	float num;

	num = fParam0;
	num = (2f * num) - 100f;
	return BUILTIN::ROUND((num / 100f) * BUILTIN::TO_FLOAT(10));
}

float func_163(float fParam0, float fParam1, float fParam2) // Position - 0x5A56
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

void func_164(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x5A7D
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_219(*iParam0);
	i = func_220(*iParam0);
	num2 = func_221(*iParam0);
	j = func_222(*iParam0);
	k = func_223(*iParam0);
	l = func_224(*iParam0);

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

	for (m = func_225(i, num); num2 > m; m = func_225(i, num))
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

	func_226(iParam0, l, k, j, num2, i, num);
	return;
}

int func_165(int iParam0, float fParam1, int iParam2) // Position - 0x5C05
{
	if (!func_233(iParam0))
		return 0;

	if (iParam2 == 2)
		iParam2 = func_147(2);

	func_234(iParam0, fParam1, iParam2);

	if (!ENTITY::IS_ENTITY_DEAD(Global_1295666.f_3))
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_1295666.f_3, iParam0, BUILTIN::FLOOR(fParam1));

	return 1;
}

void func_166(int iParam0, var uParam1, var uParam2) // Position - 0x5C56
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_167(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x5C72
{
	if (iParam1 < 0 || iParam1 > 32)
		return false;

	if (func_235(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_236(iParam0))
		return false;

	if (func_237(iParam0))
		return false;

	if (Global_1900460.f_67 && !func_238(iParam0, 1) || func_239(32768))
		if (!func_238(iParam0, 262144) || !Global_1904402.f_8875)
			return false;

	if (!func_240())
		return false;

	return true;
}

void func_168(int iParam0, int iParam1) // Position - 0x5D14
{
	int Variable;

	Variable = Global_1904402[iParam0];
	MISC::SET_BIT(&Variable, iParam1);
	Global_1904402[iParam0] = Variable;
	return;
}

BOOL func_169(int iParam0) // Position - 0x5D38
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

char* func_170(int iParam0) // Position - 0x5D67
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

void func_171(int iParam0) // Position - 0x5DA2
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PED::_GET_NUM_RESERVED_HEALTH(ped);

	num = func_97(2);
	func_98(BUILTIN::TO_FLOAT(iParam0 * num), 0);
	return;
}

void func_172(int iParam0) // Position - 0x5DDF
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PED::_0xFC3B580C4380B5B7(ped);

	num = func_101(2);
	func_102(BUILTIN::TO_FLOAT(iParam0 * num), 0);
	return;
}

void func_173(int iParam0, BOOL bParam1) // Position - 0x5E1C
{
	int num;

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = 10;

	num = func_99(2);
	func_100(BUILTIN::TO_FLOAT(iParam0 * num), false, bParam1);
	return;
}

void func_174(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5E51
{
	func_105(iParam0, 100f, bParam1, bParam2, true, 2);
	return;
}

int func_175(int iParam0) // Position - 0x5E6B
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

struct<2> func_176(int iParam0) // Position - 0x6201
{
	var unk;

	unk.f_1 = iParam0;
	return unk;
}

int func_177(Hash hParam0, int iParam1) // Position - 0x6213
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

BOOL func_178(int iParam0) // Position - 0x625D
{
	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1072759.f_28418[51 /*4*/].f_3))
		return false;

	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1072759.f_28418[51 /*4*/].f_3))
		return false;

	return true;
}

var func_179(Any* panParam0, int iParam1, int iParam2) // Position - 0x6298
{
	var unk;

	panParam0->f_2 = iParam1;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk, panParam0);
	return unk;
}

void func_180(int iParam0) // Position - 0x62B3
{
	Global_1953292.f_1 = iParam0;
	return;
}

void func_181() // Position - 0x62C3
{
	func_241(128);
	return;
}

void func_182(BOOL bParam0) // Position - 0x62D1
{
	Global_1953292 = Global_1953292 - Global_1953292 && bParam0;
	return;
}

BOOL func_183(int iParam0, var uParam1) // Position - 0x62E9
{
	int num;

	switch (iParam0)
	{
		case joaat("MPC_PLAYER_TYPE_MP_FEMALE"):
			*uParam1 = joaat("mp_female");
			break;
	
		case joaat("MPC_PLAYER_TYPE_MP_MALE"):
			*uParam1 = joaat("mp_male");
			break;
	
		default:
			num = func_242(0, iParam0);
		
			if (num != -1)
			{
				*uParam1 = func_243(num);
			}
			else
			{
				*uParam1 = joaat("mp_male");
				return false;
			}
			break;
	}

	return true;
}

int func_184(int iParam0) // Position - 0x6346
{
	int randomIntInRange;
	int MaxInt;
	var unk;

	if (!func_115(&unk))
		return 0;

	if (!func_116(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_116(&unk, 37, 0, 0, 1))
		return 0;

	if (!func_116(&unk, 40, iParam0, 0, 1))
		return 0;

	if (!func_116(&unk, 59, 0, 0, 1))
		return 0;

	MaxInt = func_244(&unk, 12);
	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, MaxInt);

	if (!func_116(&unk, 60, randomIntInRange, 0, 1))
		return 0;

	return func_245(unk);
}

void func_185(int iParam0) // Position - 0x63D8
{
	Global_1953292.f_3 = iParam0;
	return;
}

int func_186(int iParam0) // Position - 0x63E8
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x6433
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

int func_188(int iParam0) // Position - 0x645D
{
	if (func_246(&(Global_1102813.f_4), iParam0, 5))
		return 1;

	return 0;
}

void func_189(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x647A
{
	func_247(iParam0);

	if (!func_248(1))
		return;

	if (bParam1)
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	else if (!func_249(128) && !func_250(19))
		CAM::DO_SCREEN_FADE_OUT(iParam2);

	if (bParam3 && func_251() == 4)
		func_188(18);

	func_252(1024);
	return;
}

int func_190(int iParam0) // Position - 0x64DC
{
	if (func_253(&(Global_1102813.f_4), iParam0, 5))
		return 1;

	return 0;
}

void func_191(var uParam0) // Position - 0x64F9
{
	var unk;

	*uParam0 = { unk };
	return;
}

void func_192(float* pfParam0) // Position - 0x650B
{
	var unk;

	*pfParam0 = { unk };
	return;
}

void func_193(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, int iParam30) // Position - 0x651D
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

void func_194(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9) // Position - 0x6573
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

int func_195(int iParam0, int iParam1) // Position - 0x65A0
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

int func_196(int iParam0, int iParam1) // Position - 0x6C57
{
	Player player;
	Player player2;
	int num;

	player = func_254(iParam0);
	player2 = Global_1295666;
	num = func_199(iParam1, 1);

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

int func_197(int iParam0, int iParam1, int iParam2) // Position - 0x6CDA
{
	int num;
	int num2;

	if (!func_123(iParam1))
		return 0;

	if (!func_255(iParam0))
		return 0;

	num = func_199(iParam0, 1);
	func_256(iParam0, iParam1, iParam2);

	if (func_257(Global_1156111.f_35859.f_3116[num /*31*/]) && func_258(iParam0, Global_1156111.f_35859.f_3116[num /*31*/].f_4))
	{
		num2 = { func_259(Global_1156111.f_35859.f_3116[num /*31*/].f_4) };
	
		if (func_260(num2))
			if (func_261(num2, num2.f_1, num2.f_2))
				func_262(Global_1156111.f_35859.f_3116[num /*31*/].f_4, num2, num2.f_1, num2.f_2);
			else
				func_263(Global_1156111.f_35859.f_3116[num /*31*/].f_4);
		else
			func_263(Global_1156111.f_35859.f_3116[num /*31*/].f_4);
	}

	return 1;
}

void func_198(int iParam0) // Position - 0x6DD2
{
	*iParam0 = -1;
	iParam0->f_1 = 0;
	iParam0->f_2 = -1;
	return;
}

int func_199(int iParam0, int iParam1) // Position - 0x6DE8
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

void func_200(int iParam0, int iParam1) // Position - 0x7699
{
	Global_1156111.f_35859.f_3116[iParam0 /*31*/].f_29 = Global_1156111.f_35859.f_3116[iParam0 /*31*/].f_29 + iParam1;
	return;
}

void func_201(int iParam0, int iParam1) // Position - 0x76C8
{
	Global_1156111.f_35859.f_3116[iParam0 /*31*/].f_29 = iParam1;
	return;
}

void func_202(int iParam0) // Position - 0x76E4
{
	int i;

	for (i = 0; i < 4; i = i + 1)
	{
		iParam0->f_1[i /*2*/] = 0;
		iParam0->f_1[i /*2*/].f_1 = 0;
	}

	return;
}

int func_203(int iParam0, int iParam1) // Position - 0x7712
{
	Player player;
	Player player2;
	int num;

	player = func_254(iParam0);
	player2 = Global_1295666;
	num = func_199(iParam1, 1);

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

int func_204(int iParam0, int iParam1, int iParam2) // Position - 0x778D
{
	int num;
	BOOL flag;
	int num2;

	if (!func_123(iParam1))
		return 0;

	if (!func_255(iParam0))
		return 0;

	num = func_199(iParam0, 1);

	if (!func_264(iParam2))
		return 0;

	flag = func_257(Global_1156111.f_35859.f_3116[num /*31*/]);

	if (flag && func_265(Global_1156111.f_35859.f_3116[num /*31*/].f_4))
	{
		num2 = { func_266(Global_1156111.f_35859.f_3116[num /*31*/].f_4) };
	
		if (!func_256(num2, num2.f_1, num2.f_2))
			return 0;
	}

	if (func_261(iParam0, iParam1, iParam2))
	{
		if (flag)
			func_262(Global_1156111.f_35859.f_3116[num /*31*/].f_4, iParam0, iParam1, iParam2);
	
		return 1;
	}

	return 0;
}

BOOL func_205(int iParam0) // Position - 0x7864
{
	int num;

	num = func_132(iParam0, 1);

	if (num >= 2 && num <= 129)
		return true;

	return false;
}

BOOL func_206(int iParam0) // Position - 0x788B
{
	int num;

	num = func_132(iParam0, 1);

	if (num >= 130 && num <= 149)
		return true;

	return false;
}

BOOL func_207(int iParam0) // Position - 0x78B3
{
	int num;

	num = func_132(iParam0, 1);

	if (num >= 166 && num <= 166)
		return true;

	return false;
}

BOOL func_208(int iParam0) // Position - 0x78DB
{
	int num;

	num = func_132(iParam0, 1);

	if (num >= 167 && num <= 171)
		return true;

	return false;
}

BOOL func_209(int iParam0) // Position - 0x7903
{
	int num;

	num = func_132(iParam0, 1);

	if (num >= 172 && num <= 179)
		return true;

	return false;
}

BOOL func_210(int iParam0) // Position - 0x792B
{
	int num;

	num = func_132(iParam0, 1);

	if (num >= 150 && num <= 165)
		return true;

	return false;
}

void func_211(int iParam0) // Position - 0x7953
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		if (iParam0 == 1)
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "Inspecting_Item", true);
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Inspecting_Item"))
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "Inspecting_Item");

	return;
}

BOOL func_212(int iParam0) // Position - 0x7999
{
	return func_20(Global_1940085.f_38, iParam0);
}

BOOL func_213(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, Any* panParam5, int iParam6, BOOL bParam7) // Position - 0x79AD
{
	int inventoryId;

	inventoryId = func_267(bParam7);

	if (INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(inventoryId, &uParam0, hParam4) <= iParam6)
		return false;

	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT(inventoryId, &uParam0, hParam4, iParam6, panParam5))
		return false;

	return true;
}

BOOL func_214(int iParam0) // Position - 0x79E7
{
	return func_83(iParam0, 2);
}

BOOL func_215(int iParam0, var uParam1, int iParam2, int iParam3) // Position - 0x79F6
{
	int num;

	if (!func_268(iParam0))
		return false;

	if (iParam0 != 2)
		return false;

	num = func_269(iParam0);
	return num >= iParam2 && num <= iParam3;
}

BOOL func_216(int iParam0) // Position - 0x7A31
{
	return func_270(&(Global_1956875.f_1565), iParam0, 1);
}

int func_217(BOOL bParam0) // Position - 0x7A47
{
	if (bParam0)
		return 1;

	return 0;
}

float func_218(Player plParam0) // Position - 0x7A59
{
	return PLAYER::_GET_PLAYER_MAX_DEAD_EYE(plParam0, 0) - (float)func_271(2);
}

int func_219(int iParam0) // Position - 0x7A6F
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_220(int iParam0) // Position - 0x7A94
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_221(int iParam0) // Position - 0x7AA7
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_222(int iParam0) // Position - 0x7ABA
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_223(int iParam0) // Position - 0x7ACD
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_224(int iParam0) // Position - 0x7ADF
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_225(int iParam0, int iParam1) // Position - 0x7AF1
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

void func_226(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x7B8B
{
	func_273(iParam0, iParam6);
	func_274(iParam0, iParam5);
	func_275(iParam0, iParam4);
	func_276(iParam0, iParam3);
	func_277(iParam0, iParam2);
	func_278(iParam0, iParam1);
	return;
}

BOOL func_227(int iParam0) // Position - 0x7BC3
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_224(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_223(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_222(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_219(iParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_220(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_221(iParam0);

	if (num6 < 1 || num6 > func_225(num5, num4))
		return false;

	return true;
}

int func_228(int iParam0) // Position - 0x7C9F
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

char* func_229(int iParam0) // Position - 0x7CCE
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

char* func_230(int iParam0) // Position - 0x7D09
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

void func_231(int iParam0, float fParam1, int iParam2) // Position - 0x7D44
{
	if (iParam2 == 2)
		iParam2 = func_147(2);

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

void func_232(int iParam0, int iParam1, int iParam2) // Position - 0x7D96
{
	if (iParam2 == 2)
		iParam2 = func_147(2);

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

BOOL func_233(int iParam0) // Position - 0x7DEC
{
	if (func_169(iParam0))
		return true;
	else if (func_279(iParam0))
		return true;

	return false;
}

void func_234(int iParam0, float fParam1, int iParam2) // Position - 0x7E12
{
	if (fParam1 < 0f)
		return;

	if (iParam2 == 2)
		iParam2 = func_147(1);

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

BOOL func_235(int iParam0, int iParam1) // Position - 0x7E6E
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

BOOL func_236(int iParam0) // Position - 0x7E86
{
	if (func_238(iParam0, 4))
		return false;

	return true;
}

BOOL func_237(int iParam0) // Position - 0x7E9D
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

BOOL func_238(int iParam0, int iParam1) // Position - 0x7F69
{
	return Global_1904402.f_33[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_239(int iParam0) // Position - 0x7F82
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_240() // Position - 0x7F95
{
	if (!func_280())
		return false;

	return Global_1904402.f_8873;
}

void func_241(int iParam0) // Position - 0x7FB0
{
	func_4(&Global_1300385, iParam0);
	return;
}

int func_242(int iParam0, int iParam1) // Position - 0x7FC2
{
	int num;

	num = func_281(iParam0, 0, Global_1300387.f_52.f_31, iParam1);

	if (num == -1)
		return -1;

	return func_282(iParam0, num);
}

var func_243(int iParam0) // Position - 0x7FEF
{
	return *Global_1300387.f_52[iParam0 /*3*/].f_1;
}

int func_244(Any anParam0, int iParam1) // Position - 0x8005
{
	anParam0->f_2 = iParam1;
	return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(anParam0);
}

int func_245(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x8019
{
	return func_179(&uParam0, 61, 0);
}

BOOL func_246(Any* panParam0, int iParam1, int iParam2) // Position - 0x802A
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

void func_247(int iParam0) // Position - 0x805C
{
	Global_1102813.f_26.f_12 = iParam0;
	return;
}

BOOL func_248(int iParam0) // Position - 0x806E
{
	return Global_1102813.f_26.f_7 && iParam0 != false;
}

BOOL func_249(BOOL bParam0) // Position - 0x8083
{
	return Global_1102813.f_26.f_9 && bParam0 != false;
}

BOOL func_250(int iParam0) // Position - 0x8098
{
	return Global_1102813.f_4[Global_1106895[iParam0 /*2*/]] && Global_1106895[iParam0 /*2*/].f_1 == Global_1106895[iParam0 /*2*/].f_1;
}

int func_251() // Position - 0x80C6
{
	if (Global_1102813 <= 5)
		return Global_1102813;

	if (Global_1102813 <= 22)
		return 4;

	if (Global_1102813 <= 25)
		return 3;

	return 26;
}

void func_252(BOOL bParam0) // Position - 0x80F9
{
	if (func_283(bParam0))
		return;

	Global_1102813.f_26.f_9 = Global_1102813.f_26.f_9 || bParam0;
	return;
}

BOOL func_253(Any* panParam0, int iParam1, int iParam2) // Position - 0x8120
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

Player func_254(int iParam0) // Position - 0x8153
{
	if (func_205(iParam0))
		return func_127(iParam0) % 32;

	return Global_1295666;
}

BOOL func_255(int iParam0) // Position - 0x8174
{
	int num;

	num = func_199(iParam0, 1);

	if (num < 1 || num >= 199)
		return false;

	return true;
}

BOOL func_256(int iParam0, int iParam1, int iParam2) // Position - 0x819C
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

	num = func_132(iParam1, 1);
	num2 = func_199(iParam0, 1);
	num3 = func_195(Global_1156111.f_35859.f_919[num /*12*/], 1);

	if (Global_1156111.f_35859[num3 /*6*/][iParam2] != iParam0)
		return false;

	if (!Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/])
		return true;

	Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/] = false;

	for (i = 0; i < Global_1156111.f_35859.f_3116[num2 /*31*/].f_16; i = i + 1)
	{
		num4 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/];
		num5 = func_284(num4, 1);
	
		if (!func_285(num4))
		{
		}
		else
		{
			Global_1156111.f_2169[num5 /*205*/].f_1[num2] = Global_1156111.f_2169[num5 /*205*/].f_1[num2] - 1;
			Global_1156111.f_2169[num5 /*205*/].f_201 = Global_1156111.f_2169[num5 /*205*/].f_201 - func_286(&Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/]);
			func_287(num4);
		}
	}

	for (j = 0; j < Global_1156111.f_35859.f_3116[num2 /*31*/].f_28; j = j + 1)
	{
		num6 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_17[j /*2*/];
	
		if (!func_288(num6))
		{
		}
		else
		{
			num7 = func_289(num6, 1);
			Global_1156111.f_21645[num7 /*209*/][num2] = Global_1156111.f_21645[num7 /*209*/][num2] - 1;
		
			if (Global_1156111.f_21645[num7 /*209*/][num2] <= 0)
				MISC::_CLEAR_BIT_FLAG(&(Global_1156111.f_21645[num7 /*209*/].f_200), num2);
		
			if (!MISC::_IS_ANY_BIT_FLAG_SET(&(Global_1156111.f_21645[num7 /*209*/].f_200)))
			{
				Global_1156111.f_21645[num7 /*209*/].f_208 = 0;
				func_290(num6);
			}
		}
	}

	return true;
}

BOOL func_257(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30) // Position - 0x838D
{
	return uParam0.f_4 != 0;
}

BOOL func_258(int iParam0, int iParam1) // Position - 0x839B
{
	int num;

	if (!func_255(iParam0))
		return false;

	if (!func_291(iParam1))
		return false;

	num = func_292(iParam1, 1);
	return Global_1156111.f_35859.f_9286[num /*3*/] == iParam0;
}

Vector3 func_259(int iParam0) // Position - 0x83DB
{
	int num;
	var unk;

	num = func_293(iParam0);

	if (num == -1)
	{
		unk = -1;
		unk.f_2 = -1;
		return unk;
	}

	return Global_1156111.f_35859.f_9503[num /*3*/];
}

BOOL func_260(int iParam0, var uParam1, var uParam2) // Position - 0x8417
{
	if (!func_255(iParam0))
		return false;

	if (!func_123(iParam0.f_1))
		return false;

	if (!func_264(iParam0.f_2))
		return false;

	return true;
}

BOOL func_261(int iParam0, int iParam1, int iParam2) // Position - 0x844E
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

	num = func_132(iParam1, 1);
	num2 = func_199(iParam0, 1);
	num3 = func_195(Global_1156111.f_35859.f_919[num /*12*/], 1);

	if (Global_1156111.f_35859[num3 /*6*/][iParam2] != iParam0)
		return false;

	Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/].f_1 = Global_1295666.f_16;

	if (Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/])
		return true;

	Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/] = true;

	for (i = 0; i < Global_1156111.f_35859.f_3116[num2 /*31*/].f_16; i = i + 1)
	{
		num4 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/];
		num5 = func_284(num4, 1);
	
		if (!func_285(num4))
		{
		}
		else
		{
			Global_1156111.f_2169[num5 /*205*/].f_1[num2] = Global_1156111.f_2169[num5 /*205*/].f_1[num2] + 1;
			Global_1156111.f_2169[num5 /*205*/].f_201 = Global_1156111.f_2169[num5 /*205*/].f_201 + func_286(&Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/]);
			func_294(num4);
		}
	}

	for (j = 0; j < Global_1156111.f_35859.f_3116[num2 /*31*/].f_28; j = j + 1)
	{
		num6 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_17[j /*2*/];
	
		if (!func_288(num6))
		{
		}
		else if (!func_295(&Global_1156111.f_35859.f_3116[num2 /*31*/].f_17[j /*2*/]))
		{
		}
		else
		{
			num7 = func_289(num6, 1);
			Global_1156111.f_21645[num7 /*209*/][num2] = Global_1156111.f_21645[num7 /*209*/][num2] + 1;
			MISC::_SET_BIT_FLAG(&(Global_1156111.f_21645[num7 /*209*/].f_200), num2);
		
			if (!Global_1156111.f_21645[num7 /*209*/].f_208)
			{
				Global_1156111.f_21645[num7 /*209*/].f_208 = 1;
				func_296(num6);
			}
		}
	}

	func_297(Global_1156111.f_35859.f_3116[num2 /*31*/].f_2);
	return true;
}

void func_262(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x867C
{
	int num;

	if (!func_291(iParam0))
		return;

	num = func_292(iParam0, 1);

	if (!func_255(iParam1))
		return;

	if (!func_123(iParam2))
		return;

	if (!func_264(iParam3))
		return;

	Global_1156111.f_35859.f_9286[num /*3*/] = iParam1;
	Global_1156111.f_35859.f_9286[num /*3*/].f_1 = iParam2;
	Global_1156111.f_35859.f_9286[num /*3*/].f_2 = iParam3;
	return;
}

void func_263(int iParam0) // Position - 0x86FB
{
	int num;

	if (!func_291(iParam0))
		return;

	num = func_292(iParam0, 1);
	Global_1156111.f_35859.f_9286[num /*3*/] = -1;
	Global_1156111.f_35859.f_9286[num /*3*/].f_1 = 0;
	Global_1156111.f_35859.f_9286[num /*3*/].f_2 = -1;
	return;
}

BOOL func_264(int iParam0) // Position - 0x8750
{
	if (iParam0 < 0 || iParam0 > 4)
		return false;

	return true;
}

BOOL func_265(int iParam0) // Position - 0x876E
{
	int num;

	if (!func_291(iParam0))
		return 0;

	num = func_298(iParam0);

	if (!func_255(num))
		return 0;

	return 1;
}

Vector3 func_266(int iParam0) // Position - 0x879B
{
	var unk;
	int num;

	if (!func_291(iParam0))
	{
		unk = -1;
		unk.f_2 = -1;
		return unk;
	}

	num = func_292(iParam0, 1);
	return Global_1156111.f_35859.f_9286[num /*3*/];
}

int func_267(BOOL bParam0) // Position - 0x87DC
{
	if (func_113() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

BOOL func_268(var uParam0, var uParam1) // Position - 0x881D
{
	if (!func_299(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_300(uParam0))
		return false;

	return true;
}

int func_269(int iParam0, var uParam1) // Position - 0x8851
{
	if (iParam0 == 2)
		return func_301(iParam0);

	return -1;
}

BOOL func_270(Any* panParam0, int iParam1, int iParam2) // Position - 0x886B
{
	return MISC::IS_BIT_SET(panParam0->[iParam1 / 31], iParam1 % 31);
}

int func_271(int iParam0) // Position - 0x88A2
{
	switch (iParam0)
	{
		case 0:
			return func_97(2) * 2;
	
		case 1:
			return func_101(2) * 2;
	
		case 2:
			return func_99(2) * 2;
	
		default:
		
	}

	return -1;
}

var func_272(BOOL bParam0, var uParam1, var uParam2) // Position - 0x88E3
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_273(int iParam0, int iParam1) // Position - 0x88FA
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

void func_274(int iParam0, int iParam1) // Position - 0x8980
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*iParam0 = *iParam0 - *iParam0 & 62914560;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_275(int iParam0, int iParam1) // Position - 0x89BC
{
	int num;
	int num2;

	num = func_220(*iParam0);
	num2 = func_219(*iParam0);

	if (iParam1 < 1 || iParam1 > func_225(num, num2))
		return;

	*iParam0 = *iParam0 - *iParam0 & 4063232;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_276(int iParam0, int iParam1) // Position - 0x8A0F
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*iParam0 = *iParam0 - *iParam0 & 126976;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_277(int iParam0, int iParam1) // Position - 0x8A4A
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*iParam0 = *iParam0 - *iParam0 & 4032;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_278(int iParam0, int iParam1) // Position - 0x8A83
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*iParam0 = *iParam0 - *iParam0 & 63;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

BOOL func_279(int iParam0) // Position - 0x8ABB
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

BOOL func_280() // Position - 0x8AE0
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

int func_281(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x8AF4
{
	int num;

	if (iParam1 > iParam2)
		return -1;

	num = (iParam1 + iParam2) / 2;

	if (iParam3 < Global_1300387.f_84[iParam0 /*21*/][num /*2*/])
		return func_281(iParam0, iParam1, num - 1, iParam3);

	if (iParam3 > Global_1300387.f_84[iParam0 /*21*/][num /*2*/])
		return func_281(iParam0, num + 1, iParam2, iParam3);

	return num;
}

int func_282(int iParam0, int iParam1) // Position - 0x8B60
{
	return Global_1300387.f_84[iParam0 /*21*/][iParam1 /*2*/].f_1;
}

BOOL func_283(BOOL bParam0) // Position - 0x8B78
{
	return Global_1102813.f_26.f_9 && bParam0 == bParam0;
}

int func_284(int iParam0, int iParam1) // Position - 0x8B8E
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

BOOL func_285(int iParam0) // Position - 0x8FC7
{
	int num;

	num = func_284(iParam0, 1);

	if (num < 1 || num >= 95)
		return false;

	return true;
}

float func_286(int iParam0) // Position - 0x8FEF
{
	float num;

	if (iParam0->f_2 != 0)
	{
		num = func_302(794259616, iParam0->f_2, iParam0->f_1, "");
		return num;
	}

	return iParam0->f_1;
}

void func_287(int iParam0) // Position - 0x901F
{
	int num;
	int num2;
	int i;

	if (!func_285(iParam0))
		return;

	num = func_284(iParam0, 1);

	if (!func_303(Global_1156111.f_2169[num /*205*/]))
		return;

	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] = Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] - 1;

	if (Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] > 0)
		return;

	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] = 0;
	Global_1156111.f_2169[num /*205*/].f_204 = 0;

	if (!func_304(Global_1156111.f_2169[num /*205*/].f_203))
		return;

	num2 = func_305(Global_1156111.f_2169[num /*205*/].f_203, 1);
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

BOOL func_288(int iParam0) // Position - 0x91FE
{
	int num;

	num = func_289(iParam0, 1);

	if (num < 1 || num >= 68)
		return false;

	return true;
}

int func_289(int iParam0, int iParam1) // Position - 0x9226
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

void func_290(int iParam0) // Position - 0x9536
{
	Ped ped;
	Player player;

	ped = PLAYER::PLAYER_PED_ID();
	player = PLAYER::PLAYER_ID();

	switch (iParam0)
	{
		case joaat("HEADSHOT_IMMUNITY"):
			func_307();
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
			func_306();
			break;
	
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
		case joaat("SLIPPERY_BASTARD_VFX"):
		case joaat("SLOW_AND_STEADY_VFX"):
			func_310(func_309(iParam0));
			break;
	
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_303(16);
			break;
	
		case joaat("OVERPOWER_INFINITE_HEALTH"):
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 19);
			break;
	
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_303(17);
			break;
	
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_308(iParam0));
			break;
	
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(ped, false, 0);
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_308(iParam0));
			break;
	
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(5);
			func_108(105, true);
			break;
	
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_308(iParam0));
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
			func_311();
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
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_308(iParam0));
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

BOOL func_291(int iParam0) // Position - 0x9746
{
	int num;

	num = func_292(iParam0, 1);

	if (num < 0 || num >= 5)
		return false;

	return true;
}

int func_292(int iParam0, int iParam1) // Position - 0x976D
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

int func_293(int iParam0) // Position - 0x97CA
{
	int num;
	var unk;
	var unk32;
	int num2;
	int num3;
	int i;

	num = func_298(iParam0);
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
		num3 = func_199(Global_1156111.f_35859.f_9503[i /*3*/], 1);
	
		if (Global_1156111.f_35859.f_3116[num3 /*31*/].f_4 != iParam0)
		{
		}
		else if (Global_1156111.f_35859.f_9503[i /*3*/] == num)
		{
		}
		else if (!func_312(Global_1156111.f_35859.f_9503[i /*3*/], Global_1156111.f_35859.f_9503[i /*3*/].f_1))
		{
		}
		else
		{
			unk = { func_313(Global_1156111.f_35859.f_9503[i /*3*/]) };
		
			if (unk.f_5 > unk32.f_5)
			{
				unk32 = { unk };
				num2 = i;
			}
		}
	}

	return num2;
}

void func_294(int iParam0) // Position - 0x990E
{
	int num;
	int num2;
	int i;

	if (!func_285(iParam0))
		return;

	num = func_284(iParam0, 1);

	if (!func_303(Global_1156111.f_2169[num /*205*/]))
		return;

	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] = Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] + 1;
	Global_1156111.f_2169[num /*205*/].f_204 = 1;

	if (!func_304(Global_1156111.f_2169[num /*205*/].f_203))
		return;

	num2 = func_305(Global_1156111.f_2169[num /*205*/].f_203, 1);
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

BOOL func_295(int iParam0) // Position - 0x9A63
{
	BOOL flag;

	if (iParam0->f_1 != 0)
	{
		flag = func_314(794259616, iParam0->f_1, true, "");
		return flag;
	}

	return true;
}

void func_296(int iParam0) // Position - 0x9A8D
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
			func_307();
			break;
	
		case joaat("SLOW_AND_STEADY_AURA"):
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(player, 1936842089);
			PLAYER::_0x2B12B6FC8B8772AB(player, 8);
			PLAYER::_0x131E294EF60160DF(player, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(player, 1);
			break;
	
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_306();
			break;
	
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			num = func_309(iParam0);
			func_316(num, 3, 1, -1, 1);
			break;
	
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_303(16);
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
			func_303(17);
			break;
	
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_308(iParam0));
			break;
	
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(EntityIndex, true, 0);
			GRAPHICS::ANIMPOSTFX_PLAY(func_308(iParam0));
			break;
	
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(5);
			func_108(104, true);
			break;
	
		case joaat("SLIPPERY_BASTARD_VFX"):
			num = func_309(iParam0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(EntityIndex, func_315(iParam0, 0));
			func_316(num, 0, 1, entityBoneIndexByName, 0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(EntityIndex, func_315(iParam0, 1));
			func_316(num, 1, 1, entityBoneIndexByName, 0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(EntityIndex, func_315(iParam0, 2));
			func_316(num, 2, 1, entityBoneIndexByName, 0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(EntityIndex, func_315(iParam0, 3));
			func_316(num, 2, 1, entityBoneIndexByName, 0);
			break;
	
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_308(iParam0));
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
			func_317();
			break;
	
		case joaat("SLOW_AND_STEADY_VFX"):
			num = func_309(iParam0);
			func_316(num, 4, 1, -1, 0);
			break;
	
		case joaat("OVERPOWER_PREDATOR"):
			break;
	
		case 1398483650:
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE(player, 0.5f);
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE_2(player, 2f);
			break;
	
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_308(iParam0));
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

void func_297(int iParam0) // Position - 0x9D28
{
	char* StringToTest;
	char* StringToTest2;

	if (iParam0 == 0)
		return;

	StringToTest = func_318(iParam0);

	if (MISC::IS_STRING_NULL_OR_EMPTY(StringToTest))
		return;

	StringToTest2 = func_319(iParam0);

	if (MISC::IS_STRING_NULL_OR_EMPTY(StringToTest2))
		return;

	AUDIO::PLAY_SOUND_FROM_ENTITY(StringToTest, Global_1295666.f_3, StringToTest2, false, 0, 0);
	return;
}

int func_298(int iParam0) // Position - 0x9D72
{
	int num;

	if (!func_291(iParam0))
		return -1;

	num = func_292(iParam0, 1);
	return Global_1156111.f_35859.f_9286[num /*3*/];
}

BOOL func_299(int iParam0) // Position - 0x9DA1
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

int func_300(int iParam0) // Position - 0x9DE0
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

int func_301(var uParam0, var uParam1) // Position - 0x9E76
{
	var unk;

	unk.f_1 = -1;
	unk.f_2 = -1;

	if (func_320(uParam0, &unk))
		return unk.f_1;

	return -1;
}

float func_302(Hash hParam0, Hash hParam1, float fParam2, char* sParam3) // Position - 0x9EA2
{
	var unk;
	float num;

	if (func_321(hParam0, hParam1, &unk))
		num = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(hParam0, hParam1, unk.f_10.f_1);
	else
		num = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(hParam0, hParam1, fParam2);

	return num;
}

BOOL func_303(int iParam0) // Position - 0x9ED8
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

BOOL func_304(int iParam0) // Position - 0x9F47
{
	int num;

	num = func_305(iParam0, 1);

	if (num < 1 || num >= 5)
		return false;

	return true;
}

int func_305(int iParam0, int iParam1) // Position - 0x9F6E
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

void func_306() // Position - 0x9FCB
{
	BOOL bTrue;
	BOOL bTrue2;

	if (Global_1156111.f_21645[3 /*209*/].f_208)
		bTrue = true;

	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 550, bTrue);

	if (Global_1156111.f_21645[4 /*209*/].f_208)
		if (!func_20(Global_1297600[Global_1295666 /*87*/].f_86, 1))
			bTrue2 = true;

	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 556, bTrue2);
	return;
}

void func_307() // Position - 0xA02D
{
	BOOL bTrue;

	bTrue = false;

	if (Global_1156111.f_21645[12 /*209*/].f_208)
		bTrue = true;

	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 263, bTrue);
	return;
}

char* func_308(int iParam0) // Position - 0xA05D
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

int func_309(int iParam0) // Position - 0xA0A5
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

void func_310(int iParam0) // Position - 0xA0E0
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

void func_311() // Position - 0xA120
{
	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 305, false);
	PED::_RESET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Global_1295666.f_3);
	return;
}

BOOL func_312(int iParam0, int iParam1) // Position - 0xA140
{
	int num;
	Player player;
	int num2;
	int num3;
	var unk;

	if (!func_255(iParam0))
		return false;

	num = func_199(iParam0, 1);
	num2 = Global_1156111.f_35859.f_3116[num /*31*/].f_4;

	if (func_257(Global_1156111.f_35859.f_3116[num /*31*/]))
	{
		num3 = Global_1156111.f_35859.f_9286[func_292(num2, 1) /*3*/];
		unk = { func_313(num3) };
	
		if (num3 != iParam0 && Global_1156111.f_35859.f_3116[num /*31*/].f_5 <= unk.f_5)
			return false;
	}

	switch (Global_1156111.f_35859.f_3116[num /*31*/])
	{
		case joaat("ENTER_REVIVED_REMOTE"):
			player = func_254(iParam1);
		
			if (player == Global_1295666)
				return false;
		
			return true;
	
		case -2129621195:
			player = func_254(iParam1);
		
			if (player == Global_1295666)
				return false;
		
			if (!GANG::NETWORK_IS_GANG_LEADER(Global_1295666.f_149[Global_1295666]))
				return false;
		
			if (!GANG::_NETWORK_IS_IN_MY_GANG(Global_1295666.f_149[player]))
				return false;
		
			return true;
	
		case -2010146101:
			if (!func_322())
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
		
			player = func_254(iParam1);
		
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295666.f_149[player]))
				return false;
		
			if (PED::_GET_LASSOED_LASSOER(Global_1295666.f_3) != PLAYER::GET_PLAYER_PED(Global_1295666.f_149[player]))
				return false;
		
			return true;
	
		case joaat("ALLY_ENTER_DEADEYE"):
			player = func_254(iParam1);
		
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295666.f_149[player]))
				return false;
		
			if (player != Global_1295666 && !func_324(Global_1295666.f_149[player]))
				return false;
		
			if (!func_325(512, player))
				return false;
		
			return true;
	
		case joaat("ENTER_FREEROAM_OR_COOP"):
			if (!func_322() && !func_323())
				return false;
		
			return true;
	
		default:
		
	}

	return false;
}

struct<31> func_313(int iParam0) // Position - 0xA415
{
	int num;

	num = func_199(iParam0, 1);
	return Global_1156111.f_35859.f_3116[num /*31*/];
}

BOOL func_314(Hash hParam0, Hash hParam1, BOOL bParam2, char* sParam3) // Position - 0xA439
{
	var unk;
	BOOL flag;

	if (func_321(hParam0, hParam1, &unk))
		flag = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(hParam0, hParam1, unk.f_10.f_2);
	else
		flag = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(hParam0, hParam1, bParam2);

	return flag;
}

char* func_315(int iParam0, int iParam1) // Position - 0xA46F
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

void func_316(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0xA4C8
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

void func_317() // Position - 0xA54D
{
	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 305, true);
	PED::_SET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Global_1295666.f_3, 0.7f);
	return;
}

char* func_318(int iParam0) // Position - 0xA572
{
	switch (iParam0)
	{
		case -1822335806:
			return "Head_Shot_Ricco";
	
		default:
		
	}

	return "";
}

char* func_319(int iParam0) // Position - 0xA593
{
	switch (iParam0)
	{
		case -1822335806:
			return "RDRO_Ability_Cards_SFX_Sounds";
	
		default:
		
	}

	return "";
}

BOOL func_320(int iParam0, var uParam1, Any* panParam2) // Position - 0xA5B4
{
	if (!func_268(iParam0))
		return false;

	func_326(panParam2);

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

BOOL func_321(Hash hParam0, Hash hParam1, var uParam2) // Position - 0xA6BF
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
		uParam2->f_10.f_3 = func_327(num2);
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

BOOL func_322() // Position - 0xA8E1
{
	return Global_1572887.f_7;
}

BOOL func_323() // Position - 0xA8EF
{
	if (!Global_1048577)
		return false;

	if (!func_268(func_143(0)))
		return false;

	if (Global_3145858 != -504335712)
		return false;

	if (func_328(*Global_524288.f_39632))
		return true;

	return false;
}

BOOL func_324(Player plParam0) // Position - 0xA93A
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (func_329(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) != 1)
			func_330(plParam0);
	
		return true;
	}

	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) == 1;
}

BOOL func_325(int iParam0, Player plParam1) // Position - 0xA97F
{
	if (plParam1 == 255)
		return Global_1102813.f_3 && iParam0 != false;

	return Global_1101558[plParam1 /*38*/].f_3 && iParam0 != false;
}

void func_326(Any* panParam0) // Position - 0xA9AB
{
	*panParam0 = 0;
	panParam0->f_1 = -1;
	panParam0->f_2 = -1;
	return;
}

int func_327(int iParam0) // Position - 0xA9C1
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

BOOL func_328(int iParam0) // Position - 0xA9F7
{
	return iParam0 == -1759663922 || iParam0 == -318976023 || iParam0 == 772881414 || iParam0 == 31269700 || iParam0 == -133550749;
}

BOOL func_329(Player plParam0) // Position - 0xAA3F
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), plParam0))
		return true;

	return false;
}

void func_330(Player plParam0) // Position - 0xAA5C
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (!Global_1295666.f_17[player])
	{
		func_331(plParam0);
		return;
	}

	if (Global_1072759.f_21353.f_1[player /*8*/] == 1)
		return;

	func_332(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 1);
	Global_1072759.f_21353.f_1[player /*8*/] = 1;
	return;
}

void func_331(Player plParam0) // Position - 0xAADF
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (Global_1072759.f_21353.f_1[player /*8*/] == 0)
		return;

	func_332(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 0);
	Global_1072759.f_21353.f_1[player /*8*/] = 0;
	return;
}

void func_332(Player plParam0) // Position - 0xAB4B
{
	if (Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 = 0;
	}

	return;
}

