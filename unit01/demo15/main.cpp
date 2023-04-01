iint main(void)
{
    char c = 'a';
    short num1 = 65535;
    int num2 = 2555;
    long long num3 = -1000;
    unsigned short num4 = 65535;
    
    float f1 = 3.10f;
    double f2 = 3.5545;
    char name[50] = "Jack Yang";
    
    std::cout<<"The size of "<<c<<" is "<<sizeof(c)<<"bytes;"<<std::endl;
    std::cout<<"The size of "<<num1<<" is "<<sizeof(num1)<<"bytes"<<std::endl;
    std::cout<<"The size of "<<num2<<" is "<<sizeof(num2)<<"bytes"<<std::endl;
    std::cout<<"The size of "<<num3<<" is "<<sizeof(num3)<<"bytes"<<std::endl;
    std::cout<<"The size of "<<num4<<" is "<<sizeof(num4)<<"bytes"<<std::endl;
    std::cout<<"The size of "<<f1<<" is "<<sizeof(f1)<<"bytes"<<std::endl;
    std::cout<<"The size of "<<f2<<" is "<<sizeof(f2)<<"bytes"<<std::endl;
    std::cout<<"The size of "<<name<<" is "<<sizeof(name)<<"bytes"<<std::endl;
    
    return 0;
}
