#ifndef headersl_h
#define headersl_h

typedef struct Node {
int data;
struct Node* next;
}Node;

int i;
Node* nn;
Node* nxt;
Node* tmp;

struct Node *createNode(int data); //create a new node
void insertAtBeginning(Node** headRef, int data); //make a new head node
void insertAtEnd(Node** headRef, int data); //make a new last node
void deleteNode(Node** headRef, int data); //free memory on a node 
void insertDataRight(Node** head, int data, int no);
void printLinkedList(Node* head); //print list

#endif