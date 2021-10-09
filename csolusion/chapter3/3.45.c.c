#include<stdio.h>
#include<math.h>
int main()
{
    float sum, num, i, j;
    printf("Enter a number: ");
    scanf("%f", &num);
    for(i = 2; i <= num; i++)
    {
        float currentnum = i;
        for(j = 1; j < i; j++)
        {
            currentnum *= (i - j);
        }
        sum += (pow(num, i)/currentnum);
    }
    printf("%.0f e = %.2f\n", num, sum + 1 + num);
    return 0;
}