#include<iostream>
#include<string>
using namespace std;
int main(){
int t,m,d;
string str[12]={"Aquarius","Pisces","Aries","Taurus","Gemini","Cancer","Leo","Virgo","Libra","Scorpio","Sagittrius","Capricorn"};
cin>>t;
    for(int i=1;i<=t;i++){
        cin>>m>>d;
        if(d<=20){
            cout<<str[m-2]<<endl;
        }
        else{
            cout<<str[m-1]<<endl;
        }
        
    }  
}
