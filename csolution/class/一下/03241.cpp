#include<iostream>
#include<cmath>
using namespace std;

template<class T>
T fine(T sid1, T sid2){
    return abs(sid1*sid1*sid1-sid2*sid2*sid2);
}

int main(){
    int side1,side2;
    cin>>side1>>side2;
    cout<<fine(side1,side2)<<endl;
}