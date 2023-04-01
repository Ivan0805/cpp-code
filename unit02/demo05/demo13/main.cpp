#include<iostream>
#include<cstdio>

int main(void)
{
    int a, b;
    char operate;
    std::cin>>a>>b>>operate;
    switch(operate)
    {
        case '+':
            printf("%d + %d = %d\n", a, b, a+b);
            break;
        case '-':
            printf("%d - %d = %d\n", a, b, a-b);
            break;
        case '*':
            printf("%d * %d = %d\n", a, b, a*b);
            break;
        case '/':
            printf("%d / %d = %d\n", a, b, a/b);
            break;
        default:
            printf("I have no idea!\n");
    }

    return 0;
}
