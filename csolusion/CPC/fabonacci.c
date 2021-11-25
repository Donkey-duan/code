#include<stdio.h>
int fabonacci(int);
int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", fabonacci(num));
    return 0;
}
int fabonacci(int n)
{
    if(n == 1)
    {
        return 0;
    }
    if(n == 2)
    {
        return 1;
    }
    return fabonacci(n - 1) + fabonacci(n - 2);
}