#include<iostream>
using namespace std;

// binary tree node contains 3 things
// 1. data
// 2. left child (optional)
// 3. right child (optional)
struct Node
{
    int data;
    struct Node* left, *right;
    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

void postOrder(struct Node* node) {
    // Left, Right, Root
    if(node == NULL) {
        return;
    }
    postOrder(node->left);
    postOrder(node->right);
    cout << node->data << " ";
}

void inOrder(struct Node* node) {
    // Left, Root, Right
    if(node == NULL) {
        return;
    }
    postOrder(node->left);
    cout << node->data << " ";
    postOrder(node->right);
    
}

void preOrder(struct Node* node) {
    // Root, Left, Right
    if(node == NULL) {
        return;
    }
    cout << node->data << " ";
    postOrder(node->left);
    postOrder(node->right);
}


int main() {
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "\nPreorder traversal : ";
    preOrder(root);

    cout << "\nInorder traversal : ";
    inOrder(root);

    cout << "\nPostorder traversal : ";
    postOrder(root);
}