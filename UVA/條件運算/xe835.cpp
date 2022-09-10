#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if (n <= 2500){
        cout << 1 << " " << (n-1)/25+1 << " " << (n-1)%25+1 << "\n";
    }
    else if (n <= 7500){
        n -= 2500;
        cout << 2 << " " << (n-1)/50+1 << " " << (n-1)%50+1 << "\n";
    }
    else{
        n -= 7500;
        cout << 3 << " " << (n-1)/25+1 << " " << (n-1)%25+1 << "\n";
    }
}