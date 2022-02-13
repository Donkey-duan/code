#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int N,Q;
    char str[100][100]; 
    int num[100];
    while(scanf("%d",&N)!=EOF)
    {
        int i,j;
        for(i=0;i<N;i++)
        {
            scanf("%s",str[i]);
            scanf("%d",&num[i]);
        }
        scanf("%d",&Q);
        for(i = 0;i<Q;i++)
        {
            int result = 0;
            char s1[100]={0};
            scanf("%s",s1);
            for(j = 0;j<N;j++)
            {
                if(strcmp(str[j],s1)==0)
                {
                    printf("%d\n",num[j]);
                    result = 1;
                    break;
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