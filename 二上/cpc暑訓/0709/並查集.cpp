#include<iostream>
using namespace std;
const int N = 30000;
int f[N + 1];
int Find1(int x){
    // 當p[x] = x，x 即為該所屬集合的代表元素
    // 否則遞迴繼續找，順便做「路徑壓縮」
    return f[x] == x ? x : f[x] = Find1(f[x]);
}

void Union1(int x,int y){
    int g1 = Find1(x); //找出x所屬集合的代表元素
    int g2 = Find1(y); //找出y所屬集合的代表元素
    if(g1 != g2) f[g2] = g1; //將g2指向g1，即為合併兩個集合，g1為代表元素
}

/*實作2:可連帶查詢集合的成員數目*/

int Find2(int x){    
    // 初始值 p[x] = -1 表示指向自己
    return f[x] < 0 ? x : f[x] = Find2(f[x]);
}

void Union2(int x, int y){
    int g1 = Find2(x);
    int g2 = Find2(y);
    if(g1 != g2){
        f[g1] += f[g2]; //加總元素個數(負值)
        f[g2] = g1; //f[]:只有代表元素的值是存元素個數，其它的存代表元素編號
    }
}