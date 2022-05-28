#include<iostream>

using namespace std;

void approach_1(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        int leader = 0;
        for(int j = i; j < n; j++) {
            if(arr[j] > arr[i]) {
                leader = 1;
                break;
            }
        }
        if(leader == 0) {
            cout << arr[i] << ", ";
        }
    }
}

void approach_2(int arr[], int n) {
    int max = 0;
    for(int i = n-1; i >= 0; i--) {
        if(arr[i] > max) {
            cout << "Leader : " << arr[i];
            max = arr[i];
        }
    }
}

int main() {
    int arr[] = {300,60,50,100,43,17,4,9,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    approach_1(arr, n);
    approach_2(arr, n);
}