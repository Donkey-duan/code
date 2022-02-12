#include<stdio.h>
void bubblesort(int *const);
int main()
{
    int num[10]={0};
    for(int i = 0;i<10;i++)
    {
        scanf("%d",&num[i]);
    }
    bubblesort(num);
    for(int i = 0;i<10;i++)
    {
        printf("%d ",num[i]);
    }
    puts("");
    return 0;
}
void bubblesort(int *const arr)
{
    void swap(int *a, int *b);
    for(int i = 0;i<9;i++)
    {
        for(int j = 0;j<9;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
void swap(int *a,int *b)//存地址
{
    int t = *a;
    *a = *b;
    *b = t;
}