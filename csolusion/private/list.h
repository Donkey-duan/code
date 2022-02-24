#pragma once

struct node
{
    int val;
    struct node *next, *prev;
};
// append a node into linked list `head`. if `head` is null, a new list will be created.
// head: head of linked list.
// return: `head` if `head` is not NULL, else new head.

struct node *list_append(struct node *head, int val);
void list_free(struct node *head);