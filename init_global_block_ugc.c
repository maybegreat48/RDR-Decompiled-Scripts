// Program registers 126035 globals at index 1 starting from Global_262144
void main() // Position - 0x0
{
	Global_262148 = { 16.1983f, 2.16f, 1983.02f };
	Global_262152 = 4;
	Global_262154 = -1;

	if (SCRIPTS::_DOES_COMPRESSED_GLOBAL_BLOCK_BUFFER_EXIST(1))
		SCRIPTS::_RESTORE_GLOBAL_BLOCK(1);
	else
		SCRIPTS::_STORE_GLOBAL_BLOCK(1);

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

