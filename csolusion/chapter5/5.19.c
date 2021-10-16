#include<stdio.h>
void sides(int,int);
int main()
{
    int side1, side2;
    printf("Enter the sides of rectangle: ");
    scanf("%d%d", &side1, &side2);
    sides(side1, side2);
    return 0;
}

void sides(int a, int b)
{
    for(int i = 1; i <= a; i++)
    {
        for(int j = 1; j<= b; j++)
        {
            printf("*");
        }
        puts("");
    }
}