#include<iostream>
#include<cmath>
using namespace std;
inline double sphereVolume(int radius){
    return (4.0 / 3.0) * 3.14159 * pow(radius, 3);
}
int main(){
    int r;
    cout << "Enter a radius: ";
    cin >> r;
    cout << "The sphere volume is "<< sphereVolume(r) << endl;
}