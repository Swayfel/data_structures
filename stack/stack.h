#ifndef STACK_H
#define STACK_H
typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct Stack {
    struct Node *top;
} Stack;

void initStack(Stack *s);
void push(Stack *s, int data);
int pop(Stack *s);
int peek(Stack *s);
void freeStack(Stack *s);
void printStack(Stack *s);

#endif //STACK_H
