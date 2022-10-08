#include<iostream>
#include<stack>

using namespace std;

void showStack(stack <int> st) {
    while(!st.empty()) {
        cout << st.top() << ",";
        st.pop();
    }
    cout << "\n";
}

int main() {
    stack <int> st;
    st.push(13);
    st.push(17);
    st.push(3);
    st.push(9);

    showStack(st);

    st.pop();

}