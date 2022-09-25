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
    cout << "\n";
}

int getSize(Node *head) {
    int i = 0;
    while (head != NULL)
    {
        head = head->next;
        i++;
    }
    return i;
}

Node *insertAtBeg(struct Node* head_ref,int data) {
    Node* newNode = new Node;
    newNode -> data = data;
    newNode -> next = head_ref;
    head_ref = newNode;
    return head_ref;
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
        return head_ref;
    }

    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    return temp;
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

void getMidPoint(struct Node* head_ref) {
    // int size = getSize(head_ref);
    // Slow Fast Pointer Approach
    struct Node *slow = head_ref;
    struct Node *fast = head_ref;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;   
    }
    cout << "Mid Point : " << slow->data;
    
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
        struct Node *nextNode = currentNode->next;
        currentNode->next = prevNode;
        prevNode = currentNode;
        currentNode = nextNode;
    }
    head_ref = prevNode;
    return head_ref;
}

Node *reverseRec(struct Node *currentNode, struct Node *prevNode) {
    if(currentNode == NULL) {
        return prevNode;
    }
    struct Node *nextNode = currentNode->next;
    currentNode->next = prevNode;
    return reverseRec(nextNode, currentNode);

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
    head = insertAtBeg(head, 90);
    printList(head);

    head = reverseLinkedList(head);
    printList(head);

}