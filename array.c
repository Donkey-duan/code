#include <stdio.h>

int main(){
int num,q = 2,n;

scanf("%d",&num);//輸入數字

    while(num >= q){//當數字大於2

        if(num % q == 0){//當數字整除2,令計數器為0

            n = 0;

            while(num % q == 0){//該數字一直除以當前除數且同時記數直到無法除盡

                num = num / q;

                n++;

            }

            if(n == 1) printf("%d",q);//n為1的情形

            else  printf("%d^%d",q,n);//有指數的情形

            if(num != 1)printf(" * ");//若數字還可以繼續除則＊

        }

        q++;

    }
    return 0;

}

 
