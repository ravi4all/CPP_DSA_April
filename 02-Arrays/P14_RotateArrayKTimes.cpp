#include<iostream>
using namespace std;

void reverse(int arr[], int i, int j) {
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    
}

int main() {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    
    cout << "Original Array\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << ",";
    }

    reverse(arr, 0, k-1);
    reverse(arr, k, n-1);
    reverse(arr, 0, n-1);

    cout << "\nRotated Array\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << ",";
    }

}