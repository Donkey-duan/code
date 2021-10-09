#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number less than 100000: ");
    scanf("%d", &num);
    if(num < 100000)
    {
        printf("%d\t%d\t%d\t%d\t%d\n", num/10000, num%10000/1000, num%10000%1000/100, num%10000%1000%100/10, num%10000%1000%100%10);
    }
    return 0;
}