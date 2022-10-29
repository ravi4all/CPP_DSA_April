#include<bits/stdc++.h>
using namespace std;

struct QueueNode {
    int data;
    QueueNode* next;
    QueueNode(int d) {
        data = d;
        next = NULL;
    }
};

struct Queue {
    QueueNode *front, *rear;
    Queue() {
        front = rear = NULL;
    }
    void enqueue(int data) {
        QueueNode* temp = new QueueNode(data);
        if(rear == NULL) {
            front = rear = temp;
            return;
        }

        rear->next = temp;
        rear = temp;
    }

    void dequeue() {

    }
};

int main() {

}