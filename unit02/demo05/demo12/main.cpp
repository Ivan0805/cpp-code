#include<iostream>

int main(void)
{
    int a, b;
    char operate;
    std::cin>>a>>b>>operate;
    if (operate == '+') std::cout<<a<<" + "<<b<<" = "<<a+b<<std::endl;
    else if (operate == '-') std::cout<<a<<" - "<<b<<" = "<<a-b<<std::endl;
    else if (operate == '*') std::cout<<a<<" * "<<b<<" = "<<a*b<<std::endl;
    else if (operate == '/') std::cout<<a<<" / "<<b<<" = "<<a/b<<std::endl;
    else std::cout<<"I have no idea!\n";

    return 0;
}
