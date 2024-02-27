#include<stdio.h>
#include<stdlib.h>

struct st{
    char name[10];
    int pages;
};

int main(){

    int no,i,new;
    char ch;
    struct st *std;
    
    printf("Enter the number of books: ");
    scanf("%d", &no);
    
    std=calloc(no, sizeof(struct st));

    for(i=0;i<no;i++){
        printf("Enter details for Book %d:\n", i+1);
        printf("Enter title: ");
        scanf("%s", &((std+i)->name));
        printf("Enter pages: ");
        scanf("%d", &((std+i)->pages));
    }
    printf("Entered details for %d Books\n", no);
    
    for(i=0;i<no;i++){
        printf("Book %d - Name: %s, Pages: %d\n", i+1, ((std+i)->name), ((std+i)->pages));
    }

    free(std);

    return 0;
}    
    
