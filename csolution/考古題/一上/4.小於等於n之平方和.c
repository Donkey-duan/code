#include<stdio.h>
int main()
{
    int num;
    while(~scanf("%d",&num))
    {
        int total = 0;
        for(int i = 1;i*i<=num;i++)
        {
            total += i*i;
        }
        printf("%d\n",total);
    }
    return 0;
}