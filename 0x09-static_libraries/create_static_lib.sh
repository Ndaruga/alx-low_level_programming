#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar rc liball.a *.o

#------------ remove files ---------#
#rm *.c *.0