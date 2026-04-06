//Creation of a singly linked list

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


    head = malloc(sizeof(struct node)); //Assigning the memory 
    second = malloc(sizeof(struct node));
    third = malloc(sizeof(struct node));

    head->data = 25; // Assigning the data 
    second-> data = 67;
    third -> data = 87;

    //Now connecting the nodes

    head->next = second ;
    second->next = third ;
    third->next = NULL;


    // Linked list before insertion at the begining..
    printf("The linked list before insertion is:");
    printf("%d\n",head->data);
    printf("%d\n",second-> data);
    printf("%d\n",third -> data );


    //Now inserting a new node at the begining...


    
        struct node *newnode = malloc(sizeof(struct node));
        newnode->data = 45 ;
        newnode -> next = head;
        head= newnode;


        //Linked list after insertion is...

        printf("The linked list after insertion is:");

    struct node *temp = head;

while(temp != NULL)
{
    printf("%d\n", temp->data);
    temp = temp->next;
}

    return 0 ;




    }


