#include<stdio.h>
int main()
{
    int num;
    printf("Enter your encrypting code: ");
    scanf("%d", &num);
    int dig1 = (num/1000+3)%10, dig2 =  (num%1000/100+3)%10, dig3 = (num%1000%100/10+3)%10, dig4 = (num%1000%100%10+3)%10;
    int decrypt1 = dig1;
            dig1 = dig3;
            dig3 = decrypt1;
    int decrypt2 = dig2;
            dig2 = dig4;
            dig4 = decrypt2;
    int final = final = dig1*1000 + dig2*100 + dig3*10 + dig4;
    if(dig1 == 0)
    {
        printf("Your decrypting code is %d%d\n", 0, final);
    }
    else
    {
        printf("Your decrypting code is %d\n", final);
    }
    return 0;
}