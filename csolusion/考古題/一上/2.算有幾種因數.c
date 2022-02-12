#include<stdio.h>
int main()
{
    int time,i,j,max = 0,counter = 0;
    scanf("%d",&time);
    int num[time];
    for(i = 0;i < time;i++)
    {
        scanf("%d",&num[i]);
        if(num[i]>max)
        {
            max = num[i];
        }
    }
    for(i = 1;i<=max;i++)
    {
        for(j = 0;j<time;j++)
        {
            if(num[j] % i == 0)
            {
                counter++;
                break;
            }
        }
    }
    printf("%d\n",counter);
    return 0;
}