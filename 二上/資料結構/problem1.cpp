#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    string a;
    getline(cin, a);
    while(n--){
        int alpha_A[26]={0}, alpha_a[26]={0}, count = 1;
        string str;
        getline(cin, str);
        for(int i = 0; str[i]!='\0'; i++){
            if(str[i]==' '){
                count++;
                continue;
            }
            else if(str[i]==','||str[i]=='.') continue;
            else{
                if(str[i]>'Z') alpha_a[(int)str[i]-'a']++;
                else alpha_A[(int)str[i]-'A']++;
            }
        }
        printf("%d\n", count);
        for(int i = 0; i< 26; i++){
            if(alpha_A[i]!=0) printf("%c : %d\n", (char)i+'A', alpha_A[i]);
            if(alpha_a[i]!=0) printf("%c : %d\n", (char)i+'a', alpha_a[i]);
        }
    }
}