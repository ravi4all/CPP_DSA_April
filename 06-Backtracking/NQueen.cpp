#include<iostream>
using namespace std;

bool isSafe(int row, int col, bool board[4][4]) {
    // check in upper row and same column
    for(int i = row; i >= 0; i--) {
        if(board[i][col]) {
            return false;
        }
    }

    // check in upper left diagonal
    for(int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if(board[i][j]) {
            return false;
        }
    }
    
    // check in upper right diagonal
    for(int i = row, j = col; i >= 0 && j < 4; i--, j++) {
        if(board[i][j]) {
            return false;
        }
    }
    return true;
}

int countWays(bool board[4][4], int currentRow) {
    int count = 0;
    if(currentRow == 4) {
        return 1;
    }
    for(int col = 0; col < 4; col++) {
        if(isSafe(currentRow, col, board)) {
            board[currentRow][col] = true;
            count = count + countWays(board, currentRow + 1);
            // backtracking
            board[currentRow][col] = false;
        }
    }
    return count;
}

int main() {
    bool board[4][4];
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            board[i][j] = false;
        }
    }
    cout << "Number of ways : " << countWays(board, 0);
}