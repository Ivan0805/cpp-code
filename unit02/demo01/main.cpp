#include<iostream>

int main(void)
{
    double a = 1.0, b = 2.0;
    std::cout<< (a>b) <<std::endl;
    std::cout<< (a<b) <<std::endl;
    std::cout<< (a == b) <<std::endl;
    std::cout<< (a >= b) <<std::endl;
    std::cout<< (a <= b) <<std::endl;
    std::cout<< (a != b) <<std::endl;
    (a!=b)?std::cout<<"This is true"<<std::endl:std::cout<<"This is false"<<std::endl;
    (a==b)?std::cout<<"This is true"<<std::endl:std::cout<<"This is false"<<std::endl;

    return 0;
}
