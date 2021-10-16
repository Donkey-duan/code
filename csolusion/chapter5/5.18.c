#include<stdio.h>
int isEven(int);
int main()
{
    while(1)
    {
        int num;
        printf("Enter a number(-1 to end): ");
        scanf("%d", &num);
        if(num == -1)
        {
            break;
        }
        if(isEven(num))
        {
            printf("It is even!\n");
        }
        else
        {
            printf("Noooooooo, it's odd.\n");
        }
    }
    return 0;
}

int isEven(int a)
{
    if(a % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}