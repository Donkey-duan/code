#include<stdio.h>
#include<math.h>
int main()
{
    int a[7], i, j, k, bin = 1;
    printf("Decimal\tBinary\tOctal\tHexadecimal\n");
    for(i = 1;i <= 126; i++)//數1-126
    {
        if(i >= 2)//計算1以外的binary
        {
        int num = i;//把目前處理的數字指派給num
            for(j = 0; j <= i-1; j++)//一位一位換算
            {
            a[j] = num % 2;//以個位開始往左換算
            num /= 2;//下一位
            }
            bin = 0;//因前面為了表示1的Binary而初始為1，這邊我們要重新初始為0
            for(k = 0; k <= 6; k++)//由個位開始＊位數
            {
                bin += pow(10, k)*a[k];
            }
        }
        printf("%d\t%d\t%o\t%x\n", i, bin, i, i);
    }
    return 0;
}