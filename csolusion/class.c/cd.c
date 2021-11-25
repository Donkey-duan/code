#include<stdio.h>
void sea(int);
int main()
{
    int season, x=1;
    while(x <= 7)
    {
        scanf("%d", &season);
        x++;
        if(season > 12)
        {
            puts("Please input again");
            continue;
        }
        sea(season);
    }
    return 0;
}

void sea(int x)
{
    switch(x)
    {
        case 3:
        case 4:
        case 5:
        puts("春天");
        break;
        case 6:
        case 7:
        case 8:
        puts("夏天");
        break;
        case 9:
        case 10:
        case 11:
        puts("秋天");
        break;
        case 12:
        case 1:
        case 2:
        puts("冬天");
        break;
    }
}