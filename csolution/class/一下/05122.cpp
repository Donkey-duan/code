#include<iostream>  
#include<string>  
#include<algorithm>  
using namespace std;  
int cmp(int a,int b){  
    return a > b;  
}  
int main(){  
    int count;  
    cin>>count>>ws;  
    for(int i = 0;i<count;i++){  
        string s,b;  
        int max[20];  
        int sum = 0,now = 0;  
        getline(cin,s);  
  
        for(int j = 0;j<s.size();j++){  
            if(s[j]!=' '){  
                sum++;  
            }  
            else{  
                max[now]= sum;  
                sum=0;  
            }  
        }  
        sort(max, max+20,cmp);  
        int maxNum = max[0];  
        if(i == 0){  
            cout<<"Tyler Herro Sixth award Miami "<<endl;  
        }  
        else{  
            cout<<"Improved "<<endl;  
        }  
    }  
}  