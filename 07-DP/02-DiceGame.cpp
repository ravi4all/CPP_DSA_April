#include<iostream>
#include<vector>
using namespace std;

int game(int current, int end, int cache[]) {
    if(current == end) {
        return 1;
    }
    if (current > end) {
        return 0;
    }
    if(cache[current] != 0) {
        return cache[current];
    }
    int count = 0;
    for(int dice = 1; dice <= 6; dice++) {
        int newValue = current + dice;
        count += game(newValue, end, cache);
    }
    cache[current] = count;
    return count;
}

int tabulation(int start, int end) {
    int cache[end+1];
    cache[end] = 1;
    for(int i = end - 1; i >= 0; i--) {
        int count = 0;
        for(int dice = 1; dice <= 6 && dice + i < end + 1; dice++) {
            count += cache[dice + i];
        }
        cache[i] = count;
    }
    return cache[start];
}

int main() {
    int count = tabulation(0, 10);
    cout << "Count is : " << count;
}