#include<iostream>
using namespace std;

int count(int n, int c) {
    if(n == 0) {
        return c;
    }
    if(n % 10 == 0) {
        c++;
    }
    return count(n/10, c);
}

int main() {
    int n = 10056002;
    int c = 0;
    count(n,c);
}