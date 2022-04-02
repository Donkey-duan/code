


/******* list.c ********/
#include "list.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    - free (deconstructor)
    - append / insert //
    - dump // 全部 print 出來
*/

int main(void)
{
    struct node *my_list = NULL;

    my_list = list_append(my_list, 1);
    my_list = list_append(my_list, 2);
    my_list = list_append(my_list, 3);
    my_list = list_append(my_list, 4);
    list_free(my_list);
    return 0;
}

struct node *list_append(struct node *head, int val)
{
    struct node *cur = head;
    struct node *cur_prev = head;
    while (cur != NULL)
    {
        cur_prev = cur;
        cur = cur->next;
    }
    cur = (struct node *)malloc(sizeof(struct node));
    if (cur_prev != NULL)
    {
        cur_prev->next = cur;
    }
    cur->val = val;
    cur->prev = cur_prev;
    cur->next = NULL;
    if (head == NULL)
    {
        return cur;
    }
    return head;
}

void list_free(struct node *head)
{
    // head 不是 NULL 的話，free 掉
    struct node *cur = head;
    while (cur != NULL)
    {
        struct node *cur_next = cur->next;
        printf("%d\n",cur->val);
        free(cur);
        cur = cur_next;
    }
    // 看 head 的下一個
}