#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    string str;
    while(cin>>str){
        int sum = 0;
        for(int i = 0;i<str.size();i++){
            if(isdigit(str[i])){
                sum +=str[i]-'0';
            }
        }
        cout<<sum<<endl;
    }
}