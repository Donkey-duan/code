#include<stdio.h>
int main(){
    double temp;
    scanf("%lf", &temp);
    printf("%.3lf\n", (temp-32.0)*5.0/9.0);
}