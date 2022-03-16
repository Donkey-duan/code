#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cin >> num1 >> num2;
    cout << "num1 = "<< num1 << "\t" << "num2 = " << num2 << endl;
    swap(num1 , num2);
    cout << "num1 = "<< num1 << "\t" << "num2 = " << num2 << endl;
}