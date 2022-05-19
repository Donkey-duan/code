#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int num[100];
    int i = 0;
    int count = 0;
    while(cin>>num[i]){
        if(num[i]==-1){
            break;
        }
        if(i>1){
            if(abs(num[i]-num[i-1])!=1){
                count++;
            }
        }
        i++;
    }
    if(count!=0){
        cout<<"Not Sequence"<<endl;
    }
    else{
        cout<<"Sequence"<<endl;
    }
}