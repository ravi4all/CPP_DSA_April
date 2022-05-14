#include<iostream>

using namespace std;

void approach_1(int arr[], int n) {
    bool isMax;
    for(int i = 0; i < n; i++) {
        isMax = true;
        for(int j = 1; j < n; j++) {
            if(arr[j] > arr[i]) {
                isMax = false;
                break;
            }
        }
        if(isMax) {
            cout << "Max number is : " << arr[i];
            return;
        }
    }
}

void approach_2(int arr[], int n) {
    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "Max is : " << max;
}

int main() {
    int arr[] = {11,2,5,7,8,12,4,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    // cout << sizeof(arr) << endl;
    // cout << sizeof(arr[0]);
    approach_1(arr, n);
}