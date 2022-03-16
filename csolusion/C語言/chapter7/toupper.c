#include<stdio.h>
#include<ctype.h>
void toup(char *);
int main()
{
    char s1[30];
    gets(s1);
    printf("%s\n",s1);
    toup(s1);
    printf("%s\n",s1);
    return 0;
}
void toup(char *sPtr)
{
    for(;*sPtr!='\0';++sPtr)
    {
        *sPtr = toupper(*sPtr);
    }
}