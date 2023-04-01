#include<iostream>

int main(void)
{
    int num1,num2;
    int widgets = 75;
    int gizmos = 112;
    int totalweight;
    std::cout<<"Please give me two numbers :"<<std::endl;
    std::cin>>num1;
    std::cin>>num2;
    totalweight = num1 = widgets + num2 * gizmos;
    std::cout<<"totalweight = "<<totalweight<<std::endl;
    return 0;
}
    
