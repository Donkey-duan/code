#include<iostream>
#include"maximum.h"
using namespace std;
int main(){
    int num1,num2,num3;
    cin>>num1>>num2>>num3;
    cout<<"The max value is "<<maximum(num1,num2,num3)<<endl;

    double dnum1,dnum2,dnum3;
    cin>>dnum1>>dnum2>>dnum3;
    cout<<"The max value is "<<maximum(dnum1,dnum2,dnum3)<<endl;

    char cnum1,cnum2,cnum3;
    cin>>cnum1>>cnum2>>cnum3;
    cout<<"The max value is "<<maximum(cnum1,cnum2,cnum3)<<endl;
}