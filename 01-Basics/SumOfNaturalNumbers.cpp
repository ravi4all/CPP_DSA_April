#include<iostream>

using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};
    int sum = 0;
    int n = 5;
    // for(int i = 0; i < n; i++) {
    //     sum += arr[i];
    // }

    // for(int n : arr) {
    //     sum += n;
    // }

    // reference operator - &
    for(int &n : arr) {
        sum += n;
    }

    cout << "Sum is " << sum;
}