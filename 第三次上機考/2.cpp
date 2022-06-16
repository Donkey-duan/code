#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    string str;
    cin>>n>>ws;
    for(int i = 1;i<=n;i++){
        int num[10]={-2,-2,-2,-2,-2,-2,-2,-2,-2,-2};
        cin>>str>>ws;
        for(int j = 0;j<str.size();j++){
            num[str[j]-'0']++;
        }
        int count = 0;
        for(int k = 0;k<10;k++){
            if(num[k]==-2){
                cout<<k<<" ";
                count++;
            }
        }
        if(count==0){
            cout<<"Collect successfully!";
        }
        cout<<endl;
    }
}