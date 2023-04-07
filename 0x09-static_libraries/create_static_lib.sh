#!/bin/bash

for file in ./*.c
do
    gcc -c $file

done

# ************************************************#

for obj_file in ./*.o
do
    ar rc liball.a $obj_file
done
