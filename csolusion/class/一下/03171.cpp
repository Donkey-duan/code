#include<iostream>
#include<cmath>
using namespace std;

template<class T>
T triangle(T sid1, T sid2){
    return sqrt(sid1*sid1+sid2*sid2);
}
int main(){
    int side1,side2;
    cin>>side1>>side2;
    cout<<triangle(side1,side2)<<endl;
}