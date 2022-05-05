#include <iostream>
#include <string>
using namespace std;
int main(){
    string num;
    while(cin>>num){
        if (num == string(num.rbegin(), num.rend())) {
        cout << "Palindrome" << endl;
        } 
        else {
            cout << "No Palindrome" << endl;
        }
    }
}