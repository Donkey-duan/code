#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int N,Q;
    while(scanf("%d",&N)!=EOF)
    {
        char **ptr = (char **)malloc(N*sizeof(char *));
        char *namePtr = (char *)malloc(10*sizeof(char));//建立二維陣列
        int i,j;
        for(i=0;i<N;i++)
        {
            scanf("%s",ptr[i]);
        }
        scanf("%d",&Q);
        for(i = 0;i<Q;i++)
        {
            int result = 0;
            char s1[10]={0};
            gets(s1);
            for(j = 0;j<N;j++)
            {
                if(strcmp(ptr[j],s1)==0)
                {
                    printf("Qualified\n");
                    result = 1;
                }
            }
            if(result!=1)
            {
                printf("Failed\n");
            }
        }
    }
    return 0;
}