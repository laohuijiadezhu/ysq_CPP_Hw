#ifndef STUINFO_H
#define STUINFO_H

struct stuinfo
{    
    double score[3];
    double ave;
    char name[20];
};

void inputstu(stuinfo stu[], int n);
void showstu(stuinfo stu[], int n);
void sotrstu(stuinfo stu[], int n);
bool findstu(stuinfo stu[], int n, const char ch[]);

#endif