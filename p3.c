#include<stdio.h>
#include<stdlib.h>

struct Node {
int data;
struct Node* next;
};

createNode(int data);
void insertAtBeginning(struct Node** headRef, int data);
void insertAtEnd(struct Node** headRef, int data);
void deleteNode(struct Node** headRef, int data);
void printLinkedList(struct Node* head);

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

    printf("Insert data for new last Node: ");
    scanf("%d", &data);
    printf("New linked list\n");
    insertAtEnd(&head, data);
    printLinkedList(head);

    printf("Which node you want to delete: ");
    scanf("%d", &no);
    deleteNode(&head, no);
    printf("New linked list\n");
    printLinkedList(head);

    return 0;
}

createNode(int data){
    struct Node *nn;
    nn=malloc(sizeof(struct Node));
    nn->data=data;
    nn->next=NULL;
    return nn;
}
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

void insertAtBeginning(struct Node** headRef, int data){
    struct Node *nn;
    nn=createNode(data);
    nn->next=*headRef;
    *headRef=nn;
}

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

void deleteNode(struct Node** headRef, int data){
    struct Node *nn;
    struct Node *tmp;
    struct Node *nxt;
    int i=1;
    nn=*headRef;
    while(nn->next!=NULL){
        if(data==1){
            nn=nn->next;
            free(*headRef);
            *headRef=nn;
        }
        if((data!=1)&&(i==(data-1))){
            tmp=nn->next->next;
            nxt=nn->next;
            free(nxt);
            nn->next=tmp;
        }
        nn=nn->next;
        i++;
    }
}