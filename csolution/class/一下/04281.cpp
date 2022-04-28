#include<iostream>
#include<vector>

using namespace std;
int main(){
    int n;
    while(cin>>n){
        if(n == 0){
            break;
        }
        vector<int> v;
        for(int i = 2;i<=n;i++){
           while(n%i==0){
               v.push_back(i);
               n/=i;
           } 
        }
        for(int i = 0;i<v.size();i++){
            if(i!=v.size()-1){
                cout<<v[i]<<"*";
            }
            else{
                cout<<v[i]<<endl;
            }
        }
    }

}