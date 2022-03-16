#include<stdio.h>
#include<math.h>
int addition(int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d\n", addition(num));
    return 0;
}

int addition(int a)
{
    int bits[10], sum = 0;
    for(int i = 1; i <= 10; i++)
    {
        bits[i-1] = a%10;
        a/=10;

    }
    for(int j = 0; j <= 9; j++)
    {
        sum += bits[j];
    }
    return sum;
}