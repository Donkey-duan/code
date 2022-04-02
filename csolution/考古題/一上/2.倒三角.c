#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    //我忘記哪些題目有範圍限制了，有的話再加上範圍限制條件
    for(int i = num;i>=1;i--)
    {
        for(int j = 1;j<=i;j++)
        {
            printf("*");
        }
        puts("");
    }
    return 0;
}