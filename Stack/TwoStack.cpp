#include<iostream>
using namespace std;
#define N 10

class TwoStack {
    public:
        int arr[N];
        int top_1, top_2;
        int capacity;
        TwoStack() {
            capacity = N;
            top_1 = -1;
            top_2 = N;
            // arr = new int[n];
        }
        bool push_1(int x) {
            if(top_1 < top_2 - 1) {
                top_1++;
                arr[top_1] = x;
                return true;
            }
            return false;
        }

        bool push_2(int x) {
            if(top_1 < top_2 - 1) {
                top_2--;
                arr[top_2] = x;
                return true;
            }
            return false;
        }

        int pop_1() {
            if(top_1 >= 0) {
                int x = arr[top_1];
                top_1--;
                return x;
            }
            return 0;
        }

        int pop_2() {
            if(top_2 < capacity) {
                int x = arr[top_2];
                top_2++;
                return x;
            }
            return 0;
        }

        void showStack() {
            for(int i = 0; i < capacity; i++) {
                cout << arr[i] << ",";
            }
        }
};

int main() {
    TwoStack ts;
    ts.push_1(12);
    ts.push_1(5);
    ts.push_1(17);

    ts.push_2(121);
    ts.push_2(122);
    ts.push_2(124);

    ts.showStack();
}