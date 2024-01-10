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
void push(int no, Stack* stacks); //push data
int pop(Stack* stacks); //pop data
bool isFull(Stack* stacks); //check the stack is full
bool isEmpty(Stack* stacks); //check the stack is empty

#endif