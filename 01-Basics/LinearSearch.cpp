#include<iostream>

using namespace std;

int main() {
    int arr[] = {10,2,4,6,12,5,7};
    int search = 10;

    if(arr[0] == search) {
        cout << "Element found at 0th index...";
        return;
    }

    for(int i = 1; i < 7; i++) {
        if(arr[i] == search) {
            cout << "Element Found...";
            return;
        }
    }
    cout << "Not Found...";
}