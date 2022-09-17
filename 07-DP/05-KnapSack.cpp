#include<iostream>
using namespace std;

int knapSack(int wt[], int val[], int W, int index) {
    // Base Case / Termination Case
    int n = 3;
    if(W == 0 || index == n) {
        return 0;
    }
    if(wt[index] > W) {
        return knapSack(wt, val, W, index+1);
    }
    else {
        int x = val[index] + knapSack(wt, val, W - wt[index], index+1);
        int y = knapSack(wt, val, W, index+1);
        return max(x, y);
    }
}

int main() {
    int wt[] = {1,2,2};
    int val[] = {60,100,120};
    int W = 3;
    int index = 0;
    cout << "Result is : " << knapSack(wt, val, W, index);
}