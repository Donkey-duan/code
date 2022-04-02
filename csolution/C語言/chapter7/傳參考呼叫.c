#include<stdio.h>
void three(int *);
int main()
{
    int num;
    scanf("%d",&num);
    printf("%d\n",num);
    three(&num);
    printf("%d\n",num);
    return 0;
}

void three(int *nPtr)
{
    *nPtr = *nPtr* *nPtr* *nPtr;
}