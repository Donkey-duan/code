#include<stdio.h>
#include<stdlib.h>
void hanoi(int, char, char, char);//2^n-1次
int moved=0;
int main() {
    int n;
    printf("Please key-in number of sheet：");
    scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C');
    printf("\nTotal moved %d steps\n\n",moved);
    system("pause");
    return 0;
}
void hanoi(int n, char A, char B, char C) {
    if(n == 1) {
        printf("Move sheet from %c to %c\n", A, C);
        moved++;
    }
    else {
        hanoi(n-1, A, C, B);
        hanoi(1, A, B, C);
        hanoi(n-1, B, A, C);
    }
}