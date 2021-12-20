#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL));
    int n1 = rand() % 6 + 1;
    int n2 = rand() % 901 + 100;
    int n3 = rand() % 20;
    int n4 = rand() % 1223 + 1000;
    int n5 = rand() % 3 - 1;
    int n6 = rand() % 15 - 3;
    return 0;
}//觀察n = rand() % 6 + 1得出的結果就知道為什麼我的scaled and shifted長這樣了