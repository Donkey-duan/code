#include<stdio.h>
#include<ctype.h>
int main()
{
    char arr[30];
    scanf("%s",arr);
    for(int i = 0;arr[i]!='\0';i+=2)
    {
        if(islower(arr[i]))
        {
            arr[i] = toupper(arr[i]);
        }
    }
    printf("%s\n",arr);
    return 0;
}