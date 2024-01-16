#ifndef header_q
#define header_q
#define Max 5

typedef struct Queue{
    int front;
    int back;
    int arr[Max];
}que;

que* queue;

void init(que* queue);
void enqueueElement(int no,que* queue);
int dequeueElement(que* queue);
void displayQueue(que* queue, FILE* f);
bool isFull(que* queue);
bool isEmpty(que* queue);
#endif