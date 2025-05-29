#include <stdio.h>
#include <stdlib.h>

#include "linked_list/linked_list.h"
#include "stack/stack.h"

void useStack();
void useLinkedList();

int main(void) {

    //useStack();
    useLinkedList();
    return 0;
}

void useLinkedList() {
    LinkedList list;
    initList(&list);
    insertAtBeginning(&list, 10);
    insertAtBeginning(&list, 20);
    insertAtBeginning(&list, 30);
    insertAtBeginning(&list, 40);
    insertAtEnd(&list, 100);
    printList(&list);

    removeByValue(&list, 100);
    printList(&list);
    removeByValue(&list, 20);
    printList(&list);
    removeByValue(&list, 100);
    printList(&list);
}

void useStack() {
    Stack stack;
    initStack(&stack);
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    printStack(&stack);

    printf("Popped value: %d \n", pop(&stack));
    printStack(&stack);
    printf("Popped value: %d \n", pop(&stack));
    printStack(&stack);
    printf("Popped value: %d \n", pop(&stack));
    printStack(&stack);

    freeStack(&stack);
    printf("Free the stack!\n");
    printStack(&stack);
}