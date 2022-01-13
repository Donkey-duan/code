#include<stdio.h>
int cubebyValue(int);
void cubebyRefe(int *x);
int main()
{
    int num = 5;
    printf("傳值:\n");
    printf("Original Value:%d\n",num);
    printf("%d*%d*%d=%d\n",num,num,num,cubebyValue(num));
    printf("num's Value:%d\n",num);
    printf("傳參考:\n");
    printf("Original Value:%d\n",num);
    cubebyRefe(&num);
    printf("num's Value:%d\n",num);
    return 0;
}
int cubebyValue(int x)
{
    return x*x*x;
}
void cubebyRefe(int *x)
{
    *x= *x * *x * *x;
}