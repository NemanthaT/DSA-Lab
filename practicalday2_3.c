#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
    struct node *blink;
};

int main(){

    struct node *head;
    struct node *temp;
    struct node *next;
    struct node *ptr;
    int no,i;

    printf("Enter the no of nodes: ");
    scanf("%d", &no);
    head=malloc(sizeof(struct node));
    temp=head;

    for(i=1;i<=no;i++){
        printf("Data for node %d: ", i);
        scanf("%d", &temp->data);
        temp->link=NULL;
        next=malloc(sizeof(struct node));
        temp->link=next;
        temp=next;
        temp->link=NULL;
    }
    printf("\n");
    i=1;
    temp=head;
    while(temp->link!=NULL){
        printf("Data in node %d: %d\n", i,temp->data);
        i++;
        temp=temp->link;
    }
    printf("\n");
    printf("After reversed;\n");

    temp=head;
    while(temp->link!=NULL){
        next=temp->link;
        next->blink=temp;
        temp=next;
    }
    temp=temp->blink;
    while(temp->blink!=NULL){
        printf("Data in node %d: %d\n", no, temp->data);
        no--;
        temp=temp->blink;
    }

    return 0;

}