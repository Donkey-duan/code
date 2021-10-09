#include<stdio.h>
int main()
{
    float sale;
    while(1)
    {
        printf("Enter sales in dollars(-1 to end): ");
        scanf("%f", &sale);//你他媽真的不要有在scanf format control string裡指定小數位的爛習慣ㄟ
        if(sale == -1)
        {
            break;
        }
        printf("Salary is: $ %.2f\n", sale*0.09+200);
    }
    return 0;
}