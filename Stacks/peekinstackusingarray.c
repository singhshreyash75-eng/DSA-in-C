#include <stdio.h>
#include <stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};

int isempty(struct stack *ptr){
    return (ptr->top == -1);
}

int isFull(struct stack *ptr){
    return (ptr->top == ptr->size - 1);
}

// Push function
void push(struct stack *ptr , int val){
    if(isFull(ptr)){
        printf("Stack overflow!\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

// Pop function
int pop(struct stack *ptr){
    if(isempty(ptr)){
        printf("Stack underflow! Can't pop\n");
        return -1;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

// Peek function
int peek(struct stack *sp, int i){
    int arrayind = sp->top - i + 1;

    if(arrayind < 0 || arrayind > sp->top){
        printf("Invalid position for stack\n");
        return -1;
    }
    else{
        return sp->arr[arrayind];
    }
}

int main(){
    
    struct stack *s;

    s = (struct stack*) malloc(sizeof(struct stack));
    s->size = 6;
    s->top = -1;
    s->arr = (int*) malloc(s->size * sizeof(int));

    printf("Before pushing, empty: %d\n", isempty(s));
    printf("Before pushing, full: %d\n", isFull(s));

    push(s,78);
    push(s,98);
    push(s,68);
    push(s,38);
    push(s,100);
    push(s,200); // 6 elements allowed

    printf("After pushing, empty: %d\n", isempty(s));
    printf("After pushing, full: %d\n", isFull(s));

    printf("Popped %d from the stack\n", pop(s));
    printf("Popped %d from the stack\n", pop(s));
    printf("Popped %d from the stack\n", pop(s));

    // Display remaining elements using peek
    for (int j = 1; j <= s->top + 1; j++) {
        printf("The value at position %d is %d\n", j, peek(s, j));
    }

    // Free memory
    free(s->arr);
    free(s);

    return 0;
}