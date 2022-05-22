#include<iostream>

using namespace std;

int main() {
    int arr[] = {1,0,2,5,3,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    for(int i = max; i >= 1; i--) {
        for(int j = 0; j < n; j++) {
            if(i <= arr[j]) {
                cout << "*\t";
            }
            else {
                cout << "\t";
            }
        }
        cout << "\n";
    }

}