#include<stdio.h>
int main()
{
    float principal, rate;
    int day;
    while(1)
    {
        printf("Enter loan principal(-1 to end): ");
        scanf("%f", &principal);
        if(principal == -1)
        {
            break;
        }
        printf("Enter interest rate: ");
        scanf("%f", &rate);
        printf("Enter term of the loan in days: ");
        scanf("%d", &day);
        printf("The interest charge is $%.2f\n", principal*rate*day/365);
    }
    return 0;
}