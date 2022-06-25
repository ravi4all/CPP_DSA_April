#include<iostream>
#include<vector>

using namespace std;
int main() {
    int rows = 3, cols = 2;
    // vector<int> arr[rows];

    // for(int i = 0; i < rows; i++){
    //     for(int j = 0; j < cols; j++) {
    //         arr[i].push_back(5+j);
    //     }
    // }

    // for(int i = 0; i < rows; i++){
    //     for(int j = 0; j < cols; j++) {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    vector<vector<int>> arr;
    for(int i = 0; i < rows; i++) {
        vector<int> v;
        for(int j = 0; j < cols; j++) {
            v.push_back(5+j);
        }
        arr.push_back(v);
    }

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

}