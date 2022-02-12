#include<stdio.h>
void binary(int);
int main()
{
    int num;
    while(1)
    {
        scanf("%d", &num);
        if(num == 0)
        {
            break;
        }
        if(num < 0)
        {
            puts("Please input a positive number");
        }
        else
        {
            binary(num);
        }
    }
    return 0;
}
void binary(int x)
{
    int bits[10], sum = 0, counter = 0;
    for(int i = 1; x!=0; i++)
    {
        bits[i-1] = x%2;
        x/=2;
        counter++;
    }
    for(int i = counter-1; i >= 0;i--)
    {
        printf("%d", bits[i]);
    }
    puts("");
}