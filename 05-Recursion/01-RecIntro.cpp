#include<iostream>
using namespace std;

int fact(int n) {
    // Base Case
    if(n == 0) {
        return 1;
    }
    return n * fact(n-1);
}

int main() {
    int n = 5;
    cout << "Factorial is :: " << fact(n);
}