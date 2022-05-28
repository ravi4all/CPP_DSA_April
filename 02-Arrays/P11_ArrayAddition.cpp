#include<iostream>
using namespace std;

int main() {
    int first[] = {9,1,8,9,2};
    int second[] =  {9,1,2,7};
    int n1 = sizeof(first) / sizeof(first[0]);
    int n2 = sizeof(second) / sizeof(second[0]);
    int n3 = (n1 > n2) ? n1 : n2;
    int third[n3] = {};
    int carry = 0, sum = 0;
    int i = n1 - 1;
    int j = n2 - 1;
    int k = n3 - 1;

    while (k >= 0)
    {
        if(i >= 0 && j >= 0) {
            sum = first[i] + second[j] + carry;
        }   
        else if(i >= 0 && j < 0) {
            sum = first[i] + carry;
        }
        else if(j >= 0 && i < 0) {
            sum = second[j] + carry;
        }
        carry = sum / 10;
        sum = sum % 10;

        third[k] = sum;

        i--;
        j--;
        k--;
    }

    if(carry != 0) {
        cout << carry;
    }

    for(int x = 0; x < n3; x++) {
        cout << third[x];
    }
    

}