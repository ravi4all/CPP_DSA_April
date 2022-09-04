#include<iostream>
#include<vector>
using namespace std;

static int game(int current, int end, int cache[]) {
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

int main() {
    
}