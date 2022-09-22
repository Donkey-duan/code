#include<iostream>
using namespace std;
int main(){
    int n, s[25];
    cin>>n;
    for(int i = 0;i<3;i++){
        int m;
        cin>>m>>ws;
        s[m-1] = 1;
    }
    for(int i = n;i>0;i--){
        if(!s[i-1]) cout << "No. " << i << endl;
    }
}