#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// Time : O(N) and Space : O(N)
// string isPalindrome(string s) {
//     string str_copy = s;
//     reverse(str_copy.begin(), str_copy.end());

//     if(s == str_copy) {
//         return "yes";
//     }
//     else {
//         return "no";
//     }
// }

// string palindrome(string str) {
//     for(int i = 0; i < str.length() / 2; i++) {
//         if(str[i] != str[str.length() - i - 1]) {
//             return "no";
//         }
//     }
//     return "yes";
// }

bool isPalindrome(string str) {
    int i = 0;
    int j = str.length() - 1;
    while(i <= j) {
        char s1 = str[i];
        char s2 = str[j];
        if(s1 != s2) {
            return false;
        }
        else {
            i++;
            j--;
        }
    }
    return true;
}

void solution(string str) {
    for(int i = 0; i < str.length(); i++) {
        for(int j = i + 1; j <= str.length(); j++) {
            string s = str.substr(i,j);
            if(isPalindrome(s)) {
                cout << s << "\n";
                break;
            }
        }
    }
}

int main() {
    string str = "abccbc";
    // bool res = isPalindrome(str);
    // cout << res;
    solution(str);
}