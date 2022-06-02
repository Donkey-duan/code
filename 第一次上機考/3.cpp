#include<iostream>
using namespace std;
int main(){
    int t,p;
    cin>>t>>p;
    int all = t*60*60;
    int now = int(all*p/100);
    now = all-now;
    int time[3]={0};
    for(int i = 0;i<3;i++){
        time[i] = now%60;
        now/=60;
    } 
    for(int i = 2;i>=0;i--){
        if(i==0){
            break;
        }
        cout<<time[i]<<" ";
    }
    cout<<time[0];
    cout<<endl;
}