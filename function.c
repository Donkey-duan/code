//建立double型態的除法函式
//計算平方根
//隨機亂數５
//模擬5次公正骰子的結果
//數數字--函式遞迴
//連續和--函式遞迴
//上樓梯方法數（費柏納西數列）--函式遞迴
#include<stdio.h>
int max2(int, int);
int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("Max is %d\n", max2(max2(a, b), c));
    return 0;
}
int max2(int a, int b){
    int max = a;
    if(b > a){
        max = b;
    }
    return max;
}