#include<stdio.h>
int main()
{
    int y = 5;
    int *yptr = &y;
    printf("%d %d %d\n", yptr, *yptr, y);
    *yptr--;
    printf("%d %d %d\n", yptr, *yptr, y);
    y--;
    printf("%d %d %d\n", yptr, *yptr, y);
    yptr--;
    printf("%d %d %d\n", yptr, *yptr, y);
    return 0;
}