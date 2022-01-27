#include <iostream>
#include <cmath>
using namespace std;

int main() {
    auto bits = 8 * sizeof(int);
    int int_min = -1 * pow(2, bits - 1);
    int int_max = pow(2, bits - 1) - 1;
    cout<<"MIN: "<<int_min<<"\n"<<"MAX: "<<int_max<<"\n";
    cout<<"MIN - 1: "<<int_min - 1<<"\n"<<"MAX + 1: "<<int_max + 1<<endl;
}