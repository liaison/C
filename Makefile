
CC=gcc

# the assembly code in bit-pos-asm.c only works for IA32 arch. 
CFLAGS=-Wall -O2 -m32 -g


all: bit-pos-loop bit-pos-asm 


bit-pos-loop: bit-pos-loop.c
	$(CC) $(CFLAGS) $^ -o $@ 


bit-pos-asm: bit-pos-asm.c
	$(CC) $(CFLAGS) $^ -o $@ 



clean: 
	rm -f bit-pos-loop bit-pos-asm 
