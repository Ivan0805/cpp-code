#include<iostream>

int main(void)
{
    int age;
    double height;
    char gender;
    char name[50];
    std ::cin>>age>>height>>gender>>name;
    std::cout<<"Age:"<<age<<std::endl;
    std::cout<<"Height:"<<height<<std::endl;
    std::cout<<"Gender:"<<gender<<std::endl;
    std::cout<<"Name:"<<name<<std::endl;

    return 0;
}
