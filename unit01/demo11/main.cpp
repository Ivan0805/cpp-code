#include<iostream>

int main(void)
{
    double chinese, math, english, average;
    int c1 = 37, c2 = 40, c3 = 35, total;
    total = c1 + c2 + c3;
    chinese = 95;
    math = 80;
    english = 90;
    average = (chinese + math + english) / 3;
    std::cout<<"张三的平均分是"<<average<<std::endl;
    std::cout<<"这个年级一共有"<<total<<"人"<<std::endl;

    return 0;
}
