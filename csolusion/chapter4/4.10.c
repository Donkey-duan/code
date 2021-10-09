#include<stdio.h>
int main()
{
    int i;
    printf("C\tF\n");
    for(i = 30; i <= 50; i++)
    {
        printf("%d\t%d\n", i, 9*i/5+32);
    }
    return 0;
}