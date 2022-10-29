#include<bits/stdc++.h>
using namespace std;

class Queue {
    public:
        int front, rear, size;
        unsigned capacity;
        int *array;
};

Queue *createQueue(unsigned capacity) {
    Queue* queue = new Queue();
    queue->capacity = capacity;
    queue->front = queue->size = 0;
    queue->rear = capacity-1;
    queue->array = new int[(queue->capacity * sizeof(int))];
    return queue;
}

// Queue is full when size is equals to the capacity
int isFull(Queue *queue) {
    return(queue -> size == queue->capacity);
}

// queue is empty when size is 0
int isEmpty(Queue *queue) {
    return(queue -> size == 0);
}

void enqueue(Queue* queue, int item) {
    if(isFull(queue)) {
        return;
    }
    queue->rear = (queue-> rear+1) % queue->capacity;
    queue->array[queue->rear] = item;
    queue->size = queue->size + 1;
    cout << item << " enqueued...\n";
}

int dequeue(Queue* queue) {
    if(isEmpty(queue)) {
        return INT_MIN;
    }
    int item = queue->array[queue->front];
    queue->front = (queue->front + 1) % queue->capacity;
    queue->size = queue->size - 1;
    cout << item << " dequeued...\n";
    return item;
}

int main() {
    Queue* queue = createQueue(10);
    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    enqueue(queue, 40);

    dequeue(queue);
}