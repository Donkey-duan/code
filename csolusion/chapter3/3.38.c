#include<stdio.h>
int main()
{
    int num, counter = 0, i, dig[5];
    printf("Enter a number(5 digits or fewer): ");
    scanf("%d", &num);
    int flag = num;
    for(i = 0; i <= 4; i++)
    {
        dig[i] = flag % 10;
        flag /= 10;
        if(dig[i] == 9)
        {
            counter++;
        }
    }
    printf("%d have %d number of 9s.\n", num, counter);
    return 0;
}