#include "linked_list.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void initList(LinkedList* list) {
    list->head = NULL;
}

void printList(LinkedList* list) {
    printf("This is the linked list!\n");
    ListNode* node = list->head;
    while (node != NULL) {
       printf("%d -> ", node->data);
        node = node->next;
    }
    printf("\n");
}

void insertAtBeginning(LinkedList* list, int value) {
    ListNode* newListNode = malloc(sizeof(ListNode));
    newListNode->data = value;
    ListNode* headNode = list->head;
    if (headNode == NULL) {
        list->head = newListNode;
        newListNode->next = NULL;
    }
    else {
        list->head = newListNode;
        newListNode->next = headNode;
    }
}