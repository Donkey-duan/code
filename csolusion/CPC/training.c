#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL));
    for(int i = 1; i < 50; i++)
    {
        int flip = rand() % 2;
        printf("%d\n", flip);
    }
    return 0;
}