#include<iostream>

using namespace std;

// int gcd(int a, int b) {
//     return b == 0 ? a : gcd(b, a % b);
// }

int gcd(int a, int b) {
    if(b == 0) {
        return a;
    }
    else {
        gcd(b, a % b);
    }
}

// Euclidean Algorithm
int gcd(int a, int b) {
    while (a != b)
    {
        if(a > b) {
            a = a - b;
        }
        else {
            b = b - a;
        }
    }
    return a;
    
}

int main() {
    int x, y;
    cout << "Enter first number : ";
    cin >> x;
    cout << "Enter second number : ";
    cin >> y;

    int temp_x = x;
    int temp_y = y;

    while (x % y != 0)
    {
        int remainder = x % y;
        x = y;
        y = remainder;
    }
    
    int gcd = y;
    cout << "GCD : " << gcd << "\n";
    
    int lcm = (temp_x * temp_y) / gcd;
    cout << "LCM : " << lcm;


}