#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int f;//farmer
        cin>>f;
        long long ans = 0;
        while(f--){
            long long area, animal, level;
            cin>>area>>animal>>level;
            ans+=area*level;
        }
        cout<<ans<<endl;
    }
}