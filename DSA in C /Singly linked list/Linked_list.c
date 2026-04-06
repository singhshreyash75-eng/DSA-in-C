//Creating a basic node first..


#include <stdio.h>
#include <stdlib.h>

// Defining the structure node 1

struct node {
    int data;
    struct node *link;

};
int main(){
struct node *Head = NULL;
Head = (struct node*)malloc(sizeof(struct node));

Head->data= 55;
Head->link=NULL;

printf("The data part of the first node is: %d\n",Head->data);

struct node *next = malloc(sizeof(struct node));
next->data = 57;
next->link = NULL;
Head->link = next;

printf("The data part of the second node is: %d\n",next->data);


return 0;

}


// Traversing a linked list..................

#include <stdio.h>
#include <stdlib.h>

struct node2{
    int data2;
    struct node2 *link;
};

int main(){

    struct node2 *head;
    struct node2 *second;
    struct node2 *third;
    
    head = malloc(sizeof(struct node2));
    second = malloc(sizeof(struct node2));
    third = malloc(sizeof(struct node2));

    head->data2= 45;
    head->link = NULL;
    second->data2=55;
    second->link = NULL;
    third->data2= 67;
    third->link = NULL;

    head->link=second;
    second->link = third;
    third->link = NULL;

    //Traversing the linked list now by running a loop

    if(head==NULL){
        printf("Linked list is empty");
    }
    struct node2 *trav = NULL;
    trav = head;
   
    while(trav!=NULL){
        printf("%d\n",trav->data2);
        trav= trav->link;
    }

    

    return 0;


}



// Counting the nodes in a linked list................


#include <stdio.h>
#include <stdlib.h>
struct node2{
    int data2;
    struct node2 *link;
};

int main(){

    struct node2 *head;
    struct node2 *second;
    struct node2 *third;
    int count=0;
    
    head = malloc(sizeof(struct node2));
    second = malloc(sizeof(struct node2));
    third = malloc(sizeof(struct node2));

    head->data2= 45;
    head->link = NULL;
    second->data2=55;
    second->link = NULL;
    third->data2= 67;
    third->link = NULL;

    head->link=second;
    second->link = third;
    third->link = NULL;

    //Traversing the linked list now by running a loop

    if(head==NULL){
        printf("Linked list is empty");
    }
    struct node2 *trav = NULL;
    trav = head;
   
    while(trav!=NULL){
        count++;
        
        trav = trav->link;
    
        

    }
        printf("The number of nodes in a linked list is : %d",count);

    

    return 0;


}


//Adding a node at the end of of a linked list........


#include <stdio.h>
#include <stdlib.h>
struct node2{
    int data2;
    struct node2 *link;
};

int main(){

    struct node2 *head;
    struct node2 *second;
    struct node2 *third;
    int count=0;
    
    head = malloc(sizeof(struct node2));
    second = malloc(sizeof(struct node2));
    third = malloc(sizeof(struct node2));

    head->data2= 45;
    head->link = NULL;
    second->data2=55;
    second->link = NULL;
    third->data2= 67;
    third->link = NULL;

    head->link=second;
    second->link = third;
    third->link = NULL;


    //Adding a 4th node to the linked list.....

    // Making a new function

    


}


// Inserting the data at the begining of the singly linked list....


#include <stdio.h>
#include <stdlib.h>
struct node2{
    int data2;
    struct node2 *link;
};

int main(){

    struct node2 *head;
    struct node2 *second;
    struct node2 *third;
    struct node2 *add_beg;
    
    
    head = malloc(sizeof(struct node2));
    second = malloc(sizeof(struct node2));
    third = malloc(sizeof(struct node2));

    head->data2= 45;
    head->link = NULL;
    second->data2=55;
    second->link = NULL;
    third->data2= 67;
    third->link = NULL;

    printf("%d\n",head->data2);

    head->link=second;
    second->link = third;
    third->link = NULL;

   
    int d ;
    d = 48;
    add_beg= malloc(sizeof(struct node2));
    add_beg->data2 = d ;
    add_beg->link = head;
    head = add_beg;
    printf("The upadated first node data is : %d\n",head->data2);


  return 0 ;


}











    








