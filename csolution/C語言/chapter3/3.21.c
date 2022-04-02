#include<stdio.h>
int main()
{
    int num1 = 10, flag1 = 0;
    flag1 = ++num1;
    printf("++num1: %d, num1 = %d\n", flag1, num1);//num1在進行第6行前就已完成++並指定值給flag1; num2則在運行完第9行後才進行++，故第8行flag2 get 的值為num2原值
    int num2 = 10, flag2 = 0;
    flag2 = num2++;
    printf("num2++: %d, num2 = %d\n", flag2, num2);
    return 0;
}