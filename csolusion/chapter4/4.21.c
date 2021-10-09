#include<stdio.h>
int main()
{
    int i, j, num[128];
    for(i = 0; i <= 127; i++)
    {
        num[i] = i+1;
    }
    for(j = 0; j <= 127; j++)
    {
        printf("%c ", num[j]);
        if((j+1) % 10 == 0)
        {
            puts("");
        }
    }
    return 0;
}