#include<stdio.h>
void function(int a[], int);
int main()
{
    int num[5]={0},count=0;
    while(~scanf("%d", &num[0]))
    {
        if(count!=0)
        {
             printf("Do it again\n");
        }
        for(int i = 1;i<5;i++)
        {
            scanf("%d", &num[i]);
        }
        function(num, 5);
        count++;
    }
    return 0;
}

void function(int a[], int size)
{
    for(int i = 0;i<size-1;i++)
    {
        for(int i = 0;i<size-1;i++)
        {
            if(a[i]>a[i+1])
            {
            int t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
            }
        }
    }
    for(int i = 0;i<5;i++)
    {
        printf("%d ", a[i]);
    }
    puts("");
}