//繪製特定長度的文字線
//繪製文字長方形
//繪製空心長方形
#include<stdio.h>
int main(){
    int sum, product, i, j;
    printf("x + y = ");
    scanf("%d", &sum);
    printf("x * y = ");
    scanf("%d", &product);
    for(i = 1; i <= sum; i++){
        for(j = i; j <= sum; j++){
            if(i + j == sum && i * j == product){
                printf("x = %d, y = %d\n", i, j);
            }
        }
    }
    return 0;
}