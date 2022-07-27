#!/bin/bash
gcc -Wall -Wextra -Weror -pedantic -c *.c
ar rc liball.a *.o
