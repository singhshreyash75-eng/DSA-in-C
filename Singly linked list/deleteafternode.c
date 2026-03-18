#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main(){

    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));
    third = malloc(sizeof(struct node));
    fourth = malloc(sizeof(struct node));

    head->data = 25;
    second->data = 67;
    third->data = 87;
    fourth->data = 90;

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    printf("Linked list before deletion:\n");

    struct node *temp = head;

    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    // Delete third node
    struct node *ptr = head;
    struct node *preptr = NULL;

    while(ptr != third){
        preptr = ptr;
        ptr = ptr->next;
    }

    preptr->next = ptr->next;
    free(ptr);

    printf("\nLinked list after deletion:\n");

    temp = head;
    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");

    return 0;
}