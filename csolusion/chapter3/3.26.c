#include<stdio.h>
int main()
{
    int i, num[10], max1 = num[1], max2 = num[0];
    for(i = 0; i <=9; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &num[i]);
        if(num[i] > max1)
        {
            max1 = num[i];
            continue;
        }
        if(num[i] > max2)
        {
            max2 = num[i];
        }
    }
    printf("The max1 and max2 number are %d and %d\n", max1, max2);
    return 0;
}