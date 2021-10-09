#include<stdio.h>
int main()
{
    int num, counter = 0, i;
    printf("Enter a number(5 digits or fewer): ");
    scanf("%d", &num);
    for(i = 1; i <= num; i++)
{
    if(i % 10000 % 1000 % 100 % 10 == 9)
    {
        counter++;
    }
}
    printf("%d have %d number of 9s.\n", num, counter);
    return 0;
}