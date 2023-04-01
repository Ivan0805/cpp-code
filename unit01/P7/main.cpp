#include<iostream>

int main(void)
{
    int day = 1;
    int hour = 4;
    int minute = 25;
    int second = 45;
    int seconds;
    seconds = day * 24 * 60 * 60 + hour * 60 * 60 + minute * 60 + second;
    std::cout<<"seconds = "<<seconds<<std::endl;
    return 0;
}
    
