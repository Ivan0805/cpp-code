#include<iostream>

int main(void)
{
    int number=87;
    int userNum;
    std::cout<<"Guess the number please:"<<std::endl;
    std::cin>>userNum;
    if (userNum ==87)
    {
        std::cout<<"Well done!!!\n";
    }
    else if(userNum < 87)
    {
        std::cout<<"So smaller... ^__^\n";
    }
    else
    {
        std::cout<<"So bigger... ^__^\n";
    }
    return 0;
}
