#!/bin/bash
gcc -c *.c
gcc -Wall -Wextra -Werror -pedantic -c *.c
ranlib liball.a
