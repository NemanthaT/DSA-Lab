#include<stdio.h>
#include<stdlib.h>
#include"q1header.c"

struct node* createnode(int data){
	struct node* newnode;
	newnode=malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=NULL;
	
	return newnode;
}

void printlist(struct node* head){
    struct node* nn;
    nn=head;
    while(nn->next!=NULL){
        printf("%d ", nn->data);
        nn=nn->next;
    }
}

void mergelist(struct node* head1, struct node* head2){
    struct node* nn;
    nn=head1;
    while(nn->next!=NULL){
        nn=nn->next;
    }
    nn->next=head2;
}
