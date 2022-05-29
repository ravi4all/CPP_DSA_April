#include<iostream>
using namespace std;

void rotate(int arr[], int n) {
    int x = arr[n-1];
    for(int i = n - 1; i > 0; i--) {
        arr[i] = arr[i-1];
    }
    arr[0] = x;
}

void rotateApproach_2(int arr[], int n) {
    int i = 0, j = n - 1;
    while (i != j)
    {
        swap(arr[i], arr[j]);
        i++;
    }
    
}

int main() {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Original Array\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << ",";
    }

    // rotate(arr, n);
    rotateApproach_2(arr, n);

    cout << "\nRotated Array\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << ",";
    }

}