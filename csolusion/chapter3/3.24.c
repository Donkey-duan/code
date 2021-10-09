#include<stdio.h>
int main()
{
    int i;
    printf("N\tN2\tN3\tN4\n");
    for(i = 1; i <= 10; i++)
    {
        printf("%d\t%d\t%d\t%d\n", i, i*i, i*i*i, i*i*i*i);
    }
    return 0;
}