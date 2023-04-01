#include<iostream>

int main(void)
{
    int num1, num2, num3, num4, num5;
    double sum, ave;
    std::cin>>num1>>num2>>num3>>num4>>num5;
    sum = num1 + num2 + num3 + num4 + num5;
    ave = (double)sum / 5;
    std::cout<<"sum = "<<sum<<std::endl;
    std::cout<<"ave = "<<ave<<std::endl;

    return 0;
}
