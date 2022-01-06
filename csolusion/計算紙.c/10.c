#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    for(int i = 1;i<=num;i++)
    {
        printf("%*.c",num,'*');
        for(int j = 1;j<=i;j++)
        {
            printf("*");
        }
        puts("");
    }
    return 0;
}