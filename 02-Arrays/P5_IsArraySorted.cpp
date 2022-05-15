#include<iostream>

using namespace std;

void checkingArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        if(arr[i] > arr[i+1]) {
            cout << "Not Sorted..";
            return;
        }
    }
    cout << "Sorted...";
}

int main() {
    int arr[] = {10,20,30,20,40,50};
    int n = sizeof(arr) / sizeof(arr[0]);
    checkingArray(arr, n);
}