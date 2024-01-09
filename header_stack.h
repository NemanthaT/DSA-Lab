#include<stdio.h>
#include<stdbool.h>

#ifndef stack_h
#define stack_h
#define max 10

typedef struct stack{
    int data;
    int arr[max];
}Stack;

Stack* stacks;

void init(Stack* stacks); //init the stack, basically means giving top -1
void push(int no); //push data
int pop(); //pop data
bool isFull(); //check the stack is full
bool isEmpty(); //check the stack is empty

#endif