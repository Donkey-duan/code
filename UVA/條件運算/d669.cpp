#include<iostream>
using namespace std;
int main(){
    int h1,m1,h2,m2;
    while(cin>>h1>>m1>>h2>>m2,h1+m1+h2+m2!=0){
        int before = h1*60+m1;
        int after  = h2*60+m2;
        if (after<before) cout << after+60*24-before<<endl;
        else cout<<after-before<<endl;
    }
}