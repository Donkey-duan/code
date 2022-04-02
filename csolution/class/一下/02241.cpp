#include<iostream>
using namespace std;
int main(){
    int n,i;
    while(cin>>n){
        int sum  = 0;
        if(n%2==0){
            for(i = 2;i<=n;i+=2){
                sum+=i;
            }
        }
        else{
            for(i = 1;i<=n;i+=2){
                sum+=i;
            }
        }
        cout<<sum<<endl;
    }
}