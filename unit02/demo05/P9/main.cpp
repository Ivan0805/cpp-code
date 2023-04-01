#include<iostream>

int main(void)
{
    int userSides;
    std::cin>>userSides;
    if (userSides == 3)
    {
        std::cout<<"triangle\n";
    }
    else if(userSides == 4)
    {
        std::cout<<"quadrangle\n";
    }
    else if(userSides == 5)
    {
        std::cout<<"pentagon\n";
    }
    else if(userSides == 6)
    {
        std::cout<<"hexagon\n";
    }
    else if(userSides == 7)
    {
        std::cout<<"heptagon\n";
    }
    else if(userSides == 8)
    {
        std::cout<<"octagon\n";
    }
    else if(userSides == 9)
    {
        std::cout<<"enneagon\n";
    }
    else if(userSides == 10)
    {
        std::cout<<"decagon\n";
    }
    else
    {
        std::cout<<"I have no idea!!!\n";
    }

    return 0;
}
