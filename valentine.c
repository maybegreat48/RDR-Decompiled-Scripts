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
	Hash hLocal_19 = 0;
	var uLocal_20 = 3;
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
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
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
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	Volume volLocal_56 = 0;
	Volume volLocal_57 = 0;
	Volume volLocal_58 = 0;
	Volume volLocal_59 = 0;
	Volume volLocal_60 = 0;
	Volume volLocal_61 = 0;
	Volume volLocal_62 = 0;
	Volume volLocal_63 = 0;
	Volume volLocal_64 = 0;
	Volume volLocal_65 = 0;
	Volume volLocal_66 = 0;
	Volume volLocal_67 = 0;
	Volume volLocal_68 = 0;
	Volume volLocal_69 = 0;
	Volume volLocal_70 = 0;
	Volume volLocal_71 = 0;
	Volume volLocal_72 = 0;
	Volume volLocal_73 = 0;
	Volume volLocal_74 = 0;
	Volume volLocal_75 = 0;
	Volume volLocal_76 = 0;
	Volume volLocal_77 = 0;
	Volume volLocal_78 = 0;
	Volume volLocal_79 = 0;
	Volume volLocal_80 = 0;
	Volume volLocal_81 = 0;
	Volume volLocal_82 = 0;
	Volume volLocal_83 = 0;
	Volume volLocal_84 = 0;
	Volume volLocal_85 = 0;
	Volume volLocal_86 = 0;
	Volume volLocal_87 = 0;
	Volume volLocal_88 = 0;
	Volume volLocal_89 = 0;
	Volume volLocal_90 = 0;
	Volume volLocal_91 = 0;
	Volume volLocal_92 = 0;
	Volume volLocal_93 = 0;
	Volume volLocal_94 = 0;
	Volume volLocal_95 = 0;
	Volume volLocal_96 = 0;
	Volume volLocal_97 = 0;
	Volume volLocal_98 = 0;
	var uLocal_99 = 0;
	Volume volLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	Volume volLocal_125 = 0;
	Volume volLocal_126 = 0;
	Volume volLocal_127 = 0;
	Volume volLocal_128 = 0;
	Volume volLocal_129 = 0;
	var uLocal_130 = 0;
	int iLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	int iLocal_138 = 0;
	BOOL bLocal_139 = 0;
	int iLocal_140 = 4;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	BOOL bLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	BOOL bLocal_152 = 0;
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
	uLocal_135 = { -277.3855f, 805.2767f, 119.1796f };
	iLocal_138 = joaat("ui_book_valentine_jail_ledger");
	iLocal_146 = -1;
	iLocal_147 = 20000;
	iLocal_150 = iScriptParam_0;
	iLocal_148 = iScriptParam_0.f_2;
	bLocal_152 = false;

	if (Global_1901671.f_2.f_26 > 0)
		func_1();

	func_2();
	func_3();
	iLocal_149 = MISC::GET_GAME_TIMER();
	num = 0;

	while (func_4())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_149)
		{
			iLocal_149 = 0;
			func_5(iLocal_150, &iLocal_148);
		
			switch (iLocal_148)
			{
				case 0:
					if (Global_1901671.f_2.f_26 > 0)
					{
						iLocal_151 = MISC::GET_GAME_TIMER() + Global_1901671.f_2.f_26;
						iLocal_148 = 1;
					}
					else
					{
						iLocal_148 = 2;
					}
					break;
			
				case 1:
					if (!func_1() || iLocal_151 < MISC::GET_GAME_TIMER())
					{
						bLocal_152 = false;
						iLocal_148 = 2;
					}
					break;
			
				case 2:
					func_6(iLocal_150);
					func_7();
					func_8();
				
					if (func_10(func_9(iLocal_150)))
						func_11(func_9(iLocal_150), 4);
				
					LAW::_SET_LAW_RBS_VOLUME(PLAYER::PLAYER_ID(), func_12(iLocal_150));
					Global_1896644 = -1;
					iLocal_151 = iLocal_147 + MISC::GET_GAME_TIMER();
					iLocal_148 = 3;
					break;
			
				case 3:
					if (func_13() || iLocal_151 < MISC::GET_GAME_TIMER())
					{
						_DEBUG_PRINT(iLocal_150);
						iLocal_151 = MISC::GET_GAME_TIMER() + iLocal_147;
						iLocal_148 = 4;
					}
					break;
			
				case 4:
					if (func_15(iLocal_150) || iLocal_151 < MISC::GET_GAME_TIMER())
					{
						func_16(iLocal_150);
						iLocal_151 = MISC::GET_GAME_TIMER() + iLocal_147;
						iLocal_148 = 5;
					}
					break;
			
				case 5:
					if (func_17(iLocal_150) || iLocal_151 < MISC::GET_GAME_TIMER())
					{
						_DEBUG_PRINT_0(iLocal_150);
						iLocal_151 = iLocal_147 + MISC::GET_GAME_TIMER();
						iLocal_148 = 7;
					}
					break;
			
				case 7:
					if (func_10(func_9(iLocal_150)))
						if (func_19(func_9(iLocal_150), 4) && !(iLocal_151 < MISC::GET_GAME_TIMER()))
							break;
				
					if (func_20(iLocal_150) || iLocal_151 < MISC::GET_GAME_TIMER())
					{
						func_21(iLocal_150, 4);
						iLocal_151 = MISC::GET_GAME_TIMER() + iLocal_147;
						iLocal_148 = 8;
					}
					break;
			
				case 8:
					func_22(iLocal_150);
					func_23();
				
					if (!func_24(4105, false))
						func_25();
				
					func_26();
					func_27();
					func_28();
					func_29(iLocal_150);
					func_30(iLocal_150);
					func_31();
					func_32();
					iLocal_148 = 9;
					break;
			
				case 9:
					func_33(iLocal_150);
					func_34();
					iLocal_148 = 10;
					break;
			
				case 10:
					func_35(&Global_1896698);
					func_36(iLocal_150, &Global_1896698);
					iLocal_148 = 11;
					break;
			
				case 11:
					func_37(iLocal_150);
					func_21(iLocal_150, 8);
				
					if (func_38(32))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
							CAM::DO_SCREEN_FADE_IN(500);
					
						func_39(32);
					}
				
					iLocal_148 = 12;
					break;
			
				case 12:
					if (func_40(iLocal_150))
						iLocal_149 = MISC::GET_GAME_TIMER() + 1000;
				
					func_41(&Global_1896698, iLocal_150);
					func_42(iLocal_150);
					func_21(iLocal_150, 8);
				
					if (func_43())
						PED::_SET_AMBIENT_HUMAN_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				
					PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1887363[iLocal_150 /*36*/].f_11);
				
					if (Global_1887363[iLocal_150 /*36*/].f_12 > 0f)
						PED::_SET_SCENARIO_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1887363[iLocal_150 /*36*/].f_12);
					break;
			
				case 13:
					func_8();
					func_44(num);
					num = num + 1;
					break;
			}
		}
	
		if (Global_1887363[iLocal_150 /*36*/].f_13 == 0)
		{
		}
		else
		{
			PED::_SET_SCENARIO_PED_DENSITY_THIS_FRAME(Global_1887363[iLocal_150 /*36*/].f_13);
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

BOOL func_1() // Position - 0x3A2
{
	if (!bLocal_152)
	{
		if (Global_1051194)
		{
			bLocal_152 = true;
			return true;
		}
	
		if (func_47() && func_48())
		{
			bLocal_152 = true;
			return true;
		}
	
		return false;
	}

	if (Global_1051194)
		return true;

	if (func_48())
		return true;

	bLocal_152 = false;
	return false;
}

void func_2() // Position - 0x3F3
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

void func_3() // Position - 0x444
{
	if (!func_49(-515561750) && func_45() == -1 && !STREAMING::IS_IPL_ACTIVE_HASH(1186533019) && !STREAMING::IS_LOAD_SCENE_ACTIVE())
	{
		func_50(-892659042);
		func_51();
	}

	return;
}

BOOL func_4() // Position - 0x48A
{
	if (func_45() != -1)
		return !func_52(true, true);

	return true;
}

void func_5(int iParam0, var uParam1) // Position - 0x4A5
{
	if (!func_38(16))
		return;

	if (Global_1893611.f_7 == 0)
	{
		func_39(16);
		return;
	}

	if (!func_53(iParam0))
	{
		Global_1893611.f_7 = 0;
		func_39(16);
		return;
	}

	if (func_54(8))
	{
		if (*uParam1 == 12)
		{
			*uParam1 = 8;
			return;
		}
		else if (*uParam1 != 8)
		{
			func_55(8);
			*uParam1 = 12;
			return;
		}
	}

	if (func_54(2))
	{
		if (*uParam1 == 12)
		{
			*uParam1 = 4;
			return;
		}
		else if (*uParam1 != 4)
		{
			func_55(2);
			*uParam1 = 12;
			return;
		}
	}

	if (func_54(16))
	{
		if (*uParam1 == 12)
		{
			*uParam1 = 9;
			return;
		}
		else if (*uParam1 != 9)
		{
			func_55(16);
			*uParam1 = 12;
			return;
		}
	}

	if (func_54(4))
	{
		if (*uParam1 == 12)
		{
			*uParam1 = 7;
			return;
		}
		else if (*uParam1 != 7)
		{
			func_55(4);
			*uParam1 = 12;
			return;
		}
	}

	if (func_54(1))
	{
		if (*uParam1 == 12)
		{
			*uParam1 = 3;
			return;
		}
		else if (*uParam1 != 3)
		{
			func_55(1);
			*uParam1 = 12;
			return;
		}
	}

	return;
}

void func_6(int iParam0) // Position - 0x5D5
{
	return;
}

void func_7() // Position - 0x5DD
{
	if (!Global_1102813.f_3967)
		Global_1102813.f_3967 = 1;

	return;
}

void func_8() // Position - 0x5FB
{
	if (!Global_1072759.f_23824)
		Global_1072759.f_23824 = 1;

	return;
}

int func_9(int iParam0) // Position - 0x616
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

BOOL func_10(int iParam0) // Position - 0x712
{
	return iParam0 > -1 && iParam0 < 17;
}

void func_11(int iParam0, BOOL bParam1) // Position - 0x728
{
	Global_1896646[iParam0 /*2*/] = Global_1896646[iParam0 /*2*/] || bParam1;
	return;
}

Hash func_12(int iParam0) // Position - 0x743
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

BOOL func_13() // Position - 0x82B
{
	volLocal_56 = Global_1887363[81 /*36*/].f_5;
	VOLUME::_0xB469CFD9E065EB99(volLocal_56, 19);
	func_56();
	func_57();
	func_58();

	if (func_45() == -1)
	{
		volLocal_82 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volHorseShopStables");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_82, -369.44574f, 786.69354f, 115.9904f, 0f, 0f, 3.414876f, 13.879229f, 13.728802f, 5.892247f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_82, -367.6902f, 770.44354f, 116.852585f, 0f, 0f, 4.150415f, 26.091839f, 5.747657f, 4.724637f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_82, -391.67593f, 778.7041f, 116.852585f, 0f, 0f, 4.150415f, 23.39705f, 25.942514f, 4.724637f);
		volLocal_83 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volAuctionStables");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_83, -257.20645f, 634.55884f, 114.07508f, 0f, 0f, 49.489426f, 11.459401f, 25.366938f, 3.427747f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_83, -221.27324f, 673.6355f, 114.07508f, 0f, 0f, 49.489426f, 11.459401f, 25.366938f, 3.427747f);
		volLocal_80 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-369.44574f, 786.69354f, 115.9904f, 0f, 0f, 3.414876f, 13.879229f, 13.728802f, 6.241f, "Valentine - m_volHorseShop");
		volLocal_81 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-361.3393f, 787.48f, 116.43014f, 0f, 0f, 3.999999f, 3.741607f, 3.652877f, 5.744031f, "Valentine - m_volHorseShopOutsideDoor");
		func_59(9, volLocal_81);
		VOLUME::_0xB469CFD9E065EB99(volLocal_80, 10067);
		volLocal_129 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-280.66617f, 915.7495f, 133.06602f, 0f, 0f, 0f, 23.885042f, 24.412338f, 15.895474f, "Valentine - m_volGuardDogOwner");
		volLocal_87 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volHotel Agg");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_87, -325.01236f, 767.5158f, 119.48273f, 0f, 0f, -170.20206f, 8.15436f, 18.385044f, 9.051786f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_87, -317.87198f, 761.7268f, 118.000206f, 0f, 0f, 11.413975f, 4.27525f, 4.046098f, 2.733858f);
		volLocal_88 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-326.9005f, 777.8173f, 117.61575f, 0f, 0f, -171.61601f, 8.5f, 3.390837f, 2.634366f, "Valentine - m_volHotelPorch");
		volLocal_89 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-325.72726f, 774.2453f, 117.73458f, 0f, 0f, -171.61601f, 2.732852f, 1.390837f, 2.634366f, "Valentine - m_volHotelPrompt");
		volLocal_90 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-325.63495f, 772.44763f, 117.73458f, 0f, 0f, -171.61601f, 1.740315f, 1.864735f, 2.634366f, "Valentine - m_volHotelOfflimits");
		volLocal_91 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volHotelMuteAgg");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_91, -325.298f, 767.432f, 122.368f, 0f, 0f, -171.61601f, 9.71f, 19.745f, 3.774f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_91, -317.643f, 761.773f, 118f, 0f, 0f, 11.414f, 4.574f, 4.322f, 2.734f);
		volLocal_125 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-306.38208f, 771.3976f, 119.98879f, 0f, 0f, 10.062045f, 10.223907f, 17.497038f, 4.699401f, "Valentine - m_volBank");
		volLocal_126 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-308.22028f, 776.1706f, 118.854706f, 0f, 0f, 7.323684f, 1.907036f, 1.483034f, 2.606343f, "Valentine - m_volBankPrompt");
		volLocal_127 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volBankShopOfflimits Agg");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_127, -302.22168f, 769.74304f, 118.854706f, 0f, 0f, 10.503664f, 2.072344f, 8.025318f, 2.606343f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_127, -309.0788f, 772.8509f, 118.854706f, 0f, 0f, 8.049957f, 5.213456f, 4.413345f, 3.353561f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_127, -311.414f, 775.411f, 118.854706f, 0f, 0f, 8.049957f, 1.633f, 1.085f, 3.354f);
		VOLUME::_0xB469CFD9E065EB99(volLocal_125, 10058);
	}
	else
	{
		volLocal_80 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-369.44574f, 786.69354f, 115.9904f, 0f, 0f, 3.414876f, 13.879229f, 13.728802f, 5.892247f, "Valentine - m_volHorseShop");
		VOLUME::_0xB469CFD9E065EB99(volLocal_80, 10067);
		volLocal_125 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-306.38208f, 771.3976f, 119.98879f, 0f, 0f, 10.062045f, 10.223907f, 17.497038f, 4.699401f, "Valentine - m_volBank");
		POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volLocal_125, 0, 0, 0, -1, -1, 0);
	}

	volLocal_84 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-339.50293f, 767.1139f, 116.60996f, 0f, 0f, -171.61601f, 9.604842f, 7.286813f, 4.891439f, "Valentine - m_volButcher");
	volLocal_85 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-341.169f, 767.2f, 116.816f, 0f, 0f, -171.203f, 1.376f, 2.537f, 2.48f, "Valentine - m_volButcherPrompt");
	volLocal_86 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-338.54016f, 767.6559f, 116.517494f, 0f, 0f, -171.20316f, 2.147837f, 2.102079f, 2.480459f, "Valentine - m_volButcherOfflimits");
	VOLUME::_0xB469CFD9E065EB99(volLocal_84, 10061);
	volLocal_64 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-306.58295f, 812.94696f, 118.78941f, 0f, 0f, 100.14155f, 6.023165f, 3.919236f, 2.442381f, "Valentine - m_volBarberOwner");
	volLocal_63 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-307.1545f, 812.8f, 118.92539f, 0f, 0f, 100.92299f, 4.783854f, 2.636788f, 1.990557f, "Valentine - m_volBarberPrompt");
	VOLUME::_0xB469CFD9E065EB99(volLocal_64, 10059);
	volLocal_65 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-307.4f, 813.5f, 118.83f, 0f, 0f, 11f, 1.9f, 2.3f, 2.195668f, "Valentine - m_volBarberAvoidance");
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volLocal_65, 0, 0, 0, -1, -1, 0);
	volLocal_96 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volPostOfficeOwner");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_96, -176.659f, 629.779f, 114.438f, 0f, 0f, -34.984276f, 3.47f, 6.531f, 2.881f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_96, -175.54929f, 627.7673f, 114.54495f, 0f, 0f, -34.84247f, 1.351312f, 3.832321f, 2.880646f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_96, -174.048f, 633.669f, 114.545f, 0f, 0f, -34.84247f, 1.996f, 2.553f, 2.881f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_96, -179.166f, 626.498f, 114.545f, 0f, 0f, -34.84247f, 2.314f, 2.553f, 2.881f);
	volLocal_97 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volPostOfficePrompt Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_97, -178.982f, 626.715f, 114.531f, 0f, 0f, -34.84247f, 1.767f, 1.396f, 2.881f);
	volLocal_98 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volPostOfficeOfflimits Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_98, -176.47105f, 629.9696f, 114.53663f, 0f, 0f, -34.984276f, 3.19526f, 6.32671f, 2.880646f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_98, -175.54929f, 627.7673f, 114.54495f, 0f, 0f, -34.84247f, 1.351312f, 3.832321f, 2.880646f);
	VOLUME::_0xB469CFD9E065EB99(volLocal_96, 10068);
	volLocal_66 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-309.497f, 809.019f, 119.378f, 0f, 0f, 99.715f, 21.384f, 11.9942f, 3.513f, "Valentine - m_volBartenderOwner");
	volLocal_76 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-312.9f, 799f, 119.3f, 0f, 0f, 97.7f, 2.9f, 1.2f, 2.6f, "Valentine - m_volPianoPlayerOwner");
	volLocal_77 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-278.03293f, 807.903f, 119.4f, 0f, 0f, -79.7f, 11.400932f, 8.344561f, 10.8f, "Valentine - m_volSheriffOwner");
	volLocal_79 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volSheriffStation Agg");
	VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(volLocal_79, volLocal_77);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_79, -272.76892f, 809.20575f, 120.42303f, 0f, 0f, -79.7f, 8.085273f, 4.505096f, 4.33611f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_79, -277.0814f, 800.534f, 119.4f, 0f, 0f, -79.7f, 3.711809f, 7.095345f, 4f);
	volLocal_78 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-277.22818f, 807.12146f, 119.472015f, 0f, 0f, 9.89185f, 5.00473f, 8.940674f, 2.321479f, "Valentine - m_volSheriffStation Agg");
	VOLUME::_0x3EFABB21E14A6BD1(volLocal_78, 5, 1);
	volLocal_95 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-230.464f, 817.354f, 126.643f, 0f, 0f, -34.207f, 19.604f, 29.858f, 13.22f, "BRL_VALENTINE - m_volChurch");
	iLocal_131 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(-290.7f, 728.9f, 118.8f, 100f, 2.5f, 2.5f, 0, 6f, 10f, 25f, 7.5f);
	func_60();
	func_61();
	func_62(81);
	volLocal_100 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-177.812f, 632.287f, 114.537f, 0f, 0f, -34.984f, 8.706f, 22.528f, 2.881f, "Valentine - m_volTrainStation");
	return true;
}

