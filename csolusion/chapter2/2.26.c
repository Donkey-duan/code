#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    if(num2 % num1 == 0)
    {
        printf("%d is a multiple of %d.\n", num1, num2);
    }
    return 0;
}