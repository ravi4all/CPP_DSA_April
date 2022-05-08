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
        cout << "Element Added..." << "\n";
    }

    void print() {
        for(int i = 0; i < n; i++) {
            cout << arr[i] << ", ";
        }
        cout << "\n";
    }

    int search(int value) {
        for(int i = 0; i < n; i++) {
            if(arr[i] == value) {
                cout << "Element found at index : " << i;
                return i;
            }
        }
        cout << "Element not found...";
        return -1;
    }

    void remove(int index) {
        if(currentSize == 0) {
            cout << "Array is Empty...Can't remove element...";
            return;
        }

        for(int i = index; i < currentSize - 1; i++) {
            arr[i] = arr[i+1];
        }
        arr[currentSize-1] = 0;
        currentSize--;
        cout << "Element Removed..." << "\n";
        print();

    }

    void update(int valueToSearch, int valueToUpdate) {
        int index = search(valueToSearch);
        if(index == -1) {
            return;
        }
        else {
            arr[index] = valueToUpdate;
            cout << "Array Updated...";
            print();
        }
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

    obj.remove(3);

    obj.search(11);
}