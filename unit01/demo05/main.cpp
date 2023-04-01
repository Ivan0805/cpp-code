#include<iostream>

int main(void)
{
    int num1,num2;
    int sum,difference,quotient,product,remainder;
    std::cout<<"Please give me two number:"<<std::endl;
    std::cin>>num1;
    std::cin>>num2;
    sum = num1 + num2;
    difference = num1 - num2;
    remainder = num1 % num2;
    quotient = num1 * num2;
    product = num1 / num2;
    std::cout<<"sum = "<<sum<<std::endl;
    std::cout<<num1<<" - "<<num2<<" = "<<difference<<std::endl;
    std::cout<<num1<<" % "<<num2<<" = "<<remainder<<std::endl;
    std::cout<<num1<<" * "<<num2<<" = "<<quotient<<std::endl;
    std::cout<<num1<<" / "<<num2<<" = "<<product<<std::endl;
    return 0;
}
