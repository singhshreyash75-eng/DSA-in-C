#include <stdio.h>
#include <stdlib.h>

struct queue{
    int size ;
    int f ; 
    int r ; 
    int *arr;
};

int isempty(struct queue *q ){
    if(q->f == -1 || q->f > q->r){
        return 1;
    }
    else{
        return 0;
    }
}

int isfull(struct queue *q){
    if(q->r == q->size - 1){
        return 1;
    }
    else{
        return 0 ;
    }
}

void enqueue(struct queue *q , int val){
    if(isfull(q)){
        printf("The queue is full\n");
    }
    else{
        if(q->f == -1){
            q->f = 0;   // first insertion fix
        }
        q->r++;
        q->arr[q->r] = val;
    }
}

int dequeue(struct queue *q){
    int a = -1;   // moved outside

    if(isempty(q)){
        printf("The queue is empty\n");
    }
    else{
        a = q->arr[q->f];
        q->f++;
    }
    return a;   // MUST return
}

int main(){
   
    struct queue q;
    q.size = 10;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size*(sizeof(int)));
    
    if(isempty(&q)){
        printf("The queue is empty\n");
    }

    // Enqueuing 10 elements
    enqueue(&q , 21);
    enqueue(&q , 22);
    enqueue(&q , 23);
    enqueue(&q , 34);
    enqueue(&q , 45);
    enqueue(&q , 56);
    enqueue(&q , 67);
    enqueue(&q , 38);
    enqueue(&q , 78);
    enqueue(&q , 100);

    if(isfull(&q)){
        printf("The queue is full\n");
    }

    // Dequeue
    printf("Dequeued: %d\n", dequeue(&q));
    printf("Dequeued: %d\n", dequeue(&q));
    printf("Dequeued: %d\n", dequeue(&q));
    printf("Dequeued: %d\n", dequeue(&q));
    printf("Dequeued: %d\n", dequeue(&q));
    printf("Dequeued: %d\n", dequeue(&q));
    printf("Dequeued: %d\n", dequeue(&q));

    if(isempty(&q)){
        printf("The queue is empty\n");
    }

    return 0;
}