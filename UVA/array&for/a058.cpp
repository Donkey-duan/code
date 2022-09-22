#include<iostream>
using namespace std;
int main(){
    int n;
    int a=0,b=0,c=0;
    cin>>n;
    while(n--){
        int t;
        cin>>t;
        if(t%3==0) a++;
        if(t%3==1) b++;
        if(t%3==2) c++;
    }
    cout<<a<<" "<<b<<" "<<c<<endl;
}