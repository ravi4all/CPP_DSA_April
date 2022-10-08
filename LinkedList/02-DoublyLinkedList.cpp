#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* prev;
    Node* next;
    Node(int d) {
        data = d;
        prev = NULL;
        next = NULL;
    }
};

Node *insertInBeg(Node *head, int data) {
    Node *temp = new Node(data);
    temp->next = head;
    if(head != NULL) {
        head->prev = temp;
    }
    return temp;
}

Node *reverseLinkedList(struct Node* head_ref) {
    if(head_ref == NULL) {
        cout << "List is empty...";
        return head_ref;
    }
    if(head_ref->next == NULL) {
        cout << "List contains only one item...";
        return head_ref;
    }
    struct Node *currentNode = head_ref;
    struct Node *prevNode = NULL;
    while (currentNode != NULL)
    {
        prevNode = currentNode->prev;
        currentNode->prev = currentNode->next;
        currentNode->next = prevNode;
        currentNode = currentNode->prev;
    }
    return prevNode -> prev;
}

void printList(Node *head) {
    Node *curr = head;
    while(curr != NULL) {
        cout << curr->data << ",";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    Node *head = new Node(10);
    Node *n1 = new Node(20);
    Node *n2 = new Node(30);
    head->next = n1;
    n1->prev = head;
    n1->next = n2;
    n2->prev = n1;
    printList(head);
    
    head = reverseLinkedList(head);
    cout << "After Reverse..." << endl;
    printList(head);

}