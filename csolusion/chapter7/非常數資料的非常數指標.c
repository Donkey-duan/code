#include<stdio.h>
#include<ctype.h>
void print(char *);
int main()
{
    char arr[]="Fuck you";
    printf("%s\ninto\n",arr);
    print(arr);//不用&是因為陣列會自動傳出其第零元素的記憶體位址
    printf("%s\n",arr);
    return 0;
}
void print(char *aPtr)
{
    while(*aPtr !='\0')
    {
        *aPtr = toupper(*aPtr);
        ++aPtr;//位址遞增
    }
}