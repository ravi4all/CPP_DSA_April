#include<iostream>
using namespace std;

int main() {
    int first[] = {9,1,8,9,2};
    int second[] =  {9,1,2,7};
    int n1 = sizeof(first) / sizeof(first[0]);
    int n2 = sizeof(second) / sizeof(second[0]);
    int n3 = (n1 > n2) ? n1 : n2;
    int third[n3] = {};
    int carry = 0, diff = 0;
    int i = n1 - 1;
    int j = n2 - 1;
    int k = n3 - 1;

    while (k >= 0)
    {
        if(j >= 0) {
            if(first[i] < second[j]) {
                diff = first[i] + 10 + carry - second[j];
                carry = -1;
            }
            else{
                diff = first[i] + carry - second[j];
                carry = 0;
            }
        }

        else {
            if(i >= 1 && carry == -1) {
                diff = first[i] + 10 + carry;
            }
            else {
                diff = first[i] + carry;
            }
        }

        third[k] = diff;
        k--;
        j--;
        i--;
    }

}