#include<stdio.h>
void bubblesort(int *const);
int main()
{
    int save[10]={0};
    for(int i = 0;i<10;i++)
    {
        scanf("%d",&save[i]);
    }
    bubblesort(save);
    for(int i = 0;i<10;i++)
    {
        printf("%d ",save[i]);
    }
    puts("");
    return 0;
}
void bubblesort(int *const ptr)
{
    void swap(int *a,int *b);
    for(int i = 0;i<9;i++)
    {
        for(int j = 0;j<9;j++)
        {
            if(ptr[j]>ptr[j+1])
            {
                swap(&ptr[j],&ptr[j+1]);
            }
        }
    }
}
void swap(int *a,int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}