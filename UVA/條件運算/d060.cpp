#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n < 25) cout << 25 - n << endl;
    else if( n == 25) cout << 0 << endl;
    else cout << 25+(60-n) << endl;
}