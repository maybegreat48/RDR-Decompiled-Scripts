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
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion

void main() // Position - 0x0
{
	var unk;

	unk.f_5 = 1;
	unk.f_9 = 1;
	unk.f_39 = 37709;
	unk.f_1 = uScriptParam_0.f_1;
	unk.f_2 = uScriptParam_0.f_3;
	unk.f_3 = uScriptParam_0.f_4;
	Global_1940252.f_8 = 1;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		func_1(&unk, 5);

	if (!func_2(unk.f_1, 1))
		func_3(&unk);

	PLAYER::_0x76F7E1BCD623A429(PLAYER::GET_PLAYER_INDEX());
	func_4(&unk);

	while (true)
	{
		if (func_5(&unk))
			func_1(&unk, 5);
	
		if (!unk.f_5)
		{
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ENTER"), false);
		
			if (PED::IS_PED_ON_MOUNT(Global_33) || PED::IS_PED_ENTERING_ANY_TRANSPORT(Global_33))
				func_1(&unk, 5);
		}
	
		switch (func_6(&unk))
		{
			case 0:
				if (func_7(&unk))
					func_8(&unk);
			
				unk.f_43 = func_9(Global_33, 0);
				unk.f_44 = func_10(unk.f_43);
			
				if (Global_1940085.f_41 == unk.f_1 || Global_1940085.f_42 == unk.f_1)
					if (!Global_1940199.f_6)
						if (unk.f_43 != joaat("WEAPON_UNARMED") && unk.f_44 != joaat("GROUP_PISTOL") && unk.f_44 != joaat("group_revolver"))
							WEAPON::_HIDE_PED_WEAPONS(Global_33, 2, false);
						else
							func_1(&unk, 1);
				break;
		
			case 1:
				if (func_7(&unk))
					func_8(&unk);
			
				func_11(&unk);
				func_1(&unk, 2);
				break;
		
			case 2:
				if (func_7(&unk))
					func_8(&unk);
			
				if (func_12(&unk))
				{
					func_13(false);
					func_1(&unk, 3);
				}
				break;
		
			case 3:
				if (func_7(&unk))
				{
					if (!unk.f_3)
					{
						func_14(&unk);
					
						if (unk.f_13 && ANIMSCENE::DOES_ANIM_SCENE_EXIST(unk.f_42))
							func_15(&unk);
					
						func_16(&unk);
						func_8(&unk);
					}
					else
					{
						func_8(&unk);
						func_1(&unk, 4);
					}
				}
			
				if (unk.f_14 && TASK::PED_HAS_USE_SCENARIO_TASK(Global_33) || ENTITY::IS_ENTITY_PLAYING_ANIM(Global_33, unk.f_17, unk.f_19, 1) || unk.f_13 && ANIMSCENE::IS_ANIM_SCENE_RUNNING(unk.f_42, false))
				{
					func_17(unk.f_1, 1, false, 562618531);
					func_18(&unk);
					func_1(&unk, 4);
				}
				break;
		
			case 4:
				if (func_7(&unk))
					func_8(&unk);
			
				if (!func_19(&unk))
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(unk.f_42) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(unk.f_42, false) && !unk.f_6)
					{
						unk.f_6 = 1;
						func_20(unk.f_1);
						func_21(&unk);
						func_22(unk.f_1, 562618531);
						HUD::_0x2F7BB105144ACF30();
					}
				
					func_1(&unk, 5);
					HUD::_0xBFFF81E12A745A5F();
				}
				break;
		
			case 5:
				if (func_7(&unk))
					func_8(&unk);
			
				if (func_23(&unk))
					func_3(&unk);
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	return;
}

void func_1(var uParam0, int iParam1) // Position - 0x302
{
	*uParam0 = iParam1;
	func_24(uParam0);
	return;
}

BOOL func_2(Hash hParam0, int iParam1) // Position - 0x315
{
	int num;

	if (!func_25(hParam0, 0))
		return false;

	num = func_26(hParam0);

	switch (num)
	{
		case joaat("CLOTHING"):
			if (func_28(hParam0))
				return true;
			break;
	
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, hParam0, 0, false))
				return true;
			else
				return false;
			break;
	
		case joaat("AMMO"):
			if (!func_27(hParam0, 1))
				return false;
			break;
	}

	return func_29(hParam0, false, false, false) >= iParam1;
}

void func_3(var uParam0) // Position - 0x398
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
		if (uParam0->f_9)
			OBJECT::DELETE_OBJECT(&(uParam0->f_4));
		else
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_4));

	func_13(true);

	if (uParam0->f_14)
		TASK::CLEAR_PED_TASKS(Global_33, false, false);

	if (uParam0->f_13)
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_42))
			ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_42);

	Global_1940085.f_41 = 0;
	Global_1940085.f_42 = 0;
	Global_1940252.f_8 = 0;
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_4(var uParam0) // Position - 0x40D
{
	uParam0->f_12 = 1;
	uParam0->f_14 = 1;

	if (uParam0->f_1 == joaat("consumable_herbivore_bait"))
		uParam0->f_15 = joaat("WORLD_PLAYER_PLACE_BAIT_NORMAL");
	else
		uParam0->f_15 = joaat("WORLD_PLAYER_PLACE_BAIT_POTENT");

	uParam0->f_5 = 0;
	return;
}

BOOL func_5(var uParam0) // Position - 0x445
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return true;

	if (Global_1940199.f_6)
		return true;

	flag = false;

	if (func_26(uParam0->f_1) == joaat("consumable"))
		if (Global_1940085.f_40 != uParam0->f_1 && Global_1940085.f_41 != uParam0->f_1 && Global_1940085.f_42 != uParam0->f_1)
			flag = true;

	if (flag)
	{
		if (uParam0->f_41 == 0)
			uParam0->f_41 = MISC::GET_GAME_TIMER();
	
		if (uParam0->f_41 + 150 < MISC::GET_GAME_TIMER())
			return true;
	}
	else
	{
		uParam0->f_41 = 0;
	}

	return false;
}

int func_6(var uParam0) // Position - 0x4DC
{
	return *uParam0;
}

BOOL func_7(var uParam0) // Position - 0x4E7
{
	return uParam0->f_8;
}

void func_8(var uParam0) // Position - 0x4F3
{
	uParam0->f_8 = 0;
	return;
}

var func_9(Ped pedParam0, int iParam1) // Position - 0x500
{
	var ReturnWeaponType;

	WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &ReturnWeaponType, true, iParam1, false);
	return ReturnWeaponType;
}

int func_10(Hash hParam0) // Position - 0x517
{
	if (WEAPON::IS_WEAPON_PISTOL(hParam0))
		return joaat("GROUP_PISTOL");
	else if (WEAPON::IS_WEAPON_REVOLVER(hParam0))
		return joaat("group_revolver");
	else if (WEAPON::IS_WEAPON_REPEATER(hParam0))
		return joaat("group_repeater");
	else if (WEAPON::IS_WEAPON_RIFLE(hParam0))
		return joaat("GROUP_RIFLE");
	else if (WEAPON::IS_WEAPON_SHOTGUN(hParam0))
		return joaat("GROUP_SHOTGUN");
	else if (WEAPON::_IS_WEAPON_SNIPER(hParam0))
		return joaat("GROUP_SNIPER");

	return 0;
}

void func_11(var uParam0) // Position - 0x595
{
	if (func_30(uParam0->f_16))
		STREAMING::REQUEST_MODEL(uParam0->f_16, false);

	if (func_31(uParam0->f_17))
		STREAMING::REQUEST_ANIM_DICT(uParam0->f_17);

	if (uParam0->f_13 && func_32(&(uParam0->f_23)))
	{
		uParam0->f_42 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_23), 0, &(uParam0->f_31), false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_42);
	}

	return;
}

BOOL func_12(var uParam0) // Position - 0x5F3
{
	if (func_30(uParam0->f_16))
		if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_16))
			return false;

	if (func_31(uParam0->f_17))
		if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam0->f_17))
			return false;

	if (uParam0->f_13 && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_42))
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_42, true, false))
			return false;

	if (Global_1940085.f_41 != uParam0->f_1 && func_26(uParam0->f_1) == joaat("consumable"))
		return false;

	return true;
}

void func_13(BOOL bParam0) // Position - 0x67D
{
	if (!bParam0)
		func_33(false, 0);

	Global_1940252.f_3 = bParam0;
	return;
}

void func_14(var uParam0) // Position - 0x699
{
	Vector3 offsetFromEntityInWorldCoords;

	if (!Global_1940199.f_6 && func_30(uParam0->f_16))
	{
		offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_33, 0f, 0f, -10f) };
		uParam0->f_4 = OBJECT::CREATE_OBJECT(uParam0->f_16, offsetFromEntityInWorldCoords, false, true, false, false, true);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_4, false);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_4, Global_33, PED::GET_PED_BONE_INDEX(Global_33, uParam0->f_39), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
	}

	return;
}

void func_15(var uParam0) // Position - 0x70C
{
	return;
}

void func_16(var uParam0) // Position - 0x714
{
	if (uParam0->f_14)
	{
		if (uParam0->f_15 != 0)
			TASK::TASK_START_SCENARIO_IN_PLACE_HASH(Global_33, uParam0->f_15, 0, true, 0, -1082130432, false);
	
		return;
	}

	if (uParam0->f_13)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_42))
			ANIMSCENE::START_ANIM_SCENE(uParam0->f_42);
	
		return;
	}

	if (!func_31(uParam0->f_17))
		return;

	if (!Global_1940199.f_6 && uParam0->f_12 || ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (!uParam0->f_12 && func_34(uParam0->f_18))
			ENTITY::PLAY_ENTITY_ANIM(uParam0->f_4, uParam0->f_18, uParam0->f_17, 16f, false, true, false, 0, 0);
	
		if (func_34(uParam0->f_19))
			TASK::TASK_PLAY_ANIM(Global_33, uParam0->f_17, uParam0->f_19, 16f, -4f, -1, 67108880, 0f, false, 4096, false, uParam0->f_21, false);
	}

	return;
}

int func_17(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x7F4
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	Hash AmmoType;
	int pedAmmoByType;
	var statId;
	var unk2;

	if (!func_25(hParam0, 0))
		return 0;

	if (hParam3 == -142743235)
		if (func_35(hParam0))
			hParam3 = 562618531;

	flag = hParam3 == 562618531;
	flag2 = hParam3 == 1992602754;
	flag3 = hParam3 == -1387038764;
	AmmoType = func_36(hParam0, 1);

	if (AmmoType != 0)
	{
		pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, AmmoType);
		pedAmmoByType = pedAmmoByType - iParam1;
	
		if (pedAmmoByType < 0)
			return 0;
	
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_33, AmmoType, iParam1, hParam3);
	
		if (!bParam2)
			func_37(hParam0, -iParam1, flag, flag2, flag3, false, false);
	
		return 0;
	}

	if (!func_2(hParam0, 1))
		return 0;

	statId = { func_38(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
	{
		if (func_29(hParam0, false, false, false) - iParam1 >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&statId, iParam1);
		}
		else if (func_29(hParam0, false, false, false) - iParam1 < 0)
		{
			func_17(hParam0, func_29(hParam0, false, false, false), bParam2, hParam3);
			return 0;
		}
	}

	if (func_26(hParam0) == joaat("WEAPON"))
	{
		if (!func_39(hParam0, iParam1, false, hParam3))
			return 0;
	}
	else if (!func_40(hParam0, iParam1, hParam3, bParam2, false))
	{
		return 0;
	}
	else
	{
		unk2 = { func_41(hParam0, false, 0) };
	
		if (func_42(false) && unk2.f_4 == 1084182731)
			func_43(1, false, 0);
	}

	if (hParam0 == joaat("document_player_journal"))
		Global_1940085.f_21 = 0;

	if (!func_42(false))
		bParam2 = true;

	if (!bParam2 && hParam0 != 1309979101)
		func_37(hParam0, -iParam1, flag, flag2, flag3, false, false);

	return 1;
}

void func_18(var uParam0) // Position - 0x9A6
{
	if (!func_31(uParam0->f_17))
		return;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_22) && ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_4, uParam0->f_17, uParam0->f_18, 1))
			TASK::SET_ANIM_FILTER(uParam0->f_4, uParam0->f_22, 0, 1);

	return;
}

