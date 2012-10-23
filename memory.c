#include "memory.h"

#define OPMOD MEMORYSIZE

int memory[MEMORYSIZE];

int get_opcode(int value)
{
	return value/OPMOD;
}

int get_oprand(int value)
{
	return value%OPMOD;
}

int get_ins(int opcode, int oprand)
{
	return opcode * OPMOD + oprand;
}
