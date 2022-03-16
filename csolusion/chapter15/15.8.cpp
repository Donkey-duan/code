#include<iostream>
using namespace std;
template<class T>
T product(T num1,T num2){
    return num1 * num2;
}
int main(){
    int num1,num2;
    cin >> num1 >> num2;
    cout << "Product: "<< product(num1, num2)<< endl;
    double d1,d2;
    cin >> d1 >> d2;
    cout << "Product: "<< product(d1 ,d2)<< endl;
}
