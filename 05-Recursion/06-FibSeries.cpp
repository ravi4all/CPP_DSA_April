#include<iostream>
using namespace std;

int fib(int n) {
    if(n <= 1) {
        return n;
    }
    // return fib(n-1) + fib(n-2);
    
    int first = fib(n-1);
    int second = fib(n-2);
    int result = first + second;
    return result;
}

int main() {
    int n = 7;
    cout << fib(n);
}