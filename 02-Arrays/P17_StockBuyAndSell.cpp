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

// Time : O(n), Space : O(n)
void approach_2(int arr[], int n) {
    int finalProfit = 0;
    int profit = 0;
    int prefixMin[n];
    prefixMin[0] = arr[0];
    for(int i = 0; i < n; i++) {
        prefixMin[i] = min(prefixMin[i-1], arr[i]);
    }
    // for(int i = 0; i < n; i++) {
    //     cout << prefixMin[i] << ",";
    // }
    for(int i = 0; i< n; i++) {
        finalProfit = arr[i] - prefixMin[i];
        profit = max(finalProfit, profit);
    }
    cout << "Max Profit is : " << profit;
}

// Time : O(n), Space : O(1)
void approach_2(int arr[], int n) {
    int finalProfit = 0;
    int profit = 0;
    int minNum = arr[0];
    
    for(int i = 0; i< n; i++) {
        finalProfit = arr[i] - minNum;
        profit = max(finalProfit, profit);
        minNum = min(minNum, arr[i]);
    }
    cout << "Max Profit is : " << profit;
}

int main() {
    int arr[] = {7,1,5,3,6,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    // approach_1(arr, n);
    approach_2(arr, n);
}