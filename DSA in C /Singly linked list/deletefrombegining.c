//Creation of a singly linked list...

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next ;
    
};

int main(){

    struct node *head; // Declaring the 3 pointers to connect nodes in a singly linked list
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


    // Linked list before deletion is...
    printf("The linked list before deletion is:");
    printf("%d\n",head->data);
    printf("%d\n",second-> data);
    printf("%d\n",third -> data );


    //Deleting from the begining we get...


   struct node *temp ;
   temp = head ; 
   head = head->next ;

   free(temp);


   struct node *ptr;
   ptr = head;

    printf("Linked list after insertion : ");
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr = ptr->next;
    
    }

  return 0 ;

}

    