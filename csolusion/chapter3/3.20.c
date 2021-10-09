#include<stdio.h>
int main()
{
    int hour;
    float rate, salary=0;
    while(1)
    {
        printf("Enter # of hours worked(-1 tp end): ");
        scanf("%d", &hour);
        if(hour == -1)
        {
            break;
        }
        printf("Enter hourly rate of the worker($00.00): ");
        scanf("%f", &rate);
       if(hour > 40)
       {
           salary = 40*rate + (hour-40)*15;
       }
       else
       {
           salary = hour*rate;
       }
        printf("Salary is $%.2f\n", salary);
    }
    return 0;
}