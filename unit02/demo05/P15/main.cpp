#include<iostream>

int main(void)
{
    unsigned int num1, num2, num3;
    std::cin>>num1>>num2>>num3;
    if((num1==num2) && (num1==num3))
    {
        std::cout<<"equilateral"<<std::endl;
    }
    if((((num2==num1) && (num2!=num3)))||(((num2==num3) && (num3!=num1)))||(((num3==num1) && (num3!=num2))))
    {
        std::cout<<"isosceles"<<std::endl;
    }
    
    if((num1!=num2) && (num2!=num3) && (num1!=num3))
    {
        std::cout<<"scalene"<<std::endl;
    }
    return 0;
}
