#include <stdio.h>
#include <stdbool.h>
#include <iostream>
using namespace std;

int main() {
    printf("\nPrint size of the fundamental types:\n");
    printf("-----------------------------------------\n");
    printf("The sizeof(char) is:%ld bytes.\n", sizeof(char));
    printf("The sizeof(short) is:%ld bytes.\n", sizeof(short));
    printf("The sizeof(int) is:%ld bytes.\n", sizeof(int));
    printf("The sizeof(long) is:%ld bytes.\n", sizeof(long));
    printf("The sizeof(long long) is:%ld bytes.\n", sizeof(long long));
    printf("The sizeof(float) is:%ld bytes.\n", sizeof(float));
    printf("The sizeof(double) is:%ld bytes.\n", sizeof(double));
    printf("The sizeof(long double) is:%ld bytes.\n", sizeof(long double));
    printf("The sizeof(bool) is:%ld byte.\n", sizeof(bool));
    printf("The sizeof(size_t) is:%ld byte.\n", sizeof(size_t));
    return 0;

    // int num_int1 = 0x7ABCDEF0;
    // float num_int_float = num_int1;
    // int num_int2 = (int)(num_int_float);

    // cout<<num_int1<<" "<<num_int_float<<" "<<num_int2<<endl; // 2059198192 2.0592e+09 2059198208
    // return 0;
}