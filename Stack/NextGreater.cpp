#include<iostream>
#include<stack>
using namespace std;

void nextGreater(int arr[], int n) {
    int next;
    for(int i = 0; i < n; i++) {
        next = -1;
        for(int j = i + 1; j < n; j++) {
            if(arr[i] < arr[j]) {
                next = arr[j];
                break;
            }
        }
        cout << arr[i] << endl;
    }
    cout << "===================" << endl;
}

void nextGreaterStack(int arr[], int n) {
    stack<int> st;
    st.push(arr[0]);

    for(int i = 0; i < n; i++) {
        if(st.empty()) {
            st.push(arr[i]);
            continue;
        }

        while (st.empty() == false && st.top() < arr[i])
        {
            cout << st.top() << " = " << arr[i] << endl;
            st.pop();
        }
        st.push(arr[i]);
    }

        while (st.empty() == false)
        {
            cout << st.top() << " = " << -1 << endl;
            st.pop();
        }
}


int main() {
    int arr[] = {10,12,34,2,54,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    nextGreater(arr, n);
    nextGreaterStack(arr, n);
}
