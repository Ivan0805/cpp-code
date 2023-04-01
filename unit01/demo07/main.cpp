#include<iostream>
const float PI = 3.14;
int main(void)
{
    float radius, area;
    std::cout<<"Radius of the circle:";
    std::cin>>radius;
    area = radius * radius * PI;
    std::cout<<"The area of the circle is "<<area<<" sqr-units"<<std::endl;

    return 0;
}
