#include<stdio.h>
#include<stdlib.h>

struct Node {
int data;
struct Node* next;
};


void insertAtBeginning(struct Node** headRef, int data);
void insertAtEnd(struct Node** headRef, int data);
void deleteNode(struct Node** headRef, int data);
void printLinkedList(struct Node* head);

int main()
{
    struct Node* head = NULL;
    int n, data;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &data);
        insertAtEnd(&head, data);
    }

    printf("Linked List: ");
    printLinkedList(head);

    printf("Enter the element to delete: ");
    scanf("%d", &data);
    deleteNode(&head, data);

    printf("Linked List after deletion: ");
    printLinkedList(head);

    printf("Enter the element to search: ");
    scanf("%d", &data);

    return 0;

}

createNode(int data) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertAtBeginning(struct Node** headRef, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *headRef;
    *headRef = newNode;
}

void insertAtEnd(struct Node** headRef, int data) {
    struct Node* newNode = createNode(data);
    struct Node* current = *headRef;

    if (*headRef == NULL) {
        *headRef = newNode;
        return;
    }

    while (current->next != NULL) {
        current = current->next;
    }

    current->next = newNode;
}

void deleteNode(struct Node** headRef, int data) {
    struct Node* current = *headRef;
    struct Node* prev = NULL;

    while (current != NULL && current->data != data) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) {
        // Element not found
        return;
    }

    if (prev == NULL) {
        // Element is in the first node
        *headRef = current->next;
    } else {
        prev->next = current->next;
    }

    free(current);
}

void printLinkedList(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}