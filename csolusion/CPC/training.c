#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int pare(void);//隨機產生前後括弧或無括弧
char opera(void);//隨機運算子產生
int compute1st(int, char, char);//替換運算子至數字且判定運算順序
int compute2nd(int, int, int);//進行運算
 
char arr[4]={'+','-','*','^'};//全域變數
int main()
{
    srand(time(NULL));
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
        char str[999999];//字串暫存
        int num = 0;
    scanf("%s", str);
    for(int i = 0;str[i]!='\0'; i++)//字串轉換為數字
    {
        num *= 10;
        num += (int)str[i]-'0';
    }
        if(str[0] == '-' && str[1] == '\0')//警示值
        {
            break;
        }
        int ans = compute1st(parentheses, chr1, chr2);
        printf("ans=%d\n", ans);
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
    char operation=arr[x];//查表
    return operation;
}
 
int compute1st(int x, char y, char z)//括號判定;運算子1;運算子2
{
    int op1, op2;
    int total;
    for(int i=0;i<4;i++)//判斷op1&op2
    {
        if(arr[i]==z){
            op2=i;
        }
        if(arr[i]==y){
            op1=i;
        }
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
 
    int tmp[4]={a+b,a-b,a*b,pow(a,b)};
    return tmp[x];
}