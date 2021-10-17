#include<stdio.h>
#include<math.h>
int count(int x);
int main()
{
    unsigned int a;
    printf("Enter a number(1-32767): ");
    scanf("%u", &a);
    for(int i = count(a)-1; i >= 0; i--)
    {
        printf("%d  ", a/(int)pow(10,i));//記得把pow型別強制轉換為int，不然你用float印出來的值會被進位
        a%=(int)pow(10,i);
    }
    puts("");
    return 0;
}

int count(int x)//計算幾位數
{
    int counter = 0;
    while(1)
    {
        x/=10;
        counter++;
        if(x == 0)
        {
            break;
        }
    }
    return counter;
}//我在思考這樣到底是不是多此一舉，有更快的方法(首位不能印出0)可以跟我說ㄇ