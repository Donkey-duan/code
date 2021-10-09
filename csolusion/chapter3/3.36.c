#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    for(i = 1; i < 1000; i++)
    {
        int sum = pow(i/100, 3) + pow(i%100/10, 3) + pow(i%100%10, 3);
        if(i == sum)
        {
            printf("%d ", i);
        }
    }
}