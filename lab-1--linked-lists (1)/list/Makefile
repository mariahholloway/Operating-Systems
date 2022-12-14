# list/Makefile
#
# Makefile for list implementation and test file.
#
# <Author>

list: main.c list.C
gcc -o list main.c list.c -I.

menu: main2.c menu.c list.C
gcc -o menu main2.c menu.c list.c -I.

clean:
rm list menu 
