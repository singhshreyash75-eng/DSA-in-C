//Creation of a Doubly linked list

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next ;
    struct node *prev ;
};

int main(){

    struct node *head; // Declaring the 3 pointers to connect nodes toghether in a doubly linked list
    struct node *second;
    struct node *third;


    head = malloc(sizeof(struct node)); //Assigning the memory 
    second = malloc(sizeof(struct node));
    third = malloc(sizeof(struct node));
    
    head->data = 25; // Assigning the data 
    second-> data = 67;
    third -> data = 87;

    //Now connecting the nodes 
    head->prev = NULL;
    head->next = second ;
    second->prev= head;
    second->next = third ;
    third->prev = second;
    third->next = NULL;


    // Linked list before insertion at the begining..
    printf("The doubly linked list before insertion is:");
    printf("%d\n",head->data);
    printf("%d\n",second-> data);
    printf("%d\n",third -> data );


    //inserting from the begining...

    struct node *newnode = malloc(sizeof(struct node));
    struct node *temp;
    temp = head;

    newnode->data = 98;
    newnode->next = head;
    newnode->prev = NULL;

    head->prev = newnode;

    head = newnode;


    printf("The doubly linked list after insertion from begining is:");
    
        temp = head;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp = temp->next;
    }

    return 0 ; 
}



