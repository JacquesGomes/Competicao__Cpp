#!/bin/bash
read inte;
for i in $(seq 1 $inte);
do

    touch q"$i".cpp
done