#include<stdio.h>
int main()
{
    int num, sum = 0, expense;
    printf("(1)Housing\n(2)Food\n(3)Clothing\n(4)Transportation\n(5)education\n");
    while(1)
    {
        printf("Enter the number of categories(-1 to end): ");
        scanf("%d", &num);
        if(num == -1)
        {
            break;
        }
        switch(num)
        {
            case 1:
            printf("Enter the expenses of housing: ");
            scanf("%d", &expense);
            sum += expense*0.23;
            break;
            case 2:
            printf("Enter the expenses of food: ");
            scanf("%d", &expense);
            sum += expense*0.23;
            break;
            case 3:
            printf("Enter the expenses of clothing: ");
            scanf("%d", &expense);
            sum += expense*0.23;
            break;
            case 4:
            printf("Enter the expenses of transportation: ");
            scanf("%d", &expense);
            sum += expense*0.23;
            break;
            case 5:
            printf("Enter the expenses of education: ");
            scanf("%d", &expense);
            sum += expense*0.23;
            break;
        }
    }
    printf("The fairtax you should pay is %d\n", sum);
    return 0;
}