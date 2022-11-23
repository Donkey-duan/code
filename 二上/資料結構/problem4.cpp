#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main(){
    int k;
    string str,a;
    getline(cin, a);
    getline(cin, str);
    int m;
    scanf("%d", &m);
    while(m!=0){
        if(m==1){
            char a, b;
            scanf(" %c %c", &a, &b);
            for(int i = 0; i < k; i++){
                if(a==str[i] || b==str[i]) printf("%d ", i+1);
            }
            printf("\n");
        }
        else if(m==2){
            int a, b;
            cin>>a>>b;
            for(int i = a; i <= b; i++){
                printf("%d ", i);
            }
            printf("\n");
        }
        else if(m==3){
            int a, b;
            char flag;
            cin>>a>>b>>ws>>flag;
            for(int i = 0; i < k; i++){
                if(a==i+1 || b==i+1) printf("%d ", i+1);
                else if(flag==str[i]) printf("%d ", i+1);
            }
            printf("\n");
        }
    }
}