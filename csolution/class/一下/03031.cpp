#include<iostream>
using namespace std;
int main(){
int low,up;
cin>>low>>up;
int arr[10] = {0};
for(int i = low;i<=up;i++){
    int flog = i;
    if(flog>=10){
        arr[flog/10]++;
        flog%=10;
    }
    arr[flog]++;
}
for(int i = 0;i<10;i++){
    cout<<i<<"有"<<arr[i]<<"個"<<endl;
}
}