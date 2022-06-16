#include<iostream>
using namespace std;
int main(){
    int n[20],max = 0;
    for(int i = 0;i<20;i++){
        cin>>n[i];
        if(n[i]==-1){
            break;
        }
        int count = 0;
        for(int j = 2;j<=n[i];j++){
            if(n[i]%j==0){
                count++;
            }
        }
        if(count > max){
            max = count+1;
        }
    }
    cout<<max<<endl;
}