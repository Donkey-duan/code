#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main(){
    int arr[105] = {0}, n, now = 0;
    char str[5];
    while(scanf("%s",str)!=EOF){
        if(strcmp(str,"push") == 0){
            scanf("%d",&n);
            arr[now] = n;
            now++;
        }
        else{
            now-=1;//
            if(now != -1){//
                printf("%d\n",arr[now]);
            }
            else{
                printf("The stack is empty.\n");
            }
        }
    }
}
