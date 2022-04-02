#include<stdio.h>
int main()
{
    int width,precision;
    float num;
    scanf("%f",&num);
    scanf("%d%d",&width, &precision);
    printf("%*.*f\n",width,precision,num);
    return 0;
}