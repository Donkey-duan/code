#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    for(int i = 1;i<=num;i++)
    {
        for(int j = num-i;j>=1;j--)//print " "
        {
            printf(" ");
        }
        for(int j = 1;j<=i;j++)//printf "*"
        {
            printf("*");
        }
        puts("");//newline = 該行處理完畢
    }
    return 0;
}