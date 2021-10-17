#include<stdio.h>
double toYen(int);
double toEuro(int);
int main()
{
    int a, b, i;
    printf("Enter the range you want to exchange from US dollars to the other contries(a to b):");
    scanf("%d%d", &a, &b);
    printf("Us\tYen\tEuro\n");
    for(i = a; i <= b; i++)
    {
        printf("%d\t%.2f\t%.2f\n", i, toYen(i), toEuro(i));
    }
    return 0;
}

double toYen(int x)
{
    return (double)x*118.87;
}

double toEuro(int x)
{
    return (double)x*0.92;
}