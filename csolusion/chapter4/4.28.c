#include<stdio.h>
int main()
{
    int code, hour, item;
    double weekly, hourly, commission, piecepay, total;
    while(1)
    {
        printf("Enter paycode for next employee(-1 to end): ");
        scanf("%d", &code);
        if(code == -1)
        {
            break;
        }
        switch(code)
        {
            case 1:
            printf("Enter weekly salary for this manager: ");
            scanf("%lf", &weekly);
            total = weekly;
            break;
            case 2:
            printf("Enter hourly salary for this hourly worker: ");
            scanf("%lf", &hourly);
            printf("Enter number of hours worked: ");
            scanf("%d", &hour);
            if(hour > 40)
            {
                total = 40*hourly + (hour-40)*hourly*1.5;
            }
            else
            {
                total = hour*hourly;
            }
            break;
            case 3:
            printf("Enter gross sales for this commission worker: ");
            scanf("%lf", &commission);
            total = 250 + commission*0.057;
            break;
            case 4:
            printf("Enter number of produced items for this pieceworker: ");
            scanf("%d", &item);
            printf("Enter pay of each items: ");
            scanf("%lf", &piecepay);
            total = item*piecepay;
            break;
        }
        printf("Total weekly pay is $%.2f\n", total);

    }
    return 0;
}