#include<stdio.h>
int main()
{
    char num[6];
    scanf("%s", num);
    for(int i = 4;i>=0;i--)
    {
        printf("%c", num[i]);
    }  
    puts("");  
    return 0;
}