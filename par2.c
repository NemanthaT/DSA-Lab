#include<stdio.h>
#include<stdlib.h>

struct node{
    int d;
    struct node *l;
};

int main(){

    int i,j;
    printf("Insert the no of nodes: ");
    scanf("%d", &i);
    struct node *head[i],*temp;
    temp= malloc(sizeof(struct node));
    
    for(j=0;j<i;j++){
    printf("Type the data for node %d: ",j+1);
    scanf("%d", &temp->d);
    head[j]=temp;
    temp=malloc(sizeof(struct node));
    temp->l=head[j+1];
    }
    for(j=0;j<i;j++){
    printf("Data %d is= %d\n", j+1, head[j]->d);
    }


    return 0;
}
