#include<stdio.h>
int main()
{
    int num;
    char arr[10]="ABCDEF";
    scanf("%d",&num);
    for(int i = 0;i<8;i++)
    {
        int tmp = num>>(4*(7-i));
        if(tmp < 10)
        {
            printf("%d",tmp&15);
        }
        else
        {
            printf("%c",arr[(tmp&15)%10]);
            num>>(4*(i-1));
        }
    }
    return 0;
}