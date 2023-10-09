all:
	nasm -f elf64 -w+all -w+error -o loop.o loop.asm
	ld -o loop loop.o

.PHONY: run
run:
	./loop

.PHONY: clean
clean:
	rm -f loop loop.o *~
