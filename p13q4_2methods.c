#include<stdio.h>
#include<stdlib.h>
#include"q4_2header.h"

void sorting(int arr[],int no, struct st* std){
    int temp,l,j,i;
    for(l=0;l<no;l++){
        for(j=0;j<no;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(i=0;i<no;i++){
		for(j=0;j<no;j++){
			if(arr[i] == ((std+j)->amount)){
				printf("Product %d - Name: %s, Amount: %d\n",((std+j)->id) ,((std+j)->name), ((std+j)->amount));
			}
		}
			
	}
	
}
