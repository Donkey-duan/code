#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cin>>n;
    while(n--){
        int y;
        cin >> y;
        cout<<"Case "<<i<<": ";
        if(y%400==0 || (y%4==0)&&(y%100!=0)) cout << "a leap year" << endl;
        else cout << "a normal year"<<endl;
        i++;
    }
}