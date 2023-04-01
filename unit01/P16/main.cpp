include<iostream>

int main(void)
{
    int day, hour, minute, seconds, second;
    std::cin>>seconds;
    minute = seconds / 60;
    hour = minute / 60;
    day = hour / 24;
    second = seconds % 60;
    std::cout<<"day = "<<day<<std::endl;
    std::cout<<"hour = "<<hour<<std::endl;
    std::cout<<"minute = "<<minute<<std::endl;
    std::cout<<"secound = "<<second<<std::endl;

    return 0;
}
    
