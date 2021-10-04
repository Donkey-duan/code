//字串基礎hello world
//計算字串長度
//從鍵盤輸入讀入一行字
#include<stdio.h>
void readstr(char[]);
int main(){
    char str[];
    readstr(str);
    printf("%s\n", str);
    return 0;
}
void readstr(char str[]){
    scanf("%s" &str);
}