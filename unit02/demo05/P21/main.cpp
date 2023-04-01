#include<iostream>

int main(void)
{
    int num;
    std::cin>>num;
    if((num >= 0) && (num <= 9))
    {
        std::cout<<"one digit\n";
    }
    else if((num >= 10) && (num <= 99))
    {
        std::cout<<"two digits\n";
    }
    else if((num >= 100) && (num <= 999))
    {
        std::cout<<"three digits\n";
    }
    else if((num >= 1000) && (num <= 9999))
    {
        std::cout<<"four digits\n";
    }
    else std::cout<<"@&^#%#&#^%!%(^%@\n";

    return 0;
}
