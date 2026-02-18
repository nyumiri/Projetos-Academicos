#include <linkedList.h>
#define LENGTH 100

int main() {
    LKNode* head = list_create(1);
    for (int i = 1; i < LENGTH; i++) {
        list_append(&head, i + 1);
    }
    
    list_printAll(&head);
    list_freeAll(&head);
    return 0;
}