#include<iostream>
using namespace std;

int countPath(int row, int col, int endRow, int endCol) {
    if(row == endRow && col == endCol) {
        return 1;
    }

    if(row > endRow || col > endCol) {
        return 0;
    }

    int first = countPath(row + 1, col, endRow, endCol);
    int second = countPath(row, col + 1, endRow, endCol);
    int ans = first + second;
    return ans;
}

int main() {
    cout << "Number of ways : " << countPath(0,0,2,2);
}