#!/bin/bash

for file in './*.c'
do
    # rm $file

    obj_file="$(gcc -c $file)"
    "{ar rc liball.a $obj_file}"
done
