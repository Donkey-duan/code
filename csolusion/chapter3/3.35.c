#include<stdio.h>
int main()
{
    int bin;
    printf("Enter a binary number(only contain 0/1, and 5 digits or fewer): ");
    scanf("%d", &bin);
    printf("%d+", (bin / 10000)*16);
    printf("%d+", (bin % 10000 / 1000)*8);
    printf("%d+", (bin % 10000 % 1000 / 100)*4);
    printf("%d+", (bin % 10000 % 1000 % 100 / 10)*2);
    printf("%d", (bin % 10000 % 1000 % 100 % 10)*1);
    printf("= %d\n",  (bin / 10000)*16+ (bin % 10000 / 1000)*8+ (bin % 10000 % 1000 / 100)*4 + (bin % 10000 % 1000 % 100 / 10)*2 + (bin % 10000 % 1000 % 100 % 10)*1);
    return 0;
}
