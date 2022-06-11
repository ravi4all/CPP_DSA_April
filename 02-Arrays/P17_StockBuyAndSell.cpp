#include <iostream>
using namespace std;

void approach_1(int arr[], int n) {
    int first = 0;
    int last = 0;
    int max = INT_MIN;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(max < (arr[j] - arr[i])) {
                max = arr[j] - arr[i];
                first = arr[i];
                last = arr[j];
            }
        }
    }
    cout << first << "," << last << endl;
    cout << "Profit is : " << max;
}

int main() {
    int arr[] = {7,1,5,3,6,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    approach_1(arr, n);
}