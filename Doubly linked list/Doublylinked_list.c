//Creation of a doubly linked list

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next ;
    struct node * prev;
    
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

    head->next = second ;
    head->prev= NULL; // First node 
    second->next = third ;
    second->prev = head;// 2nd node 
    third->next = NULL;
    third->prev = second ;// 3rd node 

    //Now traversing the list to print the data of the nodes 

    struct node*temp = head;

    while(temp!= NULL){
        printf("%d\n",temp->data);
         temp = temp->next;
    }




    return 0 ;
}

