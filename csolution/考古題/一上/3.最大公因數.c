#include<stdio.h>
int gcd(int, int);
int main()
{
    int num1, num2;
    scanf("%d%d", &num1, &num2);
    int bigger = num1, smaller = num2;
    if(num2 > num1)
    {
    bigger = num2, smaller = num1;
    }
    printf("%d\n", gcd(bigger, smaller));
    return 0;
}
int gcd(int n1, int n2)
{
    int remain = n1%n2;
    if(remain == 0)
    {
        return n2;
    }
    return gcd(n2, remain);
}