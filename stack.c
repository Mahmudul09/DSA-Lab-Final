#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* top = NULL;

void push(int x) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = x;
    newNode->next = top;
    top = newNode;
}

int pop() {
    if (top == NULL) {
        printf("Stack Underflow\n");
        return -1;
    }
    int x = top->data;
    Node* temp = top;
    top = top->next;
    free(temp);
    return x;
}

int peek() {
    if (top == NULL) {
        printf("Stack Underflow\n");
        return -1;
    }
    return top->data;
}

void display() {
    if (top == NULL) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    Node* temp = top;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    printf("1. push\n2. peek\n3. pop\n4. display\n5. exit\n");
    printf("choose an option : ");

    int ch;
    scanf("%d", &ch);

    while (ch != 5) {
        switch (ch) {
            case 1:
                printf("Enter an element to push : ");
                int n;
                scanf("%d", &n);
                push(n);
                break;
            case 2:
                printf("top element: %d\n", peek());
                break;
            case 3:
                printf("pop element: %d\n", pop());
                break;
            case 4:
                display();
                break;
            default:
                printf("invalid option\n");
        }

        printf("\nChoose an option: ");
        scanf("%d", &ch);
    }

    printf("Exiting...\n");
    return 0;
}



