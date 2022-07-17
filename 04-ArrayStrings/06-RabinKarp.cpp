#include<bits/stdc++.h>
using namespace std;

void search(char* str, char* pattern) {
    int m = strlen(pattern);
    int n = strlen(str);
    int d = m;
    int q = 13; // any prime number
    int patternHash = 0;  // hash value of pattern
    int stringHash = 0; // hash value of string
    int h = 1;

    // pow(d, m-1) % q
    for(int i = 0; i < m-1; i++) {
        h = (h * d) % q;
    }

    for(int i = 0; i < m; i++) {
        patternHash = (patternHash * d + pattern[i]) % q;
        stringHash = (stringHash * d + str[i]) % q;
    }

    for(int i = 0; i <= n - m; i++) {
        if(patternHash == stringHash) {
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
        if(i < n-m) {
            // Removing old string
            stringHash = stringHash - str[i] * h;
            // add the new char hash
            stringHash = ((stringHash * d + str[i + m])) % q;
            if(stringHash < 0) {
                stringHash = stringHash + q;
            }
        }
    }

}

int main() {
    char str[] = "ABABABCD";
    char pattern[] = "ABAB";
    search(str, pattern);
}