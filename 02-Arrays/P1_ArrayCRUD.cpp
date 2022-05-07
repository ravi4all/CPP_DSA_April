#include<iostream>

using namespace std;

class ArrayCRUD {
    public:
    int currentSize;
    int n = 5;
    int arr[5];
    ArrayCRUD(int capacity) {
        currentSize = 0;
    }
    void insert(int element, int index) {
        if(index > currentSize) {
            cout << "Position cannot be greater than capacity...";
            return;
        }
        if(currentSize == n) {
            cout << "Array is full...";
            return;
        }
        
        for(int i = currentSize - 1; i >= index; i--) {
            arr[i+1] = arr[i];
        }
        arr[index] = element;
        currentSize++;
        cout << "Element Added...";
    }

    void print() {

    }

    int search() {

    }

    void remove() {

    }

    void update() {

    }
}

int main() {

}