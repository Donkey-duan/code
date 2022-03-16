#include<stdio.h>
void isPerfect(int);
void factor(int);
int main()
{
    int i;
    for(i = 1;i <= 1000; i++)
    {
        isPerfect(i);
    }
    return 0;
}

void isPerfect(int a)//處理完全數
{
    int j;
        int sum = 0;
        for(j = 1; j < a; j++)
        {
            if(a % j == 0)
            {
                sum += j;
            }
        }
        if(a == sum)
        {
            printf("%d=", a);
            factor(a);
        }
    
}

void factor(int b)//處理完全數的因數
{
    for(int i = 1; i < b; i++)
    {
        if(b % i == 0)
        {
            printf("%d, ", i);
        }
    }
    puts("");
}