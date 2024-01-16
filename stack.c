#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "header_stack.h"

int main(){
    int no,i;
    Stack* stacks=malloc(sizeof(Stack));
    init(stacks);

    while(max>0){
        if(isFull(stacks)==true){
            printf("Stack overloaded\n");
            break;
        }        
        printf("Enter data for stack: ");
        scanf("%d", &no);
        push(no, stacks);
    }

    printf("\n");

    displayStack(stacks);

    return 0;
}
