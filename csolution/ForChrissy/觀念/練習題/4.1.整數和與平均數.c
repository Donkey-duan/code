#include<stdio.h>
//POINT:指定運算子
int main()
{
    int time,num,sum = 0;
    scanf("%d", &time);
    for(int i = 1;i <= time; i++)
    {
        scanf("%d", &num);
        sum += num;
    }
    printf("sum = %d\tAverage = %d\n",sum,sum/time);
    return 0;
}