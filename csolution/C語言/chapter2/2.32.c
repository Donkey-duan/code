#include<stdio.h>
int main()
{
    int weight, height;
    printf("Enter your weight(kg), height(m): ");
    scanf("%d%d", &weight, &height);
    int bmi = weight/(height*height);
    printf("BMI VALUES\n");
    if(bmi < 18.5)
    {
        printf("Underweight: less than 18.5\n");
    }
    if(bmi >= 18.5 && bmi < 25)
    {
        printf("Normal: between 18.5 and 24.9\n");
    }
    if(bmi > 25 && bmi < 30)
    {
        printf("Overweight: between 25 and 29.9\n");
    }
    if(bmi > 30)
    {
        printf("Obese: 30 or greater\n");
    }
    return 0;
}