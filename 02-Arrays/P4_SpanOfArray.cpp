#include<iostream>

using namespace std;

void span(int arr[], int n) {
    int max = INT_MIN;  // 2147483648
    int min = INT_MAX;  // 2147483647
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    int diff = max - min;
    cout << "Span of array is : " << diff;
}

int main() {
    int arr[] = {11,2,5,7,8,12,4,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    span(arr, n);
}