#include<stdio.h>
#include<stdlib.h>
#include"q4_2header.h"

int main(){

    int no,i,j,new,arr[j];
    char ch;
    struct st *std;
    
    printf("Enter the number of Products: ");
    scanf("%d", &no);
    
    std=calloc(no, sizeof(struct st));

    for(i=0;i<no;i++){
    	(std+i)->id=i+1;
        printf("Enter details for Product %d:\n", i+1);
        printf("Enter Product Name: ");
        scanf("%s", &((std+i)->name));
        printf("Enter Amount Sold: ");
        scanf("%d", &((std+i)->amount));
    }
    printf("Entered details for %d Products\n", no);
    
    for(i=0;i<no;i++){
        printf("Product %d - Name: %s, Amount: %d\n", i+1, ((std+i)->name), ((std+i)->amount));
    }
    
    for(j=0;j<no;j++){
        arr[j]=(std+j)->amount;
    }
    printf("Elements in the array are: ");
    for(j=0;j<no;j++){
        printf("%d ", arr[j]);
    }
    printf("\n");
    printf("The product sold in ascending order: \n");
    sorting(arr,no,std);
	printf("\n");
	
    free(std);

    return 0;
}

