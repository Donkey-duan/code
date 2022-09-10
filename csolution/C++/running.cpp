#include <iostream>
#include <string>
using namespace std;
int main()
{
    string mem[15] = {"AB", "AC", "AD", "AE", "AF", "BC", "BD", "BE", "BF", "CD", "CE", "CF", "DE", "DF", "EF"};
    int num[15] = {0};
    for (int i = 0; i < 9; i++)
    { // time = 9
        int count = 0,test = 1;
        int now[6];
        cout << i+1 << ":";
            for (int k = 0; k < 15; k++)
            { //侖跑
                if(count >2) break;
                if(count!=0){
                    if (now[count]==mem[k][0]||now[count]==mem[k][1]) test = 0;
                    if(now[count+1]==mem[k][0]||now[count+1]==mem[k][1]) test = 0;
                }
                if (num[k] <= 1&&test)
                {
                    now[count]= mem[k][0];
                    now[count+1] = mem[k][1];
                    cout << mem[k] << "\t";
                    num[k]++;
                    count++;
                }
                else
                    continue;
            }
        
        cout<<endl;
    }
}