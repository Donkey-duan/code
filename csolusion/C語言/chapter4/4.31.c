#include<stdio.h>
int main()
{
    int row, leftb, star, rightb;
    for(row = 1; row <= 5; row++)
    {
        for(leftb = 5-row; leftb >= 0; leftb--)
        {
            printf(" ");
        }
        for(star = 1; star <= row*2-1;  star++)
        {
            printf("*");
        }
        for(rightb = 5-row; rightb >= 0; rightb--)
        {
            printf(" ");
        }
        puts("");
    }
    for(row = 4; row >= 1; row--)
    {
        for(leftb = 6-row; leftb >= 1; leftb--)
        {
            printf(" ");
        }
        for(star = 1; star <= 2*row-1; star++)
        {
            printf("*");
        }
        for(rightb = 6-row; rightb >= 1; rightb--)
        {
            printf(" ");
        }
        puts("");
    }
    return 0;
}