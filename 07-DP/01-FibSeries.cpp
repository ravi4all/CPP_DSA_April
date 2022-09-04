#include<iostream>
using namespace std;

const int n = 5;
int cache[n+1];

// Approach_1
int fib_1(int n) {
    if(n <= 1) {
        return n;
    }
    int fnum = fib_1(n-1);
    int snum = fib_1(n-2);
    int res = fnum + snum;
    return res;
}

// Approach_2 : Memoization
int fib_2(int n, int cache[]) {
    if(n <= 1) {
        return n;
    }

    if(cache[n] != 0) {
        return cache[n];
    }

    int fnum = fib_2(n-1, cache);
    int snum = fib_2(n-2, cache);
    int res = fnum + snum;
    cache[n] = res;
    return cache[n];
}

// Approach_3 : Tabulation
int fib(int n) {
    int tab[n+1];
    tab[0] = 0;
    tab[1] = 1;
    for(int i = 2; i < n; i++) {
        tab[i] = tab[i-1] + tab[i-2];
    }
    return tab[n];
}

int main() {
    cout << "Using Approach_1 : " << fib_1(n) << endl;
    cout << "Using Approach_2 : " << fib_2(n, cache) << endl;
}