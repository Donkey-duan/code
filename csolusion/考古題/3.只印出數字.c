#include<stdio.h>
#include<ctype.h>
int main()
{
    char arr[100],num[100]={0};
    int counter = 0;
    scanf("%s",arr);
    for(int i = 0;arr[i]!='\0';i++)
    {
        if(isdigit(arr[i]))
        {
            num[counter] = arr[i];
            counter++;
        }
    }
    printf("%s\n",num);
    return 0;
}