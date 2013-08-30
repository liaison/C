
CC=gcc 
CFLAGS=-Wall -O2 -m32


all: bit-pos-loop bit-pos-asm 


bit-pos-loop: bit-pos-loop.c
	$(CC) $(CFLAGS) $^ -o $@ 


bit-pos-asm: bit-pos-asm.c
	$(CC) $(CFLAGS) $^ -o $@ 



clean: 
	rm -f bit-pos-loop bit-pos-asm 
