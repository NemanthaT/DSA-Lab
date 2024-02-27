#include<stdio.h>
#include<stdlib.h>
#include"q4_1header.h"

int main(){
    int i,j,count;
    printf("Enter the size of array: ");
    scanf("%d", &i);
    int arr[i];
    printf("Enter the elements of array like 1 2 3: ");
    for(j=0;j<i;j++){
        scanf("%d", &arr[j]);
    }
    printf("Elements in the array are: ");
    for(j=0;j<i;j++){
        printf("%d ", arr[j]);
    }
    printf("\n");
    sorting(arr,i);

    return 0;    
}
