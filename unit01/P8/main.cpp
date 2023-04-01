#include<iostream>

int main(void)
{
    int degreesCelsius;
    int degreesFahrenheit;
    int degreesKelvin;
    std::cout<<"Please give me one number :"<<std::endl;
    std::cin>>degreesCelsius;
    degreesFahrenheit = degreesCelsius * 1.8 + 32;
    degreesKelvin = degreesCelsius + 273.15;
    std::cout<<"degreesFahrenheit = "<<degreesFahrenheit<<std::endl;
    std::cout<<"degreesKelvin = "<<degreesKelvin<<std::endl;
    return 0;
}
