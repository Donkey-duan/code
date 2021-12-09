#include<stdio.h>
#include<ctype.h>
int main()
{
    char word[30];
    scanf("%30s", word);
    for(int i = 0;word[i]!='\0';i++)
    {
        if(isupper(word[i]))
        {
            word[i]=tolower(word[i]);
        }
        else if(islower(word[i]))
        {
            word[i]=toupper(word[i]);
        }
    }
    printf("%s\n", word);
    return 0;
}