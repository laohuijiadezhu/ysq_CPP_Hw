#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
    int arr[10];
    int a[3][4];
    arr[0] = 0;
    arr[1] = 1;
    int (*p) [4] = a;
    cout<<p<<" "<<p+1<<"\n";

    // print the first element in arr
    cout<<arr[0]<<endl;

    // this is wrong:
    cout<<arr[10]<<endl;

return 0;
}
