#include <iostream>
using namespace std;

int main() {
    int arr[] = {0,1,0,2,1,0,1,3,2,1,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int prefixMax[n];
    int suffixMax[n];

    prefixMax[0] = arr[0];
    suffixMax[n-1] = arr[n-1];

    // Calculating Prefix Max
    for(int i = 1; i < n; i++) {
        prefixMax[i] = max(prefixMax[i-1], arr[i]);
    }

    // Calculating Suffix Max
    for(int i = n-2; i >= 0; i--) {
        suffixMax[i] = max(suffixMax[i+1], arr[i]);
    }

    int amount = 0;
    for(int i = 0; i < n; i++) {
        int currentPillarHeight = arr[i];
        int decidingHeight = min(prefixMax[i], suffixMax[i]);
        if(decidingHeight > currentPillarHeight) {
            amount += decidingHeight - currentPillarHeight;
        }
    }
    cout << "Amount of water is : " << amount;
}