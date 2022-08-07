#include<iostream>
using namespace std;

void printStar(int noOfStar) {
    if(noOfStar == 0) {
        return;
    }
    cout << "*";
    printStar(noOfStar - 1);
}

void printPattern(int rows, int currentRow) {
    if(rows == 0) {
        return;
    }
    printStar(currentRow);
    cout << "\n";
    printPattern(rows-1, currentRow+1);
}

int main() {
    printPattern(5, 1);
}