#include <iostream>
using namespace std;

enum Day {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY};
enum  Weather {SUNNY, CLOUDY, WINDY, RAINY};

struct DayInfo
{
    Day day;
    Weather weather;    
};

bool canTravel(DayInfo& d) {
    int score = 0;
    switch(d.day) {
        case (SATURDAY):
        case (SUNDAY):
            score ++;
            break;
        default:
            break;
    }
    switch(d.weather) {
        case (SUNNY):
        case (CLOUDY):
            score ++;
            break;
        default:
            break;
    }
    return score == 2;
}
int main()
{
    DayInfo today = {.day = SUNDAY, .weather = SUNNY};
    if(canTravel(today))
        cout<<"can\n";
    else 
        cout<<"can't\n";
    
    return 0;
}