#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL));
    int dice[11]={0},sum;
    for(int i = 0;i<36000;i++)
    {
        int x = rand() % 6 + 1;
        int y = rand() % 6 + 1;
        sum = x + y;
        dice[sum-2]+=1;
    }
    for(int i = 0;i<11;i++)
    {
        printf("(%d) : %d\n",i+2,dice[i]);
    }
    return 0;
}