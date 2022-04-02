#pragma once
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next, *prev;
};

struct node *list_add(struct node *head, int data);
void list_free(struct node *head);
void list_dump(struct node *head);