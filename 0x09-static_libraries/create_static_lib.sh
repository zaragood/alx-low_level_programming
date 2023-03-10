#!/bin/bash

# Compile all .c files in current directory
gcc -c *.c

# Create static library from object files
ar -rcs liball.a *.o

# Clean up object files
rm *.o

echo "Static library liball.a created successfully!"
