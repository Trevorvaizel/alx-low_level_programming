#!bin/bash

gcc -c -O -g ./*.c && ar -rc liball.a ./*.o
