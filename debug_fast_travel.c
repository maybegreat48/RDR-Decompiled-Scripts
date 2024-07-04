#region Local Var
	BOOL bLocal_0 = 0;
#endregion

void main() // Position - 0x0
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		func_1();

	func_2();

	while (!bLocal_0)
	{
		func_3();
		BUILTIN::WAIT(0);
	}

	func_1();
	return;
}

void func_1() // Position - 0x30
{
	bLocal_0 = false;
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_2() // Position - 0x3F
{
	return;
}

void func_3() // Position - 0x47
{
	return;
}

