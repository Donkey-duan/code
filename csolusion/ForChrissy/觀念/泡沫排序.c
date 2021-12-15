#include<stdio.h>
int main()
{
    int a[10];
    for(int i = 0;i<10;i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 0;i < 9;i++)
    {
        for(int j = 0;j < 9; j++)
        {
            if(a[j]>a[j+1])
            {
                int t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
    printf("MAX1:%d MAX2:%d\n", a[9],a[8]);
    return 0;
}