#include<iostream>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        for(int i = 1;i<n;i++){
            for(int j = 1;j<=n-i;j++){//前置空格
                cout<<" ";
            }
            cout<<"*";
            if(i != 1){
                for(int j = 1;j<2*(i-1);j++){//中空空格
                cout<<" ";
                }
                cout<<"*";
            }
            cout<<endl;
        }
        for(int i = 1; i<n;i++){//最後一行
            cout<<"*"<<" ";
        }
        cout<<"*"<<endl;
    }    
}