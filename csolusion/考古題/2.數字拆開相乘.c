#include<stdio.h>
int main()
{
    int num,sum = 1;
    scanf("%d",&num);
    for(int i = 1;num!=0;i++)
    {
        sum *=num%10;
        num/=10;
    }
    printf("%d\n",sum);
    return 0;
}