#include<iostream>
#include<string>
using namespace std;
int main(){
    int n,count = 1,sum = 0;
    int test = 1;
    string str;
    cin>>n>>ws;
    cin>>str>>ws;
    for(int i = 0;i<str.size();i++){
        if(str[i]-'0'==n){
            count*=n;
        }
        else{
                if(count!=1){
                    sum+=count;   
                }
                count = 1;
        }
    }
    cout<<sum+n<<endl;
}