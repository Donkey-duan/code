#include<stdio.h>
int main()
{
    //欄位寬度在scanf還可以當成像切割字串一樣的工具
    int x,y;
    scanf("%4d%d",&x,&y);
    printf("%d %d\n",x,y);
    return 0;
}