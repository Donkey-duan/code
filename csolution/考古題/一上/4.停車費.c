#include<stdio.h>
int money(int);
int sum;
int main()
{
    int min;
    while(1)
    {
        sum = 0;
        scanf("%d",&min);
        if(min == 0)
        {
            break;
        }
        int hr = min/60;
        if(min%60!=0)
        {
            printf("%d\n",money(hr)+60);
        }
        else
        {
            printf("%d\n",money(hr));
        }
    }
    return 0;
}
int money(int x)
{
    if(x<2)
    {
        sum+=60;
        return sum;
    }
    if(x>=2 && x<5)
    {
        sum+=40;
        x--;
        return money(x);
    }
    else
    {
        sum+=20;
        x--;
        return money(x);
    }
    
}
/************************************
 * 題目：                            
 * 輸入停車分鐘數                     
 * x<2hr=60元/hr(記得x是分鐘，要轉換)
 * 2hr<x<5hr=40元/hr
 * x>5hr=20元/hr
 * 除不盡的剩餘分鐘數就跑到<2hr那邊
 * 齁跑跑看就知道了好難講
 * **********************************/