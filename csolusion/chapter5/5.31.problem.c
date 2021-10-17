#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//代更，當我另外建立函式去處理時，出來值就不是隨機的
int main()
{
    srand(time(NULL));
    int countTail = 0, countHead = 0;
    for(int i = 1; i <= 100; i++)
    {
        int flip = rand() % 2;
        if(flip)
        {
            printf("Head\t");
            countHead++;
        }
        else
        {
            printf("Tail\t");
            countTail++;
        }
    }
    puts("");
    printf("Ttime:%d\tHtime:%d\n", countTail, countHead);
    return 0;
}