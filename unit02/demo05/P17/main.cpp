#include<iostream>

int main(void)
{
    int head, foot, rabbit, rooster;
    head = 35;
    foot = 94;
    rabbit = (foot - head * 2) / 2;
    rooster = head - rabbit;
    std::cout<<"rabbit = "<<rabbit<<", rooster = "<<rooster<<std::endl;
    return 0;
}
