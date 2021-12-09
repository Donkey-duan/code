#include<stdio.h>
int main()
{//還沒好
    int num1, num2;
    int a[20]={0};
    scanf("%d %d", &num1, &num2);
    for(;num1<=num2;num1++)
    {
        if(num1<10)
        {
            a[num1%10]++;
        }
        else
        {
            a[num1/10]++;
            a[num1%10]++;
        }
    }
    for(int i = 0;i<10;i++)
    {
        printf("%d有%d個\n", i, a[i]);
    }
    return 0;
}