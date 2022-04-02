#include<stdio.h>
int main()
{
    int i, j;
    for(i = 1; i <= 10; i++)
    {
        for(j = 2; j <= i; j ++)
        {
            printf(" ");
        }
        for(j = 10; j >= i; j--)
        {
            printf("%s", "*");
        }
        puts("");
    }
    return 0;
}