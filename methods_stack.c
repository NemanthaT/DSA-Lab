#include<stdio.h>
#include<stdbool.h>
#include "header_stack.h"

//init the stack, basically means giving top -1
void init(Stack* stacks){
    stacks->data= -1;
}

//check the stack is full
bool isFull(){
    if(stacks->data==(max-1)){
        return true;
    }
    else{
        return false;
    }
}

//check the stack is empty
bool isEmpty(){
    if(stacks->data==-1){
        return true;
    }
    else{
        return false;
    }
}

//push data
void push(int no){
    if(isFull()){
        printf("Stack overloaded\n");
    }
    else{
        stacks->arr[++stacks->data]=no;
    }
}

//pop data
int pop(){
    if(isEmpty()){
        printf("Stack is empty\n");
    }
    else{
        return stacks->arr[stacks->data--] ;
    }
}