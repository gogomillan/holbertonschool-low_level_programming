#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -fPIC -c *.c
gcc -Wall -pedantic -Werror -Wextra -shared *.o -o liball.so
