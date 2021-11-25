#include<stdio.h>
int main()
{
    int time=0;
    while(~scanf("%d", &time))
    {
        int var[10]={0},sum=0;
        int num[10]={0};
        for(int i = 0;i<time;i++)//計數
        {
            scanf("%d", &var[i]);
            sum+=var[i];
            for(int j = 0;j<=9;j++)
            {
                if(var[i]==j)
                {
                    num[j]++;
                }
            }
        }
        for(int i = 0;i <=9;i++)
        {
            printf("%d ",i);
        }
        puts("");
        for(int i = 0;i <10;i++)
        {
            printf("%d ", num[i]);
        }
        puts("");
        printf("%.2f\n", (float)sum/time);
    }
    return 0;
}