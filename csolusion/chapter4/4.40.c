#include<stdio.h>
#include<math.h>
int main()
{
    int population, year;
    double rate;
    printf("Enter the world population in this year: ");
    scanf("%d", &population);
    printf("Enter the current growth rate: ");
    scanf("%lf", &rate);
    printf("Year\tpopulation\tincreasing\n");
    for(year = 1; year <= 75; year++)
    {
        printf("%d\t%.0f\t\t%.0f", year, population*pow(rate+1, year), population*pow(rate+1, year)-population*pow(rate+1, year-1));
        if(population*(int)pow(rate+1, year)/population==2)
        {
            printf("    double");
        }
        puts("");
    }
    return 0;
}