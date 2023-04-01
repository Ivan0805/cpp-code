#include<iostream>
#include<bitset>

int main(void)
{
    int a = 13;
    char b = 15;
    short age = 300;
    long long area = 100000000000000000;
    int height = 1000000000000000000;
    std::cout<<a<<std::endl;
    std::cout<<(int)b<<std::endl;
    std::cout<<"a = "<<sizeof(a)<<" bytes"<<std::endl;
    std::cout<<"b = "<<sizeof(b)<<" bytes"<<std::endl;
    std::cout<<"age = "<<sizeof(age)<<" bytes"<<std::endl;
    std::cout<<"area = "<<sizeof(area)<<" bytes"<<std::endl;
    std::cout<<area<<std::endl;
    std::cout<<age<<std::endl;
    std::cout<<height<<std::endl;

    return 0;
}
