#include<iostream>

int main(void)
{
    double userwei;
    std::cin>>userwei;
    if (userwei <= 10)
    {
        std::cout<<userwei * 0.8 + 0.2<<std::endl;
    }
    else if(userwei > 10 && userwei <= 20)
    {
        std::cout<<userwei * 0.75 + 0.2<<std::endl;
    }
    else if(userwei > 20 && userwei <= 30)
    {
        std::cout<<userwei * 0.7 + 0.2<<std::endl;
    }
    else
    {
        std::cout<<"^&^@*#$%#$*$^%@@(&@^#!"<<std::endl;
    }

    return 0;
}
