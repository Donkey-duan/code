#include<cstdio>
#include<algorithm>
using namespace std;
int N,Up[30005],Down[30005],fa[30005];
inline int getfa(int x){
    if (x==fa[x]) return x;
    int f=fa[x];
    fa[x]=getfa(fa[x]); //这里先修正Down[fa[x]]
    Down[x]+=Down[f]; //修正Down[x]
    return fa[x];
}
inline void merge(int x,int y){
    x=getfa(x);y=getfa(y);
    if (x==y) return ;
    Down[x]=Up[y];Up[y]+=Up[x];fa[x]=y;
}
inline char read(){
    char ch=getchar();
    while (ch!='M'&&ch!='C') ch=getchar();
    return ch;
}
int main()
{
    scanf("%d",&N);
    for (int i=1;i<=30000;i++) fa[i]=i,Up[i]=1,Down[i]=0; //初始化
    for (int i=1;i<=N;i++){
        char ch=read();
        if (ch=='M'){
            int x,y;
            scanf("%d%d",&x,&y);
            merge(x,y); //合并
        }
        else {
            int x;scanf("%d",&x);
            getfa(x); //计算前先修正
            printf("%d\n",Down[x]);
        }
    }
    return 0;
}