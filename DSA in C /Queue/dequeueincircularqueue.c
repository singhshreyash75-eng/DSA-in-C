#include <stdio.h>
#include <stdlib.h>

struct circularqueue{
    int size;
    int f;
    int r;
    int *arr;
};

int isempty(struct circularqueue *cq){
    return (cq->f == cq->r);
}

int isfull(struct circularqueue *cq){
    return ((cq->r + 1) % cq->size == cq->f);
}

void enqueue(struct circularqueue *cq, int val){
    if(isfull(cq)){
        printf("Queue is full\n");
    }
    else{
        cq->r = (cq->r + 1) % cq->size;
        cq->arr[cq->r] = val;
    }
}

int dequeue(struct circularqueue *cq){
    if(isempty(cq)){
        printf("Queue is empty\n");
        return -1;
    }
    else{
        cq->f = (cq->f + 1) % cq->size;
        return cq->arr[cq->f];
    }
}


int main(){

    struct circularqueue cq;
    
    cq.size = 11;  // can store 10 elements
    cq.f = cq.r = 0;
    cq.arr = (int *)malloc(cq.size * sizeof(int));

    // Enqueue
    enqueue(&cq, 21);
    enqueue(&cq, 22);
    enqueue(&cq, 23);
    enqueue(&cq, 34);
    enqueue(&cq, 45);
    enqueue(&cq, 56);
    enqueue(&cq, 67);
    enqueue(&cq, 38);
    enqueue(&cq, 78);
    enqueue(&cq, 100);

   

    // Dequeue
    printf("Dequeued: %d\n", dequeue(&cq));
    printf("Dequeued: %d\n", dequeue(&cq));

   

    // Check conditions
    if(isfull(&cq)){
        printf("Queue is full\n");
    }

    if(isempty(&cq)){
        printf("Queue is empty\n");
    }

    free(cq.arr);
    return 0;
}