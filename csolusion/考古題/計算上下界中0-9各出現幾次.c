#include<stdio.h>
int main()
{//還沒好
    int down,up;
    int count[10]={0};
    scanf("%d%d", &down,&up);
    
    for(int i = 0;i<=9;i++)
    {
        printf("%d有%d個\n",i,count[i]);
    }
    return 0;
}