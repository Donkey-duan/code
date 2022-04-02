#include<stdio.h>
int main()
{
    int num;
    while(~scanf("%d", &num))
    {
        int counter=0;
            if(num/50!=0)
            {
                counter+=num/50;
                num%=50;
            }
            if(num/10!=0)
            {
                counter+=num/10;
                num%=10;
            }
            if(num/5!=0)
            {
                counter+=num/5;
                num%=5;
            }
            if(num/1!=0)
            {
                counter+=num/1;
                num%=1;
            }
        printf("%d\n", counter);
    }
    return 0;
}