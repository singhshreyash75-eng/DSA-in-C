//Creating stack using an array...

#include <stdio.h>
#include <stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};

int isempty(struct stack *ptr){
     if(ptr->top==-1){
        return 1 ;
     }
    

    else{
        return 0;
    }

}

int isFull(struct stack *ptr){


    if(ptr->top==ptr->size-1){
        return 1;
    }

    else{
        return 0 ;
    }
}

// Using push operation here...

void push(struct stack *ptr , int val){

    if(isFull(ptr)){
        printf("Stack overflow\n");
    }

    else{

        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
int main(){
    
    struct stack *s;

    s = (struct stack*) malloc(sizeof(struct stack));
    s->size = 6;
    s->top = -1 ;
    s->arr= (int*)malloc(s->size* sizeof(int));

    

    printf("Before pushing , empty %d\n",isempty(s));
    printf("Before pushing , full %d\n",isFull(s));

    push(s,78);
    push(s,98);
    push(s,78);
    push(s,98);
    push(s,100);
    push(s,200);

    printf("After pushing , empty : %d\n",isempty(s));
    printf("After pushing , full : %d\n",isFull(s));

return 0;

}