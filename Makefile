GCC = gcc
FLAGS = -lm

PROGRAMAS = laboratorioPunteros



laboratorioPunteros:
	$(GCC) $@.c funciones.c -o $@

clear:
	$(RM) $(PROGRAMAS)

