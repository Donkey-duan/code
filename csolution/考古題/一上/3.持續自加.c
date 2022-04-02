#include<stdio.h>
int main()
{
    int num;
    while(1)
    {
        int total = 0;
        scanf("%d",&num);
        if(num == 0)
        {
            break;
        }
        for(int i = 1;;i++)
        {
            for(int j = 1;num!=0;j++)
            {
                total += num%10;
                num/=10;
            }
            if(total < 10)
            {
                break;
            }
            num = total;
            total = 0;
        }
        printf("%d\n",total);
    }
    return 0;
}