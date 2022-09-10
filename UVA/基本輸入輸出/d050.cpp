#include<iostream>
using namespace std;
int main(){
    int time;
    cin >> time;
    if(time < 15){
        cout << 24-(15 - time) << endl;
    }
    else cout << time - 15 << endl;
}