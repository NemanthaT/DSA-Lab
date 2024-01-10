#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "header_stack.h"

int main(){
    int no,i;
    Stack* stacks=malloc(sizeof(Stack));
    init(stacks);

    while(~isFull(stacks)){
        printf("Enter data for stack: ");
        scanf("%d", &no);
        push(no, stacks);
    }

    printf("\n");
    printf("Popped data is: %d", pop(stacks));

    return 0;
}
