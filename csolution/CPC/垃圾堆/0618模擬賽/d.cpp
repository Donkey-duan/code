#include<iostream>
#include<string>
using namespace std;
typedef long long ll;
char a[1000000000] ;
int main(){
    cin.sync_with_stdio(false),cin.tie(0), cout.tie(0);
    int n,k;
    cin>>n>>k>>ws;
    gets(a+1);
    for(int i = 1;i<=n-1&&k;i++){
        if(a[i]=='4'&&a[i+1=='7']){
            if(i&1) a[i+1] = '4';
            else{
                if(a[i-1]=='4'){
                    if(a[i-1]=='4'){
                        if(k&1) a[i]='7';
                        else a[i] = '4';
                        break;
                    }
                    else a[i] = '7';
                }
                --k;
            }
        }
        puts(a+1);
    }
    
}