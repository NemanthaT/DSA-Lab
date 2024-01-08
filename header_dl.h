#ifndef headerdl_h
#define headerdl_h

typedef struct Node {
    int data;
    struct Node* next;
    struct Node* back;
}Node;

int i;
Node* nn;
Node* nxt;
Node* tmp;

Node *createNode(int data); //create a new node
void insertAtBeginning(Node** headRef, int data); //make a new head node
void insertAtEnd(Node** headRef, int data); //make a new last node
void insertDataRight(Node** headRef, int data, int no); //insert data to the right side
void insertDataleft(Node** headRef, int data, int no); //insert data to the left side
int searchdata(Node** headRef, int no); //search data
void searchandreplace(Node** headRef, int no, int data); //search and replace
void deleteNode(Node** headRef, int data); //free memory on a node
void printLinkedList(Node* head); //print list
void revprintLinkedList(Node* head);

#endif