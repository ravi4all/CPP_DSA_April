#include<iostream>
#include<bits/stdc++.h>
using namespace std;

unordered_set<string> set;

// void subsequence(string str) {
//     for(int i = 0; i < str.length(); i++) {
//         for(int j = str.length(); j > i; j--) {
//             string sub_str = str.substr(i, j);
//             set.insert(sub_str);
//             for(int k = 1; k < sub_str.length(); k++) {
//                 string sub = sub_str;
//                 sub.erase(sub.begin() + k);
//                 subsequence(sb);
//             }
//         }
//     }
// }

vector<string> subsequences(string str) {
    vector<string> ans;
    int n = str.length();
    for(int i = 0; i < (1 << n); i++) {
        string sub = "";
        for(int j = 0; j < n; j++) {
            if(i & (1 << j)) {
                sub += str[j];
            }
        }
        if(sub.length() > 0) {
            ans.push_back(sub);
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    string str = "abcd";
    vector<string> res = subsequences(str);
    for(auto x : res) {
        cout << x << ",";
    }
}