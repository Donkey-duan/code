#include<stdio.h>
#include<string.h>
int main()
{
    while(1)
    {
        char word1[10], word2[10];
        int counter = 0;
        scanf("%10s%10s", word1, word2);
        if(word1[1] == 0 && word2[1] == 0)
        {
            break;
        }
        int n1 = strlen(word1), n2 = strlen(word2);
        for(int i = 0;word1[i]!='\0' && word2[i]!='\0';i++)
        {
            if(word1[i]-word2[i]!=0)
            {
                counter++;
            }
        }
        if(counter!=0 || n1 != n2)
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