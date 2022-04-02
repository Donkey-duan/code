#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void storeQ(char a[], int, int);
void storeA(char b[], int, int);
void testime(void);
char storeQues[20][100];
char storeAnsr[20][100];

int main()
{
    srand(time(NULL));
    char ques[100], ans[100];
    for(int x = 1; x <= 5; x++)
    {
        gets(ques);
        storeQ(ques, 100, x);
        gets(ans);
        storeA(ans, 100, x);
        x++;
    }
    for(int y = 1; y <= 10; y++)
    {
        testime();
    }
    return 0;
}

void storeQ(char a[], int size, int num)
{
    for(int i = 0; i < 100; i++)
    {
        storeQues[num][i] = a[i];
    }
}

void storeA(char b[], int size, int num)
{
    for(int i = 0; i < 100; i++)
    {
        storeAnsr[num][i] = b[i];
    }
}

void testime(void)
{
    char testans[100];
    int x = rand() % 5;
    for(int i = 0;i < 100; i++)
    {
        printf("%c", storeQues[x][i]);
    }
    puts("");
    gets(testans);
    for(int i = 0; i < 100; i++)
    {
        printf("Ans = %c", storeAnsr[x][i]);
    }
    puts("");
}
