#include<iostream>
#include<map>
using namespace std;
int Set[100000];
int Num[100000];
int Find(int x) {
    if(x == Set[x])
        return x;
    return Set[x] = Find(Set[x]);
}
void Union(int x, int y) {
    x = Find(x);
    y = Find(y);
    if(x != y) {
        Set[x] = y;
        Num[y] += Num[x];
    }
    cout << Num[y] << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        map<string, int> Map;
        for (int i = 0; i <= 2 * n; ++i) {
            Set[i] = i;
            Num[i] = 1;
        }
        string A, B;
        for (int i = 0, j = 1; i < n; ++i) {
            cin >> A >> B;
            if (!Map[A]) Map[A] = j++;
            if (!Map[B]) Map[B] = j++;
            Union(Map[A], Map[B]);
        }
    }
}