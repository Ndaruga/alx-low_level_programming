#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra *.c
ar rc liball.a *.o

#------------ remove files ---------#
#rm *.c *.0