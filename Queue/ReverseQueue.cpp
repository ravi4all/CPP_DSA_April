#include<bits/stdc++.h>
#include<queue>
using namespace std;

void printQueue(queue<int>& q) {
    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
}

void reverse(queue<int>& q) {
    if(q.empty()) {
        return;
    }
    int x = q.front();
    q.pop();
    reverse(q);
    q.push(x);
}

int main() {
    queue<int> q;
    q.push(10);
    q.push(12);
    q.push(6);
    q.push(19);
    q.push(7);
}