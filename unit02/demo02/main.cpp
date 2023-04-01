#include<iostream>

int main(void)
{
    char gender;
    std::cout<<"Give me your gender:";
    std::cin>>gender;
    (gender = 'M')?std::cout<<"This way please! M\n":std::cout<<"This way please! F\n";

    return 0;
}
