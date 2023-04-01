#include<iostream>

int main(void)
{
    int year, yearRem;
    std::cout<<"Year:\n";
    std::cin>>year;
    yearRem = year % 12;
    if (yearRem == (2000%12))std::cout<<"Dragon\n";
    else if (yearRem == (2001%12)) std::cout<<"Snake\n";
    else if (yearRem == (2002%12)) std::cout<<"Horse\n";
    else if (yearRem == (2003%12)) std::cout<<"Sheep\n";
    else if (yearRem == (2004%12)) std::cout<<"Monkey\n";
    else if (yearRem == (2005%12)) std::cout<<"Rooster\n";
    else if (yearRem == (2006%12)) std::cout<<"Dog\n";
    else if (yearRem == (2007%12)) std::cout<<"Pig\n";
    else if (yearRem == (2008%12)) std::cout<<"Rat\n";
    else if (yearRem == (2009%12)) std::cout<<"Ox\n";
    else if (yearRem == (2010%12)) std::cout<<"Tiger\n";
    else if (yearRem == (2011%12)) std::cout<<"Rabbit\n";
    else std::cout<<"Emm...\n";

    return 0;
}
