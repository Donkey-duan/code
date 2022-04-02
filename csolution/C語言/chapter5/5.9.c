#include<stdio.h>
//結果沒問題，但有warning，有毛並
float calculateCharges(int);
int main()
{
    int car[3], sumhour=0;
    float sumcharge=0;
    scanf("%d%d%d", &car[0], &car[1], &car[2]);
    printf("Car\tHours\tCharge\n");
    for(int i = 0; i <= 2; i++)
    {
        printf("%d\t%d\t%.2f\n", i+1, car[i], calculateCharges(car[i]));
        sumhour+=car[i];
        sumcharge+=calculateCharges(car[i]);
    }
    printf("TOTAL\t%d\t%.2f\n", sumhour, sumcharge);
    return 0;
}

float calculateCharges(int x)
{
    if(x < 8)
    {
        return 25 + x*0.5;
    }
    if(x > 8 && x <= 12)
    {
        return 25 + (x-7)*5 + x*0.5;
    }
    if(x > 12 && x <= 24)
    {
        return 50 + x*0.5;
    }
    if(x > 24 && x <= 48)
    {
        return 100 + x*0.5;
    }
    if(x > 48 && x < 72)
    {
        return 150 + x*0.5;
    }
    else
    {
        return 0;
    }
}
