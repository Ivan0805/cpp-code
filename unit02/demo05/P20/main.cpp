#include<iostream>

int main(void)
{
    int num, ones, tens, hundreds;
    std::cin>>num;
    if (num >=100 && num <1000)
    {
        std::cout<<num<<std::endl;
        hundreds = num / 100;
        tens = (num % 100) / 10;
        ones = (num % 100) % 10;
        std::cout<<hundreds<<" "<<tens<<" "<<ones<<std::endl;
        if(hundreds * hundreds * hundreds + tens * tens * tens + ones * ones * ones == num)
        {
            std::cout<<"This is a Narcissistic number\n";
        }
        else std::cout<<"This is not a Narcissistic number\n";
    }
    else std::cout<<"Please give me a number with 3 digits\n";
    

    return 0;
}
