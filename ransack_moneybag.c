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
	BOOL bLocal_13 = 0;
	Hash hLocal_14 = 0;
	Any anLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	Ped pedLocal_18 = 0;
	var uLocal_19 = 0;
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0
{
	bLocal_13 = 1;
	anLocal_15 = anScriptParam_0;
	uLocal_16 = anScriptParam_0.f_1;
	uLocal_17 = anScriptParam_0.f_2;
	func_1();

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		func_2();

	while (!SCRIPTS::IS_THREAD_EXIT_REQUESTED() && func_3())
	{
		func_4();
		func_5();
		func_6();
		BUILTIN::WAIT(0);
	}

	func_2();
	return;
}

void func_1() // Position - 0x56
{
	return;
}

void func_2() // Position - 0x5E
{
	func_7();
	SCRIPTS::_0xE7282390542F570D(anLocal_15);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_8();
	else
		SCRIPTS::TERMINATE_THIS_THREAD();

	return;
}

BOOL func_3() // Position - 0x83
{
	if (hLocal_14 != 0)
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(hLocal_14) == 0)
			return bLocal_13;
		else
			return true;

	return bLocal_13;
}

void func_4() // Position - 0xAC
{
	return;
}

void func_5() // Position - 0xB4
{
	int i;

	for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_ERRORS); i = i + 1)
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_ERRORS, i))
		{
			case -843555838:
				func_11(i);
				break;
		
			case -456923784:
				func_10(i);
				break;
		
			case -45008988:
				func_9(i);
				break;
		}
	}

	return;
}

void func_6() // Position - 0x10C
{
	int scenarioPointPedIsUsing;
	Entity propForScenarioPoint;
	Entity scenarioPointEntity;

	if (pedLocal_18.f_1)
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_18))
		return;

	scenarioPointPedIsUsing = TASK::_GET_SCENARIO_POINT_PED_IS_USING(pedLocal_18, false);

	if (!TASK::DOES_SCENARIO_POINT_EXIST(scenarioPointPedIsUsing))
		return;

	propForScenarioPoint = TASK::GET_PROP_FOR_SCENARIO_POINT(scenarioPointPedIsUsing, "");

	if (!ENTITY::DOES_ENTITY_EXIST(propForScenarioPoint))
		return;

	scenarioPointEntity = TASK::_GET_SCENARIO_POINT_ENTITY(scenarioPointPedIsUsing);

	if (!ENTITY::DOES_ENTITY_EXIST(scenarioPointEntity))
		return;

	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(propForScenarioPoint))
		return;

	return;
}

void func_7() // Position - 0x17A
{
	return;
}

void func_8() // Position - 0x182
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_9(int iParam0) // Position - 0x18E
{
	struct<2> data;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &data, 2);

	if (data == anLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_12(&data);
	}

	return;
}

void func_10(int iParam0) // Position - 0x1B6
{
	struct<2> data;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &data, 2);

	if (data == anLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_13(&data);
	}

	return;
}

void func_11(int iParam0) // Position - 0x1DE
{
	struct<2> data;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &data, 2);

	if (data == anLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_14(&data);
	}

	return;
}

void func_12(var uParam0) // Position - 0x206
{
	pedLocal_18 = uParam0->f_1;
	return;
}

void func_13(var uParam0) // Position - 0x214
{
	return;
}

void func_14(var uParam0) // Position - 0x21C
{
	return;
}

