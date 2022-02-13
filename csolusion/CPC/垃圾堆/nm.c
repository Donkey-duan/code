#include<stdio.h>//快速幕，頗半次方
#include<math.h>
int mn(int, int);
int main()
{
    int num1, num2;
    scanf("%d%d", &num1, &num2);
    printf("%d\n", mn(num1, num2));
    return 0;
}

int mn(int a, int n)
{
    if(n == 0)
    {
        return 1;
    }
    if(n % 2 == 1)
    {
        return pow(a*a, n/2)*a;
    }
    else{
        return pow(a*a, n/2);
    }
}