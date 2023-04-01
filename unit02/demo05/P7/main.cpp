#include<iostream>

int main(void)
{
    int num;
    std::cin>>num;
    (48%num==0 && 36%num==0)?std::cout<<"Yes\n":std::cout<<"No\n";

    return 0;
}
