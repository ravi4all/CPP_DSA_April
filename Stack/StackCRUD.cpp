#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define MAX 1000

class Stack {
    int top;
    public:
        int st[MAX];
        Stack() {
            top = -1;
        }
        bool push(int x);
        int pop();
        bool isEmpty();
};

bool Stack::push(int x) {
    if(top >= (MAX - 1)) {
        cout << "Stack is full...";
        return false;
    }
    else {
        st[++top] = x;
        cout << x << " pushed into stack..." << endl;
        return true;
    }
}

int Stack::pop() {
    if(top < 0) {
        cout << "Stack is Empty...";
        return 0;
    }
    else {
        int x = st[top--];
        return x;
    }
}

bool Stack::isEmpty() {
    return(top < 0);
}

int main() {
    class Stack s;
    s.push(12);
    s.push(15);
    s.push(19);
    s.push(2);

    cout << s.pop() << " Popped from stack" << endl;
}