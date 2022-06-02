#include<iostream>
#include<string>
using namespace std;
int main(){
string str;
cin>>str;
for(int i = 0;i<str.size();i+=2){
    for(int j = 1;j<=(str[i+1]-'0');j++){
        cout<<str[i];
    }
}
cout<<endl;  
}