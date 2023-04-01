#include<iostream>

int main(void)
{
    int num;
    std::cin>>num;
    (num<0)?std::cout<<"这是个负数\n":std::cout<<"这不是个负数\n";
    
    return 0;
}
