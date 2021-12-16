#include<stdio.h>
int maxnum(int,int);
int main()
{
    int a,b;
    scanf("%d%d", &a, &b);
    printf("The max number : %d\n", maxnum(a,b));
    return 0;
}

int maxnum(int num1,int num2)
{
    int max = num1;
    if(num2 > num1)
    {
        max = num2;
    }
    return max;
}