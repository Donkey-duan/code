#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int max=0;
    int num[10];
    for(int i = 0;;i++){
        cin>>num[i];
        if(num[i]==-1){
            break;
        }
        if(i!=0){
            if(abs(num[i]-num[i-1])>max){
            max = abs(num[i]-num[i-1]);
        }
        }
    }
    cout<<max<<endl;
}