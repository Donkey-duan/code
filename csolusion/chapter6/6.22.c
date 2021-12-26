#include<stdio.h>
int main()
{
    int sale[5][6]={0};
    for(int i = 0;i<4;i++)
    {
        for(int j = 0;j<5;j++)
        {
            scanf("%d",&sale[i][j]);
            sale[4][j]+=sale[i][j];
            sale[i][5]+=sale[i][j];
        }
    }
    printf("\t(1)\t(2)\t(3)\t(4)\t(5)\n");
    for(int i = 0;i<5;i++)
    {
        if(i < 4)
        {
            printf("(%d):",i+1);
        }
        printf("\t");
        for(int j = 0;j<6;j++)
        {
            printf("%d\t",sale[i][j]);
        }
        puts("");
    }
    return 0;
}