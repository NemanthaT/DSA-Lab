#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "header_q.h"

//init the queue
void init(que* queue){
    queue->front= 0;
    queue->back= -1;
}

//check the queue is full
bool isFull(que* queue){
    if((queue->front==0)&&(queue->back==(Max))){
        return true;
    }
    else{
        return false;
    }
}

//check the queue is empty
bool isEmpty(que* queue){
    if(((queue->front==-1)&&(queue->back==-1))||((queue->front==Max)&&(queue->back==Max))){
        return true;
    }
    else{
        return false;
    }
}

//enqueue data
void enqueueElement(int no,que* queue){
    if(isFull(queue)){

        return;
    }
    else{
        queue->arr[++(queue->back)]=no;
    }
}

//dequeue data
int dequeueElement(que* queue){
    if(isEmpty(queue)){
        return true;
    }
    if(queue->front==-1){
        ++(queue->front);
    }
    else{
        return queue->arr[(queue->front)++] ;
    }
}
 // display element
void displayQueue(que* queue, FILE* f){
    int no;
    while(Max>0){
        if(isEmpty(queue)==true){
            printf("Queue is empty\n");
            fprintf(f, "Queue is empty\n");
            break;
        }
        if((queue->front==0)&&(queue->back==0)){
        queue->front=-1;
        }
        no=dequeueElement(queue);        
        printf("Dequeued data is: %d\n", no);
        fprintf(f,"Dequeued data is: %d\n", no);
    }    
}