#include<stdio.h>
int main()
{
    int num;
    while(1)
    {
        int counter = 0;
        scanf("%d", &num);
        if(num == 0)
        {
            break;
        }
        for(int i = 1; num != 1;i++)
        {
            if(num % 2 == 0)
        {
            num/=2;
        }
        else
        {
            num += 1;
        }
        counter++;
        }
        printf("%d\n", counter);
        
    }
    return 0;
}