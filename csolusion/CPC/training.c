#include<stdio.h>
int main()
{
    int x = 1, y = 0;
    while(x <= 5)
    {
        total+=x*x;
        printf("%d\n", x*x);
        ++x;
    }
    printf("Total is %d\n", total);
    return 0;
}