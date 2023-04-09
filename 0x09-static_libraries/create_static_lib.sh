#!/bin/bash

# for file in *.c
# do
gcc gcc -Wall -pedantic -Werror -Wextra -std=gnu89 *.c
ar rc liball.a *.o
rm *.o

# done
