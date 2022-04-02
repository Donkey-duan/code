#include<stdio.h>
#include<math.h>
void rootsCheck(int, int, int);
int main()
{
    int a, b, c;
    printf("Enter the coefficients of an equation(ax^2 + bx + c): ");
    scanf("%d%d%d", &a, &b, &c);
    rootsCheck(a, b, c);
    return 0;
}

void rootsCheck(int a, int b, int c)
{
    if(b*b-4*a*c >= 0)
    {
        printf("root1 = %d, root2 = %d\n", ((int)sqrt(b*b-4*a*c)-b)/(2*a), (-(int)sqrt(b*b-4*a*c)-b)/(2*a));
    }
    else
    {
        printf("There are imaginary roots.");
    }
}