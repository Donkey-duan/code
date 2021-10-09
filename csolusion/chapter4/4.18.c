#include<stdio.h>
int main()
{
    int i, j, k, num[5];
    for(i = 0; i <= 4; i++)
    {
        printf("Enter a number(1-30): ");
        scanf("%d", &num[i]);
    }
    for(j = 0; j <= 4; j++)
    {
        printf("%d : ", num[j]);
        for(k = 1; k <= num[j]; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}