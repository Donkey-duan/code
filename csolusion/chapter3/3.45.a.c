#include<stdio.h>
int main()
{
    int sum, num, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    sum = num;
    for(i = 1; i < num; i++)
    {
        sum *= (num-i);
    }
    printf("!%d = %d\n", num, sum);
    return 0;
}