#include<stdio.h>
int main()
{
    double radius;
    printf("Enter the radius of a cirle(as a float value): ");
    scanf("%lf", &radius);
    printf("Diameter: %.2f\n", 2 * radius);
    printf("Circumference: %.2f\n", 2 * radius * 3.14159);
    printf("Area: %.2f\n", radius * radius * 3.14159);
    return 0;
}