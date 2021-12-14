#include<stdio.h>
//POINT:明白計數＋for迴圈
int main()
{
    int counter = 1;
    for(int i = 1;i <= 10;i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("%d ",counter);
            counter++;
        }
        puts("");
    }
    return 0;
}