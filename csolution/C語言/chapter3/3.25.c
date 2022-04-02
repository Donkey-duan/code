#include<stdio.h>
int main()
{
    int i;
    printf("A\tA+3\tA+6\tA*9\n");//題目怪怪的，明明答案給的是7*i*9,題意卻是7*i+9?
    for(i = 1; i <= 5; i++)
    {
        printf("%d\t%d\t%d\t%d\n", 7*i, 7*i+3, 7*i+6, 7*i*9);
    }
    return 0;
}