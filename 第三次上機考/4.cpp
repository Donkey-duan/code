#include<iostream>
#include<string>
using namespace std;
//等我有空寫 我腦癱
int main(){
    string str;
    while(cin>>str){
        int num = str.size()/3;
        if(str.size()%3!=0){
            num+=1;
        }
        int n[num],count = 0;
        for(int i = str.size()-1;i>=0;i-=3){
            if(i<3){
                break;
            }
            n[count] = (str[i]-'0')+(str[i-1]-'0')*10+(str[i-2]-'0')*100;
            count++;
        }
        if(num%3!=0){
            n[count] = (str[num])
        }
    }
}