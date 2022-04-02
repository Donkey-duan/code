#include<stdio.h>
int main()
{
    int num, quantity, qty[5], i;
    double sales[5];
    while(1)
    {
        printf("Enter the product number(1-5)(-1 to end): ");
        scanf("%d", &num);
        if(num == -1)
        {
            break;
        }
        printf("Enter quantity sold: ");
        scanf("%d", &quantity);
        switch(num)
        {
            case 1:
            qty[0] += quantity;
            sales[0] += quantity*2.98;
            break;

            case 2:
            qty[1] += quantity;
            sales[1] += quantity*4.50;
            break;

            case 3:
            qty[2] += quantity;
            sales[2] += quantity*9.98;
            break;

            case 4:
            qty[3] += quantity;
            sales[3] += quantity*4.49;
            break;

            case 5:
            qty[4] += quantity;
            sales[4] += quantity*6.87;
            break;
        }
    }
    printf("Product\tQty\tSales\n");
    for(i = 1; i <= 5; i++)
    {
        printf("%d\t%d\t%.2f\n", i, qty[i-1], sales[i-1]);
    }
    return 0;
}