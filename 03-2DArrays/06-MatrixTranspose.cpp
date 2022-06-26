#include<iostream>
using namespace std;

const int m = 3, n = 3;

int main() {
    int arr[m][n] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    
    cout << "Original Matrix..." << "\n";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    int temp;
    for(int i = 0; i < m; i++) {
        for(int j = i+1; j < n; j++) {
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    cout << "\n";

    cout << "Transpose Matrix..." << "\n";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

}