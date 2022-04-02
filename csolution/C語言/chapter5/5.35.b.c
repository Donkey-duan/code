#include<stdio.h>
unsigned int fibonacci(int);
int main()
{
    int num;
    scanf("%d", &num);
    printf("%u\n", fibonacci(num));
    return 0;
}
unsigned int fibonacci(int n)
{
    if(n == 1)
    {
        return 0;
    }
    if(n == 2)
    {
        return 1;
    }
    else
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}//可以負荷到50吧，跑超久