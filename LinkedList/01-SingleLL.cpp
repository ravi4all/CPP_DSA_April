#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

void printList(Node *head) {
    while (head != NULL)
    {
        cout << head->data << ",";
        head = head->next;
    }
    
}

int main() {
    struct Node* head = NULL;
    struct Node* n1 = NULL;
    struct Node* n2 = NULL;

    head = new Node;
    n1 = new Node;
    n2 = new Node;

    head->data = 10;
    head->next = n1;

    n1->data = 20;
    n1->next = n2;

    n2->data = 30;
    n2->next = NULL;

    printList(head);

}