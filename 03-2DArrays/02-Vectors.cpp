// Vectors - Dynamic Size Array
// begin / rbegin / cbegin
// end / rend / cend


#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> v1;

    for(int i = 0; i < 5; i++) {
        v1.push_back(i);
    }

    for(auto i = v1.begin(); i != v1.end(); i++) {
        cout << *i << " ";
    }

    cout << "================\n";

    for(auto i = v1.rbegin(); i != v1.rend(); i++) {
        cout << *i << " ";
    }

    cout << "\n";
    cout << "Size : " << v1.size() << "\n";
    cout << "Capacity : " << v1.capacity() << "\n";
    cout << "Max Size : " << v1.max_size() << "\n";
}