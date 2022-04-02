#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next,*prev;
};

struct node *add(struct node *head,int data);
void list_free(struct node *head);

int main(){
   struct node *list = NULL;
   list = add(list,1);
   list = add(list,2);
   list = add(list,3);
   list = add(list,4);
   list_free(list);
   return 0;
}

struct node *add(struct node *head,int data){
    struct node *cur = head;
    struct node *cur_prev = head;
    while(cur!=NULL)
    {
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
    if(head == NULL)
    {
        return cur;
    }
    return head;
}

void list_free(struct node *head){
    struct node *cur = head;
    while(head!=NULL){
        struct node *cur_next = cur->next;
        printf("%d\n",cur->data);
        free(cur);
        cur = cur_next;
    }
}