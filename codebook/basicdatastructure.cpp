#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    for(int i = 0; i < 20; i++){
        v.push_back(i); //從後放入
    }
    int t = 5;
    while(t--){
        v.pop_back(); //從後丟出
    }
    cout << v.size() << endl; //vector大小
    v.insert(v.begin() + 2, 30); // 插入
    v.erase(v.begin() + 1); //刪除
    v.erase(v.begin() + 1, v.begin() + 3); //刪除某段
    for(int i = 0; v.size(); i++){
        cout << v[i] << " ";
    }
    v.clear(); //清空
    if(v.empty()) cout << "It is empty!!\n"; //是否為空
}

