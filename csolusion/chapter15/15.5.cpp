#include<iostream>
using namespace std;

inline int rectArea(int a, int b){
    return a * b;
}

int main(){
    int length, wide;
    cout << "Enter the length and wide :";
    cin >> length >> wide;
    cout << "The area of rectangle is "<< rectArea(length, wide)<< endl;
}