#include<stdio.h>
int main()
{
    int side, i, j;
    printf("Enter the side of the square: ");
    scanf("%d", &side);
    for(i = 1; i <= side; i++)
    {
        for(j = 1; j <= side; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}