void _DEBUG_PRINT(int iParam0) // Position - 0x10E0
{
	iParam0 = iParam0;
	return;
}

BOOL func_15(int iParam0) // Position - 0x10EC
{
	iParam0 = iParam0;
	return true;
}

void func_16(int iParam0) // Position - 0x10F9
{
	iParam0 = iParam0;
	func_63(joaat("p_churchbell01x"), "props_misc@church_bells", "enter", "loop", "exit", -230.157f, 797.476f, 135.255f, "VAL_SINGLE_TOLL");
	func_64(9, 0, 0);
	func_64(12, 0, 0);
	func_64(19, 0, 0);
	ENTITY::CREATE_MODEL_HIDE(-173.85722f, 642.7699f, 114.07258f, 0.1f, joaat("p_kerosenetablelamp01x"), false);
	return;
}

BOOL func_17(int iParam0) // Position - 0x1167
{
	BOOL num;

	num = 1;

	if (STREAMING::IS_LOAD_SCENE_ACTIVE())
		return false;
	else
		func_50(1777348822);

	return num;
}

void _DEBUG_PRINT_0(int iParam0) // Position - 0x118B
{
	iParam0 = iParam0;
	return;
}

BOOL func_19(int iParam0, BOOL bParam1) // Position - 0x1197
{
	return Global_1896646[iParam0 /*2*/] && bParam1 != false;
}

BOOL func_20(int iParam0) // Position - 0x11AC
{
	return func_65(iParam0, -1, -1, false);
}

void func_21(int iParam0, BOOL bParam1) // Position - 0x11BD
{
	if (Global_1572887.f_14 == -1)
		Global_8130[iParam0 /*11*/] = Global_8130[iParam0 /*11*/] || bParam1;
	else
		Global_1072759.f_19611[iParam0 /*11*/] = Global_1072759.f_19611[iParam0 /*11*/] || bParam1;

	return;
}

void func_22(int iParam0) // Position - 0x11FC
{
	return;
}

void func_23() // Position - 0x1204
{
	return;
}

BOOL func_24(int iParam0, BOOL bParam1) // Position - 0x120C
{
	if (func_66(iParam0))
		return true;

	if (!bParam1)
		if (func_67(5000))
			return true;

	switch (func_69(func_68(0)))
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

void func_25() // Position - 0x12BC
{
	return;
}

void func_26() // Position - 0x12C4
{
	func_45() != -1;
	return;
}

void func_27() // Position - 0x12D4
{
	func_70(-534215902, false, false);
	func_71(0, -308.9729f, 807.0829f, 117.9797f, volLocal_93, 81);
	func_71(1, -241.294f, 770f, 118.14f, volLocal_94, 81);
	return;
}

void func_28() // Position - 0x1317
{
	func_72(1, -355.308f, 704.938f, 115.936f, Global_1289485.f_47[1], 5);
	return;
}

void func_29(int iParam0) // Position - 0x133D
{
	func_73(0, volLocal_67, iParam0, volLocal_60, volLocal_70, 12, false, false, -1082130432, 0);
	func_74(0, -706941207, 0, false, false);
	func_75(0, false);
	func_73(3, volLocal_71, iParam0, volLocal_61, volLocal_73, 4, false, false, -1082130432, 0);
	func_74(3, 706990067, 0, false, false);
	func_74(3, -290089884, 0, false, false);
	func_76(3, volLocal_62);
	func_77(3, 8192);
	func_75(3, false);
	func_73(6, volLocal_74, iParam0, volLocal_57, volLocal_58, 20, false, false, -1082130432, 0);
	func_74(6, 475159788, 0, false, false);
	func_74(6, 2042647667, 0, false, false);
	func_75(6, false);
	func_73(25, volLocal_79, iParam0, 0, 0, 2, false, false, -1082130432, 0);
	func_77(25, 1);
	func_77(25, 16384);
	func_77(25, 8192);
	func_77(25, 536870912);
	func_73(8, volLocal_64, iParam0, volLocal_63, 0, 2, false, false, -1082130432, 0);
	func_77(8, 67108864);
	func_77(8, 2048);
	func_75(8, false);
	func_73(10, volLocal_84, iParam0, volLocal_85, 0, 460, true, false, -1082130432, 0);
	func_77(10, 536870912);
	func_75(10, false);
	func_73(36, Global_1289485.f_47[1], iParam0, Global_1289485.f_50[1], 0, 2, false, false, -1082130432, 0);
	func_73(9, volLocal_80, iParam0, 0, 0, 2, true, false, -1082130432, 0);
	func_77(9, 536870912);
	func_77(9, 16384);
	func_77(9, 32768);
	func_77(9, 1);
	func_77(9, 8388608);
	func_77(9, 8192);
	func_77(9, 4);
	func_77(9, 16777216);
	func_77(9, 67108864);

	if (!func_78() && func_79())
	{
		func_74(9, joaat("VAL_03_STABLE_FRONT_LEFT"), 0, false, false);
		func_74(9, joaat("VAL_03_STABLE_FRONT_RIGHT"), 0, false, false);
	}
	else
	{
		func_74(9, joaat("VAL_03_STABLE_FRONT_LEFT"), -1f, true, true);
		func_74(9, joaat("VAL_03_STABLE_FRONT_RIGHT"), 1f, true, true);
	}

	func_73(2, volLocal_96, iParam0, volLocal_97, volLocal_98, 1277952, false, false, -1082130432, 0);
	func_75(2, false);
	func_80();
	func_81(79);
	func_81(81);
	return;
}

void func_30(int iParam0) // Position - 0x158E
{
	if (func_45() != -1)
		return;

	if (func_82(1, volLocal_66, true))
		VOLUME::_0x4A8FEFC43FD8AC9B(volLocal_66, 1, 1);

	func_82(14, volLocal_76, true);
	func_82(3, volLocal_77, true);
	func_82(45, volLocal_82, true);
	func_82(18, volLocal_82, false);
	func_82(19, volLocal_82, false);
	func_82(7, volLocal_83, true);
	func_82(20, volLocal_83, false);
	func_82(27, volLocal_83, false);
	func_82(28, volLocal_83, false);

	if (func_82(37, volLocal_129, true))
	{
		func_82(51, volLocal_129, false);
		VOLUME::_0x4A8FEFC43FD8AC9B(volLocal_129, 3, 1);
	
		if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_83(51)))
			VOLUME::_0x53D05D60E5F5B40C(volLocal_129, 3, 1, func_83(51));
	}

	return;
}

void func_31() // Position - 0x1645
{
	return;
}

void func_32() // Position - 0x164D
{
	return;
}

void func_33(int iParam0) // Position - 0x1655
{
	func_84(0.8f, 0.2f, 0f, 0f);
	return;
}

void func_34() // Position - 0x166D
{
	if (!Global_1893611.f_186)
		VEHICLE::_SET_HORSE_TRAFFIC_GROUPING_DISTRIBUTION(Global_1893611.f_182, Global_1893611.f_183, Global_1893611.f_184, Global_1893611.f_185);

	return;
}

void func_35(var uParam0) // Position - 0x169E
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

void func_36(int iParam0, var uParam1) // Position - 0x16E4
{
	func_85(uParam1, volLocal_56, 1);
	func_85(uParam1, volLocal_74, 2);
	func_85(uParam1, volLocal_67, 2);
	func_85(uParam1, volLocal_71, 2);
	func_85(uParam1, volLocal_77, 11);
	func_85(uParam1, volLocal_92, 3);
	func_85(uParam1, volLocal_95, 6);
	func_85(uParam1, volLocal_96, 10);
	return;
}

void func_37(int iParam0) // Position - 0x1736
{
	if (!func_86(iParam0))
		return;

	func_87();
	func_88(8, joaat("animals_pigs"));
	func_88(0, joaat("val_civilians"));
	func_88(1, joaat("hrt_horse_riders"));
	func_88(2, joaat("val_law_deputies"));
	return;
}

BOOL func_38(BOOL bParam0) // Position - 0x1778
{
	return Global_1893611 && bParam0 != false;
}

void func_39(BOOL bParam0) // Position - 0x1789
{
	Global_1893611 = Global_1893611 - Global_1893611 && bParam0;
	return;
}

BOOL func_40(int iParam0) // Position - 0x17A1
{
	func_89();

	if (func_90(&bLocal_139))
	{
		if (bLocal_139)
		{
			func_91(joaat("door_val_jail_side"), true, 0, false, false, 0, false, false);
			func_91(joaat("door_val_doc_back_rm"), true, 0f, false, false, 1f, false, false);
			func_91(joaat("door_val_doc_back"), true, 0, false, false, 0, false, false);
			func_92(joaat("door_val_train_booths"), 1);
			func_92(1876749464, 1);
			func_92(1331491364, 1);
			func_92(-408139633, 1);
			func_92(-1652509687, 1);
		}
	}

	func_93(88, volLocal_100, &uLocal_99);

	if (Global_1572887.f_14 != -1)
	{
		func_94();
		return false;
	}

	return false;
}

void func_41(var uParam0, int iParam1) // Position - 0x183A
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	int i;

	if (BUILTIN::VDIST(Global_34, 0f, 0f, 0f) <= 5f || func_95(Global_1940199, 32768) || func_95(Global_1940199, 16777216))
		return;

	if (func_96(uParam0, 1))
		return;

	uParam0->f_63 = uParam0->f_63 + 1;

	if (uParam0->f_63 < 10)
		return;

	uParam0->f_63 = 0;
	flag = false;
	flag2 = CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_IN() || CAM::IS_SCREEN_FADING_OUT();
	flag3 = func_97();

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
							if (!func_98(&uParam0->[i /*3*/], 1) && func_99(iParam1) && !func_100(iParam1, 16))
							{
								func_102(iParam1, func_101(), -1, false, -1, false);
								func_103(&uParam0->[i /*3*/], 1);
							}
						
							func_104(iParam1, false);
						}
					
						flag = true;
					}
				}
				break;
		
			default:
				break;
		}
	}

	func_105(flag);
	return;
}

int func_42(int iParam0) // Position - 0x1979
{
	iParam0 = iParam0;
	return 1;
}

BOOL func_43() // Position - 0x1986
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

	if (func_106(unk))
		return true;

	return false;
}

BOOL func_44(int iParam0) // Position - 0x19BC
{
	if (iParam0 == 0)
	{
		func_107();
		LAW::_SET_LAW_RBS_VOLUME(PLAYER::PLAYER_ID(), 0);
		func_21(iLocal_150, 2048);
	
		if (STATS::CHAL_IS_GOAL_ACTIVE(joaat("mpac_travel"), joaat("mpac_travel_012")))
		{
			switch (iLocal_150)
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
					STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(func_108(iLocal_150, false), 1);
					break;
			}
		}
	
		if (func_10(func_101()))
			func_11(func_101(), 8);
	
		func_109(iLocal_150, 4);
		func_109(iLocal_150, 8);
		func_105(false);
	
		if (func_45() == -1)
			func_110(false);
	
		func_111(iLocal_150);
		func_34();
		return false;
	}
	else if (func_45() == -1)
	{
		func_112(iLocal_150);
		func_113(iLocal_150);
	
		if (!func_114(iLocal_150, false))
			return false;
	}
	else if (!func_115(iLocal_150))
	{
		return false;
	}

	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

int func_45() // Position - 0x1AD0
{
	return Global_1572887.f_14;
}

void func_46() // Position - 0x1ADE
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_47() // Position - 0x1AEA
{
	if (Global_1572887.f_260.f_3 > 0)
		return true;

	if (Global_1572887.f_260.f_4 != 0)
		return true;

	return false;
}

BOOL func_48() // Position - 0x1B15
{
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(joaat("fm_mission_controller"), -1, false, 0))
		return 1;

	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(joaat("fm_deathmatch_controller"), -1, false, 0))
		return 1;

	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(joaat("fm_race_controller"), -1, false, 0))
		return 1;

	return 0;
}

