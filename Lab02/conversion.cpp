#include <cstdio>

/*
The character type of c++ is char. Char and int can be converted.
Characters are a type of integers in memory.
*/

int main() {
    char c = 'C';
    int i = c;
    printf("Convert '%c' to integer: %d\n", c, i);

    return 0;
}