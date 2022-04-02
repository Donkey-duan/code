#include<stdio.h>
int main()
{
    int side;
    while(~scanf("%d", &side))
    {
        for(int i = 1;i<=side;i++)//第幾層;上半部菱形
        {
            for(int j = side-1;j>=i;j--)//左空格
            {
                printf(" ");
            }
            printf("*");//星
            if(i!=1)
            {
                for(int j = 1;j <= 2*i-3;j++)//中間的空格
                {
                    printf(" ");
                }
                printf("*");//星
            }
            puts("");
        }
        for(int i = side-1;i>=1;i--)//第幾層;下半部菱形
        {
            for(int j = side-1;j>=i;j--)//左空格
            {
                printf(" ");
            }
            printf("*");//星
            if(i!=1)
            {
                for(int j = 1;j <= 2*i-3;j++)//中間的空格
                {
                    printf(" ");
                }
                printf("*");//星
            }
            puts("");
        }
    }
    return 0;
}