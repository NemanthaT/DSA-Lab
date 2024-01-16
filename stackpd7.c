#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "header_stack.h"

int main(){
    int no,i;
    Stack* stacks=malloc(sizeof(Stack));
    FILE *input=fopen("stack_input.txt","r");
    FILE *output=fopen("stack_output.txt","w");
    init(stacks);

    while(max>0){
        if(isFull(stacks)==true){
            printf("Stack overloaded\n");
            break;
        }        
        fscanf(input, "%d",&no);
        printf("Pushed data is: %d\n",no);
        push(no, stacks);
    }

    printf("\n");

    displayStack(stacks, output);

    return 0;
}
