#include<iostream>
#include<queue>
using namespace std;

struct Node
{
    int data;
    struct Node* left, *right;
};

// Utility Function
Node* newNode(int data) {
    Node *temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

void deleteNode(struct Node *root, struct Node *d_node) {
    queue<struct Node*> q;
    q.push(root);

    struct Node* temp;
    while (!q.empty())
    {
        temp = q.front();
        q.pop();

        if(temp-> right) {
            if(temp->right == d_node) {
                temp->right = NULL;
                delete(d_node);
            }
            else {
                q.push(temp->right);
            }
        }

        if(temp-> left) {
            if(temp->left == d_node) {
                temp->left = NULL;
                delete(d_node);
            }
            else {
                q.push(temp->left);
            }
        }
    }

}

void deletion(struct Node* root, int data) {
    queue<struct Node*> q;
    q.push(root);

    struct Node *temp;
    struct Node *key_node = NULL;

    while(!q.empty()) {
        temp = q.front();
        q.pop();

        if(temp->data == data) {
            key_node = temp;
        }

        if(temp->left) {
            q.push(temp->left);
        }

        if(temp->right) {
            q.push(temp->right);
        }
    }

    int x = temp->data;
    deleteNode(root, temp);
    key_node->data = x;

}