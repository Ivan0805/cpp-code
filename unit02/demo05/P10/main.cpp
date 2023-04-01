#include<iostream>

int main(void)
{
    int userDay;
    std::cin>>userDay;
    if (userDay == 1 || userDay == 3 || userDay == 5 || userDay == 7 || userDay == 8 || userDay == 10  || userDay == 12)
    {
        std::cout<<"31\n";
    }
    else if(userDay == 4 || userDay == 6 || userDay == 9 || userDay == 11)
    {
        std::cout<<"30\n";
    }
    else if(userDay == 2)
    {
        std::cout<<"28/29\n";
    }
    else
    {
        std::cout<<"I have no idea!!!\n";
    }

    return 0;
}
