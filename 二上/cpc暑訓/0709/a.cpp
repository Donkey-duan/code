#include<iostream>

using namespace std;

const int N = 30000;
int f[N + 1], cnt[N + 1];
int n, m;

void Init()
{
    for (int i = 1; i <= n; i++) {
        f[i] = i;
        cnt[i] = 1;
    }
}

int Find(int a) {
    return a == f[a] ? a : f[a] = Find(f[a]);
}

int main()
{
    int t, x, y;
    cin>>t;
    while(t--) {
        cin>>n>>m;
        Init();
        for(int i = 1; i <= m; i++) {
            cin>>x>>y;
            int px = Find(x);
            int py = Find(y);
            if(px != py) {
                cnt[px] += cnt[py];
                f[py] = px;
            }
        }
        int max = 0;
        for(int i = 1; i <= n; i++)
            if(f[i] == i && max < cnt[i])
                max = cnt[i];
        cout<<max<<'\n';
    }
}