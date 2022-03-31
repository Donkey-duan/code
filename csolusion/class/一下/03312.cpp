#include<iostream>
using namespace std;
class tmp{
    public:
    double a, b, c,sum;
    char name[100];
};
int main(){
    tmp people[3];
    for(int i = 0;i<3;i++){
        cin>>people[i].name>>people[i].a>>people[i].b>>people[i].c;
        people[i].sum+=people[i].b+people[i].c;
    }
    for(int i = 0;i<2;i++)
    {
        for(int j = 0;j<2;j++)
        {
            if(people[j].sum<people[j+1].sum)
            {
                tmp t = people[j];
                people[j] = people[j+1];
                people[j+1] = t;
            }
        }
    }
    for(int i = 0;i<3;i++)
{
    cout<<people[i].name<<" "<<people[i].sum<<endl;
}
}