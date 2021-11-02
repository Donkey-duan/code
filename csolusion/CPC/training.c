#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int pare(void);//隨機產生前後括弧或無括弧
char opera(void);//隨機運算子產生
int compute1st(int, char, char);//替換運算子至數字且判定運算順序
int compute2nd(int, int, int);//進行運算
int main()
{
    srand(time(NULL));
    int num;//使用者輸入數字
    int score = 0, subject = 0;//分數/題數
    while(1)
    {
        int parentheses = pare();
        char chr1 = opera(), chr2 = opera();
        if(parentheses == 0)//無括號
        {
            printf("3%c2%c5 = ", chr1, chr2);
        }
        else if(parentheses == 1)//前括號
        {
            printf("(3%c2)%c5 = ", chr1, chr2);
        }
        else if(parentheses == 2)//後括號
        {
            printf("3%c(2%c5) = ", chr1, chr2);
        }
        scanf("%d", &num);
        if(num == -1000)//警示值
        {
            break;
        }
        int ans = compute1st(parentheses, chr1, chr2);
        if(num == ans)
        {
            score++;
        }
        subject++;
    }
    printf("your score: %d/%d\n", score, subject);
    return 0;
}
int pare(void)//0,1,2個狀態
{
    int x = rand() % 3;
    return x;
}
char opera(void)//隨機運算子產生
{
    int x = rand() % 4;//0:+,1:-,2:*,3:^
    char operation;
    switch(x)
    {
        case 0:
        operation = '+';
        break;
        case 1:
        operation = '-';
        break;
        case 2:
        operation = '*';
        break;
        case 3:
        operation = '^';
        break;
    }
    return operation;
}
int compute1st(int x, char y, char z)//括號判定;運算子1;運算子2
{
    int op1, op2;
    int total;
    switch(y)//運算子1
    {
        case '+':
        op1 = 0;
        break;
        case '-':
        op1 = 1;
        break;
        case '*':
        op1 = 2;
        break;
        case '^':
        op1 = 3;
        break;
    }
    switch(z)//運算子2
    {
        case '+':
        op2 = 0;
        break;
        case '-':
        op2 = 1;
        break;
        case '*':
        op2 = 2;
        break;
        case '^':
        op2 = 3;
        break;
    }
    switch(x)
    {
        case 0:
        if(op2 > op1 && op2 > 1)
        {
            total = compute2nd(3, op1, compute2nd(2, op2, 5));
        }
        else if(op2 == 3)
        {
            total = compute2nd(3, op1, compute2nd(2, op2, 5));
        }
        else
        {
            total = compute2nd(compute2nd(3, op1, 2), op2, 5);
        }
        break;
        case 1:
        total = compute2nd(compute2nd(3, op1, 2), op2, 5);
        break;
        case 2:
        total = compute2nd(3, op1, compute2nd(2, op2, 5));
        break;
    }
    return total;
}
int compute2nd(int a, int x, int b)
{
    int sum;
    switch(x)
    {
        case 0:
        sum = a+b;
        break;
        case 1:
        sum = a-b;
        break;
        case 2:
        sum = a*b;
        break;
        case 3:
        sum = pow(a, b);
        break;
    }
    return sum;
}
