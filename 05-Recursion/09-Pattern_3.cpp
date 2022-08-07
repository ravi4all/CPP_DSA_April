#include<iostream>
using namespace std;

void printSpace(int noOfSpace) {
    if(noOfSpace == 0) {
        return;
    }
    cout << " ";
    printSpace(noOfSpace - 1);
}

void printStar(int noOfStar) {
    if(noOfStar == 0) {
        return;
    }
    cout << "* ";
    printStar(noOfStar - 1);
}

void printPattern(int rows, int currentRow) {
    if(rows == 0) {
        return;
    }
    printSpace(rows-1);
    printStar(currentRow);
    cout << "\n";
    printPattern(rows-1, currentRow+1);
}

int main() {
    printPattern(5, 1);
}