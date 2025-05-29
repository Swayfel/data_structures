#ifndef LINKED_LIST_C_H
#define LINKED_LIST_C_H
typedef struct ListNode {
    int data;
    struct ListNode *next;
} ListNode;

typedef struct LinkedList {
    struct ListNode *head;
} LinkedList;

void initList(LinkedList* list);
int listLength(LinkedList* list);

void insertAtBeginning(LinkedList* list, int value);
void insertAtEnd(LinkedList* list, int value);
int removeByValue(LinkedList* list, int value); // returns 1 if removed else 0
int isEmpty(LinkedList* list); // returns 1 if empty else 0
void printList(LinkedList* list);
void freeList(LinkedList* list);
int findLowestValue(LinkedList* list);
void insertAtIndex(LinkedList* list, int value, int index);

#endif //LINKED_LIST_C_H
