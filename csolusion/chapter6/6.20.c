#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int crap(int);
int main()
{
    srand(time(NULL));
    int WIN = 0,LOSE = 0;
    for(int i  = 0;i<1000;i++)
    {
        int x = rand() % 6 + 1;
        int y = rand() % 6 + 1;
        int sum = x + y;
        int final = crap(sum);
        if(final == 1)
        {
            WIN += 1;
        }
        else if(final == 2)
        {
            LOSE += 1;
        }
        else
        {
            while(1)
            {
                x = rand() % 6 + 1;
                y = rand() % 6 + 1;
                sum = x + y;
                if(sum == final)
                {
                    WIN += 1;
                    break;
                }
                else if(sum == 7)
                {
                    LOSE += 1;
                    break;
                }
                else
                {
                    continue;
                }
            }
        }
    }
    printf("Win = %d\tLose = %d\n",WIN,LOSE);
    return 0;
}
    int crap(int a)
    {
        switch(a)
        {
            case 7:
            case 11:
            return 1;
            break;
            case 2:
            case 3:
            case 12:
            return 2;
            break;
            case 4:
            case 5:
            case 6:
            case 8:
            case 9:
            case 10:
            return a;
            break;
        }
        return 0;
    }
    /**************************************************
     * crap:                                           *
     * 玩家擲兩個骰子，若第一次點數和為7或11，玩家勝；        *
     * 若為2、3、12，玩家輸;若為其他點數，則紀錄第一次點數和， *
     * 繼續擲骰子直到點數和與第一次一樣，則玩家勝，           *
     * 若在這之前擲出點數和為7，則玩家輸。                  *
     * ************************************************/