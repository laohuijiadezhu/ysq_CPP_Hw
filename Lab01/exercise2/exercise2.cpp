#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
    // c++2+ standard
    for(vector v {1, 2, 3}; auto &e : v) {
        cout << e << endl;
    }
}