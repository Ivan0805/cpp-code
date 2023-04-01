#include<iostream>

int main(void)
{
    int h, m;
    std::cin>>h>>m;
    if((h > 0) && (h <= 12))
    {
        if((h >= 0) && (h < 10)) std::cout<<"0";
        if((m >= 0) && (m < 10))
        {
            std::cout<<h<<":0"<<m<<std::endl;
        }
        else std::cout<<h<<":"<<m<<std::endl;
    }
    else if((h > 12) && (h <= 24))
    {
        std::cout<<h - 12<<":"<<m<<std::endl;
    }
    else std::cout<<"^%!@$!#@^$*&^%*#&\n";

    return 0;
}
