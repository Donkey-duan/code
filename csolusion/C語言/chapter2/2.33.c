#include<stdio.h>
int main()
{
    int mile, gascost, avergalloncost, park, toll;
    printf("Enter your total miles drive per day: ");
    scanf("%d", &mile);
    printf("Enter your cost per gallon of gasoline: ");
    scanf("%d", &gascost);
    printf("Enter the average miles per gallon: ");
    scanf("%d", &avergalloncost);
    printf("Enter the parking fees per day: ");
    scanf("%d", &park);
    printf("Enter tolls per day: ");
    scanf("%d", &toll);
    printf("The sum of cost per day is %d dollars.\n", toll + park + mile/avergalloncost*gascost);
    return 0;
}