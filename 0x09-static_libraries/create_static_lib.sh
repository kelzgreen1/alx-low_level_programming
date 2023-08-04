#!/bin/bash

# Compile all .c files into object files
gcc -Wall -Werror -Wextra -pedantic -c *.c

# Create static library from object files
ar rc liball.a *.o

# Index library for faster linking
ranlib liball.a
