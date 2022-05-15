#include<iostream>

using namespace std;

// Two Pointer Approach
void reverse(int arr[], int n) {
    int first = 0;
    int last = n-1;
    while(first < last) {
        int temp = arr[first];
        arr[first] = arr[last];
        arr[last] = temp;
        first++;
        last--;
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << ",";
    }
}

int main() {
    int arr[] = {2,3,5,7,8,4};
    int n = sizeof(arr) / sizeof(arr[0]);
}