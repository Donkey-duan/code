#include<stdio.h>
int sub(int x,int y,int z);
int main(){
    int b = 2;
    int c = 4;
    int a = sub(b, b, b+c);
    printf("a = %d, b = %d, c = %d\n", a, b, c);
}
int sub(int x,int y,int z){
    y = z;
    return x+z;
}
