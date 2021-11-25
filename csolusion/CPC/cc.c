#include<stdio.h>
int main()
{
    int side1, side2;
    char chr;
    scanf("%d%d %c", &side1, &side2, &chr);
    for(int i = 1; i <= side1; i++)
    {
        for(int j = 1; j <= side2; j++)
        {
            printf("%c", chr);
        }
        puts("");
    }
    return 0;
}