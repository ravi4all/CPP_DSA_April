#include<bits/stdc++.h>
using namespace std;

void search(char* str, char* pattern) {
    int m = strlen(pattern);
    int n = strlen(str);
    for(int i = 0; i < n - m; i++) {
        int j;
        for(j = 0; j < m; j++) {
            if(str[i + j] != pattern[j]) {
                break;
            }
        }
        if(j == m) {
            cout << "Pattern Found at : " << i << endl;
        }
    }
}

int main() {
    char str[] = "ABABABCD";
    char pattern[] = "ABAB";
    search(str, pattern);
}