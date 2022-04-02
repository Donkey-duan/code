#include<stdio.h>
//POINT:％運算子運用
int main()
{
    int time;
    printf("Please enter the time: ");
    scanf("%d", &time);
    printf("%d s = %d小時:%d分鐘:%d秒\n",time,time/3600,time%3600/60,time%3600%60);
    return 0;
}
//測資：11025(3小時3分鐘45秒)