#include<cstdio>
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    string str;
   cin>>str;
    for(int i = 0; i < 6; i++){
        cout<<abs((int)str[i+1]-(int)str[i]);
    }
    printf("\n");
}