BOOL func_49(int iParam0) // Position - 0x1B57
{
	int num;
	int num2;
	int offset;

	num = func_116(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (func_117(num2))
	{
		if (Global_1072759.f_19585.f_24 && !func_118(iParam0))
			return false;
	
		return MISC::IS_BIT_SET(Global_1072759.f_19585[num2], offset) || MISC::IS_BIT_SET(Global_38.f_118[num2], offset);
	}

	return MISC::IS_BIT_SET(Global_38.f_118[num2], offset);
}

void func_50(Hash hParam0) // Position - 0x1BD6
{
	if (!STREAMING::IS_IPL_ACTIVE_HASH(hParam0))
		func_119(hParam0);

	return;
}

void func_51() // Position - 0x1BEF
{
	if (iLocal_146 == -1)
		iLocal_146 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-333.337f, 770.839f, 115.29f, 6.066f, 0.65f, 5.228f, func_120(99.798f), false, 7);

	return;
}

BOOL func_52(BOOL bParam0, BOOL bParam1) // Position - 0x1C2C
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

BOOL func_53(int iParam0) // Position - 0x1D0C
{
	if (!func_86(iParam0))
		return false;

	return func_121(iParam0, 8);
}

BOOL func_54(int iParam0) // Position - 0x1D2A
{
	return Global_1893611.f_7 && iParam0 != false;
}

void func_55(int iParam0) // Position - 0x1D3D
{
	Global_1893611.f_7 = Global_1893611.f_7 - Global_1893611.f_7 && iParam0;
	return;
}

void func_56() // Position - 0x1D5B
{
	volLocal_60 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-285.80304f, 805.0234f, 119.49999f, 0f, 0f, 9.527998f, 1.792473f, 2.89884f, 2.223762f, "Valentine - m_volDoctorPrompt");
	volLocal_67 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volDoctorShop Agg");
	volLocal_68 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-286.4778f, 815.4984f, 119.8f, 0f, 0f, -80.4f, 4.936636f, 10.453503f, 2.819574f, "Valentine - m_volDoctorBackroom");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_67, -286.65894f, 808.6324f, 119.8f, 0f, 0f, -80.4f, 10.386277f, 7.7f, 2.8f);
	VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(volLocal_67, volLocal_68);
	volLocal_70 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volDoctorShopOff Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_70, -288.58615f, 804.4559f, 119.49999f, 0f, 0f, 9.527998f, 1.8573f, 2.649464f, 2.223762f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_70, -289.418f, 811.402f, 119.5f, 0f, 0f, 9.528f, 3.349f, 3.978f, 2.224f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_70, -287.157f, 810.98f, 119.5f, 0f, 0f, 9.528f, 1.762f, 2.396f, 2.224f);
	volLocal_69 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-285.48495f, 801.69727f, 119.45798f, 0f, 0f, 10.325935f, 7.936f, 3.558567f, 2.381096f, "Valentine - m_volDoctorPORCH");
	VOLUME::_0xB469CFD9E065EB99(volLocal_67, 10064);
	return;
}

void func_57() // Position - 0x1EC1
{
	volLocal_71 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volGeneralShop Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_71, -323.731f, 801.595f, 118.2f, 0f, 0f, 99.9f, 10.555f, 8.418f, 4.843f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_71, -323.784f, 801.585f, 117.689f, 0f, 0f, 99.9f, 10.582f, 8.699f, 5.801f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_71, -323.448f, 799.656f, 116.513f, 0f, 0f, 99.9f, 6.34f, 8.699f, 12.476f);
	volLocal_72 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volGeneralPORCH Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_72, -322.9185f, 794.5805f, 117.8986f, 0f, 0f, 10.325935f, 9f, 3.558567f, 2.381096f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_72, -326.96133f, 807.46356f, 118.032425f, 0f, 0f, 8.726971f, 2.76311f, 2.301893f, 4.510351f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_72, -329.27304f, 799.3444f, 118.032425f, 0f, 0f, 8.72697f, 3f, 14.5f, 4.510351f);
	volLocal_61 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-322.07855f, 803.658f, 117.730934f, 0f, 0f, 8.710198f, 2.1f, 3.644517f, 1.698559f, "Valentine - m_volGeneralPrompt");

	if (func_45() == -1)
		volLocal_73 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-324.81677f, 803.7786f, 117.730934f, 0f, 0f, 10.486403f, 2.206109f, 1.908514f, 1.698559f, "Valentine - m_volGeneralCounterOff");
	else
		volLocal_73 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-324.68036f, 803.66125f, 118.060295f, 0f, 0f, 8.710198f, 2.1f, 2.235618f, 2.440112f, "Valentine - m_volGeneralCounterOff");

	volLocal_62 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volGeneralCounterMute");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_62, -327.309f, 801.647f, 120.068f, 0f, 0f, 10.486403f, 2.206f, 5.596f, 6.414f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_62, -326.547f, 797.528f, 121.542f, 0f, 0f, 10.486403f, 2.206f, 3.398f, 3.708f);
	VOLUME::_0xB469CFD9E065EB99(volLocal_71, 10065);
	return;
}

void func_58() // Position - 0x20DC
{
	volLocal_57 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-281.686f, 781.058f, 119.929f, 0f, 0f, 0f, 2.382f, 1.711f, 2.813f, "Valentine - m_volGunsmith - PROMPT");
	volLocal_74 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-279.91068f, 780.47504f, 119.810455f, 0f, 0f, 179.9f, 8.518225f, 7.656958f, 2.7f, "Valentine - m_volGunsmithShop");
	volLocal_75 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-280.124f, 786.21094f, 119.60725f, 0f, 0f, 0f, 7.936f, 3.558567f, 2.381096f, "Valentine - m_volGunsmithPORCH");

	if (func_45() == -1)
	{
		volLocal_58 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volGunsmithCounterOff Agg");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_58, -279.93582f, 778.00586f, 119.77474f, 0f, 0f, 0f, 8.469496f, 2.69515f, 2.516554f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_58, -277.336f, 778.941f, 119.775f, 0f, 0f, 0f, 3.326f, 4.079f, 2.517f);
	}
	else
	{
		volLocal_58 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-281.758f, 778.00586f, 119.77474f, 0f, 0f, 0f, 4.831735f, 2.69515f, 2.516554f, "Valentine - m_volGunsmithCounterOff");
	}

	volLocal_59 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(joaat("volBox"), -277.246f, 783.568f, 120.234f, 0f, 0f, 0f, 1.666f, 3.209f, 2.517f);
	VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_HORSE(volLocal_59, true);
	VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_PLAYER(volLocal_59, true);
	VOLUME::_0xB469CFD9E065EB99(volLocal_74, 10066);
	return;
}

void func_59(int iParam0, Volume volParam1) // Position - 0x223A
{
	Global_1915656.f_3[iParam0 /*447*/].f_32 = volParam1;
	return;
}

void func_60() // Position - 0x2251
{
	volLocal_92 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-309.49408f, 809.1079f, 122.15781f, 0f, 0f, 10.47275f, 12.236005f, 27.58529f, 9.179325f, "Valentine - m_volSaloonSmith");
	return;
}

void func_61() // Position - 0x2288
{
	volLocal_93 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-309.39243f, 808.40826f, 119.378f, 0f, 0f, 99.71499f, 22.62186f, 12.374f, 8.647388f, "volSaloonSmithfieldsInterior");
	volLocal_94 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-241.294f, 770f, 118.14f, 0f, 0f, 110.709f, 9.286f, 8.345f, 5f, "volSaloonKeanesInterior");
	return;
}

void func_62(int iParam0) // Position - 0x22EA
{
	switch (iParam0)
	{
		case 5:
			Global_1289485.f_47[0] = VOLUME::CREATE_VOLUME_AGGREGATE();
			VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(Global_1289485.f_47[0], VOLUME::CREATE_VOLUME_BOX(2548.06f, -1295.226f, 53f, 0f, 0f, 0f, 30f, 38f, 29.62f));
			VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(Global_1289485.f_47[0], VOLUME::CREATE_VOLUME_SPHERE(2538f, -1278f, 51f, 0f, 0f, 0f, 5f, 5f, 5f));
			Global_1289485.f_50[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2542.0984f, -1282.5137f, 48.21795f, 0f, 0f, 0f, 2f, 2f, 3f, "SDN-m_volTheaterStagePrompt");
			Global_1289485.f_47[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2689.602f, -1359.8439f, 48.572056f, 0f, 0f, 38.714283f, 4.602314f, 8.88861f, 3.333464f, "m_volTheaterMagicInterior");
			Global_1289485.f_50[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2686.7996f, -1362.0939f, 47.21417f, 0f, 0f, 0f, 2f, 2f, 3f, "m_volTheaterMagicPrompt");
			break;
	
		case 81:
			Global_1289485.f_47[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-348.075f, 698.609f, 117.637f, 0f, 0f, 15.5f, 7.2f, 13f, 2.973f, "m_volTheaterValentineInterior");
			Global_1289485.f_50[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-355.27203f, 704.94226f, 115.93616f, 0f, 0f, 0f, 4.696677f, 8.721128f, 2.973177f, "m_volTheaterValentineProm");
			break;
	}

	return;
}

void func_63(Hash hParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, float fParam5, float fParam6, float fParam7, char* sParam8) // Position - 0x245B
{
	if (_IS_NULL_VECTOR(fParam5))
		return;

	hLocal_19 = hParam0;
	hLocal_19.f_6 = sParam1;
	hLocal_19.f_7 = sParam2;
	hLocal_19.f_8 = sParam3;
	hLocal_19.f_9 = sParam4;
	hLocal_19.f_11 = { fParam5 };
	hLocal_19.f_10 = sParam8;
	hLocal_19.f_15 = 1;
	return;
}

void func_64(int iParam0, int iParam1, int iParam2) // Position - 0x24A2
{
	var unk;
	int i;

	if (hLocal_19.f_5 >= 3)
		return;

	if (iParam2 < 0 || iParam2 >= 60)
		return;

	if (iParam1 < 0 || iParam1 >= 60)
		return;

	if (iParam0 < 0 || iParam0 > 23)
		return;

	func_123(&unk, iParam0);
	func_124(&unk, iParam1);
	func_125(&unk, iParam2);
	func_126(&unk);

	for (i = 0; i <= hLocal_19.f_5 - 1; i = i + 1)
	{
		func_126(&hLocal_19.f_1[i]);
	
		if (hLocal_19.f_1[i] == unk)
			return;
	}

	hLocal_19.f_1[hLocal_19.f_5] = unk;
	hLocal_19.f_5 = hLocal_19.f_5 + 1;
	func_127(&(hLocal_19.f_1), hLocal_19.f_5);
	return;
}

