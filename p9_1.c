#include <stdio.h>
#include <stdbool.h>

int binarySearch(int arr[], int n, int target);

int main(){
    int j,n,target;
    printf("Enter size for array: ");
    scanf("%d", &n);
    int arr[n];

    for(j=0;j<n;j++){
        printf("Enter the values: ");
        scanf("%d", &arr[j]);
    }    

    printf("values: ");
    for(j=0;j<n;j++){
        printf("%d ", arr[j]);
    }
    printf("\n");

    printf("Enter the value for search: ");
    scanf("%d", &target);

    if(binarySearch(arr, n, target)){
        printf("Value is present\n");
    }
    else{
        printf("Value is not present\n");
    }
}

int binarySearch(int arr[], int n, int target){
    int m,f,l;
    f=0;
    l=n-1;
    while(f<=l){
        m=(f+l)/2;
        if(arr[m]==target){
            return 1;
        }
        else if(arr[m]>target){
            l=m-1;
        }
        else {
            f=m;
        }
    }
    return 0;
}