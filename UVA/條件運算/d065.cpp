#include<iostream>
using namespace std;
int max(int a, int b){
    int max = a;
    if(b>a) max = b;
    return max;
}
int main(){
    int n[3];
    cin>>n[0]>>n[1]>>n[2];
    cout << max(n[0],max(n[1],n[2])) << endl;
}