//題意：營業稅是向買方收取的，不是以總收入去扣取，而是將原本的定價再加上稅後才銷售給買家
//故，sale是指原價，總收入是指加上稅後的收入，故營業稅是乘以原價
#include<stdio.h>
#include<string.h>
int main()
{
    int amount;
    char month[10];
    while(1)
    {
        printf("Enter total amount collected(-1 to quit): ");
        scanf("%d", &amount);
        if(amount == -1)
        {
            break;
        }
        printf("Enter name of month : ");
        scanf("%s", month);
        float sale = amount/1.09;//原價＊1.09=售價
        printf("Total Collections: $ %d\n", amount);
        printf("Sales: $ %.2f\n", sale);
        printf("County Sales Tax: $ %.2f\n", sale*0.05);
        printf("State Sales Tax: $ %.2f\n", sale*0.04);
        printf("Total Sales Tax Collected: $ %.2f\n", sale*0.09);
    }
    return 0;
}