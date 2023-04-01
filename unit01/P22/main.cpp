#include<iostream>

int main(void)
{
    double cm, in;
    std::cout<<"Please give me your height(inch):"<<std::endl;
    std::cin>>in;
    cm = in * 2.54;
    std::cout<<"cm = "<<(double)cm<<std::endl;

    return 0;
}
