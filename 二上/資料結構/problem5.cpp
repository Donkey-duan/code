#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int m;
    scanf("%d", &m);
    while(m--){
        int arr[33], num = 0, count = 0, max = 0;
        int a, index = 0;
        while(cin>>a){
            arr[index++] = a;
            char ch = getchar();
            if(ch == '\n') break;
            num++;
        }
        for(int i = 0; i < num; i++){
            if(arr[i]<arr[i+1]) count++;
            else{
                if(count > max){
                    max = count;
                }
                count = 0;
            }
        }
        printf("%d\n", max);
    }
}