//Creating stack using an array...

#include <stdio.h>
#include <stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};


int main(){
    
    struct stack *s;

    s = (struct stack*) malloc(sizeof(struct stack));
    s->size = 6;
    s->top = -1 ;
    s->arr= (int*)malloc(s->size* sizeof(int));

   
  if (s->top == -1){
    printf("The stack is empty\n");
   
  }



return 0;

}