BOOL func_65(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x2567
{
	int num;
	int num2;
	int num3;

	if (func_45() != -1)
		return 1;

	if (!func_86(iParam0))
		return 1;

	if (func_121(iParam0, 16))
		return 1;

	func_128(iParam0) && !func_129(iParam0);

	if (func_130(iParam0, &num, &num2, false, false))
	{
		if (func_131(iParam1))
			num = iParam1;
	
		if (func_131(iParam2))
			num2 = iParam2;
	
		if (Global_1896644 < num || Global_1896644 > num2)
			Global_1896644 = num;
	
		while (true)
		{
			if (!func_128(iParam0) || func_129(iParam0) || func_132(Global_1896644))
				func_133(Global_1896644, false);
		
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

BOOL func_66(int iParam0) // Position - 0x265F
{
	return Global_1940199 && iParam0 != false;
}

BOOL func_67(int iParam0) // Position - 0x2670
{
	return MISC::GET_GAME_TIMER() - iParam0 < Global_1900595;
}

struct<2> func_68(int iParam0) // Position - 0x2684
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

int func_69(var uParam0, var uParam1) // Position - 0x2698
{
	return uParam0;
}

void func_70(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x26A2
{
	!bParam2;

	switch (iParam0)
	{
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_136();
			func_134(iParam0);
			break;
	
		case -1925798111:
			func_134(-1925798111);
			func_135(-919512195);
			func_135(420709909);
			func_135(1703426636);
			break;
	
		case -1838352012:
			func_135(-1674179981);
			func_135(-1835851517);
			func_134(-1838352012);
			break;
	
		case -1835851517:
			func_135(-1674179981);
			func_135(-1838352012);
			func_134(-1835851517);
			break;
	
		case -1738165526:
			func_134(-1738165526);
			func_135(0);
			func_135(473295046);
			break;
	
		case -1717960576:
			func_135(210001842);
			func_134(-1717960576);
			break;
	
		case -1674179981:
			func_135(-1835851517);
			func_135(-1838352012);
			func_134(-1674179981);
			break;
	
		case -1612662716:
			func_135(1822001510);
			func_134(-1612662716);
			break;
	
		case -1414537028:
			func_135(38162571);
			func_135(1350391819);
			func_135(54073871);
			func_134(-1414537028);
			break;
	
		case -1311865656:
			func_134(-1311865656);
			func_135(1509509592);
			func_135(-959357075);
			func_135(405586984);
			break;
	
		case -1271608261:
			func_135(-150493654);
			func_135(1846061697);
			func_135(-1145519186);
			func_134(-1271608261);
			break;
	
		case -1223121209:
			func_134(-1223121209);
			func_135(630808005);
			break;
	
		case -1145519186:
			func_135(-150493654);
			func_135(-1271608261);
			func_135(1846061697);
			func_134(-1145519186);
			break;
	
		case -1124061431:
			func_135(198200492);
			func_134(-1124061431);
			func_135(52706132);
			func_135(-259123672);
			break;
	
		case -1080627546:
			if (bParam1)
				func_134(-1080627546);
			else
				func_135(-1080627546);
			break;
	
		case -1056767524:
		case -538889627:
		case -538880323:
			func_135(-538889627);
			func_135(-538880323);
			func_135(-1056767524);
			func_134(iParam0);
			break;
	
		case -959357075:
			func_134(-959357075);
			func_135(1509509592);
			func_135(405586984);
			func_135(-1311865656);
			break;
	
		case -919512195:
			func_134(-919512195);
			func_135(-1925798111);
			func_135(420709909);
			func_135(1703426636);
			break;
	
		case -664252410:
			func_135(2019386373);
			func_135(2109952320);
			func_134(-664252410);
			break;
	
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_137();
			func_134(iParam0);
			break;
	
		case -524145696:
			if (bParam1)
				func_134(-524145696);
			else
				func_135(-524145696);
		
			func_135(1626481264);
			func_135(282809459);
			break;
	
		case joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK_HOLD_OPEN"):
			if (bParam1)
			{
				func_134(joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK_HOLD_OPEN"));
			}
			else
			{
				func_135(joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK_HOLD_OPEN"));
				func_138(385812466);
				func_138(-1201452352);
			}
			break;
	
		case -502324015:
			func_135(1497516462);
			func_135(2016141805);
			func_135(1010885152);
			func_134(-502324015);
			break;
	
		case -434590080:
			func_135(1376646519);
			func_135(931649776);
			func_135(1743048395);
			func_135(449774763);
			func_134(-434590080);
			break;
	
		case -404698347:
			func_135(1306158345);
			func_135(1952610440);
			func_135(-223469678);
			func_135(1517904467);
			func_134(-404698347);
			break;
	
		case -259123672:
			func_135(198200492);
			func_135(-1124061431);
			func_135(52706132);
			func_134(-259123672);
			break;
	
		case -223469678:
			func_135(1306158345);
			func_135(1952610440);
			func_135(-404698347);
			func_135(1517904467);
			func_134(-223469678);
			break;
	
		case -150493654:
			func_135(-1271608261);
			func_135(1846061697);
			func_135(-1145519186);
			func_134(-150493654);
			break;
	
		case 0:
			func_134(0);
			func_135(473295046);
			func_135(-1738165526);
			break;
	
		case 38162571:
			func_135(-1414537028);
			func_135(1350391819);
			func_135(54073871);
			func_134(38162571);
			break;
	
		case 52706132:
			func_135(198200492);
			func_135(-1124061431);
			func_134(52706132);
			func_135(-259123672);
			break;
	
		case 54073871:
			func_135(-1414537028);
			func_135(38162571);
			func_135(1350391819);
			func_134(54073871);
			break;
	
		case 198200492:
			func_134(198200492);
			func_135(-1124061431);
			func_135(52706132);
			func_135(-259123672);
			break;
	
		case 210001842:
			func_135(-1717960576);
			func_134(210001842);
			break;
	
		case 280705402:
			func_135(1766284049);
			func_135(1926308480);
			func_134(280705402);
			break;
	
		case 282809459:
			func_134(282809459);
			func_135(1626481264);
			func_135(-524145696);
			break;
	
		case 405586984:
			func_134(405586984);
			func_135(1509509592);
			func_135(-959357075);
			func_135(-1311865656);
			break;
	
		case 420709909:
			func_134(420709909);
			func_135(-919512195);
			func_135(-1925798111);
			func_135(1703426636);
			break;
	
		case 439465264:
			if (func_49(1609506757))
				if (bParam1)
					func_134(439465264);
				else
					func_135(439465264);
			break;
	
		case 449774763:
			func_135(1376646519);
			func_135(931649776);
			func_135(-434590080);
			func_135(1743048395);
			func_134(449774763);
			break;
	
		case 473295046:
			func_134(473295046);
			func_135(0);
			func_135(-1738165526);
			break;
	
		case 630808005:
			func_134(630808005);
			func_135(-1223121209);
			break;
	
		case 885203519:
			if (bParam1)
				func_134(885203519);
			else
				func_135(885203519);
			break;
	
		case 931649776:
			func_135(1376646519);
			func_135(-434590080);
			func_135(1743048395);
			func_135(449774763);
			func_134(931649776);
			break;
	
		case 932909855:
			func_134(932909855);
			func_135(2051822093);
			break;
	
		case 1010885152:
			func_135(1497516462);
			func_135(2016141805);
			func_134(1010885152);
			func_135(-502324015);
			break;
	
		case 1306158345:
			func_135(1952610440);
			func_135(-223469678);
			func_135(-404698347);
			func_135(1517904467);
			func_134(1306158345);
			break;
	
		case 1350391819:
			func_135(-1414537028);
			func_135(38162571);
			func_135(54073871);
			func_134(1350391819);
			break;
	
		case 1376646519:
			func_135(931649776);
			func_135(-434590080);
			func_135(1743048395);
			func_135(449774763);
			func_134(1376646519);
			break;
	
		case 1453909576:
			func_134(1453909576);
			func_135(1643531967);
			break;
	
		case 1497516462:
			func_134(1497516462);
			func_135(2016141805);
			func_135(1010885152);
			func_135(-502324015);
			break;
	
		case 1509509592:
			func_134(1509509592);
			func_135(405586984);
			func_135(-959357075);
			func_135(-1311865656);
			break;
	
		case 1517904467:
			func_135(1306158345);
			func_135(1952610440);
			func_135(-223469678);
			func_135(-404698347);
			func_134(1517904467);
			break;
	
		case 1609506757:
			if (bParam1)
			{
				func_135(439465264);
				func_134(1609506757);
			}
			else
			{
				func_135(1609506757);
				func_135(439465264);
			}
			break;
	
		case 1626481264:
			func_134(1626481264);
			func_135(-524145696);
			func_135(282809459);
			break;
	
		case 1643531967:
			func_134(1643531967);
			func_135(1453909576);
			break;
	
		case 1703426636:
			func_134(1703426636);
			func_135(-919512195);
			func_135(-1925798111);
			func_135(420709909);
			break;
	
		case 1743048395:
			func_135(1376646519);
			func_135(931649776);
			func_135(-434590080);
			func_135(449774763);
			func_134(1743048395);
			break;
	
		case 1766284049:
			func_135(280705402);
			func_135(1926308480);
			func_134(1766284049);
			break;
	
		case 1822001510:
			func_135(-1612662716);
			func_134(1822001510);
			break;
	
		case 1846061697:
			func_135(-150493654);
			func_135(-1271608261);
			func_135(-1145519186);
			func_134(1846061697);
			break;
	
		case 1926308480:
			func_135(1766284049);
			func_135(280705402);
			func_134(1926308480);
			break;
	
		case 1952610440:
			func_135(1306158345);
			func_135(-223469678);
			func_135(-404698347);
			func_135(1517904467);
			func_134(1952610440);
			break;
	
		case 2016141805:
			func_135(1497516462);
			func_134(2016141805);
			func_135(1010885152);
			func_135(-502324015);
			break;
	
		case 2019386373:
			func_135(-664252410);
			func_135(2109952320);
			func_134(2019386373);
			break;
	
		case 2051822093:
			func_134(2051822093);
			func_135(932909855);
			break;
	
		case 2109952320:
			func_135(2019386373);
			func_135(-664252410);
			func_134(2109952320);
			break;
	
		default:
			if (bParam1)
				func_134(iParam0);
			else
				func_135(iParam0);
			break;
	}

	return;
}

void func_71(int iParam0, float fParam1, float fParam2, float fParam3, Volume volParam4, int iParam5) // Position - 0x31E7
{
	if (_IS_NULL_VECTOR(fParam1))
		return;

	func_139(iParam0);
	Global_1939959.f_5[iParam0 /*11*/].f_1 = { fParam1 };
	Global_1939959.f_5[iParam0 /*11*/].f_4 = volParam4;
	Global_1939959.f_5[iParam0 /*11*/].f_5 = iParam5;
	Global_1939959.f_5[iParam0 /*11*/].f_6 = func_140(iParam5, iParam0);
	return;
}

void func_72(int iParam0, float fParam1, float fParam2, float fParam3, Volume volParam4, int iParam5) // Position - 0x3245
{
	if (_IS_NULL_VECTOR(fParam1))
		return;

	Global_1289485.f_32[iParam0 /*6*/].f_1 = { fParam1 };
	Global_1289485.f_32[iParam0 /*6*/] = volParam4;
	Global_1289485.f_32[iParam0 /*6*/].f_4 = iParam5;
	Global_1289485.f_32[iParam0 /*6*/].f_5 = func_141(iParam5, iParam0);
	return;
}

void func_73(int iParam0, Volume volParam1, int iParam2, Volume volParam3, Volume volParam4, int iParam5, BOOL bParam6, BOOL bParam7, int iParam8, int iParam9) // Position - 0x329B
{
	if (iParam0 == 9 && !(!func_78() && func_142()))
		if (func_143(255))
			if (VOLUME::IS_POINT_IN_VOLUME(volParam1, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
				func_144(true, true);

	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	func_145(iParam0, true);
	Global_1051832.f_92[iParam0 /*75*/] = 0;
	Global_1051832.f_92[iParam0 /*75*/].f_18 = func_146(iParam2, iParam0);
	Global_1051832.f_92[iParam0 /*75*/].f_24 = volParam1;
	Global_1051832.f_92[iParam0 /*75*/].f_3 = { VOLUME::GET_VOLUME_COORDS(volParam1) };
	Global_1051832.f_92[iParam0 /*75*/].f_25 = volParam3;
	Global_1051832.f_92[iParam0 /*75*/].f_27 = volParam4;
	Global_1051832.f_92[iParam0 /*75*/].f_2 = iParam2;
	Global_1051832.f_92[iParam0 /*75*/].f_63 = func_147(Global_1051832.f_92[iParam0 /*75*/].f_18);
	Global_1051832.f_92[iParam0 /*75*/].f_72 = iParam9;
	Global_1051832.f_92[iParam0 /*75*/].f_73 = 0;
	Global_1051832.f_92[iParam0 /*75*/].f_48 = 0;

	if (iParam8 <= 0f)
		iParam8 = func_148(iParam0);

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
	func_149(iParam0, 4);
	func_150(iParam0);
	return;
}

void func_74(int iParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x344A
{
	int num;

	num = func_151(iParam0);

	if (num < 0 || num >= 15)
		return;

	Global_1051832.f_92[iParam0 /*75*/].f_31[num] = func_152(hParam1, false, false);

	if (func_153(Global_1051832.f_92[iParam0 /*75*/].f_31[num]))
		if (!func_154(Global_1051832.f_92[iParam0 /*75*/].f_31[num]))
			func_91(Global_1051832.f_92[iParam0 /*75*/].f_31[num], false, iParam2, bParam3, true, 0, bParam4, false);

	Global_1051832.f_92[iParam0 /*75*/].f_47 = Global_1051832.f_92[iParam0 /*75*/].f_47 + 1;
	return;
}

int func_75(int iParam0, BOOL bParam1) // Position - 0x34EE
{
	int num;
	Hash hash;
	float num2;
	var unk;

	if (func_155(iParam0, 16384) || func_155(iParam0, 32768) || _IS_NULL_VECTOR(Global_1051832.f_92[iParam0 /*75*/].f_3))
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

	num = func_146(func_156(), iParam0);

	if (!bParam1 && func_157(num, &hash, &num2, &unk) || bParam1 && func_158(num, &hash, &num2, &unk))
	{
		func_159(iParam0, hash, unk, num2, false);
		Global_1051832.f_92[iParam0 /*75*/].f_3 = { unk };
		Global_1051832.f_92[iParam0 /*75*/].f_8 = hash;
	}

	return Global_1051832.f_92[iParam0 /*75*/].f_6;
}

void func_76(int iParam0, Volume volParam1) // Position - 0x3615
{
	Global_1915656.f_3[iParam0 /*447*/].f_33 = volParam1;
	return;
}

void func_77(int iParam0, int iParam1) // Position - 0x362C
{
	func_160(&(Global_1051832.f_92[iParam0 /*75*/].f_49), iParam1);
	return;
}

BOOL func_78() // Position - 0x3646
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

BOOL func_79() // Position - 0x365A
{
	return func_161(func_68(0));
}

void func_80() // Position - 0x366B
{
	int i;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_1051832.f_3654[i /*19*/] = -1;
		Global_1051832.f_3654[i /*19*/].f_9 = -1;
	}

	return;
}

void func_81(int iParam0) // Position - 0x369F
{
	int i;
	Hash hash;
	float num;
	var unk;
	int num2;
	BOOL flag;

	for (i = 0; i < 4 && Global_1051832.f_3654[i /*19*/] != -1; i = i + 1)
	{
	}

	if (i == 4)
		return;

	Global_1051832.f_3654[i /*19*/].f_1 = 0;
	Global_1051832.f_3654[i /*19*/] = iParam0;

	if (func_157(Global_1051832.f_3654[i /*19*/], &hash, &num, &unk))
	{
		Global_1051832.f_3654[i /*19*/].f_6 = func_162(hash, unk, num, 0, 0, false);
		Global_1051832.f_3654[i /*19*/].f_2 = { unk };
		TASK::_0xA7479FB665361EDB(Global_1051832.f_3654[i /*19*/].f_6, 0);
		TASK::_0xE69FDA40AAC3EFC0(Global_1051832.f_3654[i /*19*/].f_6, 0);
	}

	num2 = func_163(Global_1051832.f_3654[i /*19*/]);
	flag = num2 != -1;

	if (flag)
	{
		Global_1051832.f_3654[i /*19*/].f_9 = num2;
	
		if (func_157(num2, &hash, &num, &unk))
		{
			Global_1051832.f_3654[i /*19*/].f_13 = func_162(hash, unk, num, 0, 0, false);
			Global_1051832.f_3654[i /*19*/].f_10 = { unk };
			TASK::_0xA7479FB665361EDB(Global_1051832.f_3654[i /*19*/].f_13, 0);
			TASK::_0xE69FDA40AAC3EFC0(Global_1051832.f_3654[i /*19*/].f_13, 0);
		}
	}

	Global_1051832.f_3654[i /*19*/].f_5 = func_147(Global_1051832.f_3654[i /*19*/]);

	if (!func_164(30, 4))
	{
		func_149(30, 4);
		func_150(30);
	}

	return;
}

BOOL func_82(int iParam0, Volume volParam1, BOOL bParam2) // Position - 0x381C
{
	PersChar persChar;

	if (func_45() != -1)
		return false;

	if (!func_165(iParam0, false))
		return false;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return false;

	persChar = func_83(iParam0);

	if (persChar == 0)
		return false;

	VOLUME::SET_VOLUME_OWNER_PERSISTENT_CHARACTER(volParam1, persChar, bParam2);
	return true;
}

PersChar func_83(int iParam0) // Position - 0x386A
{
	if (!func_131(iParam0))
		return 0;

	return Global_1893799[iParam0 /*3*/].f_1;
}

void func_84(float fParam0, float fParam1, float fParam2, float fParam3) // Position - 0x388A
{
	Global_1893611.f_182 = fParam0;
	Global_1893611.f_183 = fParam1;
	Global_1893611.f_184 = fParam2;
	Global_1893611.f_185 = fParam3;
	return;
}

void func_85(var uParam0, Volume volParam1, int iParam2) // Position - 0x38B2
{
	if (uParam0->f_61 >= 20)
		return;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return;

	if (!func_166(iParam2))
		return;

	uParam0->[uParam0->f_61 /*3*/] = volParam1;
	uParam0->[uParam0->f_61 /*3*/].f_1 = iParam2;
	uParam0->[uParam0->f_61 /*3*/].f_2 = 0;
	uParam0->f_61 = uParam0->f_61 + 1;
	return;
}

BOOL func_86(int iParam0) // Position - 0x390B
{
	return iParam0 >= 0 && iParam0 <= 150;
}

void func_87() // Position - 0x3921
{
	int i;

	for (i = 0; i < 17; i = i + 1)
	{
		if (func_167(i))
			Global_1900426[i] = -1;
	}

	return;
}

void func_88(int iParam0, Hash hParam1) // Position - 0x394E
{
	if (!func_167(iParam0))
		return;

	if (!func_168(hParam1))
		return;

	Global_1900426[iParam0] = hParam1;
	return;
}

void func_89() // Position - 0x397A
{
	if (func_169(-367.15f, 788.29f, 116f, true) < 300f)
	{
		func_170();
		bLocal_145 = true;
	}
	else if (bLocal_145)
	{
		func_171();
		bLocal_145 = false;
	}

	return;
}

BOOL func_90(var uParam0) // Position - 0x39B5
{
	if (func_172())
	{
		if (!*uParam0)
		{
			*uParam0 = 1;
			return true;
		}
	}
	else if (*uParam0)
	{
		*uParam0 = 0;
		return true;
	}

	return false;
}

void func_91(Hash hParam0, BOOL bParam1, int iParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x39E5
{
	func_152(hParam0, false, false);

	if (func_153(hParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hParam0, iParam2, bParam6);
	
		if (iParam5 > 0f)
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(hParam0, iParam5);
	
		if (bParam3)
			func_173(hParam0, iParam2, true, bParam6);
		else if (bParam1)
			if (bParam4)
				func_174(hParam0, true);
			else
				func_175(hParam0, true);
		else
			func_176(hParam0, true);
	
		if (bParam7)
			OBJECT::_DOOR_SYSTEM_FORCE_SHUT(hParam0, true);
	}
	else if (func_177())
	{
	}
	else
	{
		NETWORK::NETWORK_IS_IN_SESSION();
	}

	return;
}

void func_92(Hash hParam0, int iParam1) // Position - 0x3A70
{
	func_91(hParam0, true, 0, false, false, 0, false, false);
	return;
}

void func_93(int iParam0, Volume volParam1, var uParam2) // Position - 0x3A85
{
	if (!*uParam2)
	{
		if (func_178(Global_33, volParam1, true, 0))
		{
			func_180(func_179(iParam0), 1);
			*uParam2 = 1;
		}
	}
	else if (!func_178(Global_33, volParam1, true, 0))
	{
		*uParam2 = 0;
	}

	return;
}

void func_94() // Position - 0x3AC7
{
	float entityAnimCurrentTime;

	if (!hLocal_19.f_15)
		return;

	if (hLocal_19.f_27 > MISC::GET_GAME_TIMER())
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(hLocal_19.f_17) && hLocal_19.f_14 > 1 && hLocal_19 != 0)
	{
		if (func_181() && func_182(Global_34, hLocal_19.f_11) < 100f)
			if (hLocal_19.f_18 == 0)
				hLocal_19.f_18 = ENTITY::PIN_CLOSEST_MAP_ENTITY(hLocal_19, hLocal_19.f_11, 11);
			else if (ENTITY::IS_MAP_ENTITY_PINNED(hLocal_19.f_18))
				hLocal_19.f_17 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_GET_PINNED_MAP_ENTITY(hLocal_19.f_18));
	
		hLocal_19.f_27 = MISC::GET_GAME_TIMER() + 1800;
	}

	switch (hLocal_19.f_14)
	{
		case 0:
			func_183();
			hLocal_19.f_14 = 1;
			break;
	
		case 1:
			if (func_184())
				hLocal_19.f_14 = 2;
			break;
	
		case 2:
			if (func_185())
			{
				hLocal_19.f_14 = 3;
				hLocal_19.f_24 = 0;
				hLocal_19.f_21 = 0;
				hLocal_19.f_22 = func_187(func_186());
			
				if (hLocal_19.f_22 > 12)
					hLocal_19.f_22 = hLocal_19.f_22 % 12;
			}
			break;
	
		case 3:
			hLocal_19.f_25 = 1;
		
			if (ENTITY::DOES_ENTITY_EXIST(hLocal_19.f_17))
			{
				if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(hLocal_19.f_17))
				{
					hLocal_19.f_25 = 0;
					ENTITY::PLAY_ENTITY_ANIM(hLocal_19.f_17, hLocal_19.f_7, hLocal_19.f_6, 1000f, false, true, false, 0, 0);
					hLocal_19.f_14 = 4;
				}
			}
		
			if (hLocal_19.f_21 >= hLocal_19.f_22)
				hLocal_19.f_14 = 2;
			break;
	
		case 4:
			if (func_188(hLocal_19.f_17, hLocal_19.f_6, hLocal_19.f_7, 0))
			{
				ENTITY::PLAY_ENTITY_ANIM(hLocal_19.f_17, hLocal_19.f_8, hLocal_19.f_6, 1000f, true, true, false, 0, 0);
				hLocal_19.f_23 = MISC::GET_GAME_TIMER() + 1800;
				hLocal_19.f_26 = 0;
				hLocal_19.f_14 = 5;
			}
			break;
	
		case 5:
			entityAnimCurrentTime = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(hLocal_19.f_17, hLocal_19.f_6, hLocal_19.f_8);
		
			if (entityAnimCurrentTime > 0.5f)
			{
				if (hLocal_19.f_26)
				{
					hLocal_19.f_21 = hLocal_19.f_21 + 1;
					hLocal_19.f_26 = 0;
				}
			}
			else if (!hLocal_19.f_26 && entityAnimCurrentTime > 0.05f)
			{
				hLocal_19.f_21 = hLocal_19.f_21 + 1;
				hLocal_19.f_26 = 1;
			}
		
			if (hLocal_19.f_21 >= hLocal_19.f_22 && func_188(hLocal_19.f_17, hLocal_19.f_6, hLocal_19.f_8, 0.02f) || hLocal_19.f_26)
			{
				ENTITY::PLAY_ENTITY_ANIM(hLocal_19.f_17, hLocal_19.f_9, hLocal_19.f_6, 8f, false, false, false, 0, 0);
				hLocal_19.f_14 = 2;
			}
			break;
	}

	if (hLocal_19.f_25 && hLocal_19.f_14 > 2)
	{
		if (AUDIO::_HAS_SOUND_AUDIO_NAME_FINISHED(hLocal_19.f_10, "CHURCH_BELL_SOUNDS") && hLocal_19.f_24 < MISC::GET_GAME_TIMER())
		{
			hLocal_19.f_24 = MISC::GET_GAME_TIMER() + 1800;
			AUDIO::_PLAY_SOUND_FROM_POSITION(hLocal_19.f_10, hLocal_19.f_11, "CHURCH_BELL_SOUNDS", false, 0, true, 0);
			hLocal_19.f_21 = hLocal_19.f_21 + 1;
		}
	}

	return;
}

BOOL func_95(int iParam0, int iParam1) // Position - 0x3D92
{
	return iParam0 && iParam1 != false;
}

BOOL func_96(var uParam0, int iParam1) // Position - 0x3DA1
{
	return uParam0->f_62 && iParam1 != false;
}

BOOL func_97() // Position - 0x3DB2
{
	return func_95(Global_1940199, 8192);
}

BOOL func_98(var uParam0, int iParam1) // Position - 0x3DC5
{
	return uParam0->f_2 && iParam1 != false;
}

BOOL func_99(int iParam0) // Position - 0x3DD6
{
	if (!func_86(iParam0))
		return false;

	return Global_1887363[iParam0 /*36*/].f_21 == 1 || Global_1887363[iParam0 /*36*/].f_21 == 2 && !func_189(iParam0);
}

BOOL func_100(int iParam0, int iParam1) // Position - 0x3E16
{
	if (iParam0 < 0 || iParam0 >= 150)
		return false;

	return Global_1887363[iParam0 /*36*/].f_22 && iParam1 != false;
}

int func_101() // Position - 0x3E43
{
	return Global_1896646.f_41;
}

void func_102(int iParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0x3E51
{
	BOOL flag;
	const char* StringToTest;
	char* str;
	Hash hash;
	int num;
	int num2;
	var unk;
	float temperatureAtCoords;
	char* str2;
	char* str3;
	var unk2;

	if (!func_190())
		return;

	StringToTest = func_191(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &flag);

	if (MISC::IS_STRING_NULL_OR_EMPTY(StringToTest))
	{
		if (bParam3)
			return;
	
		StringToTest = "DISTRICT_GRIZZLIES";
	}

	if (!func_192(iParam4))
		if (func_86(iParam0))
			iParam4 = func_193(func_9(iParam0));
		else
			iParam4 = func_193(iParam1);

	if (func_192(iParam4))
		hash = func_194(iParam4);

	if (flag && bParam3)
	{
		str = func_196(func_195(iParam2));
	}
	else if (func_197(iParam1, 2) || func_198(iParam4, 2) && !Global_1893611.f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
				str = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
			else
				str = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
	
		Global_1893611.f_9 = 1;
	}
	else if (func_86(iParam0) && func_121(iParam0, 16777216) && !Global_1893611.f_9)
	{
		str = MISC::VAR_STRING(2, "LAW_UI_RESTRICTED_AREA");
		Global_1893611.f_9 = 1;
	}
	else if (hash >= 1 && !Global_1893611.f_9)
	{
		str = MISC::VAR_STRING(2, "REGION_BOUNTY", hash);
		Global_1893611.f_9 = 1;
	}
	else
	{
		num = func_187(func_186());
		num2 = func_199(func_186());
	
		if (num2 < 10)
			TEXT_LABEL_APPEND_STRING(&unk, "0", 8);
	
		TEXT_LABEL_APPEND_INT(&unk, num2, 8);
		temperatureAtCoords = MISC::_GET_TEMPERATURE_AT_COORDS(Global_34);
	
		if (!MISC::_SHOULD_USE_24_HOUR_CLOCK())
		{
			str3 = "AM";
		
			if (num >= 12)
			{
				str3 = "PM";
			
				if (num > 12)
					num = num - 12;
			}
			else if (num == 0)
			{
				num = 12;
			}
		
			str2 = "TIME_AND_TEMP_C";
		
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				temperatureAtCoords = func_200(temperatureAtCoords);
				str2 = "TIME_AND_TEMP_F";
			}
		
			TEXT_LABEL_ASSIGN_INT(&unk2, BUILTIN::ROUND(temperatureAtCoords), 8);
			str = MISC::VAR_STRING(674, str2, num, func_201(&unk, joaat("COLOR_PURE_WHITE")), str3, func_201(&unk2, joaat("COLOR_PURE_WHITE")));
		}
		else
		{
			str2 = "TIME_AND_TEMP_C_24";
		
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				temperatureAtCoords = func_200(temperatureAtCoords);
				str2 = "TIME_AND_TEMP_F_24";
			}
		
			TEXT_LABEL_ASSIGN_INT(&unk2, BUILTIN::ROUND(temperatureAtCoords), 8);
			str = MISC::VAR_STRING(162, str2, num, func_201(&unk, joaat("COLOR_PURE_WHITE")), func_201(&unk2, joaat("COLOR_PURE_WHITE")));
		}
	
		Global_1893611.f_9 = 0;
	}

	Global_1939102.f_145 = func_202(StringToTest, str, 4000, 0, 0, 0, false, true);
	return;
}

void func_103(var uParam0, int iParam1) // Position - 0x40C3
{
	uParam0->f_2 = uParam0->f_2 || iParam1;
	return;
}

void func_104(int iParam0, BOOL bParam1) // Position - 0x40D6
{
	if (Global_1572887.f_12 && func_45() == 0)
		return;

	if (!func_203(iParam0))
		return;

	if (func_121(iParam0, 32))
		return;

	func_21(iParam0, 32);
	func_204(&Global_1940199, 16384);
	func_180(func_205(joaat("discovered"), joaat("AREAS")), 1);

	switch (func_9(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_180(func_205(joaat("discovered"), joaat("lowlands_areas")), 1);
			break;
	
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_180(func_205(joaat("discovered"), joaat("mountain_areas")), 1);
			break;
	
		case 3:
		case 10:
			func_180(func_205(joaat("discovered"), joaat("foothills_areas")), 1);
			break;
	
		case 4:
		case 9:
			func_180(func_205(joaat("discovered"), joaat("plains_areas")), 1);
			break;
	
		case 8:
			func_180(func_205(joaat("discovered"), joaat("guama_areas")), 1);
			break;
	
		case 13:
		case 14:
		case 15:
		case 16:
			func_180(func_205(joaat("discovered"), joaat("new_austin_areas")), 1);
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

void func_105(BOOL bParam0) // Position - 0x473F
{
	if (bParam0)
		Global_1893611 = Global_1893611 | true;
	else
		Global_1893611 = Global_1893611 - Global_1893611 & true;

	return;
}

BOOL func_106(int iParam0) // Position - 0x4768
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

void func_107() // Position - 0x47AD
{
	func_206(81);
	return;
}

Hash func_108(int iParam0, BOOL bParam1) // Position - 0x47BB
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

void func_109(int iParam0, BOOL bParam1) // Position - 0x4F80
{
	if (Global_1572887.f_14 == -1)
	{
		Global_8130[iParam0 /*11*/] = Global_8130[iParam0 /*11*/] - Global_8130[iParam0 /*11*/] && bParam1;
		return;
	}

	Global_1072759.f_19611[iParam0 /*11*/] = Global_1072759.f_19611[iParam0 /*11*/] - Global_1072759.f_19611[iParam0 /*11*/] && bParam1;
	return;
}

void func_110(BOOL bParam0) // Position - 0x4FD3
{
	if (bParam0)
		Global_1893611 = Global_1893611 | 2;
	else
		Global_1893611 = Global_1893611 - Global_1893611 & 2;

	return;
}

void func_111(int iParam0) // Position - 0x4FFC
{
	func_84(0.775f, 0.2f, 0.025f, 0f);
	VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(iLocal_131);
	MISC::CLEAR_TACTICAL_NAV_MESH_POINTS();
	func_207(volLocal_128);
	func_208();
	func_209();
	func_135(1250636944);
	func_171();
	func_210();
	return;
}

void func_112(int iParam0) // Position - 0x5042
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_1939959.f_5[i /*11*/].f_5 == iParam0)
			func_139(i);
	}

	return;
}

void func_113(int iParam0) // Position - 0x5073
{
	int i;

	for (i = 0; i < 40; i = i + 1)
	{
		if (Global_1915656.f_3[i /*447*/].f_8 == iParam0)
			func_211(i);
	}

	return;
}

BOOL func_114(int iParam0, BOOL bParam1) // Position - 0x50A6
{
	int num;
	int num2;
	int num3;

	if (func_45() != -1)
		return true;

	if (!func_86(iParam0))
		return true;

	if (func_130(iParam0, &num, &num2, false, false))
	{
		if (Global_1896644.f_1 < num || Global_1896644.f_1 > num2)
			Global_1896644.f_1 = num;
	
		while (true)
		{
			if (!func_212(Global_1896644.f_1, 16))
				func_213(Global_1896644.f_1, false);
		
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

BOOL func_115(int iParam0) // Position - 0x515C
{
	int i;

	for (i = 0; i < 40; i = i + 1)
	{
		if (func_214(i) || func_215(i))
		{
		}
		else
		{
			switch (i)
			{
				case 30:
					func_216();
					break;
			
				case 32:
					func_217();
					break;
			
				case 34:
					break;
			
				default:
					if (Global_1051832.f_92[i /*75*/].f_2 == iParam0)
						func_145(i, false);
					break;
			}
		}
	}

	return true;
}

int func_116(int iParam0, int iParam1) // Position - 0x51D6
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

BOOL func_117(int iParam0) // Position - 0x6A7B
{
	int num;

	num = func_218(iParam0);

	if (num < 336)
		return false;

	return true;
}

BOOL func_118(int iParam0) // Position - 0x6A98
{
	if (iParam0 == joaat("WS_MP_HIDEOUT_CLEMENS_COVE"))
		return true;

	return false;
}

int func_119(Hash hParam0) // Position - 0x6AAF
{
	if (STREAMING::IS_IPL_ACTIVE_HASH(hParam0))
		return 1;

	if (func_219())
		return 0;

	STREAMING::REQUEST_IPL_HASH(hParam0);
	return 0;
}

float func_120(float fParam0) // Position - 0x6AD6
{
	return fParam0 * 0.017453292f;
}

BOOL func_121(int iParam0, BOOL bParam1) // Position - 0x6AE6
{
	if (Global_1572887.f_14 == -1)
		return Global_8130[iParam0 /*11*/] && bParam1 != false;

	return Global_1072759.f_19611[iParam0 /*11*/] && bParam1 != false;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x6B17
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

void func_123(var uParam0, int iParam1) // Position - 0x6B41
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_124(var uParam0, int iParam1) // Position - 0x6B7C
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_125(var uParam0, int iParam1) // Position - 0x6BB5
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

void func_126(var uParam0) // Position - 0x6BED
{
	BOOL flag;

	if (*uParam0 == -15)
		return;

	flag = func_186();
	func_221(uParam0, func_220(flag));
	func_223(uParam0, func_222(flag));
	func_225(uParam0, func_224(flag));
	return;
}

void func_127(var uParam0, int iParam1) // Position - 0x6C2B
{
	BOOL flag;
	int i;
	int j;
	var unk;

	if (iParam1 < 2)
		return;

	flag = true;
	i = 0;
	j = 0;

	while (flag)
	{
		for (i = iParam1 - 1; i >= 0; i = i + -1)
		{
			flag = false;
		
			for (j = 0; j <= i - 1; j = j + 1)
			{
				if (uParam0->[j] > uParam0->[j + 1])
				{
					unk = uParam0->[j];
					uParam0->[j] = uParam0->[j + 1];
					uParam0->[j + 1] = unk;
					flag = true;
				}
			}
		}
	}

	return;
}

BOOL func_128(int iParam0) // Position - 0x6CAE
{
	if (!func_86(iParam0))
		return false;

	return func_121(iParam0, 33554432);
}

BOOL func_129(int iParam0) // Position - 0x6CCF
{
	if (!func_86(iParam0))
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

BOOL func_130(int iParam0, var uParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0x6D22
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

BOOL func_131(int iParam0) // Position - 0x73E2
{
	return iParam0 > -1 && iParam0 < 948;
}

BOOL func_132(int iParam0) // Position - 0x73F9
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

int func_133(int iParam0, BOOL bParam1) // Position - 0x743C
{
	if (!func_131(iParam0))
		return 0;

	if (!func_212(iParam0, 2))
		return 0;

	if (func_212(iParam0, 32) && !bParam1)
	{
		func_227(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_226(iParam0)));
	
		if (func_45() == -1)
		{
			if (func_212(iParam0, 2048))
			{
				PERSCHAR::_REVIVE_PERSCHAR(func_83(iParam0));
				func_228(iParam0, 2048);
			}
		
			PERSCHAR::_0xFCC6DB8DBE709BC8(func_83(iParam0));
		}
	
		return 0;
	}

	if (!func_229(iParam0) && func_45() == -1)
		return 0;

	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_83(iParam0)))
	{
		func_228(iParam0, 128);
		return 1;
	}

	func_227(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_226(iParam0)));
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_83(iParam0));

	if (func_212(iParam0, 2048))
	{
		PERSCHAR::_REVIVE_PERSCHAR(func_83(iParam0));
		func_228(iParam0, 2048);
	}

	return 1;
}

void func_134(int iParam0) // Position - 0x7527
{
	int num;
	int num2;
	int BitIndex;

	num = func_116(iParam0, 1);
	num2 = num / 31;
	BitIndex = num % 31;
	MISC::SET_BIT(&Global_38.f_118[num2], BitIndex);
	Global_1939596 = 0;
	return;
}

void func_135(int iParam0) // Position - 0x755A
{
	int num;
	int num2;
	int BitIndex;

	num = func_116(iParam0, 1);
	num2 = num / 31;
	BitIndex = num % 31;
	MISC::CLEAR_BIT(&Global_38.f_118[num2], BitIndex);
	Global_1939596 = 0;
	return;
}

void func_136() // Position - 0x758D
{
	func_135(-939420910);
	func_135(-1187950766);
	func_135(356365161);
	func_135(753127042);
	func_135(-2038424081);
	func_135(1884271742);
	func_135(459290420);
	return;
}

void func_137() // Position - 0x75D4
{
	func_135(704802028);
	func_135(588987611);
	func_135(2008888900);
	func_135(1649996811);
	func_135(227918160);
	func_135(168171957);
	func_135(1193080109);
	func_135(-491981251);
	func_135(-639037538);
	func_135(-618620429);
	return;
}

void func_138(Hash hParam0) // Position - 0x7636
{
	if (func_153(hParam0) && func_230())
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(hParam0);

	return;
}

void func_139(int iParam0) // Position - 0x7656
{
	func_231(Global_1939959.f_5[iParam0 /*11*/].f_6, true);
	func_232(Global_1939959.f_5[iParam0 /*11*/].f_6, false);

	if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1939959.f_5[iParam0 /*11*/].f_8))
		VOLUME::_RELEASE_LOCK_VOLUME(Global_1939959.f_5[iParam0 /*11*/].f_8);

	func_233(iParam0, 8192);
	func_233(iParam0, 32768);
	func_233(iParam0, 524288);
	func_233(iParam0, 1048576);
	Global_1939959.f_5[iParam0 /*11*/].f_10 = 0;
	Global_1939959.f_5[Global_1939959 /*11*/].f_9 = 0;
	Global_1939959.f_5[iParam0 /*11*/] = false;
	Global_1939959.f_5[iParam0 /*11*/].f_1 = { 0f, 0f, 0f };
	Global_1939959.f_5[iParam0 /*11*/].f_4 = 0;
	Global_1939959.f_5[iParam0 /*11*/].f_5 = -1;
	Global_1939959.f_5[iParam0 /*11*/].f_6 = -1;
	Global_1939959.f_5[iParam0 /*11*/].f_7 = 0;
	return;
}

int func_140(int iParam0, int iParam1) // Position - 0x7736
{
	switch (iParam0)
	{
		case 5:
			switch (iParam1)
			{
				case 1:
					return 1;
			
				case 2:
					return 2;
			
				default:
					break;
			}
			break;
	
		case 40:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				default:
					break;
			}
			break;
	
		case 81:
			switch (iParam1)
			{
				case 0:
					return 5;
			
				case 1:
					return 6;
			
				default:
					break;
			}
			break;
	
		case 98:
			switch (iParam1)
			{
				case 0:
					return 8;
			
				default:
					break;
			}
			break;
	
		case 111:
			switch (iParam1)
			{
				case 2:
					return 3;
			
				default:
					break;
			}
			break;
	
		case 121:
			switch (iParam1)
			{
				case 0:
					return 4;
			
				default:
					break;
			}
			break;
	
		case 127:
			switch (iParam1)
			{
				case 0:
					return 7;
			
				default:
					break;
			}
			break;
	}

	return -1;
}

int func_141(int iParam0, int iParam1) // Position - 0x7819
{
	switch (iParam0)
	{
		case 5:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 1;
			
				default:
					break;
			}
			break;
	
		case 81:
			switch (iParam1)
			{
				case 1:
					return 2;
			
				default:
					break;
			}
			break;
	}

	return -1;
}

BOOL func_142() // Position - 0x786A
{
	return func_234(func_68(0));
}

BOOL func_143(int iParam0) // Position - 0x787B
{
	return !func_235(iParam0);
}

void func_144(BOOL bParam0, BOOL bParam1) // Position - 0x788A
{
	if (func_236(255) == 4)
		return;

	if (_IS_NULL_VECTOR(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
		return;

	if (!bParam0)
	{
		func_237(0);
	}
	else
	{
		if (bParam1)
			func_238(0, false, 0, true);
	
		func_239(0);
		func_240(&(Global_1102813.f_3839));
		Global_1102813.f_3839 = 0f;
		Global_1102813.f_3839.f_5 = 1;
		Global_1102813.f_3839.f_16 = 0;
		Global_1102813.f_3839.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102813.f_3839.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102813.f_3839.f_17 = { Global_1901671.f_51.f_1, Global_1901671.f_51.f_1, Global_1901671.f_51.f_1 };
		Global_1102813.f_3839.f_17.f_9 = joaat("volSphere");
		func_241(&(Global_1102813.f_3878));
		Global_1102813.f_3878.f_6 = { Global_1102813.f_3839.f_17.f_6 };
		Global_1102813.f_3878 = Global_1102813.f_3839;
		Global_1102813.f_3878.f_5 = 1;
	
		if (bParam1)
		{
			Global_1102813.f_26.f_3341 = 0;
			Global_1102813.f_26.f_3342 = 0;
		}
	}

	func_242(Global_1102813.f_3839, 36);
	func_243(Global_1102813.f_3878, 36);
	return;
}

void func_145(int iParam0, BOOL bParam1) // Position - 0x79D5
{
	BOOL flag;
	Entity propForScenarioPoint;
	int i;
	int num;

	flag = func_244(iParam0) && !bParam1;

	if (!flag && !func_155(iParam0, 65536))
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
	else if (func_164(iParam0, 67108864) && ENTITY::DOES_ENTITY_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_21))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(Global_1051832.f_92[iParam0 /*75*/].f_21);
	}

	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_24))
	{
		NETWORK::_NETWORK_SPAWN_CONFIG_REMOVE_EXCLUSION_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_24);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_24);
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_24);
	
		if (func_155(iParam0, 524288))
			VOLUME::DELETE_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_24);
	}

	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_25))
	{
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_25);
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_25);
	
		if (func_155(iParam0, 524288))
			VOLUME::DELETE_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_25);
	}

	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_27))
		if (func_155(iParam0, 524288))
			VOLUME::DELETE_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_27);

	if (func_164(iParam0, 16384) && !flag)
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_6))
		{
			propForScenarioPoint = TASK::GET_PROP_FOR_SCENARIO_POINT(Global_1051832.f_92[iParam0 /*75*/].f_6, "mp001_s_mp_catalogue01x_noanim_PH_R_HAND");
		
			if (ENTITY::DOES_ENTITY_EXIST(propForScenarioPoint))
				ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&propForScenarioPoint);
		
			TASK::_DELETE_SCENARIO_POINT(Global_1051832.f_92[iParam0 /*75*/].f_6);
		}
	
		Global_1051832.f_92[iParam0 /*75*/].f_6 = 0;
		func_245(iParam0, 16384);
	}

	Global_1051832.f_92[iParam0 /*75*/] = -1;
	Global_1051832.f_92[iParam0 /*75*/].f_3 = { 0f, 0f, 0f };
	Global_1051832.f_92[iParam0 /*75*/].f_48 = 0;
	Global_1051832.f_92[iParam0 /*75*/].f_73 = 1;
	Global_1915656.f_3[iParam0 /*447*/].f_16 = 0;
	num = func_151(iParam0);

	if (num >= 15)
	{
		Global_1915656.f_3[iParam0 /*447*/].f_409 = 0;
	}
	else
	{
		for (i = 0; i < num; i = i + 1)
		{
			func_138(Global_1051832.f_92[iParam0 /*75*/].f_31[i]);
			Global_1051832.f_92[iParam0 /*75*/].f_31[i] = 0;
		}
	
		Global_1051832.f_92[iParam0 /*75*/].f_47 = 0;
	}

	func_246(iParam0);

	if (func_155(iParam0, 262144))
		Global_1051832.f_92[iParam0 /*75*/].f_49 = 262144;
	else
		func_247(iParam0);

	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_24) && func_248(iParam0, 2))
	{
		VOLUME::_SET_VOLUME_RELATIONSHIP(Global_1051832.f_92[iParam0 /*75*/].f_24, joaat("REL_NO_RELATIONSHIP"));
		PATHFIND::_REMOVE_NAVMESH_BLOCKING_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_24);
	}

	Global_1051832.f_92[iParam0 /*75*/].f_50 = Global_1051832.f_92[iParam0 /*75*/].f_50 & 8;
	Global_1051832.f_92[iParam0 /*75*/].f_1 = Global_1051832.f_92[iParam0 /*75*/].f_1 & 2113536;
	func_249(iParam0);
	Global_1051832.f_92[iParam0 /*75*/].f_18 = -1;
	Global_1051832.f_92[iParam0 /*75*/].f_2 = -1;
	return;
}

