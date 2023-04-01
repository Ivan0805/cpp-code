#include<iostream>

int main(void)
{
    int dad, mom, me;
    double sum, ave;
    std::cin>>dad>>mom>>me;
    sum = dad + mom + me;
    ave = (double)(dad + mom + me) / 3;
    std::cout<<"sum = "<<sum<<std::endl;
    std::cout<<"ave = "<<ave<<std::endl;

    return 0;
}
