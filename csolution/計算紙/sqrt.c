#include<stdio.h>
#include<math.h>
int main(){
    double a, b;
    int maxNum = 1;
    while(~scanf("%lf %lf", &a, &b)){
        int count = 0;
        if(a == 0 && b == 0){
            break;
        }
        double i;
        for(i = a; i <= b; i++){
            if(sqrt(i) == (int)sqrt(i)){
                count++;
            }
        }
        printf("%d\n", count);
    }
}