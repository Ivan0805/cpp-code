#include<iostream>

int main(void)
{
    int num;
    std::cin>>num;
    (num%7==0)?std::cout<<"这是七的倍数\n":std::cout<<"这不是七的倍数\n";

    return 0;
}
