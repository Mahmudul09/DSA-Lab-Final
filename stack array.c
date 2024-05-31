#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int stack[MAX];
int top = -1;

int isFull() {
    return top == MAX - 1;
}

int isEmpty() {
    return top == -1;
}
void push(int value) {
    if (isFull()) {
        printf("Stack overflow");
        return;
    }
    stack[++top] = value;
    printf("Pushed %d onto the stack.\n", value);
}
int pop() {
    if (isEmpty()) {
        printf("Stack underflow");
        return -1;
    }
    return stack[top--];
}
int peek() {
    if (isEmpty()) {
        printf("Stack is empty! Unable to peek.\n");
        return -1;
    }
    return stack[top];
}
void display() {
    if (isEmpty()) {
        printf("Stack is empty!\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}
int main() {
    push(10);
    push(20);
    push(30);

    display();

    printf("Top element is %d\n", peek());

    printf("Popped element is %d\n", pop());

    display();

    return 0;
}

