#include<iostream>

int main(void)
{
    double num1, num2, sum, difference, product, result;
    std::cout<<"##############################Mingxuan's Calculator#################################\n\n\n";
    std::cout<<"Give me number1:";
    std::cin>>num1;
    std::cout<<"Give me number2:";
    std::cin>>num2;
    std::cout<<"\n\nresult---------------->\n";
    sum = num1 + num2;
    std::cout<<num1<<" + "<<num2<<" = "<<sum<<std::endl;
    std::cout<<"<----------------result\n";
    std::cout<<"\a";
    std::cout<<"############################# End of Calculator##############################\n\n\n";

    return 0;
}
