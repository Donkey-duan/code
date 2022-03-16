#include<stdio.h>
int main()
{
    int num[10], i, max = num[0];
    for(i = 0; i <= 9; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &num[i]);
        if(num[i] >= max)
        {
            max = num[i];
        }
    }
    printf("The largest number is %d\n", max);
    return 0;
}