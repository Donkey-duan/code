#include<iostream>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        for(int i = 1;i<n;i++){
            for(int j = 1;j<=n-i;j++){
                cout<<" ";
            }
                cout<<"*";
                if(i != 1){
                    if(i>=(n/2)){
                     for(int j = 1;j<2*i;j++){
                    cout<<" ";
                    }
                    cout<<"*";   
                    }
                    else{
                        for(int j = 1;j<i;j++){
                    cout<<" ";
                    }
                    cout<<"*";
                    }
                }
                cout<<endl;
            
        }
        for(int i = 1;i<=n;i++){
            cout<<"*"<<" ";
        }
    }    
}