#!/bin/bash

# for file in *.c
# do
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar rc liball.a *.o
rm *.o

# done
