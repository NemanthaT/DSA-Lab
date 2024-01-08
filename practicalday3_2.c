#include<stdio.h>
#include<stdlib.h>

struct st{
    char name[10];
    int marks;
};

int main(){

    int no,i,new;
    char ch;
    struct st *std;
    
    printf("Enter the number of students: ");
    scanf("%d", &no);
    
    std=calloc(no, sizeof(struct st));

    for(i=0;i<no;i++){
        printf("Enter details for Student %d:\n", i+1);
        printf("Enter name: ");
        scanf("%s", &((std+i)->name));
        printf("Enter marks: ");
        scanf("%d", &((std+i)->marks));
    }
    printf("Entered details for %d persons\n", no);
    
    for(i=0;i<no;i++){
        printf("Student %d - Name: %s, Marks: %d\n", i+1, ((std+i)->name), ((std+i)->marks));
    }

    printf("Do you want to add more students?(y/n): ");
    scanf("\n%c", &ch);

    if(ch=='y'){
        printf("Enter the number of additional students: ");
        scanf("%d", &new);
        std=realloc(std, no+new);
        for(i=no;i<(no+new);i++){
            printf("Enter details for Student %d:\n", i+1);
            printf("Enter name: ");
            scanf("%s", &((std+i)->name));
            printf("Enter marks: ");
            scanf("%d", &((std+i)->marks));

        }
        for(i=0;i<(no+new);i++){
        printf("Student %d - Name: %s, Marks: %d\n", i+1, ((std+i)->name), ((std+i)->marks));
        }

    }
    else{free(std);}

    return 0;
}    
    
