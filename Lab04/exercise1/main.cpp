#include "stuinfo.hpp"
#include <iostream>
int main()
{
    stuinfo stus[3];
    inputstu (stus, 3);
    sotrstu (stus, 3);
    showstu (stus, 3);
    std::cout << findstu (stus, 3, "yu") << std::endl;
}