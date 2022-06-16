#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    int n[20];
    while(cin>>str){
        int count = 0;
        for(int i = str.size()-1;i>=0;i-=3){
            if(i>=3){
                n[count]=(str[i]-'0')+(str[i-1]-'0')*10+(str[i-2]-'0')*100;
                count++;
            }
        }
        if(str.size()<3){
            for(int i = str.size()-1;i>=0;i--){
                n[count]=(str[i]-'0')+(str[i-1]-'0')*10+(str[i-2]-'0')*100;
                count++;
            }
        }
        int sum = 0;
        for(int i = 0;i<count;i++){
            if(i%2==0){
                sum+=n[i];
            }
            else{
                sum-=n[i];
            }
        }
        cout<<sum<<" ";
        if(sum%7==0){
            cout<<str<<" is a multiple of 7."<<endl;
        }
        else{
            cout<<str<<" is not a multiple of 7."<<endl;
        }
    }
}
