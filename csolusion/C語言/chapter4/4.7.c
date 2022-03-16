#include<stdio.h>
int main()
{
    int i, j, k, n;
    for(i = 1; i <= 13; i += 2)
    {
        printf("%d, ", i);
        if(i == 13)
        {
            printf("\n");
        }
    }
    
    return 0;
}