int func_146(Hash hParam0, int iParam1) // Position - 0x7D84
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

	switch (hParam0)
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

int func_147(int iParam0) // Position - 0x86F6
{
	if (!func_250(iParam0))
		return 0;

	if (Global_1051832.f_4492[iParam0] == 0)
		Global_1051832.f_4492[iParam0] = func_251(iParam0);

	return Global_1051832.f_4492[iParam0];
}

int func_148(int iParam0) // Position - 0x8737
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

void func_149(int iParam0, int iParam1) // Position - 0x87D4
{
	!func_164(iParam0, iParam1);
	Global_1051832.f_92[iParam0 /*75*/].f_1 = Global_1051832.f_92[iParam0 /*75*/].f_1 || iParam1;
	return;
}

void func_150(int iParam0) // Position - 0x8803
{
	Global_1051832[Global_1051832.f_41] = iParam0;
	Global_1051832.f_41 = Global_1051832.f_41 + 1;

	if (Global_1051832.f_41 >= 40)
		Global_1051832.f_41 = 40 - 1;

	return;
}

int func_151(int iParam0) // Position - 0x883C
{
	return Global_1051832.f_92[iParam0 /*75*/].f_47;
}

Hash func_152(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x8850
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(hParam0))
		if (NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[0]) && bParam1)
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(hParam0, true, true, false, Global_1051645.f_16[0], 0, false);
		else
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(hParam0, true, false, false, 0, 0, false);
	else if (NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[0]) && bParam1)
		if (!OBJECT::_IS_DOOR_REGISTERED_WITH_NETWORK(hParam0))
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(hParam0, true, true, false, Global_1051645.f_16[0], 0, false);

	if (bParam2)
		OBJECT::_DOOR_SYSTEM_SET_ABLE_TO_CHANGE_OPEN_RATIO_WHILE_LOCKED(hParam0, true);

	return hParam0;
}

