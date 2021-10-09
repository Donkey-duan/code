#include<stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    int max = num1;
    if(num2 >= num1)
    {
        max = num2;
    }
    if(num3 >= num2)
    {
        max = num3;
    }
    printf("Max = %d\n", max);
    return 0;
}