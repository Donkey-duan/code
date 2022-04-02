#include<iostream>
int change(int);
using namespace std;
int main(){
    int time;
    cin>>time;
    while(time){
    int temp;
    cin>>temp;
    cout<<change(temp)<<endl;
    time--;
    }

}
int change(int a){
return a*1.8 + 32;
}
