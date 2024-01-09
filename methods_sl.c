#include<stdio.h>
#include<stdlib.h>
#include "header_sl.h"

//create a new node
struct Node *createNode(int data){
    struct Node *nn;
    nn=malloc(sizeof(struct Node));
    nn->data=data;
    nn->next=NULL;
    return nn;
}

//print list
void printLinkedList(struct Node* head){
    int i=1;
    struct Node* nn;
    nn=head;
    while(nn->next!=NULL){
        printf("Data on Node %d: %d\n", i, nn->data);
        nn=nn->next;
        i++;
    }
}

//make a new head node
void insertAtBeginning(struct Node** headRef, int data){
    struct Node *nn;
    nn=createNode(data);
    nn->next=*headRef;
    *headRef=nn;
}

//make a new last node
void insertAtEnd(struct Node** headRef, int data){
    struct Node *nn;
    struct Node *tmp;
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
    struct Node *nn;
    struct Node *tmp;
    struct Node *nxt;
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

// //insert data to the right side

void insertDataRight(Node** headRef, int data, int no){
    i=1;
    nn=*headRef;
    while(nn->next!=NULL){
        if(no==i){
            tmp=createNode(data);
            nxt=nn->next;
            nn->next=tmp;
            tmp->next=nxt;
            break;
        }
        nn=nn->next;
        i++;
    }    
}

//search data
int searchdata(Node** headRef, int no){
    nn=*headRef;
    while(nn->next!=NULL){
        if(no==nn->data){
            return 1;
        }
        nn=nn->next;
    }
    return 0;
}

//search and replace
void searchandreplace(Node** headRef, int no, int data){
    nn=*headRef;
    while(nn->next!=NULL){
        if(searchdata(headRef, no)){
            nn->data=data;
        }
        else{
            printf("Data not found\n");
        }
    }
}