#include<stdio.h>
#include<string.h>
int main()
{
    char s1[] = "123456789";
    printf("原本s1:\n%s\n---\n",s1);
    printf("memset:\n%s\n",(char *)memset(s1,'0',4));
    return 0;
}