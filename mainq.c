#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "header_q.h"

int main(){
    int no,i;
    que* queue=malloc(sizeof(que));
    FILE *input=fopen("queue_input.txt","r");
    FILE *output=fopen("queue_output.txt","w");
    init(queue);

    while(Max>0){
        if(isFull(queue)==true){
            printf("Queue is overloaded\n");
            break;
        }        
        fscanf(input, "%d",&no);
        printf("Enqueued data is: %d\n",no);
        enqueueElement(no, queue);
    }
    if((queue->front==0)&&(queue->back==0)){
        queue->front=-1;
    }    

    printf("\n");

    displayQueue(queue, output);
}