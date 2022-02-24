#include<iostream>
using namespace std;
int main(){
    int n,i;
    while(cin>>n){
        int sum = n;
        for(;n-3>0;){
            n=n-3+1;
            sum+=1;
        }
        sum+=1;
        cout<<sum<<endl;
    }
}