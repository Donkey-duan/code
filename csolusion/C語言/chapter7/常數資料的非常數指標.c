#include<stdio.h>
void print(const char *);
int main()
{
    char s1[] = "Fuck you";
    print(s1);
    return 0;
}
void print(const char *xPtr)
{
    for(;*xPtr!='\0';xPtr++)
    {
        printf("%c",*xPtr);
    }
    puts("");
}