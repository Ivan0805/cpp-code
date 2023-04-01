#include<iostream>

int main(void)
{
    int x, y, z;
    std::cin>>x>>y>>z;
    if (x>=y)
    {
        if (x >= z) std::cout<<x<<std::endl;
    }
    else if(y>=x)
    {
        if(y>=z) std::cout<<y<<std::endl;
    }
    else std::cout<<z<<std::endl;
    return 0;
}
