#include<stdio.h>
#include<math.h>
int main()
{
    char str[999999];
    int sum = 0;
    scanf("%s", str);
    for(int i = 0;str[i]!='\0'; i++)
    {
        sum *= 10;
        sum += (int)str[i]-'0';
    }
    printf("%d\n", sum);
    return 0;
}