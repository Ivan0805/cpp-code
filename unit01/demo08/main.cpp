#include<iostream>

int main(void)
{   
    float num1 = 0.000000123;
    double num2 = 0.000000123;
    num1 = num1 * 1000000000.0;
    num2 = num2 * 1000000000.0;
    std::cout<<sizeof(num1)<<std::endl;
    std::cout<<sizeof(num2)<<std::endl;

    return 0;
}
