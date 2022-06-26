#include<iostream>

using namespace std;

int main() {
    int m = 3, n = 3;
    int arr[m][n] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int upperSum = 0;
    int lowerSum = 0;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(i <= j) {
                upperSum += arr[i][j];
            }
            if(j <= i) {
                lowerSum += arr[i][j];
            }
        }
    }

}