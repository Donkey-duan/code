#include<stdio.h>
int main()
{
    int num[10]={0}, enter, max1=0,max=0;
    for(int i = 0;;i++)
    {
        scanf("%d",&enter);
        if(enter == 0)
        {
            break;
        }
        num[enter-1]++;
    } 
        for(int i = 0;i<10;i++)
        {
            if(num[i]>max1)
            {
                max1=num[i];
                max = i+1;
            }
        }
        for(int i = 0;i<10;i++)
        {
            if(num[i]==max1)
            {
                printf("%d %d\n", i+1, num[i]);
            }
        }
    return 0;
}