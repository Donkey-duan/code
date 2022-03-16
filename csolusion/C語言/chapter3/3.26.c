#include<stdio.h>
int main()
{
    int i, num[10], j;
    for(i = 0; i <= 9; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &num[i]);
    }
    for(i = 0; i <= 8; i++)
    {
        for(j = 0; j <= 8; j++)
        {
            if(num[j]>num[j+1])
            {
                int temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }
    printf("The two of the largest number are %d and %d\n", num[8], num[9]);
    return 0;
}