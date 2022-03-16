#include<stdio.h>
int main()
{
    int time;
    printf("Enter a time(s): ");
    scanf("%d", &time);
    printf("The time is %d : %d : %d\n", time/3600, time % 3600 / 60, time % 3600 % 60);
    return 0;
}