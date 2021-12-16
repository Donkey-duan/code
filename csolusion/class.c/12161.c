#include<stdio.h>
#include<string.h>
int main()
{
    while(1)
    {
        char word1[10], word2[10];
        scanf("%10s%10s", word1, word2);
        if(word1[1] == 0 && word2[1] == 0)
        {
            break;
        }
        int diff = strcmp(word1,word2);
    if(diff!=0)
    {
        puts("Different!");
    }
    else
    {
        puts("Same!");
    }
    }
    return 0;
}