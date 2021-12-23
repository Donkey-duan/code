#include<stdio.h>
int main()
{
    while(1)
    {
        int num,counter = 0;
        scanf("%d",&num);
        if(num == 1)
        {
            break;
        }
        for(int i = 2;i<num;i++)
        {
            if(num % i == 0)
            {
                counter++;
            }
            if(counter >= 1)
            {
                break;
            }
        }
        if(counter == 0)
        {
            printf("Prime\n");
            continue;
        }
        for(int i = 2;i<=num;i++)
        {
            while(1)
            {
                if(num % i == 0)
                {
                    printf("%d",i);
                    num/=i;
                    if(num != 1)
                    {
                        printf("*");
                    }
                    else
                    {
                        puts("");
                        break;
                    }
                }
                else
                {
                    break;
                }
            }
        }

    }
    return 0;
}