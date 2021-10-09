#include<stdio.h>
int main()
{
    int i, j, num[7], sum = 0, average = 0;
    for(i = 1; i <= 13; i+=2)
    {
        sum += i;
    }
    average = sum / 7;
    printf("The average of class grade is %d\n", average);
    return 0;
}