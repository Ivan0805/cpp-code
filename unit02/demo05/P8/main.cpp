#include<iostream>

int main(void)
{
    char userLetter;
    std::cin>>userLetter;
    if (userLetter == 'a' || userLetter == 'e' || userLetter == 'i' || userLetter == 'o' || userLetter == 'u')
    {
        std::cout<<"This is vowel! ^__^\n";
    }
    else if(userLetter == 'y')
    {
        std::cout<<"This is vowel and consonant! ^__^\n";
    }
    else
    {
        std::cout<<"This is consonant! ^__^\n";
    }

    return 0;
}                                                                                                                               
