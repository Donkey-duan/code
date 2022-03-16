#include<iostream>
using namespace std;
int multipleByValue(int);
int multipleByReference(int &);
int main(){
    int num;
    cin >> num;
    cout << "Passed by value: "<< multipleByValue(num)<< endl;
    cout << "Passed by reference: "<< multipleByReference(num)<< endl;
    cout << "Passed by value again: "<< multipleByValue(num)<< endl;
    cout << "Passed by reference again: "<< multipleByReference(num)<< endl;
}

int multipleByValue(int a){
    return a *= a;
}

int multipleByReference(int &a){
    return a *= a;
}
