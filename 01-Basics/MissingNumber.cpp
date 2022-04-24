#include<iostream>

using namespace std;
int main() {
    int arr[] = {1,2,3,5,6,7};
    int sum = 0;
    int n = 6;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int total = (n+1) * (n+2) / 2;
    int missing = total - sum;
    cout << "Missing number is : " << missing;
}