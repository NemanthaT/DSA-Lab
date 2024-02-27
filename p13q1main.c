#include<stdio.h>
#include<stdlib.h>
#include"q1header.c"

int main(){
	int i;
	int ar1[4]={1,2,3,4};
	int ar2[3]={7,8,9};
	struct node* head1;
	struct node* head2;
	struct node* temp1;
	struct node* temp2;
	struct node* nxt;
	
	head1=createnode(ar1[0]);
	head2=createnode(ar2[0]);
	temp1=head1;
	temp2=head2;
	for(i=0;i<4;i++){
		temp1->data=ar1[i];
        nxt=createnode(ar1[i]);
        temp1->next=nxt;
        temp1=nxt;
	}
	for(i=0;i<3;i++){
		temp2->data=ar2[i];
        nxt=createnode(ar2[i]);
        temp2->next=nxt;
        temp2=nxt;
	}
	
	temp1=head1;
	temp2=head2;
	
	printf("\nFirst LinkedList: ");
	printlist(temp1);
	printf("\nSecond LinkedList: ");
	printlist(temp2);
	printf("\nMerged LinkedList: ");
	mergelist(head1,head2);
	printlist(head1);
}
