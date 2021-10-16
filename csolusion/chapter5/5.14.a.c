#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL));
    int a = rand() % 10 * 3 + 3;
    printf("%d\n", a);
    return 0;
}