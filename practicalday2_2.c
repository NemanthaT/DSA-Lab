#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

int main(){

    struct node *head;
    struct node *temp;
    struct node *next;
    struct node *ptr;
    int no,i,j=1,k;
    printf("Insert the no of nodes: ");
    scanf("%d", &no);
    head=malloc(sizeof(struct node));
    temp=head;    

    for(i=0;i<no;i++){
        printf("Insert the data for node %d: ", i+1);
        scanf("%d", &temp->data);
        next=malloc(sizeof(struct node));
        temp->link=next;
        temp=next;
        temp->link=NULL;
    }
    
    temp=head;
    while(temp->link!=NULL){
        printf("Data in node %d: %d\n", j,temp->data);
        j++;
        temp=temp->link;
    }

    printf("Which node you want to delete: ");
    scanf("%d", &k);
    temp=head;
    j=1;
    while(temp->link!=NULL){

        if(k==1){
            head=head->link;
            temp=head;
        }
        if((k!=1)&&(j==(k-1))){
            next=temp->link->link;
            temp->link=next;
        }
        if(j==k){
            j++;
        } 
        printf("Data in node %d: %d\n", j,temp->data);
        j++;
       
        temp=temp->link;
    }    
}


