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


    // inserting from the end 


    struct node *newnode = malloc(sizeof(struct node));

    struct node *temp;
    temp = head;

    while(temp->next!= NULL){
        temp = temp->next;
    }
    newnode->data = 100;
    temp->next = newnode;
    newnode->prev = temp;
    newnode->next = NULL;

    struct node *ptr;
    ptr = head;
    
    printf("Linked list after inserting from end :");
    while(ptr!= NULL){
        printf("%d\n",ptr->data);
        ptr= ptr->next;
    }
   return 0 ; 
}

    
