#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

int main(){

    struct node *head=NULL;
    struct node *temp=NULL; 
    struct node *next=NULL;

    int i,nodes=0,j=0,k=0;
    head=malloc(sizeof(struct node));

    printf("Insert the no of nodes: ");
    scanf("%d", &i);

    printf("insert data for node %d: ", j+1);
    scanf("%d", &head->data);
    head->link=NULL;

    if(i>1){
        temp=malloc(sizeof(struct node));
        head->link=temp;
        for(j=1;j<i;j++){
          printf("insert data for node %d: ", j+1);
          scanf("%d", &temp->data);
          temp->link=NULL;
          next=malloc(sizeof(struct node));
          temp->link=next;
          temp=next;
        }
    }
    next->link=NULL;

    temp=head;
    for(j=1;j<=i;j++){
        printf("Data %d is: %d\n", j, temp->data);
        temp=temp->link;
    }
    temp=head;
    while(temp->link!=NULL){
        nodes++;
        temp=temp->link;  
    }
    printf("No of nodes %d.\n", nodes);

}