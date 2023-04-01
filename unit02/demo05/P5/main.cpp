#include<iostream>

int main(void)
{
    int num1, num2, num3;
    std::cin>>num1;
    num2 = num1 + 1;
    num3 = num1 - 1;
    (num1<=100)?std::cout<<num2<<" "<<num3<<std::endl:std::cout<<"这个数大于100了\n";
    
    return 0;
}
