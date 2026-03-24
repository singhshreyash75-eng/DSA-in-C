#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

int isempty(struct node *top){
    if (top == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int isfull(struct node *top){
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if(n == NULL){
        return 1;
    }
    free(n);
    return 0;
}

//Push function in stack using linkedlist...


struct node *push(struct node *top , int x ){
    if(isfull(top)){
        printf("Stack overflow\n");
        return top;
    }
    else{
        struct node *n = (struct node *)malloc(sizeof(struct node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}

//Pop function in stack using linked list...

struct node *pop(struct node *top){
    if(isempty(top)){
        printf("Stack underflow\n");
        return top ;
    }

      else{
        
        struct node *n = top;
        int y = n->data;
        top = top->next;
        free(n);

        printf("Popped element = %d\n",y);
        return top;
        
}

}

  
int main(){
    struct node *top = NULL;

    top = push(top, 67);
    top = push(top, 45);
    top = push(top, 23);

    struct node *temp = top;

    printf("\nStack after pushing elements\n");

    while(temp != NULL){
        printf("The pushed element is %d\n", temp->data);
        temp = temp->next;
    }

    top = pop(top);
    top = pop(top);
    
    printf("\nStack after popping elements 23 and 45\n");
    struct node *ptr = top ;

    while(ptr != NULL){
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }


    return 0;
}