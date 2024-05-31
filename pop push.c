#include <stdio.h>
#include <stdlib.h>

int t = -1, arr[100], n = 6;

void push() {
    if (t == n - 1) {
        printf("Overflow\n");
    } else {
        t++;
        printf("Enter element to insert: ");
        scanf("%d", &arr[t]);
        printf("Value = %d\n", arr[t]);
    }
}

void pop() {
    if (t == -1) {
        printf("Underflow\n");
    } else {
        printf("Pop = %d\n", arr[t]);
        t = t - 1;
    }
}

int main() {
    int choice = 0;
    while (1) {
            printf("1.Push\n2.Pop\n3.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
