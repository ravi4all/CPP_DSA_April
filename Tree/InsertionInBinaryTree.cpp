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

void insert(Node *root, int key) {
    if(root == NULL) return;
    queue<Node*> q;
    q.push(root);
    while (q.empty() == false)
    {
        // Get front node from queue and remove it
        Node *temp = q.front();
        q.pop();

        if(temp->left) {
            temp->left = newNode(key);
            break;
        }
        else {
            q.push(temp->left);
        }

        if(temp->right) {
            temp->right = newNode(key);
            break;
        }
        else {
            q.push(temp->right);
        }
        

    }
    
}


int main() {

}