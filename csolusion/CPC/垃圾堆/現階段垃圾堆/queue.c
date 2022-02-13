#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main(){
    int arr[105] = {0}, n, now = 0,current = 0;
    char str[5];
    while(scanf("%s",str)!=EOF){
        if(strcmp(str,"push") == 0){
            scanf("%d",&n);
            arr[now] = n;
            now++;
        }
        else{
            
            if(current<now){
                printf("%d\n",arr[current]);
                current++;
            }
            else{
                printf("The queue is empty.\n");
            }
        }
    }
}