#include<stdio.h>
void fillCharacter(int,int,char);
int main()
{
    int side1, side2;
    char chr;
    scanf("%c", &chr);
    printf("Enter the sides:");
    scanf("%d%d", &side1, &side2);
    fillCharacter(side1,side2,chr);
    return 0;
}
void fillCharacter(int a, int b, char c)
{
    for(int i = 1; i <= a; i++)
    {
        for(int j = 1; j <= b; j++)
        {
            printf("%c", c);
        }
        puts("");
    }
}