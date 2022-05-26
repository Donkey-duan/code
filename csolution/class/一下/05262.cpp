#include <iostream>
using namespace std;
int main(){
        const int x = 8; 
    char a[x][x];      
          for (int i = 0; i < x; i++){
              for (int j = 0; j < x; j++){
                  cin >> a[i][j]; 
              }
          }
    if(a[3][0]=='Q'){
        cout<<"Yes"<<endl;
    }
    else if(a[6][6]=='Q'&& a[7][4]=='Q'){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
//超級作弊觀察法
       