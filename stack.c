#include<stdio.h>
#include<stdbool.h>
#include "header_stack.h"

int main(){
    int no;
    Stack* stacks;

    init(stacks);

    while(isFull()!=1){
        printf("Enter data for stack: ");
        scanf("%d", &no);
        push(no);
    }

    printf("\n");
    printf("Popped data is: %d", pop());

    return 0;
}
