#include<iostream>

int main(void)
{
    int num1, num2, num3;
    std::cin>>num1>>num2>>num3;
    if((num1>num2) && (num1>num3))
    {
      std::cout<<"最大的数："<<num1<<std::endl;
    }
    if((num2>num1) && (num2>num3))
    {
      std::cout<<"最大的数："<<num2<<std::endl;
    }
    if((num3>num1) && (num3>num2)) 
    {
      std::cout<<"最大的数："<<num3<<std::endl;
    }
    return 0;
}

