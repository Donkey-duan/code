#include<iostream>
using namespace std;
int main(){
    int n,m;
    while(cin>>n){
        if(n<1||n>1000){
            break;
        }
        int counter = 0;
        cin>>m;
         if(m<1||m>1000){
            break;
        }
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