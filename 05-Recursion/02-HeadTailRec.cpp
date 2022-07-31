#include<iostream>
using namespace std;

// Tail Recursion
// void print(int n) {
//     // Base Case
//     if(n == 0) {
//         return;
//     }
//     // Processing Logic
//     cout << n << endl;
//     // Small Problem
//     print(n-1);
// }

// Head Recursion
// void print(int n) {
    // Base Case / Termination Condition
//     if(n == 0) {
//         return;
//     }
    // Small Problem
//     print(n-1);
    //  Processing Logic
//     cout << n << endl;
// }

// Linear Recursion
void print(int n) {
    if(n == 0) {
        return;
    }
    cout << n << endl;
    print(n-1);
    cout << n << endl;
}

int main() {
    int n = 5;
    print(n);
}