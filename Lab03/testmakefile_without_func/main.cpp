// main.cpp

#include <iostream>
#include "functions.hpp"
using namespace std;

int main()
{
    print_hello();

    cout << "This is main:" << endl;
    cout << "The factorial of 5 is:" << factorial(4) << endl;

    return 0;
}