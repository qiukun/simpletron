objects = memory.o 

all: simple salc
simple: $(objects) sml.o
	cc -o simple $(objects)
salc: $(objects) sal.o
	cc -o sal $(objects) sal.o

.PHONY: all clean
clean:
	-rm simple $(objects)
