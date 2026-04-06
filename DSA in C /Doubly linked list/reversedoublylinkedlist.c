#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to reverse DLL
struct Node* reverse(struct Node* head) {
    struct Node* temp = NULL;
    struct Node* current = head;

    while (current != NULL) {
        // Swap prev and next
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;

        // Move to next node (which is prev now)
        current = current->prev;
    }

    // Fix head
    if (temp != NULL) {
        head = temp->prev;
    }

    return head;
}

// Function to display list
void display(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Insert at beginning (for testing)
struct Node* insert(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = head;

    if (head != NULL)
        head->prev = newNode;

    return newNode;
}

int main() {
    struct Node* head = NULL;

    head = insert(head, 5);
    head = insert(head, 10);
    head = insert(head, 15);

    printf("Original: ");
    display(head);

    head = reverse(head);

    printf("Reversed: ");
    display(head);

    return 0;
}