#include "linked_list.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void initList(LinkedList* list) {
    list->head = NULL;
}

int listLength(LinkedList* list) {
    int count = 0;
    ListNode* headNode = list->head;
    while (headNode != NULL) {
        headNode = headNode->next;
        count++;
    }

    return count;
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

void insertAtEnd(LinkedList* list, int value) {
    ListNode* newListNode = malloc(sizeof(ListNode));
    newListNode->data = value;
    newListNode->next = NULL;
    ListNode* headNode = list->head;
    if (headNode == NULL) {
        list->head = newListNode;
        newListNode->next = NULL;
    }
    else {
        for ( int i=0; i<listLength(list)-1; i++) {
            headNode = headNode->next;
        }
        headNode->next = newListNode;
    }
}

int isEmpty(LinkedList* list) {
    if (list->head == NULL) {
        return 1;
    }
    return 0;
}

int removeByValue(LinkedList* list, int value) {
    if (list->head->data == value) {
        if (list->head->next == NULL) {
            list->head = NULL;
            return 1;
        }
        list->head = list->head->next;
    }
    ListNode* headNode = list->head;
    while (headNode != NULL && headNode->next != NULL) {
        if (headNode->next->data == value) {
            headNode->next = headNode->next->next;
            return 1;
        }
        if (headNode->next == NULL) {
            headNode = NULL;
        }else {
            headNode = headNode->next;
        }
    }
    return 0;
}
