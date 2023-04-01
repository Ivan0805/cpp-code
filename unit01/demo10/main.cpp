#include<iostream>

int main(void)
{
    int a, b;
    std::cin>>a>>b;
    int wholeNum, numerator, denominator;
    wholeNum = a / b;
    numerator = a % b;
    denominator = b;
    std::cout<<wholeNum<<" and "<< numerator <<"/"<<denominator<<std::endl;
    std::cout<<(double) a / (double) b <<std::endl;
    std::cout<<(double) a * 100 / (double) b <<"%"<<std::endl;
    
    return 0;
}
