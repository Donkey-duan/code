#include<iostream>
using namespace std;
int main(){
    int n,max=0;
    cin>>n;
    while(n--){
        int t;
        cin>>t;
        if(t>max) max = t;
    }
    cout<<max<<endl;
}