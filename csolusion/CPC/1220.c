#include<stdio.h>
int main()
{
    int a = 90,b = 16;
    printf("%d\t%d\n",a&(b-1),a%b);
    //yes
    return 0;
}