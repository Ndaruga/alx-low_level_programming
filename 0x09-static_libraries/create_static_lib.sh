#!/bin/bash

# for file in *.c
# do
gcc -c *.c
ar rc liball.a *.o
rm *.o

# done
