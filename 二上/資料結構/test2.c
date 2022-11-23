#include<stdio.h>
int main(){
    int N, K, cm, counter = 0;
    scanf("%d %d", &N, &K);
    for(int i = 0; i < N; i++){
        scanf("%d", &cm);
        if(cm >= K) counter++;
    }
    printf("%d\n", counter);
}