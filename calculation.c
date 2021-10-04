#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter two different numbers: ");
    scanf("%d%d", &num1, &num2);
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
    printf("%d / %d = %d\n", num1, num2, num1 / num2);
    printf("%d mod %d = %d\n", num1, num2, num1 % num2);
    return 0;
}