#include<stdio.h>
//POINT:雙重for迴圈
int main()
{
    int side;
    scanf("%d", &side);
    for(int i = 1;i<= side;i++)
    {
        for(int j = 1;j<= side;j++)
        {
            printf("*");
        }
        puts("");
    }
    return 0;
}