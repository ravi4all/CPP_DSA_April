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

void insertAtBeg(struct Node* head_ref,int data) {
    Node* newNode = new Node;
    newNode -> data = data;
    newNode -> next = head_ref;
    head_ref = newNode;
}

void insertAfterNode(struct Node* prev_node, int data) {
    Node* newNode = new Node;
    newNode -> data = data;
    newNode -> next = prev_node->next;
    prev_node->next = newNode;
}

void insertBeforeNode(struct Node** head_ref, struct Node* prev_node, int data) {
    Node* newNode = new Node;
    newNode -> data = data;
    struct Node *temp = *head_ref;
    while(temp->next->data != prev_node->data) {
        temp = temp->next;
    }
    
    newNode -> next = prev_node;
    temp->next = newNode;
}

Node *insertAtEnd(struct Node* head_ref,int data) {
    Node* newNode = new Node;
    newNode -> data = data;
    struct Node *temp = head_ref;

    if(head_ref == NULL) {
        head_ref = newNode;
        return;
    }

    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtAnyPos(int pos, int data) {
    
}

void deleteFromBeg(struct Node* head_ref) {
    struct Node *temp = head_ref->next;
    head_ref = temp;
    free(temp);
}

void deleteFromEnd() {

}

void deleteFromAnyPos(struct Node* head_ref, int pos) {
    int i = 1;
    struct Node *temp = head_ref;
    while(i < pos) {
        temp = temp->next;
        i++;
    }
    temp->next = temp->next->next;
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
    insertAtBeg(head, 90);
    printList(head);

}