#include<iostream>

using namespace std;

void approach(int arr[], int n) {
    int max = arr[0];
    int secondMax = -1;
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            secondMax = max;
            max = arr[i];
        }
        if(arr[i] != max) {
            if(arr[i] > secondMax) {
                secondMax = arr[i];
            }
        }
    }
    cout << "Second Max is : " << secondMax;
}

int main() {
    int arr[] = {11,2,5,7,8,12,4,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    // cout << sizeof(arr) << endl;
    // cout << sizeof(arr[0]);
    approach_1(arr, n);
}