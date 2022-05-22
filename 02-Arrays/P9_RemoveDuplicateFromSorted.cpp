#include<iostream>

using namespace std;

int removeDuplicate(int arr[], int n) {
    int j = 0;
    for(int i = 1; i < n; i++) {
        if(arr[j] != arr[i]) {
            j++;
            arr[j] = arr[i];
        }
    }
    return j+1;
}

int main() {
    int arr[] = {1,1,1,1,2,2,2,2,3,3,3,3,4,4,5,5,5,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int j = removeDuplicate(arr, n);
    for(int i = 0; i < j; i++) {
        cout << arr[i] << ",";
    }
}