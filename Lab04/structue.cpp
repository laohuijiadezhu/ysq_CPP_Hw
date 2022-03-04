#include <iostream>
using namespace std;

struct Rectangle {
    int width;
    int height;
};

int main() {
    Rectangle rec;
    Rectangle rec1;

    rec.width = 1;
    rec.height = 2;

    rec1 = rec;

    cout<<"Rec: "<<rec.width<<" "<<rec.height<<endl;
    cout<<"Rec1: "<<rec1.width<<" "<<rec1.height<<endl;

    return 0;
}