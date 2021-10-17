#include<stdio.h>
int lcm(int, int);
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    printf("The lowest common multiple between %d and %d is %d\n", num1, num2, lcm(num1, num2));
    return 0;
}

int lcm(int a, int b)
{
    int big = a;
    if(b > a)
    {
        big = b;
    }
    for(int i = big;;i++)
    {
        if(i % b == 0 && i % a == 0)
        {
            return i;
            break;
        }
    }
}