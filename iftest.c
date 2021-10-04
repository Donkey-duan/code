//人數折扣(8折)
//排序三變數
//三角形判斷
//簡易計算機（switch)

#include<stdio.h>
int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int max = a;
    if(b > a){
        max = b;
    }
    if(c > b){
        max = c;
    }
    printf("Max : %d\n", max);
    return 0;
}