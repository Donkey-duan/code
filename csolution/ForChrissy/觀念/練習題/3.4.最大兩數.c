#include<stdio.h>
//POINT:比大小
int main()
{
    int num1=0,num2=0,x;
    for(int i = 1;i <= 10;i++)
    {
        scanf("%d", &x);
        if(x > num2)
        {
            num2 = x;
        }
        if(num2 > num1)
        {
            int t = num2;
            num2 = num1;
            num1 = t;
        }
    }
    printf("Max1 = %d\tMax2 = %d\n",num1,num2);
    return 0;
}