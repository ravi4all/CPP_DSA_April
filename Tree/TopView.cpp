#include<iostream>
#include<queue>
#include<map>
using namespace std;

struct Node
{
    int data;
    struct Node* left, *right;
    int distance;
    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

void topView(Node* root) {
    if(root == NULL) {
        return;
    }
    queue<Node *>q;
    map<int, int> m;
    int distance = 0;
    root->distance = distance;
    q.push(root);
    while (q.size())
    {
        distance = root->distance;
        if(m.count(distance) == 0) {
            m[distance] = root->data;
        }
        if(root->left) {
            root->left->distance = distance-1;
            q.push(root->left);
        }
        if(root->right) {
            root->right->distance = distance+1;
            q.push(root->right);
        }
        q.pop();
        root = q.front();
    }

    for(auto i = m.begin(); i != m.end(); i++) {
        cout << i->second << " ";
    }
}

int main() {
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    topView(root);
}