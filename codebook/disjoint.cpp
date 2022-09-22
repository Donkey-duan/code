#include<cstdio>
#include<algorithm>
using namespace std;
int find_root(int x)
{
    if(boss[x]==x) return x; //如果他自己就是他那群的源頭，就回報他自己的編號
    
    int root=find_root(boss[x]); //找出他老大的源頭
    boss[x]=root; //把他的boss也改成終極boss(源頭)的編號
    return root;
}
void connect(int x, int y)
{
    int root_x=find_root(x); //找到x的源頭
    int root_y=find_root(y); //找到y的源頭
    boss[root_x]=root_y; //讓x的源頭歸順於y的源頭 (若要反過來也可以)
}
int main()
{
    for(int i=0;i<1000000;i++) boss[i]=i;//一開始大家的源頭都是自己
    while(1)
    {
        cin>>指令
        if(指令是連接a與b){
            connect(a, b);
        }
        else if(指令是問a與b是否相連){
            int root_a=find_head(a);
            int root_b=find_head(b);
            if(root_a==root_b) cout<<相連
            else cout<<不相連
        }
    }  
}