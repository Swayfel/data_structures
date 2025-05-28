#include "stack.h"

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void initStack(Stack *s) {
   s->top = NULL;
}

int peek(Stack *s) {
   return s->top->data;
}

void push(Stack *s, int data) {
   Node * topNode = s->top;
   Node* newNode = malloc(sizeof(Node));
   newNode->data = data;
   newNode->next = topNode;
   s->top = newNode;
}

int pop(Stack *s) {
   int returnValue = s->top->data;
   s->top = s->top->next;

   return returnValue;
}

void printStack(Stack *s) {
   printf("This is the stack\n");
   Node* node = s->top;

   while (node != NULL) {
      printf("%d ", node->data);
      node = node->next;
   }
   printf("\n");
}

void freeStack(Stack *s) {
   Node* node = s->top;
   while (node != NULL) {
      Node* temp = node;
      node = node->next;
      free(temp);
   }
   s->top = NULL;
}