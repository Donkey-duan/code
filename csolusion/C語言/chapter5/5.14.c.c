#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL));
    int c = rand() % 7 * 5 + 3;
    printf("%d\n", c);
    return 0;
}