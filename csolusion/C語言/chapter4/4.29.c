#include<stdio.h>
int main()
{
    int x=6, y=6;
    int a=5, b=5, g=5;
    int i=5, j=5;
    printf("Original:!(x<5)&&!(y>=7)==%d\nNew:     !((x<5)||(y>=7))==%d\n\n", !(x<5)&&!(y>=7), !((x<5)||(y>=7)));
    printf("Original:!(a == b) || !(g != 5)==%d\nNew:     !((a == b) && (g != 5))==%d\n\n", !(a == b) || !(g != 5), !((a == b) && (g != 5)));
    printf("Original:!((x<=8)&&(y>4))==%d\nNew:     !(x<=8)||!(y>4)==%d\n\n", !((x<=8)&&(y>4)), !(x<=8)||!(y>4));
    printf("Original:!((i > 4) || (j <= 6))==%d\nNew:     !(i>4)&&!(j<=6)==%d\n\n", !((i > 4) || (j <= 6)), !(i>4)&&!(j<=6));
    return 0;
}