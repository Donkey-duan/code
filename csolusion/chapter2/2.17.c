#include<stdio.h>
int main()
{
    int v, a, t;
    printf("Enter the initial velocity, acceleration of an object and the time: ");
    scanf("%d%d%d", &v, &a, &t);
    printf("The final velocity is %d.\n", v + a * t);
    printf("The distance is %d.\n", v * t + 1/(2 * a * t * t));
    return 0;
}