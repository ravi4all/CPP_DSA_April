#include<iostream>

using namespace std;

int main() {
    // fixed size array
    int arr[3][3] = {
                    {1,2,3},
                    {4,5,6},
                    {1,4,7}
                    };
    // Row wise
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "=====================" << "\n";

    // Col Wise
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << arr[j][i] << " ";
        }
        cout << "\n";
    }
}