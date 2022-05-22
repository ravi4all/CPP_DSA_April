#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// Time Complexity : 0(n^2)
void approach_1(int arr[], int n, int k) {
    int sum = 0;
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            sum = arr[i] + arr[j];
            if(sum == k) {
                cout << "Pair is :: " << i << "," << j;
                return;
            }
        }
    }
}

// Time Complexity : O(nlogn)
void approach_2(int arr[], int n, int k) {
    sort(arr, arr+n);
    int first = 0;
    int last = n - 1;
    while(first < last) {
        if(arr[first] + arr[last] == k) {
            cout << "Pair is :: " << first << "," << last;
            return;
        }

        if(arr[first] + arr[last] < k) {
            first++;
        }
        else {
            last--;
        }
    }
}

int main() {
    int arr[] = {2,7,11,15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 9;
    approach_1(arr, n, k);
}