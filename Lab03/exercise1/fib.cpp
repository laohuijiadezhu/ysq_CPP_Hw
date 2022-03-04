#include <iostream>
using namespace std;

void fib(int n)
{
    if(1 == n || 2 == n)
    {
        for(int i = 0; i < n; ++ i)
        {
            printf("%5d", 1);
            // cout<<"1"<<" ";
        }
        cout<<"\n";
        return ;
    }
    long long a = 1, b = 1;
    printf("%5lld%5lld", a, b);
    // cout<<a<<" "<<b<<" ";
    for(int i = 3, j = 3; i <= n; ++ i, ++ j)
    {
        b += a;
        a = b - a;
        printf("%5lld", b);
        // cout<<b<<" ";
        if(j % 10 == 0)
            cout<<"\n";
    }
    cout<<"\n";
    return ;
}