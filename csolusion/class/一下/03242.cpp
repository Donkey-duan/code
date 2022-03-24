#include<iostream>
#include<cstdio>
using namespace std;
class tmp{
    public:
    int num;
    char name[100];
    double a;
};

int main(){
    tmp people[3];
    for(int i = 0; i < 3;i++){
        cin >> people[i].num >> people[i].name >> people[i].a;
    }
    for(int i = 0; i<3;i++){
        if(people[i].a>=30.0){
            printf("%d %s %.1f\n",people[i].num, people[i].name, people[i].a);
        }
    }
}