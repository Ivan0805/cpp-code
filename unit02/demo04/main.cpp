#include<iostream>

int main(void)
{
    int myNum = 200;
    int num;
    START:std::cin>>num;
    //(num==0)?goto END:goto Run
    (myNum%num==0)?std::cout<<"True\n":std::cout<<"False\n";
    goto START;
    return 0;
}
