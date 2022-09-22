#include<iostream>
using namespace std;
int main(){
    int a, b,t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        cin>>a>>ws>>b;
        if(a%2 == 0) a+=1;
        if(b%2 == 0) b-=1;
        int n = (b-a)/2+1;
        cout << "Case "<<i<<": "<<(2*a+(n-1)*2)*n/2 << endl;
    }

}