BOOL func_153(Hash hParam0) // Position - 0x88F4
{
	if (func_252(hParam0))
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(hParam0);

	return false;
}

BOOL func_154(Hash hParam0) // Position - 0x890F
{
	func_152(hParam0, false, false);

	if (func_153(hParam0))
		return OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) == 0;

	return false;
}

BOOL func_155(int iParam0, BOOL bParam1) // Position - 0x8938
{
	return Global_1051832.f_92[iParam0 /*75*/].f_49 && bParam1 != false;
}

Hash func_156() // Position - 0x8951
{
	return Global_1893611.f_2;
}

BOOL func_157(int iParam0, Hash* phParam1, float* pfParam2, Vector3* pvParam3) // Position - 0x895F
{
	return func_253(iParam0, "sHash", phParam1, "fHeading", pfParam2, "vPos", pvParam3);
}

BOOL func_158(int iParam0, Hash* phParam1, float* pfParam2, Vector3* pvParam3) // Position - 0x897F
{
	return func_253(iParam0, "sClosedHash", phParam1, "fClosedHeading", pfParam2, "vClosedPos", pvParam3);
}

void func_159(int iParam0, Hash hParam1, Vector3 vParam2, var uParam3, var uParam4, float fParam5, BOOL bParam6) // Position - 0x899F
{
	if (bParam6)
		MISC::GET_GROUND_Z_FOR_3D_COORD(vParam2, &(vParam2.f_2), false);

	Global_1051832.f_92[iParam0 /*75*/].f_6 = func_162(hParam1, vParam2, fParam5, 0, 0, false);
	Global_1915656.f_3[iParam0 /*447*/].f_16 = Global_1051832.f_92[iParam0 /*75*/].f_6;
	TASK::_SET_SCENARIO_POINT_FLAG(Global_1051832.f_92[iParam0 /*75*/].f_6, 23, true);
	TASK::_0xA7479FB665361EDB(Global_1051832.f_92[iParam0 /*75*/].f_6, 0);
	func_149(iParam0, 16384);
	return;
}

void func_160(BOOL bParam0, int iParam1) // Position - 0x8A1B
{
	*bParam0 = *bParam0 || iParam1;
	return;
}

BOOL func_161(var uParam0, var uParam1) // Position - 0x8A2C
{
	return func_254(uParam0, 9, 12);
}

int func_162(Hash hParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x8A3F
{
	return TASK::CREATE_SCENARIO_POINT_HASH(hParam0, vParam1, fParam4, iParam5, iParam6, bParam7);
}

int func_163(int iParam0) // Position - 0x8A59
{
	switch (iParam0)
	{
		case 10:
			return 11;
	
		case 36:
			return 37;
	
		case 54:
			return 55;
	
		case 56:
			return 57;
	
		case 79:
			return 80;
	
		case 94:
			return 95;
	
		case 105:
			return 106;
	
		default:
		
	}

	return -1;
}

BOOL func_164(int iParam0, int iParam1) // Position - 0x8AB7
{
	return Global_1051832.f_92[iParam0 /*75*/].f_1 && iParam1 != false;
}

BOOL func_165(int iParam0, BOOL bParam1) // Position - 0x8AD0
{
	if (func_45() != -1)
		return false;

	if (!func_131(iParam0))
		return false;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_83(iParam0)))
		return false;

	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_255(iParam0)))
		return false;

	return !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(func_83(iParam0));
}

BOOL func_166(int iParam0) // Position - 0x8B28
{
	return iParam0 > -1 && iParam0 < 12;
}

BOOL func_167(int iParam0) // Position - 0x8B3E
{
	return iParam0 > -1 && iParam0 < 16;
}

BOOL func_168(int iParam0) // Position - 0x8B54
{
	return iParam0 != 0;
}

float func_169(float fParam0, float fParam1, float fParam2, BOOL bParam3) // Position - 0x8B60
{
	return func_256(Global_33, fParam0, bParam3);
}

