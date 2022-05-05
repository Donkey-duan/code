#include<iostream>
#include<string>
using namespace std;
int main(){
    int count;
    cin>>count>>ws;
    for(int i = 0;i<count;i++){
        int letter[26]={0};
        string s;
        getline(cin,s);

        for(int j = 0;j<s.size();j++){
            s[j]=toupper(s[j]);
            int alpha = int(s[j])-65;
            letter[alpha]++;
        }

        int max = 0;
        for(int j = 0;j<26;j++){
            if(letter[j]>letter[max]){
                max = j;
            }
        }

        for(int j = 0;j<26;j++)
            if(letter[j]==letter[max])
                cout<<char(j+65)<<" "<<letter[j]<<" ";
        cout<<endl;
        
    }
}