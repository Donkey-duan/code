#include<stdio.h>
int min(int, int);
int max(int, int);
int main()
{
    int num1, num2, num3;
    printf("Enter three different integers: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    printf("Sum is %d\n", num1 + num2 + num3);
    printf("Average is %d\n", (num1 + num2 + num3)/3);
    printf("Product is %d\n", num1 * num2 * num3);
    printf("Smallest is %d\n", min(min(num1, num2), num3));
    printf("Largest is %d\n", max(max(num1, num2), num3));
    return 0;
}

int min(int a, int b)
{
    int min = a;
    if(b < a)
    {
        min = b;
    }
    return min;
}

int max(int a, int b)
{
    int max = a;
    if(b > a)
    {
        max = b;
    }
    return max;
}