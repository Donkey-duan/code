#include<stdio.h>
int main()
{
    int array[10];
    for(int i = 0;i<10;i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i = 0;i<9;i++)
    {
        for(int j = 0;j<9;j++)
        {
            if(array[j]>array[j+1])
            {
                int t = array[j];
                array[j] = array[j+1];
                array[j+1] = t;
            }
        }
    }
    for(int i = 0;i<10;i++)
    {
        printf("%d ",array[i]);
    }
    puts("");
    return 0;
}