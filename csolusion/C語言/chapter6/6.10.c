#include<stdio.h>
//不太懂題意
int main()
{
    int array[10]={200};
    for(int i = 1;i<10;i++)
    {
        array[i]+= 200 + 100*i;
    }
    for(int i = 0;i<9;i++)
    {
        printf("%d-%d: %d-%d\n",array[i],array[i+1]-1,200+array[i]*9/100,200+(array[i+1]-1)*9/100);
    }
    return 0;
}