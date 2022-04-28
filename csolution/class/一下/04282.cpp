#include<iostream>
#include<algorithm>
#include<vector>
#include<cctype>
using namespace std;
int main(){
    vector<int> v;
    int num;
    char mission;
    while(cin>>mission){
        char t = tolower(mission);
        if(t =='s'){
            sort(v.begin(),v.end());
            for(int i = 0;i<v.size();i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
            break;
        }
        if(t == 'i'){
            cin >> num;
            v.push_back(num);
        }
        if(t == 'd'){
            cin >> num;
            for(int i = 0;i<v.size();i++){
                if(v[i] == num){
                    v.erase(v.begin()+i);
                    break;
                }
            }
        }
    }
}