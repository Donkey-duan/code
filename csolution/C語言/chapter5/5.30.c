#include<stdio.h>
int toQualityPoints(int);
int main()
{
    int score;
    printf("Enter the average score of the student: ");
    scanf("%d", &score);
    if(toQualityPoints(score)==-1)
    {
        printf("You Enter a wrong score!\n");
    }
    else
    {
    printf("Qualitypoints is: %d\n", toQualityPoints(score));
    }
    return 0;
}
int toQualityPoints(int a)
{
    if(a >= 90 && a <= 100)
    {
        return 4;
    }
    if(a >= 80 && a <= 89)
    {
        return 3;
    }
    if(a >= 70 && a <= 79)
    {
        return 2;
    }
    if(a >= 60 && a <= 69)
    {
        return 1;
    }
    if(a < 60)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}