#include<stdio.h>
int main()
{
    int num, i, value[30], sum = 0;
    scanf("%d", &num);
    for(i = 0; i <= num-1; i++)
    {
        scanf("%d", &value[i]);
        sum += value[i];
    }
    int average = sum / num;
    printf("The sum of numbers is %d\n", sum);
    printf("The average of numbers is %d\n", average);
    return 0;
}