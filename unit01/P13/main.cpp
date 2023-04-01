#include<iostream>

int main(void)
{
    char n1,n2,n3,n4;
    char N1,N2,N3,N4;
    std::cout<<"Please give me your name:"<<std::endl;
    std::cin>>N1>>N2>>N3>>N4;
    n1=N1+32;
    n2=N2+32;
    n3=N3+32;
    n4=N4+32;
    std::cout<<(char)N1<<(char)N2<<(char)N3<<(char)N4<<"-->"<<(char)n1<<(char)n2<<(char)n3<<(char)n4<<std::endl;

    return 0;
}
