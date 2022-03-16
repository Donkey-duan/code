#include<stdio.h>
int main()
{
    int high, year;
    printf("Enter the highest rainfall ever in one season for a country: ");
    scanf("%d", &high);
    printf("Enter the rainfall  in the current year of that country: ");
    scanf("%d", &year);
    if(year > high)
    {
        high = year;
    }
    printf("The highest rainfall is %d.\n", high);
    return 0;
}