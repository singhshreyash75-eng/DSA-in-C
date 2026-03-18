//Creation of a singly linked list and inserting at end ...

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next ;
    
};

int main(){

    struct node *head; // Declaring the 3 pointers to connect nodes toghether in a singly linked list
    struct node *second;
    struct node *third;


    head = malloc(sizeof(struct node)); //Assigning the memory we get
    second = malloc(sizeof(struct node));
    third = malloc(sizeof(struct node));

    head->data = 25; // Assigning the data we get 
    second-> data = 67;
    third -> data = 87;

    //Now connecting the nodes we get 

    head->next = second ;
    second->next = third ;
    third->next = NULL;


    // Linked list before inserting at the end...
    printf("The linked list before insertion is:");
    printf("%d\n",head->data);
    printf("%d\n",second-> data);
    printf("%d\n",third -> data );



    //Inserting a new node at end ..


    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = 98;
    newnode->next = NULL;
    struct node *temp;
    temp = head ; 

    while(temp->next!= NULL){
        temp = temp->next;
    }

    temp->next = newnode;


    printf("Linked list after insertion will be:");

    temp = head;
    while(temp!= NULL){
        printf("%d\n",temp->data);
        temp = temp->next;
    }

   return 0 ;
}


