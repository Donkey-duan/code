#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int num[16];
    int sort_o[9], sort_e[6];
    int odd = 0,even = 0;
    for(int i = 0;i<15;i++){
        cin>>num[i];
        if(num[i]%2 == 0){
            sort_e[even] = num[i];
            even++;
        }
        else{
            sort_o[odd] = num[i];
            odd++;
        }
    }
    sort(sort_o,sort_o+9);
    sort(sort_e,sort_e+6);
    for(int i = 0;i<9;i++){
        cout<<sort_o[i]<<" ";
    }
    for(int i = 0;i<6;i++){
        cout<<sort_e[i]<<" ";
    }
    cout<<endl;
}