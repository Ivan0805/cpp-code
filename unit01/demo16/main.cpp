#include<iostream>

int main(void)
{
    int request, day, hour, minute, second, rem1, rem2;
    std::cin>>request;
    day = request / (60 * 60 * 24);
    rem1 = request % (60 * 60 * 24);
    hour = rem1 / (60 * 60);
    rem2 = rem1 % (60 * 60);
    minute  = rem2 / 60;
    second = rem2 % 60;
    std::cout<<day<<"-";
    std::cout<<hour<<"-";
    std::cout<<minute<<"-";
    std::cout<<second<<std::endl;

    return 0;
}
