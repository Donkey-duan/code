#include<stdio.h>
int main()
{
    int i;
    for(i = 1; i <=500; i++)
    {
        printf("$");
        if(i % 50 == 0)
        {
            printf("\n");
        }
    }
    return 0;
}