BOOL func_19(var uParam0) // Position - 0x9F8
{
	int num;
	int boneTag;

	if (Global_1940199.f_6)
		return false;

	num = 1;

	if (uParam0->f_3)
		num = 2;

	if (func_44(uParam0) && !uParam0->f_6)
	{
		uParam0->f_6 = 1;
		func_20(uParam0->f_1);
		func_21(uParam0);
		func_22(uParam0->f_1, 562618531);
		HUD::_0x2F7BB105144ACF30();
	}

	if (!uParam0->f_14 && !uParam0->f_13 && func_45(Global_33, uParam0->f_17, uParam0->f_19, 0, num) || uParam0->f_14 && !TASK::PED_HAS_USE_SCENARIO_TASK(Global_33) || uParam0->f_13 && func_46(Global_33, uParam0->f_42))
	{
		if (!uParam0->f_10)
		{
			if (func_34(uParam0->f_20))
			{
				TASK::TASK_PLAY_ANIM(Global_33, uParam0->f_17, uParam0->f_20, 1000f, -4f, -1, 67108880, 0f, false, 4096, false, uParam0->f_21, false);
				uParam0->f_10 = 1;
			}
			else
			{
				return false;
			}
		}
		else if (func_45(Global_33, uParam0->f_17, uParam0->f_20, 0, num))
		{
			return false;
		}
	}

	func_47(uParam0);

	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, joaat("objectexchange")) && !uParam0->f_6)
	{
		uParam0->f_6 = 1;
		func_20(uParam0->f_1);
		func_21(uParam0);
		func_22(uParam0->f_1, 562618531);
		HUD::_0x2F7BB105144ACF30();
	}

	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, joaat("Attach")) && !uParam0->f_7)
	{
		uParam0->f_7 = 1;
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_4, true);
	}

	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, joaat("detach")) && uParam0->f_7)
	{
		uParam0->f_7 = 0;
		ENTITY::DETACH_ENTITY(uParam0->f_4, true, true);
	}

	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 303244851))
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("weapon_melee_knife"), true, 0, false, false);

	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 1971578095))
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);

	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 2007785590))
	{
		ENTITY::DETACH_ENTITY(uParam0->f_4, true, true);
	
		if (uParam0->f_39 == 37709)
			boneTag = 7966;
		else
			boneTag = 37709;
	
		ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_4, Global_33, PED::GET_PED_BONE_INDEX(Global_33, boneTag), 0f, 0f, 0f, 0f, 0f, 0f, true, false, false, false, 2, true, false, false);
	}

	return true;
}

void func_20(Hash hParam0) // Position - 0xC34
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

	if (func_48(hParam0, 1573112293) || func_48(hParam0, 672467738) || func_48(hParam0, -550842268))
		flag = true;

	if (func_26(hParam0) == joaat("consumable"))
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
				health = func_49(0, unk22.f_2);
				func_50(unk22.f_2);
				flag3 = true;
			}
			else if (-1104847406 == unk22.f_1)
			{
				deadeye = func_49(2, unk22.f_2);
				func_51(unk22.f_2, false);
				flag2 = true;
			}
			else if (381158954 == unk22.f_1)
			{
				stamina = func_49(1, unk22.f_2);
				func_52(unk22.f_2);
			}
			else if (joaat("EFFECT_HEALTH_CORE") == unk22.f_1)
			{
				num2 = func_53(BUILTIN::TO_FLOAT(unk22.f_2), unk22.f_5);
				func_54(0, num2, true, true, flag);
				flag3 = true;
			}
			else if (joaat("EFFECT_DEADEYE_CORE") == unk22.f_1)
			{
				num3 = func_53(BUILTIN::TO_FLOAT(unk22.f_2), unk22.f_5);
				func_54(2, num3, true, true, flag);
				flag2 = true;
			}
			else if (joaat("EFFECT_STAMINA_CORE") == unk22.f_1)
			{
				num4 = func_53(BUILTIN::TO_FLOAT(unk22.f_2), unk22.f_5);
				func_54(1, num4, true, true, flag);
			}
			else if (joaat("Effect_Health_Core_Gold") == unk22.f_1)
			{
				num5 = func_55(BUILTIN::TO_FLOAT(unk22.f_3), unk22.f_4);
				func_56(19, num5, true, true);
				flag3 = true;
			}
			else if (joaat("Effect_Deadeye_Core_Gold") == unk22.f_1)
			{
				num5 = func_55(BUILTIN::TO_FLOAT(unk22.f_3), unk22.f_4);
				func_56(20, num5, true, true);
				flag2 = true;
			}
			else if (joaat("Effect_Stamina_Core_Gold") == unk22.f_1)
			{
				num5 = func_55(BUILTIN::TO_FLOAT(unk22.f_3), unk22.f_4);
				func_56(18, num5, true, true);
			}
			else if (1869697234 == unk22.f_1)
			{
				num5 = func_55(BUILTIN::TO_FLOAT(unk22.f_3), unk22.f_4);
				func_56(0, num5, true, true);
				flag3 = true;
			}
			else if (1342237631 == unk22.f_1)
			{
				num5 = func_55(BUILTIN::TO_FLOAT(unk22.f_3), unk22.f_4);
				func_56(2, num5, true, true);
				flag2 = true;
			}
			else if (-1240225157 == unk22.f_1)
			{
				num5 = func_55(BUILTIN::TO_FLOAT(unk22.f_3), unk22.f_4);
				func_56(1, num5, true, true);
			}
			else if (-816334026 == unk22.f_1)
			{
				func_57(BUILTIN::TO_FLOAT(unk22.f_2), true);
			}
		}
	
		if (flag3 || func_48(hParam0, -537818634))
			func_59(func_58(joaat("medicine_items_used")), 1);
	
		if (func_48(hParam0, -1457797660))
			func_59(func_58(joaat("provision_items_used")), 1);
	
		if (flag2)
			func_59(func_58(joaat("DEADEYE_ITEMS_USED")), 1);
	
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

void func_21(var uParam0) // Position - 0xF78
{
	Object pedRegisterProp;
	int num;

	pedRegisterProp = PED::_GET_PED_REGISTER_PROP(Global_33, "bait01", false);

	if (ENTITY::DOES_ENTITY_EXIST(pedRegisterProp))
	{
		if (uParam0->f_1 == joaat("consumable_herbivore_bait"))
			num = 0;
		else
			num = 1;
	
		EVENT::_0x36D0F2BA2C0D9BDE(pedRegisterProp, num);
		OBJECT::_0xCAAF2BCCFEF37F77(pedRegisterProp, 4);
	}

	func_60(366, false);
	return;
}

void func_22(Hash hParam0, int iParam1) // Position - 0xFC5
{
	int num;

	if (func_61() == 0)
	{
		num = func_62(hParam0, -949239683);
	
		if (iParam1 == -1387038764)
			return;
	
		if (func_48(hParam0, -136654233))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_CannedGoodsEaten_00"), 1);
	
		if (func_48(hParam0, 1765172170) || 1443104131 == num || -1919515848 == num)
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_TobaccoSmokedChewed_00"), 1);
	
		if (func_48(hParam0, 1573112293))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_HerbsTasted_00"), 1);
	
		if (func_48(hParam0, -2085281117) && !func_48(hParam0, -1237028043))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_FreshProduceEaten_00"), 1);
	
		if (func_48(hParam0, 200705431))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_DryGoodsEaten_00"), 1);
	
		if (func_48(hParam0, joaat("ci_tag_item_meat_animal")) || func_48(hParam0, -839724752) || func_48(hParam0, 1264218912) || hParam0 == joaat("consumable_offal"))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_MeatEaten_00"), 1);
	
		if (func_48(hParam0, -764700608))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_TonicOilUsed_00"), 1);
	
		if (hParam0 == joaat("consumable_candy_bag") || hParam0 == joaat("consumable_chocolate_bar") || hParam0 == joaat("consumable_peppermint"))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), -1075364325, 1);
	
		if (hParam0 == joaat("consumable_coffee"))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), 2024753712, 1);
	}

	return;
}

BOOL func_23(var uParam0) // Position - 0x1166
{
	return true;
}

void func_24(var uParam0) // Position - 0x116F
{
	uParam0->f_8 = 1;
	return;
}

BOOL func_25(Hash hParam0, int iParam1) // Position - 0x117C
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

int func_26(Hash hParam0) // Position - 0x1196
{
	var unk;

	if (!func_25(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk))
		return 0;

	return unk.f_2;
}

BOOL func_27(Hash hParam0, int iParam1) // Position - 0x11C1
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_25(hParam0, 0))
		return false;

	if (Global_1940199.f_6)
		return false;

	hash = func_36(hParam0, iParam1);
	unk.f_9 = -1591664384;

	if (func_63("ALL WEAPONS", &num, &num2, -1591664384, false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_64(&unk, i, num, num2))
			{
			}
			else if (!func_65(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_66(num);
				return true;
			}
		}
	
		func_66(num);
	}

	return false;
}

BOOL func_28(Hash hParam0) // Position - 0x1267
{
	int num;
	int num2;
	int num3;

	if (!func_25(hParam0, 0))
		return false;

	num = func_67(hParam0);

	switch (num)
	{
		case -636562458:
		case 252325943:
		case 829857647:
		case 1115104855:
		case 1216664798:
		case 1341188928:
			break;
	
		default:
			return false;
	}

	num2 = func_68(hParam0);

	if (!(num2 == 0))
	{
		num3 = func_69(&(Global_17418.f_55.f_664.f_1354.f_5), num2);
	
		if (num3 == -1)
			return true;
	}

	num2 = func_70(hParam0);
	num3 = func_69(&(Global_17418.f_55.f_664.f_1354.f_5), num2);

	if (num3 == -1)
		return false;

	return hParam0 == Global_17418.f_55.f_664.f_1354.f_5[num3 /*17*/];
}

int func_29(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1323
{
	int inventoryItemCountWithItemid;
	int num;
	Hash AmmoType;
	var guid;

	inventoryItemCountWithItemid = 0;

	if (!func_25(hParam0, 0))
		return 0;

	num = func_26(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		AmmoType = func_36(hParam0, 1);
	
		if (AmmoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, AmmoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_71(hParam0, false);
	}

	if (func_72(hParam0, joaat("DEFAULT")) != 0)
	{
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_73(bParam2), hParam0, bParam3);
	}
	else
	{
		guid = { func_74(hParam0, bParam2) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_73(bParam2), &guid, bParam3);
	}

	return inventoryItemCountWithItemid;
}

BOOL func_30(int iParam0) // Position - 0x13E5
{
	return iParam0 != 0;
}

BOOL func_31(const char* sParam0) // Position - 0x13F1
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(sParam0);
}

BOOL func_32(const char* sParam0) // Position - 0x1400
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(sParam0);
}

void func_33(BOOL bParam0, int iParam1) // Position - 0x140F
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

BOOL func_34(const char* sParam0) // Position - 0x1431
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(sParam0);
}

BOOL func_35(Hash hParam0) // Position - 0x1440
{
	return func_26(hParam0) == joaat("consumable");
}

