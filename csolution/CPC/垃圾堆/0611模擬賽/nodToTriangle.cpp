#include<iostream>
using namespace std;
int main(){
    cin.sync_with_stdio(false), cin.tie(nullptr);
    int n;
    while(cin>>n, n >= 3){
        --n;
        cout<<(((long long)(n-1)*n*((n<<1)-1)/6-(n>>1))>>2)<<endl;
    }
}