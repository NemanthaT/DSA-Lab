#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "header_stack.h"

//init the stack, basically means giving top -1
void init(Stack* stacks){
    stacks->data= -1;
}

//check the stack is full
bool isFull(Stack* stacks){
    if(stacks->data==(max-1)){
        return true;
    }
    else{
        return false;
    }
}

//check the stack is empty
bool isEmpty(Stack* stacks){
    if(stacks->data==-1){
        return true;
    }
    else{
        return false;
    }
}

//push data
void push(int no,Stack* stacks){
    if(isFull(stacks)){
        printf("Stack overloaded\n");
        return;
    }
    else{
        stacks->arr[++(stacks->data)]=no;
    }
}

//pop data
int pop(Stack* stacks){
    if(isEmpty(stacks)){
        return true;
    }
    else{
        return stacks->arr[(stacks->data)--] ;
    }
}
 // display element
void displayStack(Stack* stacks, FILE* f){
    int no;
    while(max>0){
        if(isEmpty(stacks)==true){
            printf("Stack is empty\n");
            fprintf(f, "Stack is empty\n");
            break;
        }
        no=pop(stacks);        
        printf("Popped data is: %d\n", no);
        fprintf(f,"Popped data is: %d\n", no);
    }    
}