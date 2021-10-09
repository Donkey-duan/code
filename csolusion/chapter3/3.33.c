#include<stdio.h>
int main()
{
    int side, i, j, n;
    printf("Enter the side of the square: ");
    scanf("%d", &side);
    for(i = 1; i <= side; i++)//第i行
    {
        if(i == 1 || i == side)//首尾
        {
            for(n = 1; n <= side; n++)
            {
            printf("*");
            }
            printf("\n");
            continue;
        }
        for(j = 1; j <= side; j++)//第j列
        {
            if(j == 1 || j == side)//首尾
            {
                printf("*");
                continue;
            }
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}