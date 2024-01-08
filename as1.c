#include <stdio.h>

int main(){
   int aray[3]={1,2,3};
   int aray2[2]={25,26,27};
   int l=sizeof(aray)/sizeof(aray[0]);
   printf("Size of array is= %d\n", sizeof(aray));
   printf("Size of 1st element is= %d\n", sizeof(aray[0]));
   printf("Number of elements in Array= %d\n", sizeof(aray)/sizeof(aray[0]));
   printf("Elements in the array= ");
   for(int i=0;i<l;i++){
    printf("%d ", aray[i]);
   }
   printf("\n");
   printf("Size of each element= ");
   for(int i=0;i<l;i++){
    printf("%d ", sizeof(aray[i]));
   }
   printf("\n"); 
   printf("Pointer value of the array= %p\n", &aray);
   printf("Pointer value of the 1st element= %p\n", &aray[0]);
   for(int i=0;i<l;i++){
    printf("Element pointer value= %p\n", &aray[i]);
   }
   printf("Adress= %d\n", &aray[0]);
   printf("Adress= %d\n", &aray[1]);
   int j= &aray[0];
   int k= &aray[1];
   printf("Differ2= %d \n", k-j );
   printf("%d\n", aray2[2]);
}
