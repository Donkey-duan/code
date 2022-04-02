#include<stdio.h>
int main()
{
    int arr1[10],arr2[10];
    for(int i = 0;i<10;i++)
    {
        scanf("%d",&arr1[i]);
        for(int j = 0;j<i;j++)
        {
            if(arr1[i]==arr1[j])
            {
                arr1[i]=-1;
            }
        }
    }
    for(int i = 0;i<10;i++)
    {
        scanf("%d",&arr2[i]);
        for(int j = 0;j<=i;j++)
        {
            if(arr2[i] == arr1[j] && arr1[j]!= -1)
            {
                printf("%d ",arr2[i]);
                arr1[j] = -1;
            }
        }
    }
    puts("");
    return 0;
}