void func_170() // Position - 0x8B75
{
	func_257(&iLocal_140[0], joaat("p_door_val_barn_l"), -361.6891f, 785.3472f, 115.2065f);
	func_257(&iLocal_140[1], joaat("p_door_val_barn_r"), -361.9032f, 789.568f, 115.2065f);
	func_257(&iLocal_140[2], joaat("p_door_val_barn_l"), -376.7099f, 784.3367f, 115.1714f);
	func_257(&iLocal_140[3], joaat("p_door_val_barn_r"), -376.9761f, 788.7846f, 115.1714f);
	return;
}

void func_171() // Position - 0x8BF1
{
	int i;

	for (i = 0; i < iLocal_140; i = i + 1)
	{
		func_258(&iLocal_140[i]);
	}

	return;
}

BOOL func_172() // Position - 0x8C16
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1072759.f_4;
}

void func_173(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x8C32
{
	if (func_153(hParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 1 || bParam2)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 1);
	
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hParam0, iParam1, bParam3);
	}

	return;
}

void func_174(Hash hParam0, BOOL bParam1) // Position - 0x8C6A
{
	if (func_153(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 2 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 2);

	return;
}

void func_175(Hash hParam0, BOOL bParam1) // Position - 0x8C98
{
	if (func_153(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 1 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 1);

	return;
}

void func_176(Hash hParam0, BOOL bParam1) // Position - 0x8CC6
{
	if (func_153(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 0 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 0);

	return;
}

BOOL func_177() // Position - 0x8CF4
{
	return true;
}

BOOL func_178(Ped pedParam0, Volume volParam1, BOOL bParam2, int iParam3) // Position - 0x8CFD
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return false;

	return ENTITY::IS_ENTITY_IN_VOLUME(pedParam0, volParam1, bParam2, iParam3);
}

struct<2> func_179(int iParam0) // Position - 0x8D33
{
	int num;

	num = func_259(iParam0);
	return func_205(joaat("visited"), num);
}

void func_180(var uParam0, var uParam1, int iParam2) // Position - 0x8D4E
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
		return;

	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

BOOL func_181() // Position - 0x8D6B
{
	if (func_45() == -1)
		return true;

	return NETWORK::CAN_REGISTER_MISSION_OBJECTS(1);
}

float func_182(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x8D84
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

void func_183() // Position - 0x8DA2
{
	if (hLocal_19 != 0)
	{
		STREAMING::REQUEST_ANIM_DICT(hLocal_19.f_6);
		STREAMING::REQUEST_MODEL(hLocal_19, false);
		hLocal_19.f_16 = 1;
	}

	return;
}

BOOL func_184() // Position - 0x8DC4
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(hLocal_19.f_6))
		return STREAMING::HAS_ANIM_DICT_LOADED(hLocal_19.f_6);

	return true;
}

BOOL func_185() // Position - 0x8DE4
{
	int i;
	BOOL flag;
	int num;
	int num2;
	int num3;
	int num4;

	if (hLocal_19.f_5 <= 0)
		return false;

	flag = func_186();
	num = func_187(flag);
	num2 = func_199(flag);

	for (i = 0; i <= hLocal_19.f_5 - 1; i = i + 1)
	{
		num3 = func_187(hLocal_19.f_1[i]);
		num4 = func_199(hLocal_19.f_1[i]);
	
		if (num3 == num && MISC::ABSI(num2 - num4) <= 5)
			return true;
	}

	return false;
}

BOOL func_186() // Position - 0x8E5E
{
	return Global_1902569;
}

int func_187(BOOL bParam0) // Position - 0x8E6A
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 12) & 31;
}

BOOL func_188(Entity eParam0, const char* sParam1, const char* sParam2, int iParam3) // Position - 0x8E7D
{
	float entityAnimCurrentTime;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return false;

	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(eParam0, sParam1, sParam2, 1))
		return false;

	entityAnimCurrentTime = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(eParam0, sParam1, sParam2);
	return MISC::ABSF(1f - entityAnimCurrentTime - iParam3) < 0.01f;
}

BOOL func_189(int iParam0) // Position - 0x8EC3
{
	if (iParam0 == 22 || iParam0 == 39 && !func_260())
		return true;

	if (iParam0 == 66)
		return true;

	return false;
}

BOOL func_190() // Position - 0x8EF8
{
	if (Global_13)
		return false;

	if (!func_261())
		return false;

	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939102.f_75.f_55))
		return false;

	if (func_262(-1 ^ 9, false, true))
		return false;

	return true;
}

const char* func_191(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, var uParam6) // Position - 0x8F3B
{
	const char* StringToTest;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1893611.f_162)))
		StringToTest = func_263(Global_1893611.f_162);

	if (MISC::IS_STRING_NULL_OR_EMPTY(StringToTest) && bParam4)
		StringToTest = func_265(func_264(Global_34));

	if (MISC::IS_STRING_NULL_OR_EMPTY(StringToTest))
	{
		if (!func_266(iParam0) || func_267(44))
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

BOOL func_192(int iParam0) // Position - 0x99A3
{
	return iParam0 > -1 && iParam0 < 6;
}

int func_193(int iParam0) // Position - 0x99B8
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

Hash func_194(int iParam0) // Position - 0x9A73
{
	int i;
	var gamerHandle;
	Hash bountyData;

	if (!func_192(iParam0))
		return -1;

	if (Global_1572887.f_14 == -1)
		return Global_38.f_198[iParam0 /*12*/];

	i = 0;
	gamerHandle = { func_268(PLAYER::PLAYER_ID()) };
	BOUNTY::BOUNTY_GET_BOUNTY_ON_PLAYER(&gamerHandle, &bountyData);

	for (i = 0; i < 6; i = i + 1)
	{
		Global_1072759.f_21262[i /*12*/] = bountyData;
	}

	return Global_1072759.f_21262[iParam0 /*12*/];
}

int func_195(int iParam0) // Position - 0x9AE1
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

char* func_196(int iParam0) // Position - 0x9C3C
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

BOOL func_197(int iParam0, BOOL bParam1) // Position - 0x9C77
{
	if (!func_10(iParam0))
		return false;

	if (Global_1572887.f_14 == -1)
		return Global_38.f_271[iParam0] && bParam1 != false;

	return Global_1072759.f_21335[iParam0] && bParam1 != false;
}

BOOL func_198(int iParam0, int iParam1) // Position - 0x9CB9
{
	if (!func_192(iParam0))
		return false;

	if (Global_1572887.f_14 == -1)
		return Global_38.f_198[iParam0 /*12*/].f_5 && iParam1 != false;

	return Global_1072759.f_21262[iParam0 /*12*/].f_5 && iParam1 != false;
}

int func_199(BOOL bParam0) // Position - 0x9CFE
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 6) & 63;
}

float func_200(float fParam0) // Position - 0x9D10
{
	return (fParam0 * 1.8f) + 32f;
}

const char* func_201(var uParam0, int iParam1) // Position - 0x9D26
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "LITERAL_STRING", uParam0);

	return func_269(MISC::VAR_STRING(10, "LITERAL_STRING", uParam0), iParam1);
}

int func_202(const char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x9D5C
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

BOOL func_203(int iParam0) // Position - 0x9D9F
{
	if (func_266(iParam0))
		if (!func_267(44))
			return false;

	return true;
}

void func_204(int iParam0, int iParam1) // Position - 0x9DBF
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

struct<2> func_205(int iParam0, int iParam1) // Position - 0x9DD0
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

void func_206(int iParam0) // Position - 0x9DE6
{
	switch (iParam0)
	{
		case 5:
			VOLUME::DELETE_VOLUME(Global_1289485.f_47[0]);
			VOLUME::DELETE_VOLUME(Global_1289485.f_47[1]);
			VOLUME::DELETE_VOLUME(Global_1289485.f_50[0]);
			VOLUME::DELETE_VOLUME(Global_1289485.f_50[1]);
			break;
	
		case 81:
			VOLUME::DELETE_VOLUME(Global_1289485.f_47[1]);
			VOLUME::DELETE_VOLUME(Global_1289485.f_50[1]);
			break;
	}

	return;
}

void func_207(Volume volParam0) // Position - 0x9E56
{
	if (VOLUME::DOES_VOLUME_EXIST(volParam0))
		VOLUME::DELETE_VOLUME(volParam0);

	return;
}

void func_208() // Position - 0x9E6D
{
	if (ENTITY::DOES_ENTITY_EXIST(hLocal_19.f_17))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(hLocal_19.f_17, hLocal_19.f_6, hLocal_19.f_7, 1))
			ENTITY::STOP_ENTITY_ANIM(hLocal_19.f_17, hLocal_19.f_6, hLocal_19.f_7, -1000f);
	
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(hLocal_19.f_17, hLocal_19.f_6, hLocal_19.f_8, 1))
			ENTITY::STOP_ENTITY_ANIM(hLocal_19.f_17, hLocal_19.f_6, hLocal_19.f_8, -1000f);
	
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(hLocal_19.f_17, hLocal_19.f_6, hLocal_19.f_9, 1))
			ENTITY::STOP_ENTITY_ANIM(hLocal_19.f_17, hLocal_19.f_6, hLocal_19.f_9, -1000f);
	}

	if (hLocal_19.f_16)
	{
		if (STREAMING::HAS_ANIM_DICT_LOADED(hLocal_19.f_6))
			STREAMING::REMOVE_ANIM_DICT(hLocal_19.f_6);
	
		hLocal_19.f_16 = 0;
	}

	if (hLocal_19.f_18 != 0)
		ENTITY::_UNPIN_MAP_ENTITY(hLocal_19.f_18);

	return;
}

void func_209() // Position - 0x9F2D
{
	if (func_45() != -1)
		return;

	func_270(volLocal_66);
	func_270(volLocal_76);
	func_270(volLocal_77);
	return;
}

void func_210() // Position - 0x9F52
{
	if (iLocal_146 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&iLocal_146);
		iLocal_146 = -1;
	}

	return;
}

void func_211(int iParam0) // Position - 0x9F69
{
	int i;
	int num;

	if (func_131(Global_1915656.f_3[iParam0 /*447*/].f_21) && func_271(Global_1915656.f_3[iParam0 /*447*/].f_21))
		func_272(Global_1915656.f_3[iParam0 /*447*/].f_21, false, true, false, false);

	Global_1915656.f_3[iParam0 /*447*/].f_10 = { 0f, 0f, 0f };
	Global_1915656.f_3[iParam0 /*447*/].f_21 = -1;
	Global_1915656.f_3[iParam0 /*447*/].f_22 = -1;
	Global_1915656.f_3[iParam0 /*447*/].f_16 = 0;
	Global_1915656.f_3[iParam0 /*447*/].f_1 = 0;

	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(Global_1915656.f_3[iParam0 /*447*/].f_35))
		PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1915656.f_3[iParam0 /*447*/].f_35, false);

	func_273(Global_1915656.f_3[iParam0 /*447*/].f_9, false);
	func_274(iParam0, 536870912);
	num = func_275(iParam0);

	if (num >= 15)
	{
		Global_1915656.f_3[iParam0 /*447*/].f_409 = 0;
	}
	else
	{
		for (i = 0; i < num; i = i + 1)
		{
			func_138(Global_1915656.f_3[iParam0 /*447*/].f_318[i /*6*/]);
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
	func_276(iParam0);
	Global_1915656.f_3[iParam0 /*447*/].f_9 = -1;
	Global_1915656.f_3[iParam0 /*447*/].f_8 = -1;
	return;
}

BOOL func_212(int iParam0, BOOL bParam1) // Position - 0xA141
{
	if (func_45() != -1)
		return false;

	if (!func_131(iParam0))
		return false;

	return Global_9899[iParam0 /*2*/] && bParam1 != false;
}

int func_213(int iParam0, BOOL bParam1) // Position - 0xA16F
{
	if (!func_131(iParam0))
		return 0;

	if (!func_212(iParam0, 2))
		return 0;

	if (func_226(iParam0) == 0)
		return 1;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_83(iParam0)))
		return 1;

	if (func_212(iParam0, true) && !bParam1)
	{
		func_277(iParam0, 128);
		return 1;
	}

	func_228(iParam0, 129);
	func_278(iParam0);
	PERSCHAR::_DELETE_PERSCHAR(func_83(iParam0));
	func_227(iParam0, 0);
	return 1;
}

int func_214(int iParam0) // Position - 0xA1F2
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

int func_215(int iParam0) // Position - 0xA219
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

void func_216() // Position - 0xA23A
{
	int i;
	var unk;

	func_247(30);
	func_279(30);
	func_280(30);
	func_249(30);

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

void func_217() // Position - 0xA401
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

	func_249(32);
	return;
}

int func_218(int iParam0) // Position - 0xA47C
{
	return func_281(iParam0) + 30;
}

BOOL func_219() // Position - 0xA48C
{
	return func_282() == 4;
}

int func_220(BOOL bParam0) // Position - 0xA49A
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 17) & 31;
}

