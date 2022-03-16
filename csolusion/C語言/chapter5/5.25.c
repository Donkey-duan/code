#include<stdio.h>
float fMax(float, float);
int main()
{
    float f1,f2,f3,f4; 
    printf("Enter four floating points: ");
    scanf("%f%f%f%f", &f1, &f2, &f3, &f4);
    printf("The max floating point is: %f\n", fMax(fMax(fMax(f1,f2),f3),f4));
    return 0;
}

float fMax(float a, float b)
{
    float max = a;
    if(b-a > 0)//浮點數不可以比大小，所以我用差值來比較
    {
        max = b;
    }
    return max;
}