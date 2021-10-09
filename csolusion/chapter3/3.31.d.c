#include<stdio.h>
int main()
{
    int x = 5, y = 7;
    if(y == 8)
    {
        if(x == 5)
            puts("@@@@@");
    }
        else
        {
            puts("#####");
            puts("$$$$$");
            puts("&&&&&");
        }
    return 0;
}