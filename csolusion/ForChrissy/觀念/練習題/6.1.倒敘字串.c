#include<stdio.h>
int main()
{
    char array[5];
    scanf("%s", array);
    for(int i = 4;i >= 0;i--)
    {
        printf("%c", array[i]);
    }
    puts("");
    return 0;
}