#include "list.h"

struct node *list_add(struct node *head, int data) {
    struct node *cur = head;
    struct node *cur_prev = head;

    while (cur != NULL) {
        cur_prev = cur;
        cur = cur->next;
    }

    cur = (struct node *)malloc(sizeof(struct node));
    if (cur_prev != NULL) {
        cur_prev->next = cur;
    }
    cur->data = data;
    cur->prev = cur_prev;
    cur->next = NULL;
    if (head == NULL) {
        return cur;
    }
    return head;
}

void list_free(struct node *head) {
    struct node *cur = head;
    while (cur != NULL) {
        struct node *cur_next = cur->next;

        free(cur);
        cur = cur_next;
    }
}

void list_dump(struct node *head) {
    struct node *cur = head;
    while (cur != NULL) {
        printf("%d\n", cur->data);
        cur = cur->next;
    }
}