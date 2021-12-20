#include<stdio.h>
int main()
{
    int score[20][2],sum[2] = {0},max[2] = {0};
    for(int j = 0;j < 2;j++)
    {
        for(int i = 0;i < 20;i++)
        {
            scanf("%d", &score[i][j]);
            sum[j]+=score[i][j];
            if(score[i][0]>max[j])
            {
                max[j] = score[i][j];
            }
        }
    }
    printf("MaxE = %d\tMaxC = %d\nAverE = %.1f\tAverC = %.1f\n",max[0],max[1],(float)sum[0]/20,(float)sum[1]/20);
    return 0;
}