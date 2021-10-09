#include<stdio.h>
int main()
{
    int i, j;
    for(i = 1; i <= 5; i++)
    {
        int sum = i;
        if(i == 1)
        {
            printf("1! = 1\n");
            continue;
        }
        for(j = 1; j < i; j++)
        {
            sum *= (i-j);
        }
        printf("%d! = %d\n", i, sum);
    }
    return 0;
}