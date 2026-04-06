#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main(){

    // -------- LIST 1 --------
    struct node *head1, *second1;

    head1 = malloc(sizeof(struct node));
    second1 = malloc(sizeof(struct node));

    printf("Enter data for List1 Node1: ");
    scanf("%d", &head1->data);

    printf("Enter data for List1 Node2: ");
    scanf("%d", &second1->data);

    head1->next = second1;
    second1->next = NULL;


    // -------- LIST 2 --------
    struct node *head2, *second2;

    head2 = malloc(sizeof(struct node));
    second2 = malloc(sizeof(struct node));

    printf("Enter data for List2 Node1: ");
    scanf("%d", &head2->data);

    printf("Enter data for List2 Node2: ");
    scanf("%d", &second2->data);

    head2->next = second2;
    second2->next = NULL;


    // -------- MERGE --------
    second1->next = head2;


    // -------- DISPLAY --------
    struct node *temp = head1;

    printf("Merged Linked List:\n");

    while(temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }

    return 0;
}