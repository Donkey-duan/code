#include<stdio.h>
//array
int main()
{
    int n[20] = {0,1};
    int num;
    scanf("%d", &num);
    for(int i = 2; i < num; i++)
    {
        n[i] = n[i-1] + n[i-2];
    }
    printf("%d\n", n[num-1]);
    return 0;
}