#include<stdio.h>
#include<stdlib.h>

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
    for(int j=0;j<i;j++){
        printf("%d ", arr[j]);
    }
}

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