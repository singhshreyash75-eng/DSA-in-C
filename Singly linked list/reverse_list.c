// Reversing a singly linked list...

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

// Function to print the linked list
void display(struct node *head){
    struct node *ptr = head;
    while(ptr != NULL){
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

// Function to reverse the linked list
struct node* reverse(struct node *head){
    struct node *prev = NULL;
    struct node *current = head;
    struct node *nextNode = NULL;

    while(current != NULL){
        nextNode = current->next;  // store next
        current->next = prev;      // reverse link
        prev = current;            // move prev
        current = nextNode;        // move current
    }

    return prev; // new head
}

int main(){

    struct node *head;
    struct node *second;
    struct node *third;

    // Allocating memory
    head = (struct node*) malloc(sizeof(struct node));
    second = (struct node*) malloc(sizeof(struct node));
    third = (struct node*) malloc(sizeof(struct node));

    // Assigning data
    head->data = 25;
    second->data = 67;
    third->data = 87;

    // Linking nodes
    head->next = second;
    second->next = third;
    third->next = NULL;

    printf("Original List:\n");
    display(head);

    // Reverse the list
    head = reverse(head);

    printf("Reversed List:\n");
    display(head);

    return 0;
}
