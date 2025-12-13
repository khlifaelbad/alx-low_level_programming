#!/bin/bash
# script creates a static library liball.a from all.c files in current dir
gcc -c *.c
ar rcs liball.a *.o
