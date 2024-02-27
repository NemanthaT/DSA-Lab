#include<stdio.h>
#include<stdlib.h>
#include"q4_1header.h"

void sorting(int arr[],int i){
    int temp,l,j;
    for(l=0;l<i;l++){
        for(j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }

    printf("Sorted array: ");
    for(j=0;j<i;j++){
        printf("%d ", arr[j]);
    }
}

