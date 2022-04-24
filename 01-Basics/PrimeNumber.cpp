#include<iostream>

using namespace std;

// TC : O(n)
// bool isPrime(int n) {
//     if(n == 1) {
//         return false;
//     }
//     for(int i = 2; i < n; i++) {
//         if(n % i == 0) {
//             return false;
//         }
//     }   
//     return true;
// }

// check from 2 to square root of n
// TC : O(√n) but at the end we write O(n)
// bool isPrime(int n) {
//     if(n == 1) {
//         return false;
//     }
//     for(int i = 2; i * i <= n; i++) {
//         cout << "I is " << i << endl;
//         if(n % i == 0) {
//             return false;
//         }
//     }   
//     return true;
// }

bool isPrime(int n) {
    if(n == 1) {
        return false;
    }

    if(n == 2 || n == 3) {
        return true;
    }

    if(n % 2 == 0 || n % 3 == 0) {
        return false;
    }

    for(int i = 5; i * i <= n; i = i + 6) {
        cout << "I is " << i << endl;
        if(n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }   
    return true;
}

int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;
    isPrime(n) ? cout << "Prime Number" : cout << "Not Prime";
}