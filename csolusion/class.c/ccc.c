#include<stdio.h>
#include<math.h>
long long int function(int);
static long long int overflow[6]={0};
int main()
{
    int num;
    while(~scanf("%d", &num))
    {
        if(num <= 3)
        {
            switch(num)
            {
                case 1:
                printf("The %dst factorial number is %lld.\n", num, function(num));
                break;
                case 2:
                printf("The %dnd factorial number is %lld.\n", num, function(num));
                break;
                case 3:
                printf("The %drd factorial number is %lld.\n", num, function(num));
                break;
            }
        }
        else if(num < 12 && num > 3)
        {
            printf("The %dth factorial number is %lld.\n", num, function(num));
        }
        else
        {
            function(num);
            printf("The %dth factorial number is ", num);
            for(int i = 5;i >= 0;i--)
            {
                if(overflow[i]==0)
                {
                    continue;
                }
                printf("%lld ", overflow[i]);
            }
            puts("");
        }
    }
    return 0;
}

long long int function(int a)
{
    if(a == 1|| a == 0)
    {
        return a;
    }
    else if(a*function(a-1)/(long long int)pow(10,7) >= 10)
    {   
        long long int now=a*function(a-1);
        if(a == 12)
        {
            overflow[0]=now%(long long int)pow(10,8);
            overflow[1]=now/(long long int)pow(10,8);
        }
        else
        {
            for(int i = 0;i < 6;i++)
            {
                
                overflow[i]*=a;
                printf("%lld ",overflow[i]);
            }
            for(int i = 0;i < 6;i++)
            {
                if(overflow[i]/(long long int)pow(10,7) >= 10)
                {
                    overflow[i+1]=overflow[i]/(long long int)pow(10,8);
                    overflow[i]%=(long long int)pow(10,8);
                }
            }
        }
        return a-1;
    }
    else
    {
        return a*function(a-1);
    }
}