#include<stdio.h>
#include<stdlib.h>
#include "header_dl.h"

//create a new node
struct Node *createNode(int data){

    nn=malloc(sizeof(struct Node));
    nn->data=data;
    nn->next=NULL;
    return nn;
}

//print list
void printLinkedList(struct Node* head){
    i=1;
    nn=head;
    while(nn->next!=NULL){
        printf("Data on Node %d: %d\n", i, nn->data);
        nn=nn->next;
        i++;
    }
}

//reverse print
void revprintLinkedList(struct Node* head){
    i=1;
    nn=head;
    while(nn->next!=NULL){
        nxt=nn->next;
        nxt->back=nn;
        nn=nxt;
        i++;
    }
    nn=nn->back;
    printf("\n");
    printf("After reversed:\n");
    while(nn->back!=NULL){
        printf("Data on Node %d: %d\n", i-1, nn->data);
        nn=nn->back;
        i--;
    }
}

//make a new head node
void insertAtBeginning(struct Node** headRef, int data){

    nn=createNode(data);
    nn->next=*headRef;
    *headRef=nn;
}

//make a new last node
void insertAtEnd(struct Node** headRef, int data){

    nn=*headRef;
    while(nn->next!=NULL){
        nn=nn->next;
    }
    nn->data=data;
    tmp=createNode(data);
    nn->next=tmp;
}

//free memory on a node
void deleteNode(struct Node** headRef, int data){

    int i=1;
    nn=*headRef;
    while(nn->next!=NULL){
        if(data==1){
            tmp=*headRef;
            *headRef=tmp->next;
            free(tmp);
            break;
        }
        if((data!=1)&&(i==(data-1))){
            tmp=nn->next->next;
            nxt=nn->next;
            free(nxt);
            nn->next=tmp;
            break;
        }
        nn=nn->next;
        i++;
    }
}