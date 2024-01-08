#include<stdio.h>
#include<stdlib.h>
#include "header_dl.h"

int main(){

    struct Node *head=NULL;
    struct Node *temp=NULL;
    struct Node *nxt=NULL;
    int data,no,i;
    char ch;

    printf("Enter No of Nodes: ");
    scanf("%d", &no);
    head=createNode(no);
    temp=head;

    for(i=0;i<no;i++){
        printf("Enter data for Node %d: ", i+1);
        scanf("%d", &data);
        temp->data=data;
        nxt=createNode(data);
        temp->next=nxt;
        temp=nxt;
    }
    temp=head;
    printLinkedList(head);

    printf("Insert data for new Node 1: ");
    scanf("%d", &data);
    insertAtBeginning(&head, data);
    printf("New linked list\n");
    printLinkedList(head);

    printf("Insert data for new last Node %d: ",i+1);
    scanf("%d", &data);
    printf("New linked list\n");
    insertAtEnd(&head, data);
    printLinkedList(head);

    printf("Which node you want to delete: ");
    scanf("%d", &no);
    deleteNode(&head, no);
    printf("New linked list\n");
    printLinkedList(head);

    revprintLinkedList(head);

    return 0;
}