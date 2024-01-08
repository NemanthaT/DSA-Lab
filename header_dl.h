#ifndef headerdl_h
#define headerdl_h

typedef struct Node {
int data;
struct Node* next;
struct Node* back;
};

int i;
struct Node* nn;
struct Node* nxt;
struct Node *tmp;

struct Node *createNode(int data); //create a new node
void insertAtBeginning(struct Node** headRef, int data); //print list
void insertAtEnd(struct Node** headRef, int data); //make a new head node
void deleteNode(struct Node** headRef, int data); //make a new last node
void printLinkedList(struct Node* head); //free memory on a node
void revprintLinkedList(struct Node* head);

#endif