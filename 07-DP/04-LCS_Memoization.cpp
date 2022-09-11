#include<iostream>
#include<string.h>
using namespace std;

int cache[100][100];

int lcs(string s1, string s2, int m, int n) {
    if(cache[m][n] != -1) {
        return cache[m][n];
    }

    if(m == 0 || n == 0) {
        cache[m][n] = 0;
    }
    else {
        if(s1[n-1] == s2[m-1]) {
            cache[m][n] = 1 + lcs(s1, s2, m-1, n-1);
        }
        else {
            cache[m][n] =  max(lcs(s1, s2, m-1, n),lcs(s1, s2, m, n-1));
        }
    }
    return cache[m][n];
}

int main() {
    string s1 = "AXYZ", s2 = "ADYZ";
    int m = 4, n = 4;
    memset(cache, -1, sizeof(cache));
    cout << "Len is : " << lcs(s1, s2, m, n);
}