#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    char ox[3][4];
    int counter = 0;
    scanf("%4s%4s%4s", ox[0],ox[1],ox[2]);
    for(int i = 0;i<3;i++)
    {
        if((ox[i][0]==ox[i][1]) && (ox[i][0]==ox[i][2]))
        {
            printf("%c win the game\n", ox[i][0]);
            counter++;
            break;
        }
        else if((ox[0][i]==ox[1][i]) && (ox[0][i]==ox[2][i]))
        {
           printf("%c win the game\n", ox[0][i]); 
           counter++;
            break;
        }
    }
    if((ox[0][0]==ox[1][1] && ox[0][0]==ox[2][2]) || (ox[2][0]==ox[1][1] && ox[2][0]==ox[0][2]))
    {
        printf("%c win the game\n", ox[1][1]); 
        counter++;
    }
    if(counter==0)
    {
        printf("Even\n");
    }
    return 0;
}