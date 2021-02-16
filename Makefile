objects = memory.o 

all: simple salc
simple: $(objects) sml.o
	cc -o $@ $(objects)
salc: $(objects) sal.o
	cc -o $@ $(objects) sal.o

.PHONY: all clean
clean:
	-rm simple $(objects)
