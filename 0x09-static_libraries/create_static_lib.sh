#!/bin/bash

for file in ./*.c
do
    gcc -c $file

done

# ************************************************#

# create a library archive file from all the object files
ar rcs liball.a *.o

# remove the object files
rm -f *.o

