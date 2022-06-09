#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    while(cin>>str){
        int triple = 0,forth = 0;
        int ansT=0,ansF=0;
        for(int i = 0;i<str.size();i++){
            triple+=str[i]-'0';
        }
        if(triple%3==0){
            ansT = 1;
        }
        int n = str.size();
        forth+=(str[n-1]-'0')+(str[n-2]-'0')*10;
        if(forth%4==0){
            ansF = 1;
        }
        if(ansT && ansF){
            cout<<str<<" is a multiple of 12."<<endl;
        }
        else if(ansT){
            cout<<str<<" is a multiple of 3."<<endl;
        }
        else if(ansF){
            cout<<str<<" is a multiple of 4."<<endl;
        }
        else{
            cout<<str<<" is not a multiple of 3 or 4."<<endl;
        }
    }    
}