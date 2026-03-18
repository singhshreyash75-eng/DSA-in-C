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


    head = malloc(sizeof(struct node)); //Assigning the memory we get
    second = malloc(sizeof(struct node));
    third = malloc(sizeof(struct node));
    
    head->data = 25; // Assigning the data we get 
    second-> data = 67;
    third -> data = 87;

    //Now connecting the nodes we get 
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



    //Inserting after a given node...

    struct node *newnode = malloc(sizeof(struct node));
    newnode->data= 102;
    newnode->next = second->next;
    newnode->prev = second;
    second->next->prev = newnode;
    second->next = newnode;


    struct node *ptr;

    ptr= head;


    printf("Doubly Linked list after inserting after a  2nd node is :");

    while(ptr!= NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
   return 0 ; 
}

