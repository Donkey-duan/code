#include<stdio.h>
#include<math.h>
double hypotenuse(double, double);
int main()
{
    double side1, side2;
    scanf("%lf%lf", &side1, &side2);
    printf("%.1f\n", hypotenuse(side1, side2));
    return 0;
}

double hypotenuse(double a, double b)
{
    return sqrt(pow(a, 2)+pow(b, 2));
}