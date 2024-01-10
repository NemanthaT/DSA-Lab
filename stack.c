#include<stdio.h>
#include<stdbool.h>
#include "header_stack.h"

int main(){
    int no;
    

    init(stacks);

    while(isFull(stacks)!=1){
        printf("Enter data for stack: ");
        scanf("%d", &no);
        push(no, stacks);
    }

    printf("\n");
    printf("Popped data is: %d", pop(stacks));

    return 0;
}
