#include<stdio.h>
int main()
{
    int num;
    while(~scanf("%d",&num))
    {
        int ans;
        for(int i = num;;i++)
        {
            int counter = 0;
            for(int j = 2;j<i;j++)
            {
                if(i % j == 0)
                {
                    counter++;
                }
            }
            if(counter==0)
            {
                ans = i;
                break;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}