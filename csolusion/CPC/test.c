#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int pare(void);
int main()
{
    srand(time(NULL));
    for(int i = 1; i < 51; i++)
    {
        printf("%d ", pare());
    }
    puts("");
    return 0;
}
int pare(void)
{
    int x = rand() % 3;
    return x;
}