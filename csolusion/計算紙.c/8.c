#include<stdio.h>
int main()
{
	int enter,i,j,sum=0;
	scanf("%d",&enter);//5
	sum=enter;5=5
	for(i=1;i<=sum;i++)//<=5
	{
		for(j=1;j<=enter;j++)//1;5 2;4 3;3 4;2 5;1
		{
			printf("*");
		}
		enter-=1;
		puts("");
	}
	return 0;
}