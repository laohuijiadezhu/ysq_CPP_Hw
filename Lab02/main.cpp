#include <iostream>

using std::cout;
using std::endl;

/*
Integers are stored in memory as a few number of bytes.
The range of integers that can be properly represented is limited.
Calculating numbers outside this range causes errors.
*/

int main() {
    int ia = 1234567890;
    int ib = 1234567890;
    int isum = ia + ib; // -1825831516

    cout << ia << " + " << ib << " = " << isum <<endl;

    float fa = 1234567.0;
    float fb = 1.0;
    float fsum = fa + fb;

    cout << fa << " + " << fb << " = " << fsum <<endl;

    return 0;
}