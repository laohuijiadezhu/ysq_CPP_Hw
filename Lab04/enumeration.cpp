#include <iostream>
using namespace std;

enum Days {SUNDAY=7, MONDAY=1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};

int main() {
    Days today = SUNDAY;
    Days tomorow = TUESDAY;

    cout<<"Today is: "<<today<<endl;
    cout<<"Tomorow is: "<<tomorow<<endl;

    return 0;
}