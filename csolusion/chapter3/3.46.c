#include<stdio.h>
#include<math.h>
int main()
{
    int currentpop, i;
    float rate;
    printf("Enter current world population: ");
    scanf("%d", &currentpop);
    printf("Enter anual worldpopulation qrowth rate: ");
    scanf("%f", &rate);
    for(i = 1; i <= 5; i++)
    {
        printf("The world population after %d year: %.0f\n", i, currentpop*pow(1+rate, i));
    }
    return 0;
}