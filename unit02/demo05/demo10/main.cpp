#include<iostream>

int main(void)
{
    char alpha;
    std::cin>>alpha;
    if ((('a'<=alpha) && (alpha <= 'z')) || (('A' <= alpha) && (alpha<= 'Z')))
    {
        if (alpha == 'a' || alpha == 'e' || alpha == 'o' || alpha =='u' || alpha == 'i')
            std::cout<<"Hi bruh, this is a vowel\n";
        else if (alpha =='y')
            std::cout<<"It depends...\n";
        else
            std::cout<<"Emm...In my opinion, it is a consonant..\n";
    }
    else
    {
        std::cout<<"Emm...\n";
    }

    return 0;
}
