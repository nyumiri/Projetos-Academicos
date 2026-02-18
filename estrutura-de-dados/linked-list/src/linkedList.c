#include <linkedList.h>

LKNode* list_create(int value) {
    LKNode* temp = (LKNode*)malloc(sizeof(LKNode));
    if (!temp) {
        printf("ERROR: Allocation Failed\n");
        return NULL;
    }

    temp->data = value;
    temp->next = NULL;

    return temp;
}

LKNode* list_append(LKNode** head, int value) {
    if (*head == NULL) {
        printf("ERROR: Invalid List\n");
        return NULL;
    }

    LKNode* temp = (LKNode*)malloc(sizeof(LKNode));
    if (!temp) {
        printf("ERROR: Allocation Failed\n");
        return NULL;
    }

    temp->data = value;
    temp->next = NULL;

    LKNode* ref = *head;

    while(ref->next != NULL) ref = ref->next;
    ref->next = temp;

    return temp;
}

void list_freeAll(LKNode** head) {
    LKNode* current = *head;
    LKNode* next;

    if (*head == NULL) return;

    do {
        next = current->next;
        free(current);
        current = next;
    } while (current != NULL);

    *head = NULL;
}

void list_printAll(LKNode** head) {
    printf("-----Iterating in Linked List-----\n");
    
    LKNode* ref = *head;
    if (ref == NULL) {
        printf("ERROR: Invalid List\n");
        return;
    }

    int index = 0;
    do {
        printf(
            "Node #%d Value: %d\n", 
            index, 
            ref->data
        );

        ref = ref->next;
        index++;
    } while(ref != NULL);

    printf("-----End of List-----\n");
}