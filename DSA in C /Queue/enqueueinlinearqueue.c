#include <stdio.h>
#include <stdlib.h>


struct queue{
    int size ;
    int f ; 
    int r ; 
    int *arr;
};


int isempty(struct queue *q ){
      
      if(q->f == q->r){
        return 1;
      }

      else{
        return 0;
      }

}


int isfull(struct queue *q){

     if(q->r==q->size-1){
        return 1;
     }

     else{
        return 0 ;
     }
}


void enqueue(struct queue *q , int val){
    if(isfull(q)){
        printf("The queue is full");
    }

    else{

       q->r++;
       q->arr[q->r] = val;
    }
}

int main(){
   
    struct queue q;
     q.size = 10;
     q.f = q.r = -1;
     q.arr = (int *)malloc(q.size*(sizeof(int)));
    

     if(isempty(&q)){
        printf("The queue is empty\n");
     }

     //Enqueing 10 elements....

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
   
     //checking random conditions

     return 0;
   
}


