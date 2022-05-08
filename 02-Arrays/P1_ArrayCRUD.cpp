#include<iostream>

using namespace std;

class ArrayCRUD {
    public:
    int currentSize;
    int n = 5;
    int arr[5] = {0,0,0,0,0};
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
        for(int i = 0; i < n; i++) {
            cout << arr[i] << ", ";
        }
    }

    void search() {

    }

    void remove(int index) {
        if(currentSize == 0) {
            cout << "Array is Empty...Can't remove element...";
        }
        
    }

    void update() {

    }
};

int main() {
    ArrayCRUD obj(5);
    obj.insert(5,0);
    obj.insert(15,1);
    obj.insert(11,2);
    obj.insert(7,3);
    obj.insert(12,4);
    obj.print();
}