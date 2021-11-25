#include<stdio.h>//lcm = a*b/gcd
int lcm(int, int);
int gcd(int, int);
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", lcm(a, b));
    return 0;
}
int lcm(int num1, int num2)
{
    if(num1 == 0 || num2 == 0)
    {
        return 0;
    }
    return num1*num2/gcd(num1, num2);
}
int gcd(int n1, int n2)
{
    int bigger = n1, smaller = n2;
    if(n2 > n1)
    {
    bigger = n2, smaller = n1;
    }
    if(bigger%smaller == 0)
    {
        return smaller;
    }
    return gcd(bigger, bigger%smaller);
}