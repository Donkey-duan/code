#include<stdio.h>
int main()
{
    int num = 10;
    printf("If selection statement:\n");
    if(num == 10)
    {
        printf("1.執行\n");
    }
    if(num > 12)
    {
        printf("2.執行\n");
    }
    if(num < 12)
    {
        printf("3.執行\n");
    }
    printf("else if selection statement:\n");
    if(num == 10)
    {
        printf("1.執行\n");
    }
    else if(num > 12)
    {
        printf("2.執行\n");
    }
    else if(num < 12)
    {
        printf("3.執行\n");
    }
    return 0;
}