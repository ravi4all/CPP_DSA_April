#include<iostream>
#include<vector>
using namespace std;

int MAX_SIZE = 9;
vector<vector<int>> board = {
        {5,3,0,0,7,0,0,0,0}, 
        {6,0,0,1,9,5,0,0,0}, 
        {0,9,8,0,0,0,0,6,0}, 
        {8,0,0,0,6,0,0,0,3}, 
        {4,0,0,8,0,3,0,0,1}, 
        {7,0,0,0,2,0,0,0,6}, 
        {0,6,0,0,0,0,2,8,0}, 
        {0,0,0,4,1,9,0,0,5}, 
        {0,0,0,0,8,0,0,7,9}};

bool isPresentInRow(int row, int data) {
    for(int col = 0; col < MAX_SIZE; col++) {
        if(board[row][col] == data) {
            return true;
        }
    }
    return false;
}

bool isPresentInCol(int col, int data) {
    for(int row = 0; row < MAX_SIZE; row++) {
        if(board[row][col] == data) {
            return true;
        }
    }
    return false;
}

bool isPresentInGrid(int row, int col, int data) {
    int r = row - row % 3;
    int c = col - col % 3;
    for(int i = r; i < r + 3; i++) {
        for(int j = c; j < c + 3; j++) {
            if(board[i][j] == data) {
                return true;
            }
        }
    }
    return false;
}

bool isSafe(int row, int col, int data) {
    return !isPresentInRow(row, data) && !isPresentInCol(col, data) && !isPresentInGrid(row, col, data);
}

bool solveIt(int row, int col) {

    if(col == MAX_SIZE) {
        row = row + 1;
        col = 0;
    }

    if(row == MAX_SIZE) {
        return true;
    }

    if(board[row][col] != 0) {
        return solveIt(row, col+1);
    }

    for(int i = 1; i <= MAX_SIZE; i++) {
        if(isSafe(row, col, i)) {
            board[row][col] = i;
            bool res = solveIt(row, col+1);
            if(res) {
                return true;
            }
            // backtracking
            board[row][col] = 0;
        }
    }
    return false;
}

int main() {
    cout << solveIt(0,0);
}