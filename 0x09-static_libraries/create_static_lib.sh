#!/bin/bash
gcc -Wall -Wetra -Weror -pedantic -c *.c
ar rc liball.a *.o
