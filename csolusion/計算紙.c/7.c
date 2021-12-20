#include<stdio.h>
int main()
{
    int num1,num2,max=num1,min=num2;
    int total[i]={0},a[j]={0},i,j;
    scanf("%d\n%d",&num1,&num2);
    if(num2>num1)
    {
        max=num2;
        min=num1
    }
    for(j=0;j<10;j++)
    {
      for(i=num1;i<=num2;i++)
      {
         if(i%10>0)
         {
             total[i]+=i;
         }
        if(i/10==0)
        {
            total[i]+=i/10;
        }
        else
        {
            total[i]+=i%10;
        }
      }
      printf("%d有%d個\n ",i,total[i]);
    }
    
}