void func_221(var uParam0, int iParam1) // Position - 0xA4AD
{
	int num;
	int num2;

	num = func_222(*uParam0);
	num2 = func_224(*uParam0);

	if (iParam1 < 1 || iParam1 > func_283(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

int func_222(BOOL bParam0) // Position - 0xA500
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 22) & 15;
}

void func_223(var uParam0, int iParam1) // Position - 0xA513
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

int func_224(BOOL bParam0) // Position - 0xA54F
{
	return (BUILTIN::SHIFT_RIGHT(bParam0, 26) & 31 * MISC::IS_BIT_SET(bParam0, 31) ? -1 : 1) + 1898;
}

void func_225(var uParam0, int iParam1) // Position - 0xA574
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

Hash func_226(int iParam0) // Position - 0xA5FA
{
	if (!func_131(iParam0))
		return 0;

	return Global_1893799[iParam0 /*3*/];
}

void func_227(int iParam0, PersChar pchParam1) // Position - 0xA618
{
	if (!func_131(iParam0))
		return;

	Global_1893799[iParam0 /*3*/].f_1 = pchParam1;
	return;
}

void func_228(int iParam0, BOOL bParam1) // Position - 0xA639
{
	if (func_45() != -1)
		return;

	if (!func_131(iParam0))
		return;

	Global_9899[iParam0 /*2*/] = Global_9899[iParam0 /*2*/] - Global_9899[iParam0 /*2*/] && bParam1;
	return;
}

BOOL func_229(int iParam0) // Position - 0xA672
{
	if (!func_131(iParam0))
		return false;

	if (!func_212(iParam0, 2))
		return false;

	return true;
}

BOOL func_230() // Position - 0xA698
{
	return 1;
}

void func_231(int iParam0, BOOL bParam1) // Position - 0xA6A1
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

void func_232(int iParam0, BOOL bParam1) // Position - 0xA6D5
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

void func_233(int iParam0, int iParam1) // Position - 0xA70A
{
	func_285(&(Global_1939959.f_5[iParam0 /*11*/].f_7), iParam1);
	return;
}

BOOL func_234(var uParam0, var uParam1) // Position - 0xA724
{
	return func_254(uParam0, 5, 8);
}

BOOL func_235(int iParam0) // Position - 0xA737
{
	return func_286(1, iParam0);
}

int func_236(int iParam0) // Position - 0xA746
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

int func_237(int iParam0) // Position - 0xA791
{
	if (func_287(&(Global_1102813.f_4), iParam0, 5))
		return 1;

	return 0;
}

void func_238(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0xA7AE
{
	func_288(iParam0);

	if (!func_289(1))
		return;

	if (bParam1)
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	else if (!func_290(128) && !func_291(19))
		CAM::DO_SCREEN_FADE_OUT(iParam2);

	if (bParam3 && func_282() == 4)
		func_237(18);

	func_292(1024);
	return;
}

int func_239(int iParam0) // Position - 0xA810
{
	if (func_293(&(Global_1102813.f_4), iParam0, 5))
		return 1;

	return 0;
}

void func_240(var uParam0) // Position - 0xA82D
{
	var unk;

	*uParam0 = { unk };
	return;
}

void func_241(float* pfParam0) // Position - 0xA83F
{
	var unk;

	*pfParam0 = { unk };
	return;
}

void func_242(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, int iParam30) // Position - 0xA851
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

void func_243(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9) // Position - 0xA8A7
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

BOOL func_244(int iParam0) // Position - 0xA8D4
{
	if (iParam0 == 28 || iParam0 == 29 || iParam0 == 38 || iParam0 == 27 || iParam0 == 15 || iParam0 == 39)
		return true;

	if (func_155(iParam0, 65536))
		return true;

	return false;
}

void func_245(int iParam0, int iParam1) // Position - 0xA931
{
	func_164(iParam0, iParam1);
	Global_1051832.f_92[iParam0 /*75*/].f_1 = Global_1051832.f_92[iParam0 /*75*/].f_1 - Global_1051832.f_92[iParam0 /*75*/].f_1 && iParam1;
	return;
}

void func_246(int iParam0) // Position - 0xA96C
{
	return;
}

void func_247(int iParam0) // Position - 0xA974
{
	Global_1051832.f_92[iParam0 /*75*/].f_49 = 0;
	return;
}

BOOL func_248(int iParam0, int iParam1) // Position - 0xA989
{
	if (iParam0 == -1)
		return false;

	return func_294(Global_1051832.f_92[iParam0 /*75*/].f_50, iParam1);
}

void func_249(int iParam0) // Position - 0xA9B0
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

BOOL func_250(int iParam0) // Position - 0xAA2F
{
	return iParam0 > -1 && iParam0 < 180;
}

int func_251(int iParam0) // Position - 0xAA45
{
	var unk;

	if (DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1149432.f_7) && !func_296(12, func_295(iParam0), &unk))
		return 0;

	return unk.f_2;
}

BOOL func_252(Hash hParam0) // Position - 0xAA76
{
	return hParam0 != 0;
}

BOOL func_253(int iParam0, char* sParam1, Hash* phParam2, char* sParam3, float* pfParam4, char* sParam5, Vector3* pvParam6) // Position - 0xAA82
{
	int num;

	num = func_297();
	num.f_2 = -738708473;
	num.f_3 = func_295(iParam0);

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

BOOL func_254(int iParam0, var uParam1, int iParam2, int iParam3) // Position - 0xAB0A
{
	int num;

	if (!func_298(iParam0))
		return false;

	if (iParam0 != 2)
		return false;

	num = func_299(iParam0);
	return num >= iParam2 && num <= iParam3;
}

Ped func_255(int iParam0) // Position - 0xAB45
{
	PersChar persChar;

	persChar = func_83(iParam0);

	if (persChar == 0)
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
		return 0;

	return PERSCHAR::_GET_PERSCHAR_PED_INDEX(persChar);
}

float func_256(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0xAB73
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

void func_257(var uParam0, Hash hParam1, float fParam2, float fParam3, float fParam4) // Position - 0xAB9B
{
	if (*uParam0 == 0)
		if (STREAMING::IS_MODEL_VALID(hParam1))
			*uParam0 = ENTITY::PIN_CLOSEST_MAP_ENTITY(hParam1, fParam2, 7);

	return;
}

void func_258(var uParam0) // Position - 0xABC1
{
	if (*uParam0 == 0)
		return;

	if (ENTITY::IS_MAP_ENTITY_PINNED(*uParam0))
		ENTITY::_UNPIN_MAP_ENTITY(*uParam0);

	return;
}

int func_259(int iParam0) // Position - 0xABE4
{
	int num;

	num = func_295(iParam0);
	num == 0;
	return num;
}

BOOL func_260() // Position - 0xABFC
{
	return false;
}

BOOL func_261() // Position - 0xAC05
{
	var unk;
	var unk3;

	if (func_45() != 0)
		return true;

	if (func_300())
		return false;

	if (HUD::_0x7EC0D68233E391AC(6) == 1)
		return true;

	unk = -1;
	unk.f_1 = -1;
	unk = { func_301() };

	if (func_298(unk))
		return false;

	unk3 = { func_302() };

	if (func_298(unk3))
		return false;

	return true;
}

BOOL func_262(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xAC6D
{
	if (Global_1572887.f_14 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1900460.f_67;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1900460.f_68;
	
		if (func_300())
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

	if (iParam0 == 0 && func_298(func_68(0)))
		return true;

	if (Global_1940199 && 81919 & -1 - iParam0 != false)
		return true;

	if (!bParam1)
		if (MISC::GET_GAME_TIMER() - 5000 < Global_1900595)
			return true;

	switch (func_69(func_68(0)))
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

const char* func_263(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0xADE3
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_264(var uParam0, var uParam1, var uParam2) // Position - 0xADF7
{
	int i;

	for (i = 0; i < 51; i = i + 1)
	{
		if (func_303(uParam0, i))
			return i;
	}

	return -1;
}

const char* func_265(int iParam0) // Position - 0xAE25
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

BOOL func_266(int iParam0) // Position - 0xB109
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

BOOL func_267(int iParam0) // Position - 0xB133
{
	if (!func_304(iParam0))
		return false;

	return func_305(iParam0);
}

struct<2> func_268(Player plParam0) // Position - 0xB14F
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle);
	return gamerHandle;
}

const char* func_269(const char* sParam0, int iParam1) // Position - 0xB163
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

void func_270(Volume volParam0) // Position - 0xB17D
{
	if (VOLUME::DOES_VOLUME_EXIST(volParam0))
		VOLUME::_0x6D5F9E69BA1BE783(volParam0);

	return;
}

BOOL func_271(int iParam0) // Position - 0xB194
{
	if (!func_131(iParam0))
		return false;

	return Global_1893799[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_272(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xB1B9
{
	PersChar persChar;
	Ped perscharPedIndex;

	if (!func_131(iParam0))
		return;

	if (!func_212(iParam0, 1))
		return;

	if (!func_212(iParam0, 2))
		return;

	if (!bParam4 && !func_271(iParam0) && func_306(iParam0))
		return;

	func_228(iParam0, 1);
	func_278(iParam0);

	if (func_307(func_226(iParam0)))
	{
		persChar = func_83(iParam0);
	
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
	
		func_228(iParam0, 16);
	}

	if (func_212(iParam0, 128) && !bParam3)
		func_213(iParam0, false);

	return;
}

void func_273(int iParam0, BOOL bParam1) // Position - 0xB2A5
{
	if (!func_250(iParam0))
		return;

	if (bParam1)
	{
		if (!func_308(iParam0, 1024))
		{
			func_309(iParam0, 1024);
			INVENTORY::_0x9B4E793B1CB6550A();
		}
	}
	else if (func_308(iParam0, 1024))
	{
		func_310(iParam0, 1024);
		INVENTORY::_0x9B4E793B1CB6550A();
	}

	func_311(iParam0);
	return;
}

void func_274(int iParam0, int iParam1) // Position - 0xB2FB
{
	if (!func_312(iParam0))
		return;

	if (func_45() == -1)
		Global_1915656.f_3[iParam0 /*447*/].f_6 = Global_1915656.f_3[iParam0 /*447*/].f_6 - Global_1915656.f_3[iParam0 /*447*/].f_6 && iParam1;
	else
		Global_1051832.f_92[iParam0 /*75*/].f_1 = Global_1051832.f_92[iParam0 /*75*/].f_1 - Global_1051832.f_92[iParam0 /*75*/].f_1 && iParam1;

	return;
}

int func_275(int iParam0) // Position - 0xB36E
{
	return Global_1915656.f_3[iParam0 /*447*/].f_409;
}

void func_276(int iParam0) // Position - 0xB384
{
	Global_1915656.f_3[iParam0 /*447*/].f_6 = 0;
	return;
}

void func_277(int iParam0, BOOL bParam1) // Position - 0xB39A
{
	if (func_45() != -1)
		return;

	if (!func_131(iParam0))
		return;

	Global_9899[iParam0 /*2*/] = Global_9899[iParam0 /*2*/] || bParam1;
	return;
}

void func_278(int iParam0) // Position - 0xB3CB
{
	Ped EntityIndex;

	if (!func_131(iParam0))
		return;

	EntityIndex = func_255(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(EntityIndex))
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(EntityIndex, false))
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&EntityIndex);

	Global_1893799[iParam0 /*3*/].f_2 = 0;
	return;
}

void func_279(int iParam0) // Position - 0xB40F
{
	Global_1051832.f_92[iParam0 /*75*/].f_50 = 0;
	return;
}

void func_280(int iParam0) // Position - 0xB424
{
	Global_1051832.f_92[iParam0 /*75*/].f_1 = 0;
	return;
}

int func_281(int iParam0) // Position - 0xB439
{
	return iParam0 * 31;
}

int func_282() // Position - 0xB445
{
	if (Global_1102813 <= 5)
		return Global_1102813;

	if (Global_1102813 <= 22)
		return 4;

	if (Global_1102813 <= 25)
		return 3;

	return 26;
}

int func_283(int iParam0, int iParam1) // Position - 0xB478
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

var func_284(BOOL bParam0, var uParam1, var uParam2) // Position - 0xB512
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_285(BOOL bParam0, int iParam1) // Position - 0xB529
{
	*bParam0 = *bParam0 - *bParam0 && iParam1;
	return;
}

BOOL func_286(int iParam0, int iParam1) // Position - 0xB53E
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_313(&(Global_1102813.f_4), num, 5);

	if (iParam1 == func_314())
		return func_313(&(Global_1102813.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1295666.f_17[iParam1])
		return func_313(&(Global_1101558[iParam1 /*38*/].f_4), num, 5);

	return false;
}

BOOL func_287(int* piParam0, int iParam1, int iParam2) // Position - 0xB5B2
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

void func_288(int iParam0) // Position - 0xB5E4
{
	Global_1102813.f_26.f_12 = iParam0;
	return;
}

BOOL func_289(int iParam0) // Position - 0xB5F6
{
	return Global_1102813.f_26.f_7 && iParam0 != false;
}

BOOL func_290(BOOL bParam0) // Position - 0xB60B
{
	return Global_1102813.f_26.f_9 && bParam0 != false;
}

BOOL func_291(int iParam0) // Position - 0xB620
{
	return Global_1102813.f_4[Global_1106895[iParam0 /*2*/]] && Global_1106895[iParam0 /*2*/].f_1 == Global_1106895[iParam0 /*2*/].f_1;
}

void func_292(BOOL bParam0) // Position - 0xB64E
{
	if (func_315(bParam0))
		return;

	Global_1102813.f_26.f_9 = Global_1102813.f_26.f_9 || bParam0;
	return;
}

BOOL func_293(int* piParam0, int iParam1, int iParam2) // Position - 0xB675
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

BOOL func_294(BOOL bParam0, BOOL bParam1) // Position - 0xB6A8
{
	return bParam0 && bParam1 != false;
}

int func_295(int iParam0) // Position - 0xB6B7
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

BOOL func_296(int iParam0, int iParam1, var uParam2) // Position - 0xC0A4
{
	var unk;

	if (func_316(iParam0, iParam1, &unk))
		func_317(&unk, iParam0, uParam2);
	else
		return false;

	return true;
}

int func_297() // Position - 0xC0CB
{
	return Global_1072759.f_28418[48 /*4*/].f_3;
}

BOOL func_298(var uParam0, var uParam1) // Position - 0xC0E0
{
	if (!func_318(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_319(uParam0))
		return false;

	return true;
}

int func_299(int iParam0, var uParam1) // Position - 0xC114
{
	if (iParam0 == 2)
		return func_320(iParam0);

	return -1;
}

BOOL func_300() // Position - 0xC12E
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_5)
		return true;

	if (Global_2883584)
		return true;

	if (Global_1048577)
		return true;

	if (!func_298(Global_1051268) && Global_1572887.f_8 & true != 0)
		return true;

	return false;
}

struct<2> func_301() // Position - 0xC186
{
	return Global_1051268;
}

struct<2> func_302() // Position - 0xC194
{
	if (Global_1205804.f_129 <= 0)
		return func_68(0);

	if (Global_1205804.f_130 < 0 || Global_1205804.f_131 == 0)
		return func_68(0);

	return Global_1205804[Global_1205804.f_130 /*4*/].f_1;
}

BOOL func_303(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0xC1DF
{
	var unk;
	float num;
	float num2;

	func_321(iParam3, &unk, &num, &num2);

	if (func_322(uParam0, unk, num, num.f_1, num2))
		return true;

	return false;
}

BOOL func_304(int iParam0) // Position - 0xC20F
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_305(int iParam0) // Position - 0xC222
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_38.f_3651[num2], offset);
}

BOOL func_306(int iParam0) // Position - 0xC24C
{
	if (!func_131(iParam0))
		return false;

	return SCRIPTS::DOES_THREAD_EXIST(Global_1893799[iParam0 /*3*/].f_2);
}

BOOL func_307(Hash hParam0) // Position - 0xC270
{
	return hParam0 != 0;
}

BOOL func_308(int iParam0, BOOL bParam1) // Position - 0xC27C
{
	if (!func_250(iParam0))
		return false;

	return Global_1915656.f_17884[iParam0] && bParam1 != false;
}

void func_309(int iParam0, BOOL bParam1) // Position - 0xC2A2
{
	if (!func_250(iParam0))
		return;

	Global_1915656.f_17884[iParam0] = Global_1915656.f_17884[iParam0] || bParam1;
	return;
}

void func_310(int iParam0, BOOL bParam1) // Position - 0xC2D0
{
	if (!func_250(iParam0))
		return;

	Global_1915656.f_17884[iParam0] = Global_1915656.f_17884[iParam0] - Global_1915656.f_17884[iParam0] && bParam1;
	return;
}

void func_311(int iParam0) // Position - 0xC30A
{
	func_324(func_323(iParam0));
	return;
}

BOOL func_312(int iParam0) // Position - 0xC31C
{
	return iParam0 > -1 && iParam0 < 40;
}

BOOL func_313(int* piParam0, int iParam1, int iParam2) // Position - 0xC332
{
	return MISC::IS_BIT_SET(piParam0->[iParam1 / 31], iParam1 % 31);
}

int func_314() // Position - 0xC369
{
	return Global_1102813.f_3672;
}

BOOL func_315(BOOL bParam0) // Position - 0xC378
{
	return Global_1102813.f_26.f_9 && bParam0 == bParam0;
}

BOOL func_316(int iParam0, int iParam1, Any* panParam2) // Position - 0xC38E
{
	*panParam2 = Global_1149432.f_7;
	panParam2->f_2 = 1351168281;
	panParam2->f_3 = func_325(iParam0);
	panParam2->f_4 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam2->f_1), panParam2);
}

void func_317(Any* panParam0, int iParam1, var uParam2) // Position - 0xC3C2
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

BOOL func_318(int iParam0) // Position - 0xC43C
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

int func_319(int iParam0) // Position - 0xC47B
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

int func_320(var uParam0, var uParam1) // Position - 0xC511
{
	var unk;

	unk.f_1 = -1;
	unk.f_2 = -1;

	if (func_326(uParam0, &unk))
		return unk.f_1;

	return -1;
}

void func_321(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0xC53D
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

BOOL func_322(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, float fParam8) // Position - 0xCFDA
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

int func_323(int iParam0) // Position - 0xD040
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

void func_324(int iParam0) // Position - 0xD55D
{
	Global_1915656.f_18247 = iParam0;
	return;
}

int func_325(int iParam0) // Position - 0xD56E
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

BOOL func_326(int iParam0, var uParam1, Any* panParam2) // Position - 0xD6E3
{
	if (!func_298(iParam0))
		return false;

	func_327(panParam2);

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

void func_327(Any* panParam0) // Position - 0xD7EE
{
	*panParam0 = 0;
	panParam0->f_1 = -1;
	panParam0->f_2 = -1;
	return;
}

