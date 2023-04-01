#include<iostream>

int main(void)
{
    char c1, c2, c3;
    std::cout<<"Please give me three letters in lowercase:"<<std::endl;
    std::cin>>c1>>c2>>c3;
    std::cout<<(char) c1 <<"-->" <<(char)(c1+ 32)<<std::endl;
    std::cout<<(char) c2 <<"-->" <<(char)(c2+ 32)<<std::endl;
    std::cout<<(char) c3 <<"-->" <<(char)(c3+ 32)<<std::endl;

    return 0;
}
