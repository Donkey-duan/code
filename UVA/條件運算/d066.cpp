#include<iostream>
using namespace std;
int main(){
    int hh, mm;
    cin>>hh>>mm;
    if(hh<7||hh>=17||(hh==7&&mm<30)) cout<<"Off School"<< endl;
    else cout<<"At School" << endl;
}