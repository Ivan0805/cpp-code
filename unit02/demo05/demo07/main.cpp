#include<iostream>

int main(void)
{
    char userColour;
    std::cout<<"What colour of your ball:"<<std::endl;
    std::cin>>userColour;
    if (userColour == 'r' || userColour == 'b')
    {
        std::cout<<"The first prize!!! ^__^ ^__^ ^__^ !!!\n";
    }
    else if(userColour == 'g')
    {
        std::cout<<"The second prize! ^__^ !\n";
    }
    else
    {
        std::cout<<"Thank you for your patronage *__* ~~~\n";
    }

    return 0;
}
