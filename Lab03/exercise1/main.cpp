#include <iostream>
#include "fib.hpp"
using namespace std;

int main()
{
    int n;
    do
    {
        cout<<"Please input a positive integer:";
        cin>>n;
        if(n <= 0)
            continue;
        fib(n);
    }while(true);
    return 0;
}