Hash func_36(Hash hParam0, int iParam1) // Position - 0x1454
{
	int num;
	var unk;
	Hash hash;

	if (!func_25(hParam0, 0))
		return 0;

	num = func_26(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_48(hParam0, 1399091007))
	{
		func_75(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

void func_37(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x14CE
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

	if (!func_25(hParam0, 0))
		return;
	else if (hParam0 == joaat("KIT_HANDHELD_CATALOG"))
		return;
	else if (iParam1 == 0)
		return;

	if (!func_76() || bParam6)
	{
		func_77(hParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
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
	else if (bParam3 || bParam4)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, value == 1 ? "ITEM_GET_PUMP" : "ITEM_GET_PUMP_MULT", 32);
		flag = true;
	}
	else if (bParam2 && func_79(hParam0, 2097152))
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		flag = true;
	}

	num = func_26(hParam0);
	num2 = 0;
	num3 = joaat("Inventory");

	if (num == joaat("AMMO") && hParam0 != joaat("ammo_hatchet") && hParam0 != joaat("ammo_hatchet_cleaver") && hParam0 != joaat("ammo_hatchet_hunter") && hParam0 != joaat("ammo_tomahawk_ancient") && hParam0 != joaat("ammo_poisonbottle") && hParam0 != joaat("AMMO_MOONSHINEJUG_MP") && !func_48(hParam0, -1982291600) && !func_48(hParam0, 137764179))
	{
		num2 = joaat("ammo_types");
		num3 = joaat("ammo_types");
	}

	num4 = func_67(hParam0);

	if (num == joaat("weapon_mod") || num == joaat("weapon_decoration") || num4 == -1674363638 || num4 == 252325943 || num4 == 829857647 || num4 == -636562458 || num4 == 1341188928 || num4 == 1216664798)
	{
		InputString = "ITEMTYPE_UPGRADES";
		InputString.f_1 = "itemtype_textures";
	}
	else if (!func_80(hParam0, &InputString, num3, num2, 0, joaat("ui_itemviewer")))
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

	if (func_48(hParam0, 474910316))
	{
		StringToTest = func_81(hParam0);
	
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

	if (func_48(hParam0, 1816585950))
		num5 = joaat("color_objective");

	if (func_82(hParam0))
		if (!flag && !bParam2)
			num5 = joaat("color_yellow");
		else
			num5 = joaat("color_yellowdark");

	hash = func_83(hParam0, false);

	if (func_84(num4) && func_48(hParam0, -306684263) && hash != 0)
	{
		hash = func_85(hParam0);
	}
	else if (func_26(hParam0) == joaat("CLOTHING"))
	{
		hash2 = func_86(hParam0);
	
		if (func_25(hash2, 0))
			hash = func_83(hash2, false);
	}

	if (func_87(hParam0, 1443104131) && bParam3)
	{
		value2 = 1;
		func_88(hParam0, -915411861, &value2, false);
		value = BUILTIN::CEIL(BUILTIN::TO_FLOAT(value) / BUILTIN::TO_FLOAT(value2));
		iParam1 = BUILTIN::CEIL(BUILTIN::TO_FLOAT(iParam1) / BUILTIN::TO_FLOAT(value2));
	}

	str3 = func_89(MISC::VAR_STRING(10, &unk, MISC::VAR_STRING(0, hash), value), num5);

	if (iParam1 == 1)
		str3 = MISC::VAR_STRING(0, hash);

	if (num4 == -1839668642 && hParam0 != joaat("clothing_item_hair_none") && hParam0 != 1326838792 && hParam0 != -230310728 || num4 == 231148558 && hParam0 != joaat("clothing_item_m_beard_stubble") && hParam0 != joaat("clothing_item_beard_none") || num4 == 252325943 && hParam0 != joaat("clothing_blend_lipstick_none") || num4 == -636562458 && hParam0 != joaat("clothing_blend_eyeshadow_none"))
		str3 = MISC::VAR_STRING(0, func_90(hParam0, -442898163));

	if (num4 == -126813555 || num4 == 1946043663)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk7, "", 128);
	
		if (func_91(hParam0, &unk7))
			str3 = func_93(func_92(unk7), joaat("COLOR_PURE_WHITE"));
	}

	func_94(str3, InputString.f_1, MISC::GET_HASH_KEY(InputString), num6, num5, str2, str, 0, true);
	return;
}

struct<2> func_38(Hash hParam0) // Position - 0x1998
{
	var unk;
	var unk3;

	if (!func_25(hParam0, 0))
		return unk;

	if (func_48(hParam0, -305066475))
		if (func_61() == -1)
			if (func_48(hParam0, -537818634))
				return func_58(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			else
				return func_58(joaat("deadeye_items"));
	else if (func_48(hParam0, -537818634))
		return func_58(joaat("medicine_items"));

	if (func_48(hParam0, 2084895747))
		return func_58(joaat("lock_breaker_items"));

	return unk3;
}

BOOL func_39(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x1A2C
{
	var unk;
	int num;
	int num2;
	var unk19;
	var unk33;
	int i;
	int num3;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return false;

	unk = { func_95(hParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };

	if (bParam2)
		func_97(&unk, func_96(false));

	if (!func_98(&unk, &num, &num2, false))
		return false;

	unk19.f_9 = -1591664384;

	for (i = 0; i < num2; i = i + 1)
	{
		if (num3 >= iParam1)
			break;
	
		if (!func_64(&unk19, i, num, num2))
		{
		}
		else
		{
			unk33.f_4 = unk19.f_9;
			unk33 = { unk19.f_5 };
		
			if (func_99(hParam0, &unk19, &unk33, 1, hParam3, 0, false))
				num3 = num3 + 1;
		}
	}

	func_66(num);
	num3 < iParam1;
	return true;
}

BOOL func_40(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1AF8
{
	int num;
	var unk;
	var unk6;

	if (!func_25(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	num = func_72(hParam0, joaat("DEFAULT"));

	if (num != 0)
		return func_100(hParam0, iParam1, hParam2, bParam3, bParam4);

	unk = { func_41(hParam0, bParam4, 0) };
	unk6 = { func_101(hParam0, unk, unk.f_4, bParam4) };
	return func_99(hParam0, &unk6, &unk, iParam1, hParam2, bParam3, bParam4);
}

struct<5> func_41(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x1B70
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_102(bParam1) };
	unk.f_4 = 1084182731;
	num = func_26(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_107(hParam0, -1823706425))
			{
				unk = { func_101(joaat("kit_camp"), unk, 1084182731, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_107(hParam0, -1483207246))
			{
				unk = { func_101(joaat("WARDROBE"), unk, 1034665895, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_101(joaat("kit_camp"), unk, 1084182731, bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1311702610))
			{
				unk.f_4 = -1311702610;
			}
			else if (func_107(hParam0, -1653629781))
			{
				unk = { func_101(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			break;
	
		case joaat("coach"):
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = -1591664384;
			unk = { func_106(bParam1) };
		
			switch (func_67(hParam0))
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
			unk = { func_101(joaat("WARDROBE"), unk, 1034665895, bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_96(bParam1) };
		
			if (iParam2 && func_103(hParam0, true))
			{
				unk6.f_9 = -1591664384;
			
				if (!func_104(hParam0, &unk, 1728382685, false, false))
					unk.f_4 = 1728382685;
				else if (!func_104(hParam0, &unk, -649335959, false, false))
					unk.f_4 = -649335959;
				else if (func_105(hParam0, &unk6, 1728382685))
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
			
				if (!func_108(unk, &unk28, bParam1, false, -1))
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
			else if (func_107(hParam0, -1653629781))
			{
				unk = { func_101(1384535894, unk, 1784584921, bParam1) };
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

BOOL func_42(BOOL bParam0) // Position - 0x1EE4
{
	if (func_61() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_73(bParam0));
}

void func_43(int iParam0, BOOL bParam1, int iParam2) // Position - 0x1F02
{
	Global_1940252.f_5 = iParam0;
	Global_1940252.f_37 = iParam2;

	if (bParam1 || func_109() && iParam2 == 0)
	{
		func_110(1);
		func_111(1);
	}

	return;
}

BOOL func_44(var uParam0) // Position - 0x1F3C
{
	if (!uParam0->f_13)
		return false;

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_42))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam0->f_42, false))
			return true;
	
		if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_42, false) && func_112(uParam0->f_42))
			return true;
	}

	return false;
}

BOOL func_45(Ped pedParam0, const char* sParam1, const char* sParam2, int iParam3, int iParam4) // Position - 0x1F89
{
	float entityAnimCurrentTime;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return true;

	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(pedParam0, sParam1, sParam2, iParam4))
		return true;

	if (iParam4 == 2)
		entityAnimCurrentTime = ENTITY::_0x8E46E18AA828334F(pedParam0, sParam1, sParam2);
	else
		entityAnimCurrentTime = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(pedParam0, sParam1, sParam2);

	return MISC::ABSF(1f - entityAnimCurrentTime - iParam3) < 0.01f;
}

int func_46(Ped pedParam0, AnimScene ansParam1) // Position - 0x1FE4
{
	var entityId;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 1;

	if (PED::IS_PED_FALLING(pedParam0))
		return 1;

	if (ENTITY::IS_ENTITY_IN_WATER(pedParam0) && PED::IS_PED_SWIMMING(pedParam0))
		return 1;

	if (PED::IS_PED_RAGDOLL(pedParam0))
		return 1;

	if (PED::IS_PED_A_PLAYER(pedParam0))
	{
		if (PED::IS_PED_MALE(pedParam0))
			TEXT_LABEL_ASSIGN_STRING(&entityId, "mp_male", 24);
		else
			TEXT_LABEL_ASSIGN_STRING(&entityId, "mp_female", 24);
	
		ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(ansParam1, &entityId) && ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(ansParam1, &entityId);
	}

	if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(ansParam1, false) || ANIMSCENE::_IS_ANIM_SCENE_ABORTED(ansParam1) || ANIMSCENE::IS_ANIM_SCENE_FINISHED(ansParam1, false) || ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(ansParam1))
		return 1;

	return 0;
}

void func_47(var uParam0) // Position - 0x209D
{
	BOOL flag;
	float disabledControlNormal;
	float disabledControlNormal2;
	float num;

	if (!uParam0->f_14)
		return;

	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 513836296))
	{
		if (PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_SPRINT")))
		{
			flag = true;
		}
		else
		{
			disabledControlNormal = PAD::GET_DISABLED_CONTROL_NORMAL(PLAYER_CONTROL, joaat("INPUT_MOVE_LR"));
			disabledControlNormal2 = PAD::GET_DISABLED_CONTROL_NORMAL(PLAYER_CONTROL, joaat("INPUT_MOVE_UD"));
			num = (disabledControlNormal * disabledControlNormal) + (disabledControlNormal2 * disabledControlNormal2);
		
			if (num >= 0.1f * 0.1f)
				flag = true;
		}
	}

	if (flag)
	{
		TASK::_0x2D657B10F211C572(Global_33, 0.5f);
		TASK::CLEAR_PED_TASKS(Global_33, false, false);
	}

	return;
}

BOOL func_48(Hash hParam0, Hash hParam1) // Position - 0x2126
{
	if (!func_25(hParam0, 0))
		return func_114(func_113(hParam0), hParam1);

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, 1120943070))
		return true;

	return false;
}

float func_49(int iParam0, int iParam1) // Position - 0x2167
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

void func_50(int iParam0) // Position - 0x221C
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PED::_GET_NUM_RESERVED_HEALTH(ped);

	num = func_115(2);
	func_116(BUILTIN::TO_FLOAT(iParam0 * num), 0);
	return;
}

void func_51(int iParam0, BOOL bParam1) // Position - 0x2259
{
	int num;

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = 10;

	num = func_117(2);
	func_118(BUILTIN::TO_FLOAT(iParam0 * num), false, bParam1);
	return;
}

void func_52(int iParam0) // Position - 0x228E
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PED::_0xFC3B580C4380B5B7(ped);

	num = func_119(2);
	func_120(BUILTIN::TO_FLOAT(iParam0 * num), 0);
	return;
}

float func_53(float fParam0, float fParam1) // Position - 0x22CB
{
	if (fParam1 != 0f)
		return (fParam1 / 100f) * 100f;

	return (fParam0 / 8f) * 100f;
}

void func_54(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x22F9
{
	if (fParam1 == 0f)
		return;

	if (bParam4)
		fParam1 = func_121(iParam0, fParam1, true);

	func_123(iParam0, func_122(iParam0, 2) + fParam1, bParam2, bParam3, true, 2);
	return;
}

float func_55(float fParam0, int iParam1) // Position - 0x2332
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

int func_56(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2384
{
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		return 0;

	return func_124(iParam0, fParam1, bParam2, bParam3);
}

void func_57(float fParam0, BOOL bParam1) // Position - 0x23A8
{
	if (fParam0 > 10f)
		fParam0 = 10f;

	if (func_125())
		func_126(fParam0, 0);

	if (bParam1)
	{
		Global_17418.f_55.f_2459.f_41 = Global_17418.f_55.f_2459.f_41 + 1;
	
		if (5 == Global_17418.f_55.f_2459.f_41)
			func_60(109, false);
	}

	return;
}

struct<2> func_58(int iParam0) // Position - 0x2400
{
	int num;

	num = iParam0;
	return num;
}

void func_59(var uParam0, var uParam1, int iParam2) // Position - 0x2410
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
		return;

	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

void func_60(int iParam0, BOOL bParam1) // Position - 0x242D
{
	int num;
	int num2;

	func_127(iParam0, &num, &num2);

	if (!func_128(iParam0, num, num2, bParam1))
		return;

	func_129(num, num2);
	return;
}

int func_61() // Position - 0x245A
{
	return Global_1572887.f_14;
}

int func_62(Hash hParam0, int iParam1) // Position - 0x2468
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

BOOL func_63(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x24B2
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_73(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_64(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x24D9
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

BOOL func_65(Hash hParam0) // Position - 0x2514
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

int func_66(int iParam0) // Position - 0x252F
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

int func_67(Hash hParam0) // Position - 0x2550
{
	var unk;

	if (!func_25(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &unk))
		return 0;

	return unk.f_1;
}

int func_68(Hash hParam0) // Position - 0x257B
{
	switch (hParam0)
	{
		case joaat("clothing_blend_eyeshadow_none"):
			return -875805376;
	
		case joaat("clothing_blend_foundation_none"):
			return -2056583192;
	
		case joaat("clothing_blend_complexion_none"):
			return -1180698265;
	
		case joaat("clothing_blend_complexion_2_none"):
			return -487028314;
	
		case joaat("CLOTHING_BLEND_GRIME_NONE"):
			return 1285634184;
	
		case joaat("clothing_blend_lipstick_none"):
			return -768760704;
	
		case joaat("clothing_blend_spots_none"):
			return 1301555144;
	
		case -643819742:
			return -559080197;
	
		case joaat("clothing_blend_freckles_none"):
			return 241235545;
	
		case -28107610:
			return -2118203104;
	
		case joaat("clothing_blend_moles_none"):
			return 1827902148;
	
		case joaat("clothing_blend_scar_none"):
			return 1858448324;
	
		case 1687431937:
			return -1811760631;
	
		case joaat("clothing_blend_blusher_none"):
			return 1015239729;
	
		case joaat("clothing_blend_eyeliner_none"):
			return -340627321;
	
		default:
		
	}

	return 0;
}

int func_69(var uParam0, int iParam1) // Position - 0x265E
{
	int i;

	for (i = 0; i < 22; i = i + 1)
	{
		if (uParam0->[i /*17*/].f_1 == -1)
			break;
	
		if (uParam0->[i /*17*/].f_16 == iParam1)
			return i;
	}

	return -1;
}

int func_70(Hash hParam0) // Position - 0x269B
{
	int num;

	num = func_67(hParam0);

	switch (num)
	{
		case -636562458:
			return -875805376;
	
		case 252325943:
			return -768760704;
	
		case 829857647:
			return -340627321;
	
		case 1115104855:
			return -2118203104;
	
		case 1216664798:
			return 1015239729;
	
		case 1341188928:
			return -2056583192;
	
		default:
		
	}

	return 0;
}

int func_71(Hash hParam0, BOOL bParam1) // Position - 0x2708
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_95(hParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };

	if (bParam1)
		func_97(&unk, func_96(false));

	if (!func_98(&unk, &num, &num2, false))
		return 0;

	func_66(num);
	return num2;
}

int func_72(Hash hParam0, int iParam1) // Position - 0x2767
{
	if (iParam1 == 0)
		return 0;

	if (func_130(func_113(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, iParam1);
}

int func_73(BOOL bParam0) // Position - 0x2793
{
	if (func_61() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

struct<4> func_74(Hash hParam0, BOOL bParam1) // Position - 0x27D4
{
	var unk;

	unk = { func_41(hParam0, bParam1, 0) };
	return func_101(hParam0, unk, unk.f_4, bParam1);
}

void func_75(Hash hParam0, var uParam1, var uParam2) // Position - 0x27F9
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

BOOL func_76() // Position - 0x2A05
{
	return !Global_1913444;
}

void func_77(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x2A12
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

var func_78(BOOL bParam0, var uParam1, var uParam2) // Position - 0x2B35
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_79(Hash hParam0, int iParam1) // Position - 0x2B4C
{
	if (!func_25(hParam0, 0))
		return false;

	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, iParam1);
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_80(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x2B6B
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

char* func_81(Hash hParam0) // Position - 0x2C5E
{
	if (func_48(hParam0, -1995062316))
		return "collectible_arrowheads";

	if (func_48(hParam0, 1239889275))
		return "collectible_liquor_bottles";

	if (func_48(hParam0, 143267379))
		return "collectible_coins";

	if (func_48(hParam0, -944041124))
		return "colectible_heirlooms";

	if (func_48(hParam0, 1562621600))
		return "collectible_jewelry";

	if (func_48(hParam0, -149719013))
		return "collectible_bird_eggs";

	if (func_48(hParam0, 1940829793))
		return "collectible_tarot_cards";

	if (func_48(hParam0, 781094263))
		return "collectible_flowers";

	if (func_48(hParam0, -352095726) || func_48(hParam0, -2014783736) || func_48(hParam0, -545064757) || func_48(hParam0, 679186220))
		return "collectible_found_fossil";

	return "";
}

BOOL func_82(Hash hParam0) // Position - 0x2D5A
{
	if (func_48(hParam0, -189374246))
		if (func_131(hParam0, -1305775593) || func_131(hParam0, 1384151091) || func_131(hParam0, 2075388272) || func_131(hParam0, -1738780413))
			return true;

	if (func_48(hParam0, -753854379) || func_48(hParam0, 173360570))
		return true;

	return false;
}

Hash func_83(Hash hParam0, BOOL bParam1) // Position - 0x2DD9
{
	Hash hash;

	if (!func_25(hParam0, 0))
		return 0;

	hash = func_132(hParam0, bParam1);

	if (hash != 0)
		return hash;

	return hParam0;
}

BOOL func_84(int iParam0) // Position - 0x2E07
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

Hash func_85(Hash hParam0) // Position - 0x2E2E
{
	var unk;
	int i;

	if (!func_25(hParam0, 0))
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

Hash func_86(Hash hParam0) // Position - 0x2E9C
{
	int num;
	var unk;
	int collectionId;
	int num2;
	int i;
	Hash hash;

	num = func_133(hParam0);

	if (num == 0)
		return 0;

	unk = { func_134(-1591664384, -1591664384, 0, 0, 0, 0, -1, num, 0) };

	if (func_135(unk, &collectionId, &num2, 0))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(collectionId, i, &hash) && func_136(hash))
			{
				func_137(collectionId);
				return hash;
			}
		}
	
		func_137(collectionId);
	}

	return 0;
}

BOOL func_87(Hash hParam0, Hash hParam1) // Position - 0x2F21
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, -949239683))
		return true;

	return false;
}

int func_88(Hash hParam0, int iParam1, var uParam2, BOOL bParam3) // Position - 0x2F52
{
	var unk;

	if (!func_25(hParam0, 0) && !func_130(func_113(hParam0), 2))
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

const char* func_89(const char* sParam0, int iParam1) // Position - 0x2FB1
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

 func_90(Hash hParam0, int iParam1) // Position - 0x2FCB
{
	 num;

	num = func_138(hParam0, iParam1);

	if (num == 0)
		return 0;

	return num;
}

BOOL func_91(Hash hParam0, char* sParam1) // Position - 0x2FE9
{
	int lengthOfLiteralString;
	var StringToTest;

	if (!func_25(hParam0, 0))
		return false;

	TEXT_LABEL_ASSIGN_STRING(sParam1, func_139(hParam0), 128);
	lengthOfLiteralString = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);

	if (!func_140(hParam0))
		return false;

	TEXT_LABEL_ASSIGN_STRING(&StringToTest, func_141(hParam0), 128);

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

const char* func_92(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x3066
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

const char* func_93(const char* sParam0, int iParam1) // Position - 0x307A
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);

	return func_89(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

int func_94(const char* sParam0, const char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0x30B0
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
	func_142(sParam0, sParam1, hParam2);
	return num2;
}

struct<18> func_95(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x3113
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

struct<4> func_96(BOOL bParam0) // Position - 0x31F1
{
	int num;

	num = func_73(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_101(923904168, func_102(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_101(923904168, func_102(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_101(923904168, func_102(bParam0), -740156546, false);
}

void func_97(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x3292
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_98(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x32AD
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_73(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_99(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, BOOL bParam5, BOOL bParam6) // Position - 0x32D2
{
	var unk;
	int num;
	var unk15;
	int num2;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_143(hParam0))
		return false;

	unk.f_9 = -1591664384;

	if (!func_108(*panParam1, &unk, bParam6, false, -1))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_42(bParam6))
	{
		num = -1;
	
		if (unk.f_13)
		{
		}
		else if (func_61() == 0)
		{
			unk15.f_9 = 1;
			unk15.f_11 = -1591664384;
			unk15.f_8 = hParam0;
			unk15 = { *panParam1 };
			unk15.f_4 = { *uParam2 };
			unk15.f_11 = uParam2->f_4;
			unk15.f_9 = iParam3;
			unk15.f_12 = hParam4;
			num = func_144(joaat("use"), &unk15, true);
		
			if (num != -1)
			{
				num2.f_7 = -142743235;
				num2.f_16 = -1;
				num2 = bParam5;
				num2.f_7 = hParam4;
				func_145(num, num2);
			}
		}
	
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_73(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

BOOL func_100(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x33F0
{
	int num;
	var unk;
	int num2;
	int i;
	int num3;
	var unk62;
	BOOL flag;

	if (func_143(hParam0))
		return 0;

	if (iParam1 <= 0)
		return 0;

	num = func_72(hParam0, joaat("DEFAULT"));

	if (num == 0)
		return 0;

	if (!func_42(bParam4))
	{
		unk = 10;
	
		if (num == 0)
			return 0;
	
		if (!func_146(&unk, &num2, hParam0, num, iParam1, true) || num2 < 1)
			return 0;
	
		num3 = -1;
		unk62.f_9 = 1;
		unk62.f_11 = -1591664384;
	
		for (i = 0; i < num2; i = i + 1)
		{
			unk62 = { func_147(hParam0, &unk[i /*6*/]) };
			unk62.f_12 = hParam2;
			num3 = func_144(joaat("use"), &unk62, true);
		
			if (num3 == -1)
				return 0;
		}
	
		if (num3 != -1)
		{
			flag.f_7 = -142743235;
			flag.f_16 = -1;
			flag = bParam3;
			flag.f_7 = hParam2;
			func_145(num3, flag);
			return 1;
		}
	
		return 0;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_73(bParam4), hParam0, iParam1, hParam2))
		return 0;

	return 1;
}

struct<4> func_101(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x3508
{
	var outGuid;

	if (!func_25(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_73(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

struct<4> func_102(BOOL bParam0) // Position - 0x3539
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_73(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_101(joaat("character"), func_148(), -1591664384, bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_101(joaat("character"), func_148(), -1591664384, false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_101(joaat("character"), func_148(), -1591664384, bParam0);
}

int func_103(Hash hParam0, BOOL bParam1) // Position - 0x35D9
{
	if (func_67(hParam0) == 1779021115)
		return 0;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_149();
		else
			return 1;

	return 0;
}

BOOL func_104(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x3610
{
	return func_150(hParam0, *uParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_105(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x362B
{
	var unk;

	if (func_151(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_106(BOOL bParam0) // Position - 0x364C
{
	int num;

	num = func_73(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_101(271701509, func_102(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_101(271701509, func_102(bParam0), 12999093, false);
}

BOOL func_107(Hash hParam0, int iParam1) // Position - 0x36B6
{
	Hash hash;
	int num;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || iParam1 == 0)
		return false;

	num = func_67(hParam0);

	if (num == -1015256479)
		return false;

	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(num);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(num, i, &hash))
			if (func_152(hParam0, iParam1, hash))
				return true;
	}

	return false;
}

BOOL func_108(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x3723
{
	return func_153(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

BOOL func_109() // Position - 0x3739
{
	if (Global_1940252.f_11596 != Global_1940252.f_41.f_203 - 1 || func_155(func_154(0), Global_1940252.f_11588, false, true, true) > 0 || Global_1940252.f_11596 == 15)
		return true;

	func_156(0);

	if (Global_1940252.f_7)
		return true;

	return false;
}

void func_110(int iParam0) // Position - 0x3798
{
	Global_1940252.f_11 = iParam0;
	return;
}

void func_111(int iParam0) // Position - 0x37A8
{
	Global_1940252.f_10 = iParam0;
	return;
}

BOOL func_112(AnimScene ansParam0) // Position - 0x37B8
{
	if (ANIMSCENE::GET_ANIM_SCENE_PHASE(ansParam0) >= 1f)
		return true;

	return false;
}

Hash func_113(Hash hParam0) // Position - 0x37D0
{
	return hParam0;
}

BOOL func_114(Hash hParam0, Hash hParam1) // Position - 0x37DA
{
	if (!func_130(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, 1120943070))
		return 1;

	return 0;
}

int func_115(int iParam0) // Position - 0x3810
{
	if (iParam0 == 2)
		iParam0 = func_157(1);

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

void func_116(float fParam0, Ped pedParam1) // Position - 0x3850
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

int func_117(int iParam0) // Position - 0x3894
{
	if (iParam0 == 2)
		iParam0 = func_157(1);

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

void func_118(float fParam0, BOOL bParam1, BOOL bParam2) // Position - 0x38D8
{
	Player player;
	Ped EntityIndex;
	float playerSpecialAbilityMultiplier;

	player = PLAYER::PLAYER_ID();

	if (fParam0 > 0f && func_158(player))
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

int func_119(int iParam0) // Position - 0x3989
{
	if (iParam0 == 2)
		iParam0 = func_157(1);

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

void func_120(float fParam0, Ped pedParam1) // Position - 0x39CD
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

float func_121(int iParam0, float fParam1, BOOL bParam2) // Position - 0x3A0F
{
	int num;
	int num2;

	num = func_159();
	func_160(&num, 0, 0, 0, 1, 0, 0);
	num2 = func_161(iParam0, 2);

	if (func_163(num, func_162(iParam0, 2), true))
	{
		func_164(iParam0, 0, 2);
		num2 = 0;
	}

	if (num2 >= 2)
	{
		func_60(103, bParam2);
		return 0f;
	}

	func_165(iParam0, func_159(), 2);
	func_164(iParam0, num2 + 1, 2);
	return fParam1;
}

float func_122(int iParam0, int iParam1) // Position - 0x3A78
{
	if (iParam1 == 2)
		iParam1 = func_157(2);

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

int func_123(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x3AC4
{
	Ped ped;

	if (iParam5 == 2)
		iParam5 = func_157(2);

	ped = PLAYER::PLAYER_PED_ID();

	if (func_166(ped, iParam0, fParam1))
	{
		if (bParam2)
			if (fParam1 >= 100f)
				AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
			else
				AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
	
		if (bParam3)
			func_167(iParam0, 7000, iParam5);
	
		func_168(ped, iParam0, fParam1);
		func_169(iParam0, fParam1, bParam4, iParam5);
	}

	return 1;
}

int func_124(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3) // Position - 0x3B42
{
	char* effectName;
	Ped ped;

	ped = PLAYER::PLAYER_PED_ID();

	if (fParam1 == -1f)
		if (func_170(iParam0))
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
				effectName = func_171(iParam0);
			
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
					GRAPHICS::ANIMPOSTFX_PLAY(effectName);
			}
		
			func_50(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[0 /*2*/] = fParam1;
			break;
	
		case 1:
			if (bParam2)
			{
				effectName = func_171(iParam0);
			
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
					GRAPHICS::ANIMPOSTFX_PLAY(effectName);
			}
		
			func_172(joaat("STATUS_EFFECT__TRACKING"));
			func_52(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[1 /*2*/] = fParam1;
			break;
	
		case 2:
			if (bParam2)
			{
				effectName = func_171(iParam0);
			
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
					GRAPHICS::ANIMPOSTFX_PLAY(effectName);
			}
		
			func_51(-1, false);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[2 /*2*/] = fParam1;
			break;
	
		case 18:
			func_173(1, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[1 /*2*/].f_1 = fParam1;
			break;
	
		case 19:
			func_172(joaat("STATUS_EFFECT__POISON"));
			func_173(0, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[0 /*2*/].f_1 = fParam1;
			break;
	
		case 20:
			func_173(2, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[2 /*2*/].f_1 = fParam1;
			break;
	
		default:
			return 0;
	}

	return 1;
}

BOOL func_125() // Position - 0x3CF8
{
	if (Global_1956875.f_1431.f_107 == -15)
		return true;

	return func_174(Global_1956875.f_1431.f_107, false);
}

void func_126(float fParam0, int iParam1) // Position - 0x3D21
{
	float num;
	int num2;
	int num3;

	num = func_175(13, 2);
	num2 = func_176(num);
	num = num + fParam0;
	num = func_177(num, 0f, 100f);
	num3 = func_176(num);

	if (num2 != num3)
	{
		Global_1956875.f_1431.f_107 = func_159();
		func_178(&(Global_1956875.f_1431.f_107), 0, 0, 1, 0, 0, 0, false);
	}

	func_179(13, num, 2);
	Global_1956875.f_1431.f_99 = iParam1;
	return;
}

void func_127(int iParam0, var uParam1, var uParam2) // Position - 0x3D94
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_128(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x3DB0
{
	if (iParam1 < 0 || iParam1 > 32)
		return false;

	if (func_180(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_181(iParam0))
		return false;

	if (func_182(iParam0))
		return false;

	if (Global_1900460.f_67 && !func_183(iParam0, 1) || func_184(32768))
		if (!func_183(iParam0, 262144) || !Global_1904402.f_8875)
			return false;

	if (!func_185())
		return false;

	return true;
}

void func_129(int iParam0, int iParam1) // Position - 0x3E52
{
	int Variable;

	Variable = Global_1904402[iParam0];
	MISC::SET_BIT(&Variable, iParam1);
	Global_1904402[iParam0] = Variable;
	return;
}

BOOL func_130(Hash hParam0, int iParam1) // Position - 0x3E76
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

BOOL func_131(Hash hParam0, Hash hParam1) // Position - 0x3E90
{
	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, 1224357681))
		return true;

	return false;
}

Hash func_132(Hash hParam0, BOOL bParam1) // Position - 0x3EB7
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

int func_133(Hash hParam0) // Position - 0x3F59
{
	var unk;
	int num;

	if (!func_25(hParam0, 0))
		return 0;

	unk = 5;
	num = ITEMDATABASE::_0x8870895BA5ED9385(hParam0, -442898163, &unk);

	if (num > 0)
		return unk[0];

	return 0;
}

struct<10> func_134(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x3F93
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

BOOL func_135(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int* piParam11, int iParam12) // Position - 0x4068
{
	*uParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, piParam11, iParam12);

	if (*uParam10 >= 0)
		return true;

	return false;
}

BOOL func_136(Hash hParam0) // Position - 0x4089
{
	!func_25(hParam0, 0);

	if (func_48(hParam0, -393037696))
		return true;

	return false;
}

int func_137(int iParam0) // Position - 0x40AF
{
	if (iParam0 < 0)
		return 0;

	if (!ITEMDATABASE::_ITEMDATABASE_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

int func_138(Hash hParam0, int iParam1) // Position - 0x40D0
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

char* func_139(Hash hParam0) // Position - 0x411E
{
	Hash labelHash;

	if (!func_25(hParam0, 0))
		return "";

	labelHash = func_83(hParam0, false);

	if (labelHash == 0)
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(labelHash);
}

BOOL func_140(Hash hParam0) // Position - 0x4154
{
	if (func_67(hParam0) == -126813555 || func_67(hParam0) == 1946043663)
		return true;

	return false;
}

char* func_141(Hash hParam0) // Position - 0x4182
{
	Hash labelHash;

	if (!func_25(hParam0, 0))
		return "";

	labelHash = func_85(hParam0);

	if (labelHash == 0)
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(labelHash);
}

void func_142(const char* sParam0, const char* sParam1, Hash hParam2) // Position - 0x41B7
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

BOOL func_143(Hash hParam0) // Position - 0x41E8
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

int func_144(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x41FE
{
	int num;

	if (hParam0 == 0)
		return -1;

	if (!func_186(hParam0, panParam1))
		return -1;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_188(func_187(num, hParam0, panParam1), num, panParam1);
	else
		return func_189(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 17), num, panParam1);

	return -1;
}

void func_145(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17) // Position - 0x4268
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

BOOL func_146(Any anParam0, var uParam1, Hash hParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x42E6
{
	*uParam1 = 0;

	if (iParam4 < 1)
		return false;
	else if (*anParam0 != 10)
		return false;

	if (iParam3 == 0)
	{
		iParam3 = func_72(hParam2, joaat("DEFAULT"));
	
		if (iParam3 == 0)
			return false;
	}

	if (!NETSHOPPING::_0xD1555FBC96C88444(hParam2, iParam3, iParam4, anParam0, 10))
		return false;

	if (!func_190(anParam0, uParam1, iParam4, bParam5))
		return false;

	return true;
}

struct<17> func_147(Hash hParam0, var uParam1) // Position - 0x4353
{
	var unk;

	unk.f_9 = 1;
	unk.f_11 = -1591664384;
	unk = { func_101(hParam0, *uParam1, uParam1->f_4, true) };
	unk.f_4 = { *uParam1 };
	unk.f_8 = hParam0;
	unk.f_9 = uParam1->f_5;
	unk.f_11 = uParam1->f_4;
	return unk;
}

struct<4> func_148() // Position - 0x43A6
{
	var unk;

	return unk;
}

int func_149() // Position - 0x43B2
{
	if (func_191(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

int func_150(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x43CF
{
	int inventoryItemCountWithGuid;
	var guid;

	if (!func_25(hParam0, 0))
		return 0;

	if (!bParam7 && func_72(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_101(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_73(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_73(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

BOOL func_151(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x444E
{
	int inventoryId;

	inventoryId = func_73(false);
	*panParam1 = { func_101(hParam0, func_96(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_152(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x4493
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, iParam1, hParam2);
}

BOOL func_153(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x44C6
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_73(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

Ped func_154(int iParam0) // Position - 0x4500
{
	return PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());
}

int func_155(Ped pedParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x4510
{
	int num;

	num = func_29(hParam1, bParam2, false, false);
	num = num + func_192(pedParam0, hParam1);

	if (bParam3)
		num = num + func_193(hParam1, bParam4);

	return num;
}

void func_156(int iParam0) // Position - 0x4545
{
	if (!func_25(Global_1940252.f_11588, 0))
		Global_1940252.f_7 = iParam0;
	else if (func_62(Global_1940252.f_11588, 1224357681) != 0 && Global_1940252.f_11587 != 0 && Global_1940252.f_11587 != -2074770370 && !Global_1915656.f_20638 && !Global_1915656.f_22504.f_1)
		Global_1940252.f_7 = 1;
	else
		Global_1940252.f_7 = 0;

	return;
}

int func_157(int iParam0) // Position - 0x45CA
{
	return func_195(func_194(iParam0));
}

BOOL func_158(Player plParam0) // Position - 0x45DC
{
	float num;

	num = func_196(plParam0) - PLAYER::_GET_PLAYER_CACHED_DEAD_EYE_AMOUNT(plParam0);
	return num <= 1f;
}

int func_159() // Position - 0x45F7
{
	return Global_1902569;
}

void func_160(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x4603
{
	int num;
	int i;
	int j;
	int k;
	int l;
	int m;
	int num2;
	int num3;

	num = func_197(*uParam0);
	i = func_198(*uParam0);
	j = func_199(*uParam0);
	k = func_200(*uParam0);
	l = func_201(*uParam0);
	m = func_202(*uParam0);

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
	
		num3 = func_203(num2, num);
	}

	for (i = i - iParam5; i < 0; i = i + 12)
	{
		iParam6 = iParam6 + 1;
	}

	num = num - iParam6;
	func_204(uParam0, m, l, k, j, i, num);
	return;
}

int func_161(int iParam0, int iParam1) // Position - 0x4776
{
	if (iParam1 == 2)
		iParam1 = func_157(2);

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

int func_162(int iParam0, int iParam1) // Position - 0x47C6
{
	if (iParam1 == 2)
		iParam1 = func_157(2);

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

BOOL func_163(int iParam0, int iParam1, BOOL bParam2) // Position - 0x4818
{
	if (bParam2)
		if (!func_205(iParam1) || !func_205(iParam0))
			return true;

	return iParam0 > iParam1;
}

void func_164(int iParam0, int iParam1, int iParam2) // Position - 0x4845
{
	if (iParam2 == 2)
		iParam2 = func_157(2);

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

void func_165(int iParam0, int iParam1, int iParam2) // Position - 0x489B
{
	if (iParam2 == 2)
		iParam2 = func_157(2);

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

BOOL func_166(Ped pedParam0, int iParam1, float fParam2) // Position - 0x48F1
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (fParam2 > 100f)
		fParam2 = 100f;
	else if (fParam2 < 0f)
		fParam2 = 0f;

	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(pedParam0, func_206(iParam1), BUILTIN::CEIL(fParam2));
	return true;
}

void func_167(int iParam0, int iParam1, int iParam2) // Position - 0x4946
{
	if (iParam2 == 2)
		iParam2 = func_157(2);

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

void func_168(Ped pedParam0, int iParam1, float fParam2) // Position - 0x49A7
{
	char* StringToTest;

	StringToTest = func_207(iParam1);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(StringToTest))
		PED::_SET_PED_BLACKBOARD_FLOAT(pedParam0, func_208(iParam1), fParam2, -1);

	return;
}

void func_169(int iParam0, float fParam1, BOOL bParam2, int iParam3) // Position - 0x49D3
{
	int num;

	if (iParam3 == 2)
		iParam3 = func_157(2);

	num = Global_1295666.f_16;
	func_209(iParam0, fParam1, iParam3);

	if (bParam2)
		func_210(iParam0, num, iParam3);

	return;
}

BOOL func_170(int iParam0) // Position - 0x4A09
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

char* func_171(int iParam0) // Position - 0x4A38
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

void func_172(int iParam0) // Position - 0x4A73
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
		num3 = func_211(num, 1);
	
		if (Global_1156111.f_35859.f_919[num3 /*12*/] == iParam0)
		{
			func_212(num);
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

void func_173(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4B43
{
	func_123(iParam0, 100f, bParam1, bParam2, true, 2);
	return;
}

BOOL func_174(int iParam0, BOOL bParam1) // Position - 0x4B5D
{
	return func_163(func_159(), iParam0, bParam1);
}

float func_175(int iParam0, int iParam1) // Position - 0x4B71
{
	if (iParam1 == 2)
		iParam1 = func_157(1);

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

int func_176(float fParam0) // Position - 0x4BBD
{
	float num;

	num = fParam0;
	num = (2f * num) - 100f;
	return BUILTIN::ROUND((num / 100f) * BUILTIN::TO_FLOAT(10));
}

float func_177(float fParam0, float fParam1, float fParam2) // Position - 0x4BE8
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

void func_178(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x4C0F
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_197(*iParam0);
	i = func_198(*iParam0);
	num2 = func_199(*iParam0);
	j = func_200(*iParam0);
	k = func_201(*iParam0);
	l = func_202(*iParam0);

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

	for (m = func_203(i, num); num2 > m; m = func_203(i, num))
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

	func_204(iParam0, l, k, j, num2, i, num);
	return;
}

int func_179(int iParam0, float fParam1, int iParam2) // Position - 0x4D97
{
	if (!func_213(iParam0))
		return 0;

	if (iParam2 == 2)
		iParam2 = func_157(2);

	func_214(iParam0, fParam1, iParam2);

	if (!ENTITY::IS_ENTITY_DEAD(Global_1295666.f_3))
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_1295666.f_3, iParam0, BUILTIN::FLOOR(fParam1));

	return 1;
}

BOOL func_180(int iParam0, int iParam1) // Position - 0x4DE8
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

BOOL func_181(int iParam0) // Position - 0x4E00
{
	if (func_183(iParam0, 4))
		return false;

	return true;
}

BOOL func_182(int iParam0) // Position - 0x4E17
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

BOOL func_183(int iParam0, int iParam1) // Position - 0x4EE3
{
	return Global_1904402.f_33[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_184(int iParam0) // Position - 0x4EFC
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_185() // Position - 0x4F0F
{
	if (!func_215())
		return false;

	return Global_1904402.f_8873;
}

BOOL func_186(Hash hParam0, Any* panParam1) // Position - 0x4F2A
{
	int num;

	num = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(hParam0, panParam1);

	if (hParam0 == joaat("use"))
		if (func_216(panParam1->f_8, hParam0, num, 2048) || func_216(panParam1->f_8, hParam0, num, 32768) || func_216(panParam1->f_8, hParam0, num, 65536))
			return false;
	else if (hParam0 == 1168099063)
		if (func_216(panParam1->f_8, hParam0, num, 4) || func_216(panParam1->f_8, hParam0, num, 256) || func_216(panParam1->f_8, hParam0, num, 65536) || func_216(panParam1->f_8, hParam0, num, 131072))
			return false;
	else if (hParam0 == joaat("spend"))
		if (func_216(panParam1->f_8, hParam0, num, 1) || func_216(panParam1->f_8, hParam0, num, 8) || func_216(panParam1->f_8, hParam0, num, 65536) || func_216(panParam1->f_8, hParam0, num, 32))
			return false;
	else if (hParam0 == joaat("Sell"))
		if (func_216(panParam1->f_8, hParam0, num, 1) || func_216(panParam1->f_8, hParam0, num, 16) || func_216(panParam1->f_8, hParam0, num, 2) || func_216(panParam1->f_8, hParam0, num, 65536))
			return false;
	else if (func_216(panParam1->f_8, hParam0, num, 8) || func_216(panParam1->f_8, hParam0, num, 4096) || func_216(panParam1->f_8, hParam0, num, 256) || func_216(panParam1->f_8, hParam0, num, 65536))
		return false;

	return true;
}

BOOL func_187(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x5100
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 17, panParam2, 0);
}

int func_188(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0x5117
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_217(iParam1, 1, 0, 0);
			return iParam1;
		}
	
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}

	func_217(iParam1, 2, 0, 0);
	return -1;
}

int func_189(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0x5160
{
	if (bParam0)
	{
		func_217(iParam1, 1, 0, 0);
		return iParam1;
	}

	return -1;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_190(Any anParam0, var uParam1, int iParam2, BOOL bParam3) // Position - 0x517C
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
	
		if (func_218(&anParam0->[i /*6*/]))
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
				anParam0->[i /*6*/] = { func_148() };
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

int func_191(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x5293
{
	if (func_219(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_73(bParam1), hParam0, bParam3);
}

int func_192(Ped pedParam0, Hash hParam1) // Position - 0x52C6
{
	int num;
	int i;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		if (func_220(hParam1))
		{
			num = 0;
		
			for (i = 0; i < 3; i = i + 1)
			{
				if (Global_1903838.f_113[i /*96*/].f_1 == hParam1)
					num = num + 1;
			}
		
			return num;
		}
		else
		{
			return func_221(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(pedParam0), hParam1);
		}
	}

	return 0;
}

int func_193(Hash hParam0, BOOL bParam1) // Position - 0x5324
{
	if (!bParam1 || func_222())
		return func_150(hParam0, func_102(true), -2015960939, true, true, false);

	return 0;
}

BOOL func_194(int iParam0) // Position - 0x5353
{
	return func_223(&(Global_1956875.f_1565), iParam0, 1);
}

int func_195(BOOL bParam0) // Position - 0x5369
{
	if (bParam0)
		return 1;

	return 0;
}

float func_196(Player plParam0) // Position - 0x537B
{
	return PLAYER::_GET_PLAYER_MAX_DEAD_EYE(plParam0, 0) - (float)func_224(2);
}

int func_197(int iParam0) // Position - 0x5391
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_198(int iParam0) // Position - 0x53B6
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_199(int iParam0) // Position - 0x53C9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_200(int iParam0) // Position - 0x53DC
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_201(int iParam0) // Position - 0x53EF
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_202(int iParam0) // Position - 0x5401
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_203(int iParam0, int iParam1) // Position - 0x5413
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

void func_204(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x54AD
{
	func_226(iParam0, iParam6);
	func_227(iParam0, iParam5);
	func_228(iParam0, iParam4);
	func_229(iParam0, iParam3);
	func_230(iParam0, iParam2);
	func_231(iParam0, iParam1);
	return;
}

BOOL func_205(int iParam0) // Position - 0x54E5
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_202(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_201(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_200(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_197(iParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_198(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_199(iParam0);

	if (num6 < 1 || num6 > func_203(num5, num4))
		return false;

	return true;
}

int func_206(int iParam0) // Position - 0x55C1
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

char* func_207(int iParam0) // Position - 0x55F0
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

char* func_208(int iParam0) // Position - 0x562B
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

void func_209(int iParam0, float fParam1, int iParam2) // Position - 0x5666
{
	if (iParam2 == 2)
		iParam2 = func_157(2);

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

void func_210(int iParam0, int iParam1, int iParam2) // Position - 0x56B8
{
	if (iParam2 == 2)
		iParam2 = func_157(2);

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

int func_211(int iParam0, int iParam1) // Position - 0x570E
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
int func_212(int iParam0) // Position - 0x5F0F
{
	int num;
	int num2;
	int num3;
	int num4;
	int i;
	int j;
	int k;

	if (!func_232(iParam0))
		return 0;

	num = func_211(iParam0, 1);

	if (!func_233(Global_1156111.f_35859.f_919[num /*12*/]))
		return 1;

	num4 = func_234(Global_1156111.f_35859.f_919[num /*12*/], 1);

	for (i = 0; i < Global_1156111.f_35859[num4 /*6*/].f_5; i = i + 1)
	{
		num2 = Global_1156111.f_35859[num4 /*6*/][i];
	
		switch (func_235(iParam0, num2))
		{
			case 0:
				func_236(num2, iParam0, i);
				break;
		
			case 1:
				for (j = 0; j < Global_1156111.f_35859.f_11700; j = j + 1)
				{
					if (Global_1156111.f_35859.f_9503[j /*3*/] != num2 || Global_1156111.f_35859.f_9503[j /*3*/].f_1 != iParam0)
					{
					}
					else
					{
						func_236(num2, iParam0, i);
						func_237(&Global_1156111.f_35859.f_9503[j /*3*/]);
						Global_1156111.f_35859.f_11700 = Global_1156111.f_35859.f_11700 - 1;
						Global_1156111.f_35859.f_9503[j /*3*/] = { Global_1156111.f_35859.f_9503[Global_1156111.f_35859.f_11700 /*3*/] };
						func_237(&Global_1156111.f_35859.f_9503[Global_1156111.f_35859.f_11700 /*3*/]);
						break;
					}
				}
				break;
		
			case 2:
				goto 0x25E;
		}
	
		num3 = func_238(num2, 1);
		func_239(num3, -1);
	
		if (Global_1156111.f_35859.f_3116[num3 /*31*/].f_29 <= 0)
		{
			func_240(num3, 0);
		
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
	func_241(&Global_1156111.f_35859.f_919[num /*12*/]);
	return 1;
}

BOOL func_213(int iParam0) // Position - 0x619F
{
	if (func_170(iParam0))
		return true;
	else if (func_242(iParam0))
		return true;

	return false;
}

void func_214(int iParam0, float fParam1, int iParam2) // Position - 0x61C5
{
	if (fParam1 < 0f)
		return;

	if (iParam2 == 2)
		iParam2 = func_157(1);

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

BOOL func_215() // Position - 0x6221
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

BOOL func_216(var uParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0x6235
{
	if (func_243(iParam2, iParam3))
		return true;

	return false;
}

void func_217(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x624D
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

	func_244(iParam0, iParam1, iParam2, iParam3);
	return;
}

BOOL func_218(Any* panParam0) // Position - 0x62EB
{
	if (!func_245(panParam0))
		return false;

	return INVENTORY::_INVENTORY_IS_ITEM_EXPIRED(panParam0);
}

BOOL func_219(Hash hParam0) // Position - 0x6307
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

BOOL func_220(Hash hParam0) // Position - 0x6315
{
	if (!func_87(hParam0, 1955773996))
		return false;

	if (!func_246(hParam0, 1))
		return false;

	return true;
}

int func_221(int iParam0, Hash hParam1) // Position - 0x6340
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_25(hParam1, 0))
		return 0;

	guid = { func_247(iParam0, hParam1) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(iParam0, &guid, false);
	return inventoryItemCountWithGuid;
}

BOOL func_222() // Position - 0x637E
{
	Vehicle vehicleOwnedByPlayer;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::PLAYER_ID()))
		return false;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
		return false;

	vehicleOwnedByPlayer = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());

	if (!ENTITY::DOES_ENTITY_EXIST(vehicleOwnedByPlayer))
		return false;

	if (!func_248(vehicleOwnedByPlayer))
		return false;

	return true;
}

BOOL func_223(Any* panParam0, int iParam1, int iParam2) // Position - 0x63CD
{
	return MISC::IS_BIT_SET(panParam0->[iParam1 / 31], iParam1 % 31);
}

int func_224(int iParam0) // Position - 0x6404
{
	switch (iParam0)
	{
		case 0:
			return func_115(2) * 2;
	
		case 1:
			return func_119(2) * 2;
	
		case 2:
			return func_117(2) * 2;
	
		default:
		
	}

	return -1;
}

var func_225(BOOL bParam0, var uParam1, var uParam2) // Position - 0x6445
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_226(var uParam0, int iParam1) // Position - 0x645C
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

void func_227(var uParam0, int iParam1) // Position - 0x64E2
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_228(var uParam0, int iParam1) // Position - 0x651E
{
	int num;
	int num2;

	num = func_198(*uParam0);
	num2 = func_197(*uParam0);

	if (iParam1 < 1 || iParam1 > func_203(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_229(var uParam0, int iParam1) // Position - 0x6571
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_230(var uParam0, int iParam1) // Position - 0x65AC
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_231(var uParam0, int iParam1) // Position - 0x65E5
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

BOOL func_232(int iParam0) // Position - 0x661D
{
	int num;

	num = func_211(iParam0, 1);

	if (num < 2 || num >= 183)
		return false;

	return true;
}

BOOL func_233(int iParam0) // Position - 0x6645
{
	int num;

	num = func_234(iParam0, 1);

	if (num < 1 || num >= 153)
		return false;

	return true;
}

int func_234(int iParam0, int iParam1) // Position - 0x666D
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

int func_235(int iParam0, int iParam1) // Position - 0x6D24
{
	Player player;
	Player player2;
	int num;

	player = func_249(iParam0);
	player2 = Global_1295666;
	num = func_238(iParam1, 1);

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

int func_236(int iParam0, int iParam1, int iParam2) // Position - 0x6DA7
{
	int num;
	int num2;

	if (!func_232(iParam1))
		return 0;

	if (!func_250(iParam0))
		return 0;

	num = func_238(iParam0, 1);
	func_251(iParam0, iParam1, iParam2);

	if (func_252(Global_1156111.f_35859.f_3116[num /*31*/]) && func_253(iParam0, Global_1156111.f_35859.f_3116[num /*31*/].f_4))
	{
		num2 = { func_254(Global_1156111.f_35859.f_3116[num /*31*/].f_4) };
	
		if (func_255(num2))
			if (func_256(num2, num2.f_1, num2.f_2))
				func_257(Global_1156111.f_35859.f_3116[num /*31*/].f_4, num2, num2.f_1, num2.f_2);
			else
				func_258(Global_1156111.f_35859.f_3116[num /*31*/].f_4);
		else
			func_258(Global_1156111.f_35859.f_3116[num /*31*/].f_4);
	}

	return 1;
}

void func_237(int iParam0) // Position - 0x6E9F
{
	*iParam0 = -1;
	iParam0->f_1 = 0;
	iParam0->f_2 = -1;
	return;
}

int func_238(int iParam0, int iParam1) // Position - 0x6EB5
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

void func_239(int iParam0, int iParam1) // Position - 0x7766
{
	Global_1156111.f_35859.f_3116[iParam0 /*31*/].f_29 = Global_1156111.f_35859.f_3116[iParam0 /*31*/].f_29 + iParam1;
	return;
}

void func_240(int iParam0, int iParam1) // Position - 0x7795
{
	Global_1156111.f_35859.f_3116[iParam0 /*31*/].f_29 = iParam1;
	return;
}

void func_241(int iParam0) // Position - 0x77B1
{
	int i;

	for (i = 0; i < 4; i = i + 1)
	{
		iParam0->f_1[i /*2*/] = 0;
		iParam0->f_1[i /*2*/].f_1 = 0;
	}

	return;
}

BOOL func_242(int iParam0) // Position - 0x77DF
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

BOOL func_243(int iParam0, int iParam1) // Position - 0x7804
{
	return iParam0 && iParam1 != false;
}

void func_244(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x7813
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

	func_259(&Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/]);
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/] = iParam0;
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_1 = iParam1;

	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_2 = iParam2;
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_3 = iParam3;
	}

	return;
}

BOOL func_245(Any* panParam0) // Position - 0x78EF
{
	if (*panParam0 == 0 && panParam0->f_1 == 0 && panParam0->f_2 == 0 && panParam0->f_3 == 0)
		return false;

	return true;
}

BOOL func_246(Hash hParam0, int iParam1) // Position - 0x7925
{
	int num;

	num = func_260(hParam0);

	if (num == -1)
		return false;

	return num > iParam1;
}

struct<4> func_247(int iParam0, Hash hParam1) // Position - 0x7944
{
	var unk;

	unk = { func_261(iParam0) };
	return func_262(iParam0, hParam1, unk, unk.f_4);
}

BOOL func_248(Vehicle veParam0) // Position - 0x7966
{
	switch (ENTITY::GET_ENTITY_MODEL(veParam0))
	{
		case joaat("huntercart01"):
			return true;
	
		default:
		
	}

	return false;
}

Player func_249(int iParam0) // Position - 0x7985
{
	if (func_263(iParam0))
		return func_264(iParam0) % 32;

	return Global_1295666;
}

BOOL func_250(int iParam0) // Position - 0x79A6
{
	int num;

	num = func_238(iParam0, 1);

	if (num < 1 || num >= 199)
		return false;

	return true;
}

int func_251(int iParam0, int iParam1, int iParam2) // Position - 0x79CE
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

	num = func_211(iParam1, 1);
	num2 = func_238(iParam0, 1);
	num3 = func_234(Global_1156111.f_35859.f_919[num /*12*/], 1);

	if (Global_1156111.f_35859[num3 /*6*/][iParam2] != iParam0)
		return 0;

	if (!Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/])
		return 1;

	Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/] = false;

	for (i = 0; i < Global_1156111.f_35859.f_3116[num2 /*31*/].f_16; i = i + 1)
	{
		num4 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/];
		num5 = func_265(num4, 1);
	
		if (!func_266(num4))
		{
		}
		else
		{
			Global_1156111.f_2169[num5 /*205*/].f_1[num2] = Global_1156111.f_2169[num5 /*205*/].f_1[num2] - 1;
			Global_1156111.f_2169[num5 /*205*/].f_201 = Global_1156111.f_2169[num5 /*205*/].f_201 - func_267(&Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/]);
			func_268(num4);
		}
	}

	for (j = 0; j < Global_1156111.f_35859.f_3116[num2 /*31*/].f_28; j = j + 1)
	{
		num6 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_17[j /*2*/];
	
		if (!func_269(num6))
		{
		}
		else
		{
			num7 = func_270(num6, 1);
			Global_1156111.f_21645[num7 /*209*/][num2] = Global_1156111.f_21645[num7 /*209*/][num2] - 1;
		
			if (Global_1156111.f_21645[num7 /*209*/][num2] <= 0)
				MISC::_CLEAR_BIT_FLAG(&(Global_1156111.f_21645[num7 /*209*/].f_200), num2);
		
			if (!MISC::_IS_ANY_BIT_FLAG_SET(&(Global_1156111.f_21645[num7 /*209*/].f_200)))
			{
				Global_1156111.f_21645[num7 /*209*/].f_208 = 0;
				func_271(num6);
			}
		}
	}

	return 1;
}

BOOL func_252(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30) // Position - 0x7BBF
{
	return uParam0.f_4 != 0;
}

BOOL func_253(int iParam0, int iParam1) // Position - 0x7BCD
{
	int num;

	if (!func_250(iParam0))
		return false;

	if (!func_272(iParam1))
		return false;

	num = func_273(iParam1, 1);
	return Global_1156111.f_35859.f_9286[num /*3*/] == iParam0;
}

Vector3 func_254(int iParam0) // Position - 0x7C0D
{
	int num;
	var unk;

	num = func_274(iParam0);

	if (num == -1)
	{
		unk = -1;
		unk.f_2 = -1;
		return unk;
	}

	return Global_1156111.f_35859.f_9503[num /*3*/];
}

BOOL func_255(int iParam0, var uParam1, var uParam2) // Position - 0x7C49
{
	if (!func_250(iParam0))
		return false;

	if (!func_232(iParam0.f_1))
		return false;

	if (!func_275(iParam0.f_2))
		return false;

	return true;
}

BOOL func_256(int iParam0, int iParam1, int iParam2) // Position - 0x7C80
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

	num = func_211(iParam1, 1);
	num2 = func_238(iParam0, 1);
	num3 = func_234(Global_1156111.f_35859.f_919[num /*12*/], 1);

	if (Global_1156111.f_35859[num3 /*6*/][iParam2] != iParam0)
		return false;

	Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/].f_1 = Global_1295666.f_16;

	if (Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/])
		return true;

	Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/] = true;

	for (i = 0; i < Global_1156111.f_35859.f_3116[num2 /*31*/].f_16; i = i + 1)
	{
		num4 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/];
		num5 = func_265(num4, 1);
	
		if (!func_266(num4))
		{
		}
		else
		{
			Global_1156111.f_2169[num5 /*205*/].f_1[num2] = Global_1156111.f_2169[num5 /*205*/].f_1[num2] + 1;
			Global_1156111.f_2169[num5 /*205*/].f_201 = Global_1156111.f_2169[num5 /*205*/].f_201 + func_267(&Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/]);
			func_276(num4);
		}
	}

	for (j = 0; j < Global_1156111.f_35859.f_3116[num2 /*31*/].f_28; j = j + 1)
	{
		num6 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_17[j /*2*/];
	
		if (!func_269(num6))
		{
		}
		else if (!func_277(&Global_1156111.f_35859.f_3116[num2 /*31*/].f_17[j /*2*/]))
		{
		}
		else
		{
			num7 = func_270(num6, 1);
			Global_1156111.f_21645[num7 /*209*/][num2] = Global_1156111.f_21645[num7 /*209*/][num2] + 1;
			MISC::_SET_BIT_FLAG(&(Global_1156111.f_21645[num7 /*209*/].f_200), num2);
		
			if (!Global_1156111.f_21645[num7 /*209*/].f_208)
			{
				Global_1156111.f_21645[num7 /*209*/].f_208 = 1;
				func_278(num6);
			}
		}
	}

	func_279(Global_1156111.f_35859.f_3116[num2 /*31*/].f_2);
	return true;
}

void func_257(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x7EAE
{
	int num;

	if (!func_272(iParam0))
		return;

	num = func_273(iParam0, 1);

	if (!func_250(iParam1))
		return;

	if (!func_232(iParam2))
		return;

	if (!func_275(iParam3))
		return;

	Global_1156111.f_35859.f_9286[num /*3*/] = iParam1;
	Global_1156111.f_35859.f_9286[num /*3*/].f_1 = iParam2;
	Global_1156111.f_35859.f_9286[num /*3*/].f_2 = iParam3;
	return;
}

void func_258(int iParam0) // Position - 0x7F2D
{
	int num;

	if (!func_272(iParam0))
		return;

	num = func_273(iParam0, 1);
	Global_1156111.f_35859.f_9286[num /*3*/] = -1;
	Global_1156111.f_35859.f_9286[num /*3*/].f_1 = 0;
	Global_1156111.f_35859.f_9286[num /*3*/].f_2 = -1;
	return;
}

void func_259(int iParam0) // Position - 0x7F82
{
	*iParam0 = -1;
	iParam0->f_1 = 0;
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	func_280(&(iParam0->f_4));
	return;
}

int func_260(Hash hParam0) // Position - 0x7FA5
{
	int num;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_SATCHEL_DATA(hParam0, &num))
		return -1;

	return num;
}

struct<5> func_261(int iParam0) // Position - 0x7FBF
{
	var unk;

	unk = { func_262(iParam0, joaat("character"), func_148(), -1591664384) };
	unk.f_4 = 1084182731;
	return unk;
}

struct<4> func_262(int iParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, Hash hParam6) // Position - 0x7FEC
{
	var outGuid;

	if (!func_25(hParam1, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(iParam0, &uParam2, hParam1, hParam6, &outGuid);
	return outGuid;
}

BOOL func_263(int iParam0) // Position - 0x801A
{
	int num;

	num = func_211(iParam0, 1);

	if (num >= 2 && num <= 129)
		return true;

	return false;
}

int func_264(int iParam0) // Position - 0x8041
{
	int num;

	num = func_211(iParam0, 1);

	if (func_263(iParam0))
		return num - 2;
	else if (func_281(iParam0))
		return num - 130;
	else if (func_282(iParam0))
		return num - 166;
	else if (func_283(iParam0))
		return num - 167;
	else if (func_284(iParam0))
		return num - 172;
	else if (func_285(iParam0))
		return num - 180;
	else if (func_286(iParam0))
		return num - 150;

	return -1;
}

int func_265(int iParam0, int iParam1) // Position - 0x80DB
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

BOOL func_266(int iParam0) // Position - 0x8514
{
	int num;

	num = func_265(iParam0, 1);

	if (num < 1 || num >= 95)
		return false;

	return true;
}

float func_267(int iParam0) // Position - 0x853C
{
	float num;

	if (iParam0->f_2 != 0)
	{
		num = func_287(794259616, iParam0->f_2, iParam0->f_1, "");
		return num;
	}

	return iParam0->f_1;
}

void func_268(int iParam0) // Position - 0x856C
{
	int num;
	int num2;
	int i;

	if (!func_266(iParam0))
		return;

	num = func_265(iParam0, 1);

	if (!func_288(Global_1156111.f_2169[num /*205*/]))
		return;

	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] = Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] - 1;

	if (Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] > 0)
		return;

	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] = 0;
	Global_1156111.f_2169[num /*205*/].f_204 = 0;

	if (!func_289(Global_1156111.f_2169[num /*205*/].f_203))
		return;

	num2 = func_290(Global_1156111.f_2169[num /*205*/].f_203, 1);
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

BOOL func_269(int iParam0) // Position - 0x874B
{
	int num;

	num = func_270(iParam0, 1);

	if (num < 1 || num >= 68)
		return false;

	return true;
}

int func_270(int iParam0, int iParam1) // Position - 0x8773
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

void func_271(int iParam0) // Position - 0x8A83
{
	Ped ped;
	Player player;

	ped = PLAYER::PLAYER_PED_ID();
	player = PLAYER::PLAYER_ID();

	switch (iParam0)
	{
		case joaat("HEADSHOT_IMMUNITY"):
			func_292();
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
			func_291();
			break;
	
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
		case joaat("SLIPPERY_BASTARD_VFX"):
		case joaat("SLOW_AND_STEADY_VFX"):
			func_295(func_294(iParam0));
			break;
	
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_288(16);
			break;
	
		case joaat("OVERPOWER_INFINITE_HEALTH"):
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 19);
			break;
	
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_288(17);
			break;
	
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_293(iParam0));
			break;
	
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(ped, false, 0);
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_293(iParam0));
			break;
	
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(5);
			func_60(105, true);
			break;
	
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_293(iParam0));
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
			func_296();
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
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_293(iParam0));
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

BOOL func_272(int iParam0) // Position - 0x8C93
{
	int num;

	num = func_273(iParam0, 1);

	if (num < 0 || num >= 5)
		return false;

	return true;
}

int func_273(int iParam0, int iParam1) // Position - 0x8CBA
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

int func_274(int iParam0) // Position - 0x8D17
{
	int num;
	var unk;
	var unk32;
	int num2;
	int num3;
	int i;

	num = func_297(iParam0);
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
		num3 = func_238(Global_1156111.f_35859.f_9503[i /*3*/], 1);
	
		if (Global_1156111.f_35859.f_3116[num3 /*31*/].f_4 != iParam0)
		{
		}
		else if (Global_1156111.f_35859.f_9503[i /*3*/] == num)
		{
		}
		else if (!func_298(Global_1156111.f_35859.f_9503[i /*3*/], Global_1156111.f_35859.f_9503[i /*3*/].f_1))
		{
		}
		else
		{
			unk = { func_299(Global_1156111.f_35859.f_9503[i /*3*/]) };
		
			if (unk.f_5 > unk32.f_5)
			{
				unk32 = { unk };
				num2 = i;
			}
		}
	}

	return num2;
}

BOOL func_275(int iParam0) // Position - 0x8E5B
{
	if (iParam0 < 0 || iParam0 > 4)
		return false;

	return true;
}

void func_276(int iParam0) // Position - 0x8E79
{
	int num;
	int num2;
	int i;

	if (!func_266(iParam0))
		return;

	num = func_265(iParam0, 1);

	if (!func_288(Global_1156111.f_2169[num /*205*/]))
		return;

	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] = Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] + 1;
	Global_1156111.f_2169[num /*205*/].f_204 = 1;

	if (!func_289(Global_1156111.f_2169[num /*205*/].f_203))
		return;

	num2 = func_290(Global_1156111.f_2169[num /*205*/].f_203, 1);
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

BOOL func_277(int iParam0) // Position - 0x8FCE
{
	BOOL flag;

	if (iParam0->f_1 != 0)
	{
		flag = func_300(794259616, iParam0->f_1, true, "");
		return flag;
	}

	return true;
}

void func_278(int iParam0) // Position - 0x8FF8
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
			func_292();
			break;
	
		case joaat("SLOW_AND_STEADY_AURA"):
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(player, 1936842089);
			PLAYER::_0x2B12B6FC8B8772AB(player, 8);
			PLAYER::_0x131E294EF60160DF(player, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(player, 1);
			break;
	
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_291();
			break;
	
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			num = func_294(iParam0);
			func_302(num, 3, 1, -1, 1);
			break;
	
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_288(16);
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
			func_288(17);
			break;
	
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_293(iParam0));
			break;
	
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(EntityIndex, true, 0);
			GRAPHICS::ANIMPOSTFX_PLAY(func_293(iParam0));
			break;
	
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(5);
			func_60(104, true);
			break;
	
		case joaat("SLIPPERY_BASTARD_VFX"):
			num = func_294(iParam0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(EntityIndex, func_301(iParam0, 0));
			func_302(num, 0, 1, entityBoneIndexByName, 0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(EntityIndex, func_301(iParam0, 1));
			func_302(num, 1, 1, entityBoneIndexByName, 0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(EntityIndex, func_301(iParam0, 2));
			func_302(num, 2, 1, entityBoneIndexByName, 0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(EntityIndex, func_301(iParam0, 3));
			func_302(num, 2, 1, entityBoneIndexByName, 0);
			break;
	
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_293(iParam0));
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
			func_303();
			break;
	
		case joaat("SLOW_AND_STEADY_VFX"):
			num = func_294(iParam0);
			func_302(num, 4, 1, -1, 0);
			break;
	
		case joaat("OVERPOWER_PREDATOR"):
			break;
	
		case 1398483650:
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE(player, 0.5f);
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE_2(player, 2f);
			break;
	
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_293(iParam0));
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

void func_279(int iParam0) // Position - 0x9293
{
	char* StringToTest;
	char* StringToTest2;

	if (iParam0 == 0)
		return;

	StringToTest = func_304(iParam0);

	if (MISC::IS_STRING_NULL_OR_EMPTY(StringToTest))
		return;

	StringToTest2 = func_305(iParam0);

	if (MISC::IS_STRING_NULL_OR_EMPTY(StringToTest2))
		return;

	AUDIO::PLAY_SOUND_FROM_ENTITY(StringToTest, Global_1295666.f_3, StringToTest2, false, 0, 0);
	return;
}

void func_280(var uParam0) // Position - 0x92DD
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

BOOL func_281(int iParam0) // Position - 0x9339
{
	int num;

	num = func_211(iParam0, 1);

	if (num >= 130 && num <= 149)
		return true;

	return false;
}

BOOL func_282(int iParam0) // Position - 0x9361
{
	int num;

	num = func_211(iParam0, 1);

	if (num >= 166 && num <= 166)
		return true;

	return false;
}

BOOL func_283(int iParam0) // Position - 0x9389
{
	int num;

	num = func_211(iParam0, 1);

	if (num >= 167 && num <= 171)
		return true;

	return false;
}

BOOL func_284(int iParam0) // Position - 0x93B1
{
	int num;

	num = func_211(iParam0, 1);

	if (num >= 172 && num <= 179)
		return true;

	return false;
}

BOOL func_285(int iParam0) // Position - 0x93D9
{
	int num;

	num = func_211(iParam0, 1);

	if (num >= 180 && num <= 182)
		return true;

	return false;
}

BOOL func_286(int iParam0) // Position - 0x9401
{
	int num;

	num = func_211(iParam0, 1);

	if (num >= 150 && num <= 165)
		return true;

	return false;
}

float func_287(Hash hParam0, Hash hParam1, float fParam2, char* sParam3) // Position - 0x9429
{
	var unk;
	float num;

	if (func_306(hParam0, hParam1, &unk))
		num = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(hParam0, hParam1, unk.f_10.f_1);
	else
		num = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(hParam0, hParam1, fParam2);

	return num;
}

BOOL func_288(int iParam0) // Position - 0x945F
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

BOOL func_289(int iParam0) // Position - 0x94CE
{
	int num;

	num = func_290(iParam0, 1);

	if (num < 1 || num >= 5)
		return false;

	return true;
}

int func_290(int iParam0, int iParam1) // Position - 0x94F5
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

void func_291() // Position - 0x9552
{
	BOOL bTrue;
	BOOL bTrue2;

	if (Global_1156111.f_21645[3 /*209*/].f_208)
		bTrue = true;

	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 550, bTrue);

	if (Global_1156111.f_21645[4 /*209*/].f_208)
		if (!func_243(Global_1297600[Global_1295666 /*87*/].f_86, 1))
			bTrue2 = true;

	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 556, bTrue2);
	return;
}

void func_292() // Position - 0x95B4
{
	BOOL bTrue;

	bTrue = false;

	if (Global_1156111.f_21645[12 /*209*/].f_208)
		bTrue = true;

	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 263, bTrue);
	return;
}

char* func_293(int iParam0) // Position - 0x95E4
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

int func_294(int iParam0) // Position - 0x962C
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

void func_295(int iParam0) // Position - 0x9667
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

void func_296() // Position - 0x96A7
{
	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 305, false);
	PED::_RESET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Global_1295666.f_3);
	return;
}

int func_297(int iParam0) // Position - 0x96C7
{
	int num;

	if (!func_272(iParam0))
		return -1;

	num = func_273(iParam0, 1);
	return Global_1156111.f_35859.f_9286[num /*3*/];
}

BOOL func_298(int iParam0, int iParam1) // Position - 0x96F6
{
	int num;
	Player player;
	int num2;
	int num3;
	var unk;

	if (!func_250(iParam0))
		return false;

	num = func_238(iParam0, 1);
	num2 = Global_1156111.f_35859.f_3116[num /*31*/].f_4;

	if (func_252(Global_1156111.f_35859.f_3116[num /*31*/]))
	{
		num3 = Global_1156111.f_35859.f_9286[func_273(num2, 1) /*3*/];
		unk = { func_299(num3) };
	
		if (num3 != iParam0 && Global_1156111.f_35859.f_3116[num /*31*/].f_5 <= unk.f_5)
			return false;
	}

	switch (Global_1156111.f_35859.f_3116[num /*31*/])
	{
		case joaat("ENTER_REVIVED_REMOTE"):
			player = func_249(iParam1);
		
			if (player == Global_1295666)
				return false;
		
			return true;
	
		case -2129621195:
			player = func_249(iParam1);
		
			if (player == Global_1295666)
				return false;
		
			if (!GANG::NETWORK_IS_GANG_LEADER(Global_1295666.f_149[Global_1295666]))
				return false;
		
			if (!GANG::_NETWORK_IS_IN_MY_GANG(Global_1295666.f_149[player]))
				return false;
		
			return true;
	
		case -2010146101:
			if (!func_307())
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
		
			player = func_249(iParam1);
		
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295666.f_149[player]))
				return false;
		
			if (PED::_GET_LASSOED_LASSOER(Global_1295666.f_3) != PLAYER::GET_PLAYER_PED(Global_1295666.f_149[player]))
				return false;
		
			return true;
	
		case joaat("ALLY_ENTER_DEADEYE"):
			player = func_249(iParam1);
		
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295666.f_149[player]))
				return false;
		
			if (player != Global_1295666 && !func_309(Global_1295666.f_149[player]))
				return false;
		
			if (!func_310(512, player))
				return false;
		
			return true;
	
		case joaat("ENTER_FREEROAM_OR_COOP"):
			if (!func_307() && !func_308())
				return false;
		
			return true;
	
		default:
		
	}

	return false;
}

struct<31> func_299(int iParam0) // Position - 0x99CB
{
	int num;

	num = func_238(iParam0, 1);
	return Global_1156111.f_35859.f_3116[num /*31*/];
}

BOOL func_300(Hash hParam0, Hash hParam1, BOOL bParam2, char* sParam3) // Position - 0x99EF
{
	var unk;
	BOOL flag;

	if (func_306(hParam0, hParam1, &unk))
		flag = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(hParam0, hParam1, unk.f_10.f_2);
	else
		flag = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(hParam0, hParam1, bParam2);

	return flag;
}

char* func_301(int iParam0, int iParam1) // Position - 0x9A25
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

void func_302(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x9A7E
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

void func_303() // Position - 0x9B03
{
	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 305, true);
	PED::_SET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Global_1295666.f_3, 0.7f);
	return;
}

char* func_304(int iParam0) // Position - 0x9B28
{
	switch (iParam0)
	{
		case -1822335806:
			return "Head_Shot_Ricco";
	
		default:
		
	}

	return "";
}

char* func_305(int iParam0) // Position - 0x9B49
{
	switch (iParam0)
	{
		case -1822335806:
			return "RDRO_Ability_Cards_SFX_Sounds";
	
		default:
		
	}

	return "";
}

BOOL func_306(Hash hParam0, Hash hParam1, var uParam2) // Position - 0x9B6A
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
		uParam2->f_10.f_3 = func_311(num2);
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

BOOL func_307() // Position - 0x9D8C
{
	return Global_1572887.f_7;
}

BOOL func_308() // Position - 0x9D9A
{
	if (!Global_1048577)
		return false;

	if (!func_313(func_312(0)))
		return false;

	if (Global_3145858 != -504335712)
		return false;

	if (func_314(*Global_524288.f_39632))
		return true;

	return false;
}

BOOL func_309(Player plParam0) // Position - 0x9DE5
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (func_315(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) != 1)
			func_316(plParam0);
	
		return true;
	}

	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) == 1;
}

BOOL func_310(int iParam0, Player plParam1) // Position - 0x9E2A
{
	if (plParam1 == 255)
		return Global_1102813.f_3 && iParam0 != false;

	return Global_1101558[plParam1 /*38*/].f_3 && iParam0 != false;
}

int func_311(int iParam0) // Position - 0x9E56
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

struct<2> func_312(int iParam0) // Position - 0x9E8C
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

BOOL func_313(var uParam0, var uParam1) // Position - 0x9EA0
{
	if (!func_317(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_318(uParam0))
		return false;

	return true;
}

BOOL func_314(int iParam0) // Position - 0x9ED4
{
	return iParam0 == -1759663922 || iParam0 == -318976023 || iParam0 == 772881414 || iParam0 == 31269700 || iParam0 == -133550749;
}

BOOL func_315(Player plParam0) // Position - 0x9F1C
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), plParam0))
		return true;

	return false;
}

void func_316(Player plParam0) // Position - 0x9F39
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (!Global_1295666.f_17[player])
	{
		func_319(plParam0);
		return;
	}

	if (Global_1072759.f_21353.f_1[player /*8*/] == 1)
		return;

	func_320(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 1);
	Global_1072759.f_21353.f_1[player /*8*/] = 1;
	return;
}

BOOL func_317(int iParam0) // Position - 0x9FBC
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

int func_318(int iParam0) // Position - 0x9FFB
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

void func_319(Player plParam0) // Position - 0xA091
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (Global_1072759.f_21353.f_1[player /*8*/] == 0)
		return;

	func_320(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 0);
	Global_1072759.f_21353.f_1[player /*8*/] = 0;
	return;
}

void func_320(Player plParam0) // Position - 0xA0FD
{
	if (Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 = 0;
	}

	return;
}

