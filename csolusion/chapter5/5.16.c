#include<stdio.h>
#include<math.h>
double sidecheck(double,double,double);
double surfacearea(double,double,double);
int main()
{
    double side1, side2, side3;
    scanf("%lf%lf%lf", &side1, &side2, &side3);
    if(sidecheck(side1, side2, side3))
    {
        printf("%.2f\n", surfacearea(side1, side2, side3));
    }
    else
    {
        printf("These aren't the sides of a triange!\n");
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
    if(a*a + b*b <= c*c)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

double surfacearea(double a,double b,double c)
{
    int s = (a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}