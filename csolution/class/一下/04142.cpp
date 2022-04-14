#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    while(cin>>str){
        int sum = 0;
        for(long long int i = 0;i<str.size();i++){
            sum += str[i];
        }
        if(sum%3 == 0){
            cout << str <<" is a multiple of 3."<<endl;
        }
        else{
            cout << str <<" is not a multiple of 3."<<endl;
        }

    }
}