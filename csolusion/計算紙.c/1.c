#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL));
    int a = rand() % 100 +1;
    int search=0;
    int low = 1,up=100,counter=0;
    while(search!=a)
    {
        search = (low+up)/2;
        if(search>a)
        {
            up = search;
        }
        if(search<a)
        {
            low = search;
        }
        counter++;
    }
    printf("The number is %d,use %d times to find out.\n", search,counter);
    return 0;
}