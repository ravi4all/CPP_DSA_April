#include<iostream>
#include<vector>

using namespace std;

const int ROWS = 3;
const int COLS = 3;

void show(int mat[ROWS][COLS]) {
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
}

void showVector(vector<int> arr[], int m) {

}

void main() {
    int matrix[ROWS][COLS] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    show(matrix);

    vector<int> arr[ROWS];
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            arr[i].push_back(i);
        }
    }

    showVector(arr);
}