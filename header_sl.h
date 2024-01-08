#ifndef headersl_h
#define headersl_h

typedef struct Node {
int data;
struct Node* next;
};

struct Node *createNode(int data); //create a new node
void insertAtBeginning(struct Node** headRef, int data); //print list
void insertAtEnd(struct Node** headRef, int data); //make a new head node
void deleteNode(struct Node** headRef, int data); //make a new last node
void printLinkedList(struct Node* head); //free memory on a node

#endif