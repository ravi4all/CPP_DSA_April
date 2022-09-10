#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> triangle;

    triangle[0].push_back(1);
    for(int rowNum = 1; rowNum < numRows; rowNum++) {
        vector<int> row;
        vector<int> prevRow = triangle.at(rowNum-1);
        // adding 1 on first index
        row.push_back(1);
        for(int j = 1; j < rowNum; j++) {
            row.push_back(prevRow[j-1] + prevRow[j]);
        }
        // adding 1 on last index
        row.push_back(1);
        triangle.push_back(row);
    }

    return triangle;
}

int main() {
    vector<vector<int>> res = generate(10);
    for(int i = 0; i < 10; i++) {
        cout << res.at(i) << endl;
    }
}