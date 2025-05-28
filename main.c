#include <stdio.h>
#include <stdlib.h>

#include "stack/stack.h"

void useStack();

int main(void) {

    useStack();
    return 0;
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