#include<stdio.h>
int number(int);
int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", number(num));
    return 0;
}

int number(int a)
{
    if(a <= 1)
    {
        return 1;
    }
    return a*number(a-1);
}