#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL));
    int b = rand() % 9 * 2 + 3;
    printf("%d\n", b);
    return 0;
}