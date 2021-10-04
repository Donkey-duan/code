//不定個數整數和
//不定個數整數和平均
//區間內列出所有數
//消費金額計算（switch)
#include<stdio.h>
int main(){
    int id;
    int total = 0;
    do{
        scanf("%d", &id);
        switch(id){
            case 1:total += 50; break;
            case 2:total += 60; break;
        }
    }while(id != 0);
    printf("Total is %d\n", total);
    return 0;
}