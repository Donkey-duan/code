#include<stdio.h>
int main()
{
    int i, j;
    for(i = 1; i <= 100; i++)
    {
        int counter = 0;
        for(j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                counter++;
            }
        }
        if(counter == 2)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}