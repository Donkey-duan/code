#include<stdio.h>
#include<math.h>
int main()
{
    int n2 = 0, n3 = 0, i, num;
    scanf("%d", &num);
    for(i = 1; i <= num; i++)
    {
        n2 += pow(i, 2);
        n3 += pow(i, 3);
    }
    printf("sum of n2 = %d\n", n2);
    printf("sum of n3 = %d\n", n3);
    return 0;
}