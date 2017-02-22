#!/bin/bash
for line in $(cat tests.txt)
do
    ../RECEPTCOMP.exe $line
    echo -e "-------------"
done