#include<stdio.h>
#include<string.h>
int main()
{
    char word1[20],word2[20];
    scanf("%20s%20s", word1,word2);
    strcat(word1,word2);
    printf("字串合併 = %s\n", word1);
    return 0;
}