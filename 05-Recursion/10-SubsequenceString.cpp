#include<iostream>
#include<string>

using namespace std;

void printSubseq(string str, int start, int end, string current_str = "") {
    if(start == end) {
        return;
    }
    cout << current_str << endl;
    for(int i = start + 1; i < end; i++) {
        current_str += str[i];
        printSubseq(str, i, end, current_str);
        current_str = current_str.erase(current_str.size() - 1);
    }
}

int main() {
    string s = "ravi";
    int len = s.size();
    printSubseq(s, -1, len);
}