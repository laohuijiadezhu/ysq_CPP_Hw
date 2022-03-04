#include "stuinfo.hpp"
#include <iostream>
#include <algorithm>
#include <cstring>

void inputstu(stuinfo stu[], int n)
{
    for (int i = 0; i < n; ++ i)
    {
        std::cin.ignore();
        std::cin.getline(stu[i].name, 20);
        std::cin >> stu[i].score[0] >> stu[i].score[1] >> stu[i].score[2];
        stu[i].ave = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3;
    }
}

void showstu(stuinfo stu[], int n)
{
    for (int i = 0; i < n; ++ i)
    {
        std::cout << stu[i].name << " " << stu[i].score[0] << " " <<  stu[i].score[1] << " " <<  stu[i].score[2] << " " <<  stu[i].ave << "\n";
    }
    std::cout << std::endl;
}

bool Cmpare1(const stuinfo& a, const stuinfo& b)
{
    return a.ave > b.ave;
}

void sotrstu(stuinfo stu[], int n)
{
    std::sort(stu, stu + n,Cmpare1);
}

bool findstu(stuinfo stu[], int n, const char ch[])
{
    for (int i = 0; i < n; ++ i)
    {
        if (!strcmp (stu[i].name, ch))
            return true;
    }
    return false;
}