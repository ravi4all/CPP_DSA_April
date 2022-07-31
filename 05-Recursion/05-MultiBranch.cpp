#include<iostream>
using namespace std;

void f(int x) {
    cout << x << endl;
    if(x >= 3) {
        return;
    }
    f(x+1);
    f(x+2);
}

int main() {
    int n = 0;
    f(n);
}