#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int max(int,int);
int main()
{
    int arr[105] = {0},now = 0;
    char str[5];
    while(scanf("%s",str)!=EOF){
        if(strcmp(str,"I") == 0){
            scanf("%d",&arr[now]);
            now++;
        }
        else
        {   
            if(arr[0]==0)
            {
                arr[0] = 1;
            }
            int maxNum = 1;
            for(now-=1;now>-1;now--)
            {
                maxNum = max(arr[now],maxNum);
                arr[now]=0;
            }
            printf("%d\n",maxNum);
            now = 0;
        }
    }
    return 0;
}
int max(int a,int b)
{
    int max1 = a;
    if(a<b)
    {
        max1 = b;
    }
    return max1;
}