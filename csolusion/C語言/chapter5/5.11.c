#include<stdio.h>
#include<math.h>
float roundToInteger(float);
float roundToTenths(float);
float roundToHundreths(float);
float roundToThousandths(float);
int main()
{
    float num;
    scanf("%f", &num);
    printf("ORIGINAL\tINTERGER\tTENTHS\tHUNDRETHS\tTHOUSANDTHS\n");
    printf("%f\t", num);
    printf("%f\t", roundToInteger(num));
    printf("%f\t", roundToTenths(num));
    printf("%f\t", roundToHundreths(num));
    printf("%f\n", roundToThousandths(num));
    return 0;
}

float roundToInteger(float x)
{
    return floor(x + .5);
}

float roundToTenths(float x)
{
    return floor(x*10 + .5)/10;
}

float roundToHundreths(float x)
{
    return floor(x*100 + .5)/100;
}

float roundToThousandths(float x)
{
    return floor(x*1000 + .5)/1000;
}