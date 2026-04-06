#include <stdio.h>
#include <stdlib.h>


struct circularqueue{
    int size ;
    int f ; 
    int r ; 
    int *arr;
};


int isempty(struct circularqueue *cq ){
      
      if(cq->f == cq->r){
        return 1;
      }

      else{
        return 0;
      }

}


int isfull(struct circularqueue *cq){

     if((cq->r+1)%cq->size == cq->f){
        return 1;
     }

     else{
        return 0 ;
     }
}


void enqueue(struct circularqueue *cq , int val){
    if(isfull(cq)){
        printf("The queue is full\n");
    }

    else{

       cq->r =  (cq->r+1)%cq->size;
       cq->arr[cq->r] = val;
    }
}

int main(){
   
    struct circularqueue cq;
     cq.size = 10;
     cq.f = cq.r = 0;
     cq.arr = (int *)malloc(cq.size*(sizeof(int)));
    

     if(isempty(&cq)){
        printf("The queue is empty\n");
     }

     //Enqueing 10 elements....

     enqueue(&cq , 21);
     enqueue(&cq , 22);
     enqueue(&cq , 23);
     enqueue(&cq , 34);
     enqueue(&cq , 45);
     enqueue(&cq , 56);
     enqueue(&cq , 67);
     enqueue(&cq , 38);
     enqueue(&cq , 78);
     enqueue(&cq , 100);

   
     if(isfull(&cq)){
        printf("The queue is full\n");
     }
   
     //checking random conditions

     return 0;
   
}


