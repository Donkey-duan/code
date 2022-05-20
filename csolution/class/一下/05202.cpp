#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    const int x = 9; 
    char a[x][x];
    int total,total2, no;
          total = 0; total2 = 0; 
          no = 0;
          
          for (int i = 0; i < x; i++){
              for (int j = 0; j < x; j++){
                  cin >> a[i][j]; 
              }
          }
          
          for (int i = 0; i < x; i++){
              for (int j = 0; j < x; j++){
                  total += a[i][j]-'0';
                  total2 += a[j][i]-'0'; 
              }
              if (total != 45 || total2 != 45){ 
                 no++;
              }
              total = 0; 
              total2 = 0; 
          }
          
          for (int i = 0; i < 9; i+=3){
              for (int j = 0; j < 9; j+=3){
                  for (int x = i; x < i+3; x++){
                      for (int y = j; y < j+3; y++){
                          total += a[x][y]-'0';
                      }
                  }
                  if(total != 45){
                      no++;
                  }
                  total = 0; 
              }    
          }
                
          if (no > 0){
              cout << "Keep Going!" << endl;       
          }else{
              cout << "Well Done!" << endl;    
          }
}