#include<iostream>
using namespace std;
int main(){
    int month, date;
    while(1){
        int day = 0;
        cin>>month>>date;
        if(month==0){
            break;
        }
        for(int m = 1;m < month; m++){
            if(m == 2){
                day+=28;
            }
            else if(m<=7){
                if(m%2==0){
                    day+=30;
                }
                else{
                    day+=31;
                }
            }
            else if(m> 7){
                if(m%2==0){
                    day+=31;
                }
                else{
                    day+=30;
                }
            }
            }
            day+=date;
            int final = day % 7;
            switch(final){
                case 1:
                cout<<"Saturday"<<endl;
                break;
                case 2:
                cout<<"Sunday"<<endl;
                break;
                case 3:
                cout<<"Monday"<<endl;
                break;
                case 4:
                cout<<"Tuesday"<<endl;
                break;
                case 5:
                cout<<"Wednesday"<<endl;
                break;
                case 6:
                cout<<"Thursday"<<endl;
                break;
                case 0:
                cout<<"Friday"<<endl;
                break;
        }
    }
}