#!/bin/bash

cd $HOME
mkdir script_exercise
cd script_exercise

for ((i=1 ; i<6 ; i++))
do

touch "file$i.txt"
echo "This is File $i" >> "file$i.txt"
date >> file$i.txt

done

for ((i=1 ; i<6 ; i++))
do

cat "file$i.txt"
done
