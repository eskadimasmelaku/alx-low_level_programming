#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -C -fPIC *.C
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
