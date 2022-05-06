#!/bin/bash
gcc -c -Wall -pedantic -Werror -Wextra *.c
ar cr liball.a *.c
ranlib liball.a
