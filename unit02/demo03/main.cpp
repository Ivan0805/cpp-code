#include<iostream>

int main(void)
{
    int age;
    std::cout<<"How old are you?"<<std::endl;
    std::cin>>age;
    (age>13)?std::cout<<"你不免费！！！\n":std::cout<<"你可以免费！！！\n";

    return 0;
}
