#include<bits/stdc++.h>
using namespace std;

int uniqueChar(string str) {
    for(int i = 0; i < str.length(); i++) {
        bool flag = false;
        for(int j = 0; j < str.length(); j++) {
            if(i != j && str[i] == str[j]) {
                flag = true;
                break;
            }
        }
        if(flag == false) {
            return i;
        }
    }
    return -1;
}

const int CHAR = 256;
int uniqueCharApproach_2(string str) {
    int count[CHAR] = {0};
    for(int i = 0; i < str.length(); i++) {
        count[str[i]]++;
    }

    for(int i = 0; i < str.length(); i++) {
        if(count[str[i]] == 1) {
            return i;
        }
    }
    return -1;

}

int main() {
    string str = "this is brain mentors";
    cout << uniqueChar(str) << endl;
    cout << uniqueCharApproach_2(str);
}