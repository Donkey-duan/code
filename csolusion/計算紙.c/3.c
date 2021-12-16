#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL));
    int x = rand() % 6 + 1;
    return 0;
}