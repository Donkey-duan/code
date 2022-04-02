#include<stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter three sides: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    if(num1 > num3)
    {
        int t = num3;
        num3 = num1;
        num1 = t;
    }
    if(num2 > num3)
    {
        int t = num3;
        num3 = num2;
        num2 = t;
    }
    if(num1*num1 + num2*num2 == num3*num3)
    {
        printf("They could be the sides of a right triangle.\n");
    }
    else
    {
        puts("NO!\n");
    }
    return 0;
}