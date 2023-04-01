#include<iostream>

int main(void)
{
    int n;
    int sum;
    std::cout<<"Please give me one number :"<<std::endl;
    std::cin>>n;
    sum = n*(n+1)/2;
    std::cout<<"sum = "<<sum<<std::endl;
    return 0;
}
