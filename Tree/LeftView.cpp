#include<iostream>
#include<queue>
using namespace std;

struct Node
{
    int data;
    struct Node* left, *right;
    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

int maxLevel = 0;
void leftView(Node *root, int level) {
    if(root == NULL) {
        return;
    }
    if(maxLevel < level) {
        cout << root->data << ", ";
        maxLevel = level;
    }
    leftView(root->left, level+1);
    leftView(root->right, level+1);
}

void leftViewIterative(Node *root) {
    if(root == NULL) {
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (q.empty() == false)
    {
        int count = q.size();
        for(int i = 0; i < count; i++) {
            Node *curr = q.front();
            q.pop();
            if(i == 0) {
                cout << curr->data << ", ";
            }
            if(curr->left != NULL) {
                q.push(curr->left);
            }
            if(curr->right != NULL) {
                q.push(curr->right);
            }
        }
    }
    
}

int main() {
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    leftView(root,1);
}