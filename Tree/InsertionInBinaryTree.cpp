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

void levelOrder(Node *root) {
    if(root == NULL) return;
    queue<Node*> q;
    q.push(root);
    while (q.empty() == false)
    {
        // Get front node from queue and remove it
        Node *node = q.front();
        cout << node->data << " ";
        q.pop();

        if(node->left != NULL) {
            q.push(node->left);
        }

        if(node->right != NULL) {
            q.push(node->right);
        }

    }
    
}


int main() {

}