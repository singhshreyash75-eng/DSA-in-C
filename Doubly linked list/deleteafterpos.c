#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Delete node after given position
struct Node* deleteAfterPosition(struct Node* head, int pos) {
    struct Node* temp = head;
    int i;

    // Traverse to the given position
    for (i = 1; i < pos && temp != NULL; i++) {
        temp = temp->next;
    }

    // If position invalid or no next node
    if (temp == NULL || temp->next == NULL) {
        printf("Deletion not possible\n");
        return head;
    }

    struct Node* del = temp->next;

    // Adjust pointers
    temp->next = del->next;

    if (del->next != NULL) {
        del->next->prev = temp;
    }

    free(del);

    return head;
}

// Display function
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
    head = insert(head, 4);
    head = insert(head, 3);
    head = insert(head, 2);
    head = insert(head, 1);

    printf("Original: ");
    display(head);

    head = deleteAfterPosition(head, 2);

    printf("After deletion: ");
    display(head);

    return 0;
}