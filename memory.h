#ifndef MEMORY_H
#define MEMORY_H

#define MEMORYSIZE 100

extern int memory[MEMORYSIZE];

extern int get_opcode(int value);
extern int get_oprand(int value);
extern int get_ins(int opcode, int oprand);

#endif
