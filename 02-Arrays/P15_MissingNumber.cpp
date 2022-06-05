#include<iostream>

using namespace std;
int main() {
    int arr[] = {1,2,4,5};
    int x = 0;
    int y = 0;
    int min = 1;
    int max = 5;
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < n; i++) {
        x = x ^ arr[i];
    }
    for(int i = min; i <= max; i++) {
        y = y ^ i;
    }
    int missing = x ^ y;
    cout << "Missing Number : " << missing;

}