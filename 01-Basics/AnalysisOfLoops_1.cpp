#include<iostream>
#include<math.h>

int main() {
    int n = 10;
    // TC : O(n)
    for(int i = 0; i < n; i++) {

    }

    // TC : O(n/2) => O(n)
    for(int i = 0; i < n; i+=2) {

    }

    // TC : O(n)
    for(int i = n; i > 0; i--) {

    }

    n = 100;
    // TC : O(logn)
    for(int i = 1; i < n; i*=2) {

    }

    // TC : O(logn)
    for(int i = n; i >= 1; i=i/2) {

    }

    // TC : O(logn)
    for(int i = 2; i < n; i = pow(i, 2)) {
        
    }


}