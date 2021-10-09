#include<stdio.h>
int main()
{
    int num;
    printf("Enter four digits of integers: ");
    scanf("%d", &num);
    int dig1 = (num/1000+7)%10, dig2 =  (num%1000/100+7)%10, dig3 = (num%1000%100/10+7)%10, dig4 = (num%1000%100%10+7)%10;
    int encryt1 = dig1*1000 + dig2*100+ dig3*10 + dig4;
    int encryt3 = dig1;
           dig1 = dig3;
           dig3 = encryt3;
    int encryt4 = dig2;
           dig2 = dig4;
           dig4 = encryt4;
    int final = dig1*1000 + dig2*100 + dig3*10 + dig4;
    if(dig1 == 0)
    {
        printf("Your encrypting code is %d%d\n", 0, final);
    }
    else
    {
        printf("Your encrypting code is %d\n", final);
    }
    return 0;
}