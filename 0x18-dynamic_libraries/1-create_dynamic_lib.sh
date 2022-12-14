#!/bin/bash
gcc -Wall -Werror -pedantic -c -fPIC *.c
gcc -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
