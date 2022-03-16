#include<stdio.h>
int main()
{
    int i, account, limit, owe;
    for(i = 1; i <= 3; i++)
    {
        printf("Enter account number: ");
        scanf("%d", &account);
        printf("Enter credit limit before the recession: ");
        scanf("%d", &limit);
        printf("Enter the owe: ");
        scanf("%d", &owe);
        printf("The new credit limit is %d\n", limit/2);
        if(owe > limit/2)
        {
            printf("ID %d has current balance.\n", account);
        }
    }
    return 0;
}