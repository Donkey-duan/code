#include<stdio.h>
#include<string.h>
int main()
{
    char number[20];
    scanf("%20s", number);
    char *pch = strtok(number, "()-");
    while(pch!=NULL)
    {
        printf("%s", pch);
        pch = strtok(NULL, " ()-");
    }
    puts("");
    return 0;
}