#include<stdio.h>
int main()
{
    while(1)
    {
        int account, amount, term;
        double rate;
        printf("Enter account number(-1 to end): ");
        scanf("%d", &account);
        if(account == -1)
        {
            break;
        }
        printf("Enter mortgage amount(in dollars): ");
        scanf("%d", &amount);
        printf("Enter morgage term(in years): ");
        scanf("%d", &term);
        printf("Enter interest rate(as a decimal): ");
        scanf("%lf", &rate);
        printf("The monthly payable interest $ %.0f\n", (amount+amount*rate*term)/(12*term));//(應付利息總額＋借貸總額)/抵押總月份數
    }
    return 0;
}