#include<iostream>

int main(void)
{
    int age;
    char name[50];
    char school[50];
    std::cout<<"Please give me your name, age and school"<<std::endl;
    std::cin>>age;
    std::cin>>name;
    std::cin>>school;
    std::cout<<"Your name is "<<name<<". You are "<<age<<" years old. Your schools name is "<<school<<std::endl;

    return 0;
}
