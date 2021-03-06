#include<stdio.h>
#include<stdlib.h>
 
struct node{
    int data;
    struct node *next,*prev;
};
 
struct node *list_add(struct node *head,int data);
struct node *list_delete_value(struct node *head,int data);
void list_free(struct node *head);
 
int main(){
   struct node *list = NULL;
   list = list_add(list, 1);
   list = list_add(list, 2);
   list = list_delete_value(list, 1);
   list = list_add(list, 3);
   list = list_add(list, 4);
   list_free(list);
}
 
struct node *list_add(struct node *head, int data){
    struct node *cur = head;
    struct node *cur_prev = head;
    while(cur!=NULL){
        cur_prev = cur;
        cur = cur->next;
    }
    cur = (struct node*)malloc(sizeof(struct node));
    if(cur_prev!=NULL){
        cur_prev->next = cur;
    }
    cur->data = data;
    cur->prev = cur_prev;
    cur->next = NULL;
    if(head==NULL){
        return cur;
    }
    return head;
}
 
// delete all the node with data = data
struct node *list_delete_value(struct node *head,int data){
    struct node *cur = head;
    struct node *cur_prev = head;
    int count = 0;
    while(cur->next!=NULL){
        if(cur->data == data){
            struct node *temp = cur;
            cur_prev->next = cur;
            cur_prev->next = cur->next;
            cur = cur->next;
            free(temp);
            count++;
        }
        cur_prev = cur;
        cur = cur->next;
    }
    if(count == 0){
        printf("We didn't find the data.\n");
    }
    return head;
}
 
void list_free(struct node *head){
    struct node *cur = head;
    while(cur!=NULL){
        struct node *cur_next = cur->next;
        printf("%d\n",cur->data);
        free(cur);
        cur = cur_next;
    }
}