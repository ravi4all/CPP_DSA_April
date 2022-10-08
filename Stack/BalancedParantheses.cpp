#include<iostream>
#include<stack>
using namespace std;

bool pairBracket(char a, char b) {
    return ((a == '(' && b == ')') || (a == '[' && b == ']') || (a == '{' && b == '}'));
}

bool isBalanced(string str) {
    stack<char> s;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == '(' || str[i] == '{' || str[i] == '[') {
            s.push(str[i]);
        }
        else {
            if(s.empty() == true) {
                return false;
            }
            else if(pairBracket(s.top(), str[i]) == false) {
                return false;
            }
            else {
                s.pop();
            }
        }
    }
    return (s.empty() == true);
}

int main() {
    string str = "{([])}";
    if(isBalanced(str)) {
        cout << "Balanced...";
    }
    else {
        cout << "Not Balanced...";
    }
}