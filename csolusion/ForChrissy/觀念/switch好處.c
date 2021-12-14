#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    //if做法
    if(num == 1)
    {
        printf("one\n");
    }
    if(num == 2)
    {
        printf("two\n");
    }
    if(num == 3)
    {
        printf("three\n");
    }
    //switch做法
    switch(num)
    {
        case 1:
        printf("one\n");
        break;
        case 2:
        printf("two\n");
        break;
        case 3:
        printf("three\n");
        break;
    }
    return 0;
}