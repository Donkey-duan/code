#include<stdio.h>
int main()
{
    int nm[3][2]= {{0,1},{1,2},{2,3}},mp[2][4] = {{0,1,2,3},{1,2,3,4}},sum[3][4] = {0};
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<4;j++)
        {
            sum[i][j] = nm[i][0]*mp[0][j] + nm[i][1]*mp[1][j];
            printf("%d ",sum[i][j]);
        }
        puts("");
    }
    return 0;
}