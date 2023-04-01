#include<iostream>

int main(void)
{
    int year;
    std::cin>>year;
    if(year%400==0)
    {
        std::cout<<"leap year\n";
    }
    else if((year%4==0) && (year%100!=0))
    {
        std::cout<<"leap year\n";
    }
    else std::cout<<"not leap year\n";

    return 0;
}
