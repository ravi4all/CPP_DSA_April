#include<iostream>
#include<cmath>

using namespace std;

// int countDigit(int n) {
//     int count = 0;
//     while(n != 0) {
//         n = n / 10;
//         count++;
//     }
//     return count;
// }

// int countDigit(int n) {
//     if(n == 0) {
//         return 0;
//     }
//     return 1 + countDigit(n/10);
// }

// TC : 0(1)
int countDigit(int n) {
    return (int) log10(n) + 1;
}

int main() {
    int n = 1341;
    int count = countDigit(n);
    cout << "Count is :: " << count;
}