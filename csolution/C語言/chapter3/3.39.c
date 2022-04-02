#include<stdio.h>
int main()
{
    int i, j;
    for(i = 1; i <= 8; i++)
    {
        if(i % 2 == 0)
        {
            printf(" ");
        }
        for(j = 1; j <= 8; j++)
        {
            printf("*");
            printf(" "); 
        }
        puts("");
    }
    return 0;
}