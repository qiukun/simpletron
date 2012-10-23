#include "memory.h"

#define OPMOD MEMORYSIZE

int get_opcode(int value)
{
	return value/OPMOD;
}

int get_oprand(int value)
{
	return value%OPMOD;
}

int get_value(int opcode, int oprand)
{
	return opcode * OPMOD + oprand;
}
