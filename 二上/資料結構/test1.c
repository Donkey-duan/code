#include<stdio.h>
int main(){
    unsigned long long n;
    scanf("%lld", &n);
    unsigned long long num[n];
    for(int i = 0; i < n; i++){
        scanf("%lld", &num[i]);
    }
    unsigned long long flag = num[0];
    unsigned long long min = flag, max = flag, ans = 0;
    for(int i = 0; i < n; i++){
        if(num[i]<min) min = num[i];
        else if(num[i]>max) max = num[i];
    }
    ans = max-min;
    printf("%lld\n", ans);
}