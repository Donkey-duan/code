#include<stdio.h>
int main()
{
    int enterrow;
    printf("Enter the row of diamond(1-19):");
    scanf("%d", &enterrow);
    if(enterrow%2 == 1)
    {
    int row, leftb, star, rightb;
    for(row = 1; row <= (enterrow+1)/2; row++)
    {
        for(leftb = (enterrow+1)/2-row; leftb >= 0; leftb--)
        {
            printf(" ");
        }
        for(star = 1; star <= row*2-1;  star++)
        {
            printf("*");
        }
        for(rightb = (enterrow+1)/2-row; rightb >= 0; rightb--)
        {
            printf(" ");
        }
        puts("");
    }
    for(row = (enterrow-1)/2; row >= 1; row--)
    {
        for(leftb = enterrow/2+2-row; leftb >= 1; leftb--)
        {
            printf(" ");
        }
        for(star = 1; star <= 2*row-1; star++)
        {
            printf("*");
        }
        for(rightb = enterrow/2+2-row; rightb >= 1; rightb--)
        {
            printf(" ");
        }
        puts("");
    }
    }
    else
{
    printf("nono\n");
}    
return 0;
}