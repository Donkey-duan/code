#include<iostream>
using namespace std;
int main(){
    int n,m;
    while(cin>>n){
        int counter = 0;
        cin>>m;
        int flag = n;
        for(int i = 1;;i++){
            if(flag>=m){
                break;
            }
            else{
                flag+=n+i;
                counter++;
            }
        }
        cout<<counter<<endl;
    }
}