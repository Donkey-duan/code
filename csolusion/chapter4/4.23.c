#include<stdio.h>
#include<math.h>
int main()
{
    int principal = 100000;
    int rate = 5;
    printf("%4s%21s\n", "Year", "Amount on deposit");
    for(int year = 1; year <= 10; year++)
    {
        int amount = principal * pow(100+rate, year)/pow(100, year);
        int penny = amount % 1000/10;
        int dollar =amount /100;
        printf("%4d%21d:%d\n", year, dollar, penny);
    }
    return 0;
}
//美分的結果可能與直接用浮點數的輸出不同，我想應該是因為浮點數會四捨五入，而全程以整數運算就無法那樣