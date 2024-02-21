#include<stdio.h>
#include<stdlib.h>

void sorting(int arr[],int i){
    int min,temp,sarr[i],count=1;
    int k=1;
    min =arr[0];
    temp=min;
    for(int j=0;j<i;j++){
        if(arr[j]<min){
            min=arr[j];
            temp=min;
        }
    }
    sarr[0]=min;
    while(count!=i){
        for(int j=0;j<i;j++){
            if((arr[j]>temp)){
                for(int l=0;l<i;l++){
                    if(arr[j]<min){
                        min=arr[j];
                    }
                    
                }
                temp=min;
            }
        }
        sarr[k]=min;
        count++;    
        k++;
    }
    printf("Sorted array is: ");
    for(int j=0;j<i;j++){
        printf("%d ", sarr[j]);
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