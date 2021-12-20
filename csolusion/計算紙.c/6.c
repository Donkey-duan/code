#include<stdio.h>
#include<string.h>
int main()
{
    char number[20];
    scanf("%20s", number);
    char *pch = strtok(number, "()-");
    printf("%s\n",pch);
    return 0;
}