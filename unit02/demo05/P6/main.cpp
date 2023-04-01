#include<iostream>

int main(void)
{
    char letter;
    int result1;
    int result2;
    std::cout<<"Give me a letter\n";
    std::cin>>letter;
    (letter>=65)?result1=1:result1=0;
    (letter<=90)?result2=1:result2=0;
    std::cout<<result1<<std::endl;
    std::cout<<result2<<std::endl;
    (letter>=65 && letter<=90)?std::cout<<"Upper-case\n":std::cout<<"Nut upper-case\n";

    return 0;
}
