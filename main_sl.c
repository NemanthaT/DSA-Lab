#include<stdio.h>
#include<stdlib.h>
#include "header_sl.h"

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

    printf("Enter the data you want to check: ");
    scanf("%d", &no);
    if(searchdata(&head,no)){
        printf("\n");
        printf("Data is found\n");
        printf("\n");
    }
    else{
        printf("\n");
        printf("Data is not in the link\n");
        printf("\n");
    }

    printf("Enter after which node you want to add data: ");
    scanf("%d", &no);
    printf("Enter the data: ");
    scanf("%d", &data);
    insertDataRight(&head,data,no);
    printLinkedList(head);

    printf("Enter the data you want to replace: ");
    scanf("%d", &no);
    printf("Insert new data: ");
    scanf("%d", &data);
    searchandreplace(&head,no,data);
    printLinkedList(head);

    return 0;
}