#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    int n,m;
    scanf("%d%d",&n,&m);
    int **ptr = (int **)malloc(n*sizeof(int *));
    int *pPtr = (int *)malloc(n*sizeof(int));
    for(int i = 0;i<n;i++,pPtr+=n)
    {
        ptr[i] = pPtr;
    }
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            ptr[i][j] = (i+1)*(j+1);
            printf("%d\t",ptr[i][j]);
        }
        puts("");
    }
    free(ptr[0]);
    free(ptr);
}