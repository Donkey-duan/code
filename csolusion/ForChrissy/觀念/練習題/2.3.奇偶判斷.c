#include<stdio.h>
//POINT:％運算子運用
int main()
{
    int num;
    scanf("%d", &num);
    if(num % 2 == 0)
    {
        puts("It's even!\n");
    }
    else
    {
        puts("It's odd!\n");
    }
    return 0;
}