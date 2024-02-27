#ifndef
#define

#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};

struct node* createnode(int data);
void printlist(struct node* head);
void mergelist(struct node* temp1, struct node* temp2);

#endif
