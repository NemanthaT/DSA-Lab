#include<stdio.h>
#include<stdlib.h>

int main(){

    int n,i,db;
    int j=0;
    char *c;
    double *fl;

    printf("Enter the size for char array: ");
    scanf("%d", &n);

    c=malloc(n * sizeof(char));
    for(i=0;i<n;i++){
        *(c+i)=97+i;
    }
    for(i=0;i<n;i++){
        printf("%c, ", *(c+i));
    }
    c=realloc(c, 2*n);
    printf("\n");

    for(i=n;i<(2*n);i++){
        *(c+i)=65+j;
        j++;
    }
    for(i=0;i<(2*n);i++){
        printf("%c, ", *(c+i));
    }
    printf("\n");

    printf("Enter the size for double array: ");
    scanf("%d", &db);
    printf("Enter the floatin numbers like this seperated by [space], 5.5 6.4: ");
    
    for(i=0;i<db;i++){
        scanf("%lf", (fl+i));
    }

    for(i=0;i<db;i++){
        printf("%lf ", *(fl+i));
    }
}