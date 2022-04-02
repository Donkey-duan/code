#include<stdio.h>
double sidecheck(double,double,double);
int main()
{
    double side1, side2, side3;
    scanf("%lf%lf%lf", &side1, &side2, &side3);
    if(sidecheck(side1, side2, side3))
    {
        printf("True!\n");
    }
    else
    {
        printf("Nono!\n");
    }
    return 0;
}

double sidecheck(double a, double b, double c)
{
    if(a > c)
    {
        int t = a; a = c; c = t;
    }
    if(b > c)
    {
        int t = b; b = c; c = t;
    }
    if(a*a + b*b == c*c)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}