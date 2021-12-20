#include<stdio.h>
int main()
{
    int countPtr, count=4;
    countPtr = &count;
    printf("%d\t%d\n", countPtr,count);
    return 0;
}