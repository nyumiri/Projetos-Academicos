#ifndef _LINKEDLIST
#define _LINKEDLIST

#include <stdio.h>
#include <stdlib.h>

typedef struct lkNode {
    int data;
    struct lkNode* next;
} LKNode;

LKNode* list_create(int value);

LKNode* list_append(LKNode** head, int value);
void list_freeAll(LKNode** head);

void list_printAll(LKNode** head);
#endif